function [chEstOut,wtx,pdschEq,blkErr,encodeDLSCH,decodeDLSCH,channel,timingOffset,harqProcesses,rmsEVM] = ...
                            pdschSimulateLink(simParameters,gnb,pdsch,encodeDLSCH,decodeDLSCH,...
                                              channel,timingOffset,waveformInfo,ssburst,maxChDelay,harqProcesses,evm)

    SNRdB = simParameters.SNRIn;
    nTxAnts = simParameters.NTxAnts;
    nRxAnts = simParameters.NRxAnts;
    ncw = simParameters.PDSCH.ncw;                                                
    Xoh_PDSCH = simParameters.PDSCH.Xoh_PDSCH;
    perfectChannelEstimator = simParameters.perfectChannelEstimator;
    
    % Specify the order in which we cycle through the HARQ processes
%    NHARQProcesses = 1;
    NHARQProcesses = length(harqProcesses);
    harqSequence = 1:NHARQProcesses;
    
    % Initialize variables used in the simulation and analysis
    bitTput = [];           % Number of successfully received bits per transmission
    txedTrBlkSizes = [];    % Number of transmitted info bits per transmission

    % Initialize the state of all HARQ processes
    %harqProcesses = hNewHARQProcesses(NHARQProcesses,rvSeq,ncw);

    % Reset the channel so that each SNR point will experience the same
    % channel realization
    %reset(channel);

    % Total number of OFDM symbols in the simulation period
    NSymbols = waveformInfo.SymbolsPerSlot;

    % OFDM symbol number associated with start of each PDSCH transmission
    gnb.NSymbol = 0;

    % Running counter of the number of PDSCH transmission instances
    % The simulation will use this counter as the slot number for each
    % PDSCH
    pdsch.NSlot = 0;

    % Index to the start of the current set of SS burst samples to be
    % transmitted
    ssbSampleIndex = 1;

    % Obtain a precoding matrix (wtx) to be used in the transmission of the
    % first transport block
    estChannelGrid = getInitialChannelEstimate(gnb,nTxAnts,channel);
    newWtx = getPrecodingMatrix(pdsch.PRBSet,pdsch.NLayers,estChannelGrid);

    while gnb.NSymbol < NSymbols  % Move to next slot, gnb.NSymbol increased in steps of one slot

        % Generate a new SS burst when necessary
        if (ssbSampleIndex==1)
            nSubframe = gnb.NSymbol / waveformInfo.SymbolsPerSubframe;
            ssburst.NFrame = floor(nSubframe / 10);
            ssburst.NHalfFrame = mod(nSubframe / 5,2);
            [ssbWaveform,~,ssbInfo] = hSSBurst(ssburst);
        end

        % Get HARQ process index for the current PDSCH from HARQ index table
        harqProcIdx = harqSequence(mod(pdsch.NSlot,length(harqSequence))+1);

        % Update current HARQ process information (this updates the RV
        % depending on CRC pass or fail in the previous transmission for
        % this HARQ process)
        harqProcesses(harqProcIdx) = hUpdateHARQProcess(harqProcesses(harqProcIdx),ncw);

        % Calculate the transport block sizes for the codewords in the slot
        [pdschIndices,dmrsIndices,dmrsSymbols,pdschIndicesInfo] = hPDSCHResources(gnb,pdsch);
        trBlkSizes = hPDSCHTBS(pdsch,pdschIndicesInfo.NREPerPRB-Xoh_PDSCH);

        % HARQ: check CRC from previous transmission per codeword, i.e. is
        % a retransmission required?
%         for cwIdx = 1:ncw
%             resetSoftBuffer(decodeDLSCH,cwIdx-1,harqProcIdx-1);
%             trBlk = randi([0 1],trBlkSizes(cwIdx),1);
%             setTransportBlock(encodeDLSCH,trBlk,cwIdx-1,harqProcIdx-1);
%         end
        for cwIdx = 1:ncw
            NDI = false;
            if harqProcesses(harqProcIdx).blkerr(cwIdx) % Errored
                if (harqProcesses(harqProcIdx).RVIdx(cwIdx)==1)%rvSeq(end)) % end of rvSeq
                    resetSoftBuffer(decodeDLSCH,cwIdx-1,harqProcIdx-1);
                    NDI = true;
                end
            else    % No error
                NDI = true;
            end
            if NDI
                trBlk = randi([0 1],trBlkSizes(cwIdx),1);
                setTransportBlock(encodeDLSCH,trBlk,cwIdx-1,harqProcIdx-1);
            end
        end

        if pdsch.EnableHARQ
            codedTrBlock = encodeDLSCH(pdsch.Modulation,pdsch.NLayers,...
                pdschIndicesInfo.G,harqProcesses(harqProcIdx).RV,harqProcIdx-1);
        else
            codedTrBlock = encodeDLSCH(pdsch.Modulation,pdsch.NLayers,...
                pdschIndicesInfo.G,harqProcesses(harqProcIdx).RV);
        end

        % Get wtx (precoding matrix) calculated in previous slot
        wtx = newWtx;

        % PDSCH modulation and precoding
        pdschSymbols = nrPDSCH(codedTrBlock,pdsch.Modulation,pdsch.NLayers,gnb.NCellID,pdsch.RNTI);
        pdschSymbols = pdschSymbols*wtx;

        % PDSCH mapping in grid associated with PDSCH transmission period
        pdschGrid = zeros(waveformInfo.NSubcarriers,waveformInfo.SymbolsPerSlot,nTxAnts);
        [~,pdschAntIndices] = nrExtractResources(pdschIndices,pdschGrid);
        pdschGrid(pdschAntIndices) = pdschSymbols;

        % PDSCH DM-RS precoding and mapping
        for p = 1:size(dmrsSymbols,2)
            [~,dmrsAntIndices] = nrExtractResources(dmrsIndices(:,p),pdschGrid);
            pdschGrid(dmrsAntIndices) = pdschGrid(dmrsAntIndices) + dmrsSymbols(:,p)*wtx(p,:);
        end

        % OFDM modulation of associated resource elements
        txWaveform = hOFDMModulate(gnb, pdschGrid);

        % Add the appropriate portion of SS burst waveform to the
        % transmitted waveform
        Nt = size(txWaveform,1);
        txWaveform = txWaveform + ssbWaveform(ssbSampleIndex + (0:Nt-1),:);
        ssbSampleIndex = mod(ssbSampleIndex + Nt,size(ssbWaveform,1));

        % Pass data through channel model. Append zeros at the end of the
        % transmitted waveform to flush channel content. These zeros take
        % into account any delay introduced in the channel. This is a mix
        % of multipath delay and implementation delay. This value may
        % change depending on the sampling rate, delay profile and delay
        % spread
        txWaveform = [txWaveform; zeros(maxChDelay, size(txWaveform,2))];
        [rxWaveform,pathGains,sampleTimes] = channel(txWaveform);

        % Add AWGN to the received time domain waveform
        % Normalize noise power to take account of sampling rate, which is
        % a function of the IFFT size used in OFDM modulation
        SNR = 10^(SNRdB/20);    % Calculate linear noise gain
        N0 = 1/(sqrt(2.0*double(waveformInfo.Nfft))*SNR);
        noise = N0*complex(randn(size(rxWaveform)),randn(size(rxWaveform)));
        rxWaveform = rxWaveform + noise;

        % Perfect synchronization. Use information provided by the channel
        % to find the strongest multipath component
%         pathFilters = getPathFilters(channel); % get path filters for perfect channel estimation
%         [offset,mag] = nrPerfectTimingEstimate(pathGains,pathFilters);
%         rxWaveform = rxWaveform(1+offset:end, :);
        
        if (perfectChannelEstimator)
            % Perfect synchronization. Use information provided by the channel
            % to find the strongest multipath component
            pathFilters = getPathFilters(channel); % get path filters for perfect channel estimation
            [timingOffset,mag] = nrPerfectTimingEstimate(pathGains,pathFilters);
        else
            % Practical synchronization. Correlate the received waveform 
            % with the PDSCH DM-RS to give timing offset estimate 't' and 
            % correlation magnitude 'mag'. The function
            % hSkipWeakTimingOffset is used to update the receiver timing
            % offset. If the correlation peak in 'mag' is weak, the current
            % timing estimate 't' is ignored and the previous estimate
            % 'offset' is used
            %[t,mag] = hTimingEstimate(rxWaveform,gnb.NRB,gnb.SubcarrierSpacing,pdsch.NSlot,dmrsIndices,dmrsSymbols,'CyclicPrefix',gnb.CyclicPrefix); %#ok<UNRCH>
            [t,mag] = hTimingEstimatePDSCH(gnb,pdsch,rxWaveform); %#ok<UNRCH>
            timingOffset = hSkipWeakTimingOffset(timingOffset,t,mag);
        end
        rxWaveform = rxWaveform(1+timingOffset:end, :);

        % Perform OFDM demodulation on the received data to recreate the
        % resource grid
        rxGrid = hOFDMDemodulate(gnb, rxWaveform);
        [K,L,R] = size(rxGrid);
        if (L < waveformInfo.SymbolsPerSlot)
            rxGrid = cat(2,rxGrid,zeros(K,waveformInfo.SymbolsPerSlot-L,R));
        end
% 
%         % Perfect channel estimation, use the value of the path gains
%         % provided by the channel
%         perfectChEst = nrPerfectChannelEstimate(pathGains,pathFilters,gnb.NDLRB,gnb.SubcarrierSpacing,pdsch.NSlot,offset,sampleTimes,gnb.CyclicPrefix);
% 
%         % Get perfect noise estimate (from the noise realization)
%         noiseGrid = hOFDMDemodulate(gnb,noise(1+offset:end ,:));
%         noiseEst = var(noiseGrid(:));
% 
%         % Get precoding matrix for next slot
%         newWtx = getPrecodingMatrix(pdsch.PRBSet,pdsch.NLayers,estChannelGrid);
% 
%         % Apply precoding to Hest
%         % Linearize 4D matrix and reshape after multiplication
%         K = size(perfectChEst,1);
%         estChannelGrid = reshape(perfectChEst,K*waveformInfo.SymbolsPerSlot*nRxAnts,nTxAnts);
%         estChannelGrid = estChannelGrid*wtx.';
%         estChannelGrid = reshape(estChannelGrid,K,waveformInfo.SymbolsPerSlot,nRxAnts,pdsch.NLayers);
        
        if (perfectChannelEstimator)
            % Perfect channel estimation, using the value of the path gains
            % provided by the channel. This channel estimate does not
            % include the effect of transmitter precoding
            estChannelGrid = nrPerfectChannelEstimate(pathGains,pathFilters,gnb.NRB,gnb.SubcarrierSpacing,pdsch.NSlot,timingOffset,sampleTimes,gnb.CyclicPrefix);
            chEstOut = estChannelGrid;

            % Get perfect noise estimate (from the noise realization)
            noiseGrid = hOFDMDemodulate(gnb,noise(1+timingOffset:end ,:));
            noiseEst = var(noiseGrid(:));

            % Get precoding matrix for next slot
            newWtx = getPrecodingMatrix(pdsch.PRBSet,pdsch.NLayers,estChannelGrid);

            % Apply precoding to estChannelGrid
            estChannelGrid = precodeChannelEstimate(estChannelGrid,wtx.');
            %chEstOut = estChannelGrid;
            
        else
            % Practical channel estimation between the received grid and
            % each transmission layer, using the PDSCH DM-RS for each
            % layer. This channel estimate includes the effect of
            % transmitter precoding
            %[estChannelGrid,noiseEst] = nrChannelEstimate(rxGrid,dmrsIndices,dmrsSymbols,'CyclicPrefix',gnb.CyclicPrefix,'CDMLengths',pdschIndicesInfo.CDMLengths); %#ok<UNRCH>
            [estChannelGrid,noiseEst] = hChannelEstimatePDSCH(gnb,pdsch,rxGrid); %#ok<UNRCH>
            %chEstOut = estChannelGrid;
            
            % Remove precoding from estChannelGrid prior to precoding
            % matrix calculation
            estChannelGridPorts = precodeChannelEstimate(estChannelGrid,conj(wtx));
            chEstOut = estChannelGridPorts;
            
            % Get precoding matrix for next slot
            newWtx = getPrecodingMatrix(pdsch.PRBSet,pdsch.NLayers,estChannelGridPorts);
        end

        % Get PDSCH resource elements from the received grid
        [pdschRx,pdschHest] = nrExtractResources(pdschIndices,rxGrid,estChannelGrid);

        % Equalization
        [pdschEq,csi] = nrEqualizeMMSE(pdschRx,pdschHest,noiseEst);
        
        % Compute EVM (post equalisation)
        refSym = zeros(size(pdschEq));
        for nCol = 1:size(pdschEq,2)
            refBits = nrSymbolDemodulate(pdschEq(:,nCol),pdsch.Modulation{1},'DecisionType','hard');
            refSym(:,nCol) = nrSymbolModulate(refBits,pdsch.Modulation{1}); % Assumes both codewords use the same modulation!!
        end
        
        rmsEVM = evm(pdschEq,refSym);   

        % Decode PDSCH physical channel
        [dlschLLRs,rxSymbols] = nrPDSCHDecode(pdschEq,pdsch.Modulation,gnb.NCellID,pdsch.RNTI,noiseEst);        

        % Scaling LLRs by CSI
        csi = nrLayerDemap(csi); % CSI layer demapping
        Qm = length(dlschLLRs{1})/length(rxSymbols{1}); % bits per symbol
        csi{1} = repmat(csi{1}.',Qm,1);
        csi{1} = reshape(csi{1},numel(csi{1}),1);
        dlschLLRs{1} = dlschLLRs{1} .* csi{1};
        if  ncw == 2 % two codewords
            Qm2 = length(dlschLLRs{2})/length(rxSymbols{2}); % bits per symbol
            csi{2} = repmat(csi{2}.',Qm2,1);
            csi{2} = reshape(csi{2},numel(csi{2}),1);
            dlschLLRs{2} = dlschLLRs{2} .* csi{2};
        end

        % Decode the DL-SCH transport channel
        decodeDLSCH.TransportBlockLength = trBlkSizes;
        if pdsch.EnableHARQ
            [decbits,blkErr] = decodeDLSCH(dlschLLRs,pdsch.Modulation,pdsch.NLayers,harqProcesses(harqProcIdx).RV,harqProcIdx-1);
        else
            [decbits,blkErr] = decodeDLSCH(dlschLLRs,pdsch.Modulation,pdsch.NLayers,harqProcesses(harqProcIdx).RV);
        end
        
        harqProcesses(harqProcIdx).blkerr = blkErr;

        % Store values to calculate throughput (only for active PDSCH instances)
        if(any(trBlkSizes) ~= 0)
            bitTput = [bitTput trBlkSizes.*(1-harqProcesses(harqProcIdx).blkerr)];
            txedTrBlkSizes = [txedTrBlkSizes trBlkSizes];
        end

        % Update starting symbol number of next PDSCH transmission
        gnb.NSymbol = gnb.NSymbol + size(pdschGrid,2);
        % Update count of overall number of PDSCH transmissions
        pdsch.NSlot = pdsch.NSlot+1;

        % Display transport block error information per codeword managed by current HARQ process
%         fprintf('\n(%3.2f%%) HARQ Proc %d: ',100*gnb.NSymbol/NSymbols,harqProcIdx);
%         estrings = {'passed','failed'};
%         rvi = harqProcesses(harqProcIdx).RVIdx;
%         for cw=1:length(rvi)
%             cwrvi = rvi(cw);
%             % Create a report on the RV state given position in RV sequence and decoding error
%             if cwrvi == 1
%                 ts = sprintf('Initial transmission (RV=%d)',rvSeq(cwrvi));
%             else
%                 ts = sprintf('Retransmission #%d (RV=%d)',cwrvi-1,rvSeq(cwrvi));
%             end
%             fprintf('CW%d:%s %s. ',cw-1,ts,estrings{1+harqProcesses(harqProcIdx).blkerr(cw)});
%         end

    end

    % Calculate maximum and simulated throughput
    %maxThroughput(snrIdx) = sum(txedTrBlkSizes); % Max possible throughput
    %simThroughput(snrIdx) = sum(bitTput,2);      % Simulated throughput

    % Display the results dynamically in the command window
    %     fprintf([['\n\nThroughput(Mbps) for ', num2str(gnb.NFrames) ' frame(s) '],...
    %         '= %.4f\n'], 1e-6*simThroughput(snrIdx)/(gnb.NFrames*10e-3));
    %     fprintf(['Throughput(%%) for ', num2str(gnb.NFrames) ' frame(s) = %.4f\n'],...
    %         simThroughput(snrIdx)*100/maxThroughput(snrIdx));

    %end
    
end


function estChannelGrid = getInitialChannelEstimate(gnb,nTxAnts,channel)
% Obtain channel estimate before first transmission. This can be used to
% obtain a precoding matrix for the first slot.

    ofdmInfo = hOFDMInfo(gnb);
    
    chInfo = info(channel);
    maxChDelay = ceil(max(chInfo.PathDelays*channel.SampleRate)) + chInfo.ChannelFilterDelay;
    
    % Temporary waveform (only needed for the sizes)
    tmpWaveform = zeros((ofdmInfo.SamplesPerSubframe/ofdmInfo.SlotsPerSubframe)+maxChDelay,nTxAnts);
    
    % Filter through channel    
    [~,pathGains,sampleTimes] = channel(tmpWaveform);
    
    % Perfect timing synch    
    pathFilters = getPathFilters(channel);
    offset = nrPerfectTimingEstimate(pathGains,pathFilters);
    
    nslot = gnb.NSymbol/ofdmInfo.SymbolsPerSlot;
    
    % Perfect channel estimate
    estChannelGrid = nrPerfectChannelEstimate(pathGains,pathFilters,gnb.NRB,gnb.SubcarrierSpacing,nslot,offset,sampleTimes);
    
end

function wtx = getPrecodingMatrix(PRBSet,NLayers,hestGrid)
% Calculate precoding matrix given an allocation and a channel estimate
    
    % Allocated subcarrier indices
    allocSc = (1:12)' + 12*PRBSet(:).';
    allocSc = allocSc(:);
    
    % Average channel estimate
    [~,~,R,P] = size(hestGrid);
    estAllocGrid = hestGrid(allocSc,:,:,:);
    Hest = permute(mean(reshape(estAllocGrid,[],R,P)),[2 3 1]);
    
    % SVD decomposition
    [~,~,V] = svd(Hest);
    wtx = V(:,1:NLayers).';
    wtx = wtx / sqrt(NLayers); % Normalise by NLayers

end

function estChannelGrid = precodeChannelEstimate(estChannelGrid,W)
% Apply precoding matrix W to the last dimension of the channel estimate

    % Linearize 4D matrix and reshape after multiplication
    K = size(estChannelGrid,1);
    L = size(estChannelGrid,2);
    R = size(estChannelGrid,3);
    estChannelGrid = reshape(estChannelGrid,K*L*R,[]);
    estChannelGrid = estChannelGrid * W;
    estChannelGrid = reshape(estChannelGrid,K,L,R,[]);

end

