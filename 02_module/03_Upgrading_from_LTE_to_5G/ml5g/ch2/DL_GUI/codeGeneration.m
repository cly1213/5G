function codeGeneration(handles)

gnb = handles.Data.gnb;
bwp = handles.Data.bwp;
PDSCH = handles.Data.PDSCH;
PDCCH = handles.Data.PDCCH;
coreset = handles.Data.coreset;
DMRS = handles.Data.DMRS;
PTRS = handles.Data.PTRS;

outFile = 'tbd.m';
% "indent" is the number of leading white spaces used in myfprintf
indent = 0;
fid = fopen(outFile,'w');

myfprintf(fid,'function waveconfig = tbd()\n');
myfprintf(fid,'\n');

myfprintf(fid,'waveconfig = [];\n');
myfprintf(fid,'waveconfig.NCellID = %d;            %% Cell identity\n',gnb.NCellID);
myfprintf(fid,'waveconfig.ChannelBandwidth = %d;  %% Channel bandwidth (MHz)\n',gnb.ChannelBandwidth);
myfprintf(fid,'waveconfig.FrequencyRange = ''FR1''; %% ''FR1'' or ''FR2''\n');
myfprintf(fid,'waveconfig.NumSubframes = %d;      %% Number of 1ms subframes in generated waveform (1,2,4,8 slots per 1ms subframe, depending on SCS)\n',gnb.NumSubframes);
myfprintf(fid,'waveconfig.DisplayGrids = 1;       %% Display the resource grids after signal generation\n');
myfprintf(fid,'\n');
myfprintf(fid,'%% Define a set of SCS specific carriers, using the maximum sizes for a \n');
myfprintf(fid,'%% 40 MHz NR channel. See TS 38.101-1 for more information on defined\n');
myfprintf(fid,'%% bandwidths\n');
myfprintf(fid,'carriers(1).SubcarrierSpacing = %d;\n',gnb.SCSConfig);
myfprintf(fid,'carriers(1).NRB = %d;\n',gnb.MaxNRB);
myfprintf(fid,'carriers(1).RBStart = 0;\n');
myfprintf(fid,'\n');

myfprintf(fid,'%% SS burst configuration\n');
myfprintf(fid,'ssburst = [];\n');
myfprintf(fid,'ssburst.Enable = 0;                     %% Enable SS Burst\n');
myfprintf(fid,'ssburst.BlockPattern = ''Case B'';        %% Case B (30kHz) subcarrier spacing\n');
myfprintf(fid,'ssburst.SSBTransmitted = [1 1 1 1];     %% Bitmap indicating blocks transmitted in a 5ms half-frame burst\n');
myfprintf(fid,'ssburst.SSBPeriodicity = 20;            %% SS burst set periodicity in ms (5, 10, 20, 40, 80, 160)\n');
myfprintf(fid,'ssburst.FrequencySSB = 0*5000;          %% Frequency offset of SS burst (Hz), relative to waveform centre (multiples of 5kHz)\n');
myfprintf(fid,'ssburst.Power = 0;                      %% Power scaling in dB\n');
myfprintf(fid,'\n');

myfprintf(fid,'%% Bandwidth parts configurations\n');
myfprintf(fid,'bwp = [];\n');
myfprintf(fid,'\n');
myfprintf(fid,'bwp(1).SubcarrierSpacing = %d;          %% BWP Subcarrier Spacing\n',gnb.SCSConfig);
myfprintf(fid,'bwp(1).CyclicPrefix = ''Normal'';         %% BWP Cyclic prefix for 15 kHz\n');
myfprintf(fid,'bwp(1).NRB = %d;                        %% Size of BWP\n',bwp.NRB);
myfprintf(fid,'bwp(1).RBOffset = %d;\n',bwp.NRBOffset);                   %% Position of BWP in SCS carrier\n');
myfprintf(fid,'\n');

myfprintf(fid,'%% CORESET/search configurations\n');
myfprintf(fid,'coreset = [];\n');
myfprintf(fid,'coreset(1).AllocatedSymbols = %s;    %% First symbol of each CORESET monitoring opportunity in a slot\n',coreset.AllocatedSymbols);
myfprintf(fid,'coreset(1).AllocatedSlots = %s;      %% Allocated slots within a period\n',coreset.AllocatedSlots);
myfprintf(fid,'coreset(1).AllocatedPeriod = %d;         %% Allocated slot period (empty implies no repetition)\n',coreset.AllocatedPeriod);
myfprintf(fid,'coreset(1).Duration = %d;                %% CORESET symbol duration (1,2,3)\n',coreset.Duration);
myfprintf(fid,'coreset(1).AllocatedPRB = %s;    %% 6 REG sized indices, relative to BWP (RRC - frequencyDomainResources)\n',coreset.AllocatedPRB);
myfprintf(fid,'\n');

myfprintf(fid,'%% PDCCH configurations\n');
myfprintf(fid,'pdcch = [];\n');
myfprintf(fid,'pdcch(1).Enable = 1;                    %% Enable PDCCH config\n');
myfprintf(fid,'pdcch(1).BWP = 1;                       %% Bandwidth part\n');
myfprintf(fid,'pdcch(1).Power = 1.1;                   %% Power scaling in dB\n');
myfprintf(fid,'pdcch(1).AllocatedSearchSpaces = %s; %% Index within the CORESET \n',PDCCH.SearchSpaces);
myfprintf(fid,'pdcch(1).CORESET = 1;                   %% Control resource set ID which carries this PDCCH\n');
myfprintf(fid,'pdcch(1).AllocatedPeriod = %d;           %% Allocation slot period (empty implies no repetition)\n',PDCCH.AllocatedPeriod);
myfprintf(fid,'pdcch(1).NumCCE = %d;                    %% Number of CCE used by PDCCH\n',PDCCH.NumCCE);
myfprintf(fid,'pdcch(1).StartCCE = %d;                  %% Starting CCE of PDCCH\n',PDCCH.StartCCE);
myfprintf(fid,'pdcch(1).RNTI = 0;                      %% RNTI\n');
myfprintf(fid,'pdcch(1).NID = 1;                       %% PDCCH and DM-RS scrambling NID \n');
myfprintf(fid,'pdcch(1).PowerDMRS = 0;                 %% Additional power boosting in dB\n');
myfprintf(fid,'pdcch(1).DataBlkSize = 20;              %% DCI payload size\n');
myfprintf(fid,'pdcch(1).DataSource = ''PN9'';            %% DCI data source\n');
myfprintf(fid,'\n');

myfprintf(fid,'%% PDSCH configurations\n');
myfprintf(fid,'pdsch = [];\n');
myfprintf(fid,'pdsch(1).Enable = 1;                    %% Enable PDSCH config\n');
myfprintf(fid,'pdsch(1).BWP = 1;                       %% Bandwidth part\n');
myfprintf(fid,'pdsch(1).Power = 0;                     %% Power scaling in dB\n');
myfprintf(fid,'pdsch(1).DataSource = ''PN9'';            %% Transport block data source \n');
myfprintf(fid,'pdsch(1).TargetCodeRate = %f;       %% Code rate used to calculate transport block sizes\n',PDSCH.TargetCodeRate);
myfprintf(fid,'pdsch(1).Xoh_PDSCH = 0;                 %% Rate matching overhead\n');
myfprintf(fid,'pdsch(1).Modulation = ''%s'';           %% ''QPSK'', ''16QAM'', ''64QAM'', ''256QAM''\n',PDSCH.Modulation);
myfprintf(fid,'pdsch(1).NLayers = %d;                   %% Number of PDSCH layers\n',PDSCH.NLayers);
myfprintf(fid,'pdsch(1).RVSequence = [0,2,3,1];        %% RV sequence to be applied cyclically across the PDSCH allocation sequence\n');
myfprintf(fid,'\n');

myfprintf(fid,'pdsch(1).AllocatedSymbols = %s;      %% Range of symbols in a slot\n',PDSCH.AllocatedSymbols);
myfprintf(fid,'pdsch(1).AllocatedSlots = %s;       %% Allocated slot indices\n',PDSCH.AllocatedSlots);
myfprintf(fid,'pdsch(1).AllocatedPeriod = %d;         %% Allocation period in slots (empty implies no repetition)\n',PDSCH.AllocatedPeriod);
myfprintf(fid,'pdsch(1).AllocatedPRB = %s;  %% PRB allocation\n',PDSCH.AllocatedPRB);
myfprintf(fid,'pdsch(1).RNTI = 0;                     %% RNTI\n');
myfprintf(fid,'pdsch(1).NID = 1;                      %% Scrambling for data part\n');
myfprintf(fid,'\n');

myfprintf(fid,'pdsch(1).RateMatch(1).CORESET = [1];                  %% Rate matching pattern, defined by one CORESET\n');
myfprintf(fid,'pdsch(1).RateMatch(1).Pattern.AllocatedPRB = [];      %% Rate matching pattern, defined by set of ''bitmaps''\n');
myfprintf(fid,'pdsch(1).RateMatch(1).Pattern.AllocatedSymbols = [];\n');
myfprintf(fid,'pdsch(1).RateMatch(1).Pattern.AllocatedSlots = [];\n');
myfprintf(fid,'pdsch(1).RateMatch(1).Pattern.AllocatedPeriod = [];\n');
myfprintf(fid,'\n');

myfprintf(fid,'%% DM-RS configuration (TS 38.211 section 7.4.1.1)\n');
myfprintf(fid,'pdsch(1).PortSet = 0:pdsch(1).NLayers-1; %% DM-RS ports to use for the layers\n');
myfprintf(fid,'pdsch(1).PDSCHMappingType = ''%s'';         %% PDSCH mapping type (''A''(slot-wise),''B''(non slot-wise))\n',PDSCH.MappingType);
myfprintf(fid,'pdsch(1).DL_DMRS_typeA_pos = %d;          %% Mapping type A only. First DM-RS symbol position (2,3)\n',DMRS.DL_DMRS_typeA_pos);
myfprintf(fid,'pdsch(1).DL_DMRS_max_len = 1;            %% Number of front-loaded DM-RS symbols (1(single symbol),2(double symbol))  \n');    
myfprintf(fid,'pdsch(1).DL_DMRS_add_pos = %d;            %% Additional DM-RS symbol positions (max range 0...3)\n',PDSCH.DL_DMRS_add_pos);
myfprintf(fid,'pdsch(1).DL_DMRS_config_type = %d;        %% DM-RS configuration type (1,2)\n',PDSCH.DL_DMRS_config_type);
myfprintf(fid,'pdsch(1).NIDNSCID = 1;                   %% Scrambling identity (0...65535)\n');
myfprintf(fid,'pdsch(1).NSCID = 0;                      %% Scrambling initialisation (0,1)\n');
myfprintf(fid,'pdsch(1).PowerDMRS = 0;                  %% Additional power boosting in dB\n');
myfprintf(fid,'\n');

myfprintf(fid,'%% Collect together channel oriented parameter sets into a single\n');
myfprintf(fid,'%% configuration\n');
myfprintf(fid,'waveconfig.SSBurst = ssburst;\n');
myfprintf(fid,'waveconfig.Carriers = carriers;\n');
myfprintf(fid,'waveconfig.BWP = bwp;\n');
myfprintf(fid,'waveconfig.CORESET = coreset;\n');
myfprintf(fid,'waveconfig.PDCCH = pdcch;\n');
myfprintf(fid,'waveconfig.PDSCH = pdsch;\n');
myfprintf(fid,'\n');

% myfprintf(fid,'Visualize5G(waveconfig)\n');

fclose(fid);
return

codeType = 'one call';
% if isfield(handles.Data,'PDSCH')
PDSCH = handles.Data.PDSCH;

% Adjust PSDCH according to definition method
if strcmp(handles.Data.params.TBSMethod,'MCS')
    [itbs,Modulation]=lteMCS(handles.Data.params.MCS);
    nprb = numel(str2num(PDSCH.PRBSet));
    PDSCH.TrBlkSizes = lteTBS(nprb,itbs);
    
    
    if isfield(PDSCH,'TargetCodeRate')
        PDSCH = rmfield(PDSCH,'TargetCodeRate');
    end
    if isfield(PDSCH,'Modulation')
        PDSCH = rmfield(PDSCH,'Modulation');
    end
    if isfield(PDSCH,'TrBlkSizes')
        PDSCH = rmfield(PDSCH,'TrBlkSizes');
    end
    codeType = 'for loop';
elseif strcmp(handles.Data.params.TBSMethod,'CodeRate and Modulation')
    if isfield(PDSCH,'TrBlkSizes')
        PDSCH = rmfield(PDSCH,'TrBlkSizes');
    end
    codeType = 'for loop';
else  % TBS
    % Remove target code rate
    if isfield(PDSCH,'TargetCodeRate')
        PDSCH = rmfield(PDSCH,'TargetCodeRate');
    end
    codeType = 'one call';
end
% end

% Remove NTxAnts field if not needed
if ~ismember(PDSCH.TxScheme,handles.Data.params.ListTxSchemesWithDMRS)
    if isfield(PDSCH,'NTxAnts')
        PDSCH = rmfield(PDSCH,'NTxAnts');
    end
end

% Add RNTI field
PDSCH.RNTI = 1;

% If generate for loop, generate one subframe at a time
if strcmp(codeType,'for loop')
    enb.TotSubframes = 1;
else
    enb.TotSubframes = 10;
end

enb.PDSCH = PDSCH;
PRBSet = str2num(PDSCH.PRBSet);
enbfull = enb;
enbfull.PDSCH.PRBSet = PRBSet;
enbfull = lteRMCDL(enbfull,handles.Data.params.NCodeWords);

% Compute information and display it in info
handles = createInfo(handles);
% if strcmp(handles.Data.params.TBSMethod,'MCS')
%     [itbs,Modulation]=lteMCS(handles.Data.params.MCS);
%     nprb = numel(PDSCH.PRBSet);
%     PDSCH.TrBlkSizes = lteTBS(nprb,itbs);
%
%     handles.widgets.hParamInfo.ColumnName = {'TrBlkSizes' 'Modulation'};
%     handles.widgets.hParamInfo.Data = { PDSCH.TrBlkSizes Modulation};
%
% elseif strcmp(handles.Data.params.TBSMethod,'CodeRate and Modulation')
%
%     enbfull = enb;
%     TBS = zeros(10,1);
%     Data = cell(10,2);
%     for nSubframe = 0:9
%         enbfull.nSubframe = nSubframe;
%         enbfull.PDSCH.PRBSet = PRBSet;
%         enbfull = lteRMCDL(enbfull,handles.Data.params.NCodeWords);
%
%         TBS(nSubframe+1) = enbfull.PDSCH.TrBlkSizes(nSubframe+1);
%         Data{nSubframe+1,1} = TBS(nSubframe+1);
%     end
%     Data{1,2} = 'duh';
%     handles.widgets.hParamInfo.ColumnName = {'TrBlkSizes' 'MCS'};
%     handles.widgets.hParamInfo.Data = Data;
%
% end

%% Write to output file
myfprintf(fid,'enb0 = struct();\n');

fields = fieldnames(enb);
% Issue a statement for all enb fields that are defined
for ii=1:numel(fields)
    Value = fields{ii};
    if ~isstruct(enb.(Value))
        if isa(enb.(Value),'numeric')
            if enb.(Value) == floor(enb.(Value))
                myfprintf(fid,'enb0.%s = %d;\n', Value, enb.(Value));
            else
                myfprintf(fid,'enb0.%s = %f;\n', Value, enb.(Value));
            end
        else
            myfprintf(fid,'enb0.%s = ''%s'';\n', Value, enb.(Value));
        end
    end
end

if isfield(PDSCH,'TrBlkSizes')
    % Handle transport block sizes if present
    % Set TBS to 0 in subframe 5 if requested
    if ~(handles.Data.params.subframe5)
        PDSCH.TrBlkSizes(6) = 0;
    end
    % Check if all the same
    if isempty(find(diff(PDSCH.TrBlkSizes)))
        myfprintf(fid,'PDSCH.TrBlkSizes = %d * ones(1,10);\n', PDSCH.TrBlkSizes(1));
    else
        myfprintf(fid,'PDSCH.TrBlkSizes = [ ', PDSCH.TrBlkSizes);
        for ii=1:numel(PDSCH.TrBlkSizes)
            myfprintf(fid,'%d ', PDSCH.TrBlkSizes(ii))
        end
        myfprintf(fid,'];\n', PDSCH.TrBlkSizes)
    end
end


if strcmp(codeType,'for loop')
    myfprintf(fid,'for subframeNr = 4:6\n');
    indent = indent + 3;
    myfprintf(fid,'enb0.NSubframe = mod(subframeNr,10);\n');
end
myfprintf(fid,'PDSCH = struct();\n');

% If requests for no data in subframe 5, create a test and set payload to
% empty in that subframe
if ~(handles.Data.params.subframe5)
    myfprintf(fid,'if enb0.NSubframe == 5\n')
    indent = indent + 3;
    myfprintf(fid,'payload = [];\n')
    indent = indent - 3;
    myfprintf(fid,'else\n')
    indent = indent + 3;
end

% Issue a statement for all PDSCH fields that are defined
fields = fieldnames(PDSCH);
for ii=1:numel(fields)
    Value = fields{ii};
    if ~isstruct(PDSCH.(Value))
        % For PRBSet, print string, not value
        if strcmp(Value,'PRBSet')
            if strcmp(handles.Data.params.RAllocType,'All RBs')
                myfprintf(fid,'PDSCH.PRBSet = (0:enb0.NDLRB-1)'';\n');
            else
                myfprintf(fid,'PDSCH.PRBSet = %s;\n', PDSCH.(Value));
            end
            
            % Modulation is cell array if NCodeWords == 2
        elseif isa(PDSCH.(Value),'cell')
            myfprintf(fid,'PDSCH.%s = {''%s'' ''%s''};\n', Value, ...
                PDSCH.(Value){1}, PDSCH.(Value){2});
        elseif strcmp(Value,'TrBlkSizes')
            % Do nothing: it's handles earlier
            
        elseif isa(PDSCH.(Value),'numeric')
            if PDSCH.(Value) == floor(PDSCH.(Value))
                myfprintf(fid,'PDSCH.%s = %d;\n', Value, PDSCH.(Value));
            else
                myfprintf(fid,'PDSCH.%s = %f;\n', Value, PDSCH.(Value));
            end
        else
            myfprintf(fid,'PDSCH.%s = ''%s'';\n', Value, PDSCH.(Value));
        end
        
        if strcmp(Value,'NTxAnts')
            % Add the W field
            myfprintf(fid,'PDSCH.W = eye(PDSCH.NLayers,PDSCH.NTxAnts);\n');
            % Add the NSCID field if other than Port5
            if ~strcmp(PDSCH.TxScheme,'Port5')
                myfprintf(fid,'PDSCH.NSCID = 0; %% Scrambling identity\n');
            end
        end
    end
end

% Display ncw only if it's > 1
if handles.Data.params.NCodeWords ~= 1
    myfprintf(fid,'ncw = 2; %% Number of codewords\n');
end


% TBS size determination
if strcmp(handles.Data.params.TBSMethod,'MCS')
    myfprintf(fid,'MCS = %d;\n',handles.Data.params.MCS)
    myfprintf(fid,'[itbs,Modulation]=lteMCS(MCS);\n')
    myfprintf(fid,'nprb = numel(PDSCH.PRBSet);\n')
    myfprintf(fid,'TrBlkSize = double(lteTBS(nprb,itbs));\n')
    if handles.Data.params.NCodeWords == 1
        myfprintf(fid,'PDSCH.TrBlkSizes = repmat(TrBlkSize,1,10); %% TBS must be expanded to 1x10\n')
    else
        myfprintf(fid,'PDSCH.TrBlkSizes = repmat(TrBlkSize,ncw,10); %% TBS must be expanded to ncw-by-10\n')
    end
myfprintf(fid,'PDSCH.Modulation = Modulation;\n')
    
end

if handles.Data.params.NCodeWords == 1
    myfprintf(fid,'payload = [1 0 0 1];\n');
else
    myfprintf(fid,'payload = {[1 0 0 1] [1 0 0 1]};\n');
end

if ~(handles.Data.params.subframe5)
    indent = indent - 3;
    myfprintf(fid,'end\n')
end


myfprintf(fid,'enb0.PDSCH = PDSCH;\n');


if handles.Data.params.NCodeWords == 1
    myfprintf(fid,'enb = lteRMCDL(enb0);\n');
else
    myfprintf(fid,'enb = lteRMCDL(enb0,ncw);\n');
end
myfprintf(fid,'[txWaveform,txGrid,cfgout] = lteRMCDLTool(enb,payload);\n');
myfprintf(fid,'VisualizeLTE(enb,enb.PDSCH,txGrid);\n\n');

if handles.Data.params.ReceiverCode
    if ~(handles.Data.params.subframe5)
        myfprintf(fid,'if enb.NSubframe ~= 5\n')
        indent = indent + 3;
    end
    
    %% Add the receiver
    myfprintf(fid,'%% Additive WGN\n');
    myfprintf(fid,'SNRdB = 30;\n');
    myfprintf(fid,'%% Convert dB to linear\n');
    myfprintf(fid,'SNR = 10^(SNRdB/20);\n\n');
    myfprintf(fid,'%% Normalize noise power to take account of sampling rate, which is\n');
    myfprintf(fid,'%% a function of the IFFT size used in OFDM modulation, and the \n');
    myfprintf(fid,'%% number of antennas\n');
    myfprintf(fid,'N0 = 1/(sqrt(2.0*enb.CellRefP*double(cfgout.Nfft))*SNR);\n\n');
    myfprintf(fid,'%% Create additive white Gaussian noise\n');
    myfprintf(fid,'noise = N0*complex(randn(size(txWaveform)), ...\n');
    myfprintf(fid,'                    randn(size(txWaveform)));\n\n');
    myfprintf(fid,'%% Add AWGN to the received time domain waveform\n');
    myfprintf(fid,'rxWaveform = txWaveform + noise;\n');
    
    myfprintf(fid,'%% Receiver\n');
    myfprintf(fid,'rxSubframe = lteOFDMDemodulate(enb,rxWaveform);\n');
    myfprintf(fid,'\n');
    myfprintf(fid,'%% Channel Estimator Configuration\n');
    myfprintf(fid,'cec = struct;                        %% Channel estimation config structure\n');
    myfprintf(fid,'cec.PilotAverage = ''UserDefined'';    %% Type of pilot symbol averaging\n');
    if ismember(PDSCH.TxScheme,{'Port5','Port7-8','Port8','Port7-14'})
        myfprintf(fid,'cec.Reference = ''DMRS'';              %% Demodulate using DMRS;\n');
    end
    myfprintf(fid,'cec.PilotAverage = ''UserDefined'';    %% Type of pilot symbol averaging\n');
    if ismember(PDSCH.TxScheme,{'Port7-8','Port7-14'})
        myfprintf(fid,'cec.FreqWindow = 1;                 %% Frequency window size\n');
        if PDSCH.NLayers < 5
            myfprintf(fid,'cec.TimeWindow = 2;                 %% Time window size\n');
        else
            myfprintf(fid,'cec.TimeWindow = 4;                 %% Time window size\n');
        end
    else
        myfprintf(fid,'cec.FreqWindow = 9;                  %% Frequency window size\n');
        myfprintf(fid,'cec.TimeWindow = 9;                  %% Time window size\n');
    end
    myfprintf(fid,'cec.InterpType = ''Cubic'';            %% 2D interpolation type\n');
    myfprintf(fid,'cec.InterpWindow = ''Centered'';       %% Interpolation window type\n');
    myfprintf(fid,'cec.InterpWinSize = 1;               %% Interpolation window size\n');
    myfprintf(fid,'\n');
    % Demodulate only non-UL subframes for TDD mode
    if strcmp(enb.DuplexMode,'TDD')
        myfprintf(fid,'\n%%%% Demodulate only non-UL subframes for TDD mode\n');
        myfprintf(fid,'duplexInfo = lteDuplexingInfo(enb);\n');
        
        myfprintf(fid,'\n%% Only for a downlink or special subframe\n');
        myfprintf(fid,'if ~strcmp(duplexInfo.SubframeType,''Uplink'')\n');
        indent = indent + 3;
        
    end
    
    myfprintf(fid,'%% Equalization and channel estimation\n');
    if ismember(PDSCH.TxScheme,{'Port5','Port7-8','Port8','Port7-14'})
        myfprintf(fid,'[estChannelGrid,noiseEst] = lteDLChannelEstimate(enb,PDSCH,cec, rxSubframe);\n');
    else
        myfprintf(fid,'[estChannelGrid,noiseEst] = lteDLChannelEstimate(enb,cec, rxSubframe);\n');
    end
    myfprintf(fid,'\n');
    myfprintf(fid,'PDSCH = enb.PDSCH;\n');
    myfprintf(fid,'%% Perform deprecoding, layer demapping, demodulation and\n');
    myfprintf(fid,'%% descrambling on the received data using the estimate of the channel\n');
    myfprintf(fid,'PDSCH.CSI = ''On''; %% Use soft decision scaling\n');
    myfprintf(fid,'rxEncodedBits = ltePDSCHDecode(enb,PDSCH,rxSubframe,estChannelGrid,noiseEst);\n');
    myfprintf(fid,'\n');
    myfprintf(fid,'%% Decode DownLink Shared Channel (DL-SCH)\n');
    myfprintf(fid,'PDSCH.NTurboDecIts = 5;\n');
    myfprintf(fid,'TrBlkSize = PDSCH.TrBlkSizes(1,enb.NSubframe+1);\n');
    myfprintf(fid,'if iscell(rxEncodedBits) && ~iscell(PDSCH.Modulation)\n');
    myfprintf(fid,'   [decbits,crc] = lteDLSCHDecode(enb,PDSCH,TrBlkSize,rxEncodedBits{1});\n');
    myfprintf(fid,'else\n');
    myfprintf(fid,'   TrBlkSize = repmat(TrBlkSize,1,numel(PDSCH.Modulation));\n');
    myfprintf(fid,'   [decbits,crc] = lteDLSCHDecode(enb,PDSCH,TrBlkSize,rxEncodedBits);\n');
    myfprintf(fid,'end\n');
    myfprintf(fid,'\n');
    myfprintf(fid,'if crc == 0\n');
    myfprintf(fid,'   fprintf(1,''crc successful for TBS = %%d\\n'',TrBlkSize);\n');
    myfprintf(fid,'else\n');
    myfprintf(fid,'   fprintf(1,''crc has errors for TBS = %%d\\n'',TrBlkSize);\n');
    myfprintf(fid,'end\n');
    if strcmp(enb.DuplexMode,'TDD')
        indent = indent - 3;
        myfprintf(fid,'\n');
        myfprintf(fid,'end\n\n');
    end
    
    if ~(handles.Data.params.subframe5)
        indent = indent - 3;
        myfprintf(fid,'end\n')
    end
    
end

if strcmp(codeType,'for loop')
    indent = indent - 3;
    myfprintf(fid,'end\n');
end


    function myfprintf(fid,varargin)
        ToPrint = sprintf(varargin{1:end});
        % Single comment will be replaced with this
        indents = [repmat(' ',1,indent) ];
        fprintf(fid,'%s%s', indents, ToPrint);
    end

fclose(fid);
type tbd.m
evalin('base','tbd')

end

