%hNRDownlinkWaveformGenerator Generate a 5G NR downlink carrier waveform

%   Copyright 2018 The MathWorks, Inc.

function Visualize5G(waveconfig,varargin)

ResourceElementGrids = hNRDownlinkDisplay(waveconfig);
if nargin > 1
    haxes = varargin{1};
    imagesc(haxes,ResourceElementGrids{1}(:,:,1));
 axis(haxes,'xy')
% title(haxes,'CORESET (green), PDSCH (teal), PDCCH (orange), DMRS (yellow)')
xlabel(haxes,'Symbols')
ylabel(haxes,'Subcarriers')
else
    figure; imagesc(ResourceElementGrids{1}(:,:,1));
 axis xy
% title('CORESET (green), PDSCH (teal), PDCCH (orange), DMRS (yellow)')
xlabel('Symbols')
ylabel('Subcarriers')
end

% cmap = colormap(gcf);
% fnames = {'Unallocated' 'PDSCH' 'PDCCH' 'DMRS' 'CORESET'};
% N = 5;
% L = line(ones(N),ones(N), 'LineWidth',8);                   % Generate lines
% clevels = floor(40*[1.2, 0.7, 1.5, 1.0, 0.6]);
% set(L,{'color'},mat2cell(cmap( min(clevels,length(cmap) ),:),ones(1,N),3));
% legend(haxes,fnames{:});

% chplevel.PDCCH = 1.2;
% chplevel.PDSCH = 0.7;
% chplevel.DMRS = 1.5;
% chplevel.CORESET = 1.0;
% chplevel.SS_Burst = 0.6;

%                 fnames = fieldnames(chplevel);
%                 chpval = struct2cell(chplevel);
%                 clevels = cscaling*[chpval{:}];
%                 N = length(clevels);
%                 L = line(ones(N),ones(N), 'LineWidth',8);                   % Generate lines
%                 % Index the color map and associated the selected colours with the lines
%                 set(L,{'color'},mat2cell(cmap( min(1+clevels,length(cmap) ),:),ones(1,N),3));   % Set the colors according to cmap
%                 % Create legend 
%                 legend(fnames{:});


end

function ResourceElementGrids = hNRDownlinkDisplay(waveconfig)

% Unbundle the channel specific parameter structures for easier access
ssburst = waveconfig.SSBurst;
carriers = waveconfig.Carriers;
bwp = waveconfig.BWP;
coreset = waveconfig.CORESET;
if isfield(waveconfig,'PDCCH')
    pdcch = waveconfig.PDCCH;
end
if isfield(waveconfig,'PDSCH')
    pdsch = waveconfig.PDSCH;
end

%     % Defaulting for the grid plotting
%     if ~isfield(waveconfig,'DisplayGrids')
%         waveconfig.DisplayGrids = 0;
%     end

% Cross-check the BWP and SCS carrier configs
carrierscs = [carriers.SubcarrierSpacing];
for bp=1:length(waveconfig.BWP)
    % Map it into a SCS specific carrier level RE grid
    cidx = find(bwp(bp).SubcarrierSpacing == carrierscs,1);
    if isempty(cidx)
        error('A SCS specific carrier configuration for SCS = %d kHz has not been defined. This carrier definition is required for BWP %d.',bwp(bp).SubcarrierSpacing,bp);
    end
    % Record the carrier index associated with the BWP
    bwp(bp).CarrierIdx = cidx;
end

% Create BWP *PRB* resource grids
ResourceGrids = arrayfun(@(bp)zeros(bp.NRB,waveconfig.NumSubframes*1*symbolsPerSlot(bp)*fix(bp.SubcarrierSpacing/15)),...
    bwp,'UniformOutput',false);

% Create BWP subcarrier resource grids
% Size ALL BWP RE grids by the max number of layers/ports in the enabled PDSCH
if isfield(waveconfig,'PDCCH')
    maxlayers = max([pdsch(logical([pdsch(:).Enable])).NLayers]);
else
    maxlayers = 1; % Ensure that there is at least one plane
end
if isempty(maxlayers) || maxlayers <= 0
    maxlayers = 1; % Ensure that there is at least one plane
end

% Create BWP *resource element grids*
ResourceElementGrids = arrayfun(@(bp)zeros(bp.NRB*12,waveconfig.NumSubframes*1*symbolsPerSlot(bp)*fix(bp.SubcarrierSpacing/15),maxlayers),...
    bwp,'UniformOutput',false);

% Add an empty 'internal' placeholder field to the PDSCH configs to contain
% any inter-channel reserved PRB which will be created locally below
[pdsch.Reserved] = deal(struct('Name',{},'PRB',{},'Symbols',{},'Period',{}));

% Define channel plotting ID markers
chplevel.PDCCH = 1.2;
chplevel.PDSCH = 0.7;
chplevel.DMRS = 1.5;
chplevel.CORESET = 1.0;
chplevel.SS_Burst = 0.6;

% Mark the CORESET sequences for display in one of the BWP grids, for visualization purposes only
for cs = coreset
    nbwp = 1;
    symbperslot = symbolsPerSlot(bwp(nbwp));
    
    % Establish slot allocation for CORESET
    allocatedSlots = expandbyperiod(cs.AllocatedSlots,cs.AllocatedPeriod,waveconfig.NumSubframes,bwp(1).SubcarrierSpacing);    % Slots containing CORESET instances
    
    % Establish PRB allocation for CORESET
    nrb = bwp(nbwp).NRB;
    ncces = unique(fix(cs.AllocatedPRB/6));
    ncces = ncces(ncces < fix(nrb/6));
    allocatedPRB = expander(6*ncces,6);    % Expand to PRB
    
    % Establish symbol allocation for CORESET
    allocatedSymbols = cs.AllocatedSymbols(cs.AllocatedSymbols+cs.Duration < symbperslot);                                  %
    
    for ns = allocatedSlots
        % Expand the PRB into REG
        %             ResourceGrids{nbwp}(1+allocatedPRB,1+symbperslot*ns+(expander(allocatedSymbols,cs.Duration))) = chplevel.CORESET;
        % Expand PRBs into REs
        AllocatedREs = repmat(allocatedPRB*12,12,1)+(0:12-1)';
        AllocatedREs = AllocatedREs(:).';
        ResourceElementGrids{nbwp}(1+AllocatedREs,1+symbperslot*ns+(expander(allocatedSymbols,cs.Duration)),:) = chplevel.CORESET;
    end
end

if isfield(waveconfig,'PDCCH')
    % Process the set of PDCCH transmission sequences
    for nch = 1:length(pdcch)
        
        % Get a copy of the current PDCCH channel parameters
        ch = pdcch(nch);
        
        % Only process configuration if enabled
        if ~ch.Enable
            continue;
        end
        
        % Check the referenced BWP and CORESET indices
        checkIndex('PDCCH',pdcch,nch,'BWP',bwp,'CORESET',coreset);
        
        % Get a copy of the current CORESET for this PDCCH sequence
        cset = coreset(ch.CORESET);
        
        % Get the number of symbols per slot for the associated BWP (CP dependent)
        symbperslot = symbolsPerSlot(bwp(ch.BWP));
        
        % Exclude any CORESET occasions that would not fall outside a slot
        slotsymbs = cset.AllocatedSymbols(cset.AllocatedSymbols+cset.Duration < symbperslot);
        if length(slotsymbs) ~= length(cset.AllocatedSymbols)
            warning('CORESET %d (%d symbol duration) in BWP %d includes positions which fall outside the slot (0...%d). Using only CORESET locations within a slot.',ch.CORESET,cset.Duration,ch.BWP,symbperslot-1);
            cset.AllocatedSymbols = slotsymbs;
        end
        
        % Calculate the initial symbol and slot numbers for the CORESET/search space
        % monitoring occasions by expanding by the period across the waveform length
        potentialslots = expandbyperiod(cset.AllocatedSlots,cset.AllocatedPeriod,waveconfig.NumSubframes,bwp(ch.BWP).SubcarrierSpacing);
        potentialsymbols = reshape(symbperslot*potentialslots + cset.AllocatedSymbols',1,[]);
        
        % Also need to expand the indices of the allocated monitoring locations
        % that will be used by the current PDCCH sequence
        % Expand by period so that it covers all the potential symbols
        allocslotindices = expandbyperiod(ch.AllocatedSearchSpaces,ch.AllocatedPeriod,numel(potentialsymbols));
        
        % Identify the absolute initial slots associated with the CORESET instances carry the PDCCH
        allocatedsymbols = potentialsymbols(1+allocslotindices);
        
        % Identify the locations of the PDCCH instances
        % - For displaying
        % - For actual PDCCH instances mapping, to expand into resource elements (eventually data & DM-RS)
        % - For reserving in the associated PDSCH (connected by RNTI)
        %
        % Initial format is array of (symbol,prb) in mapping order
        
        nrb = bwp(nbwp).NRB;
        if max(cset.AllocatedPRB) >= nrb
            error('The PRB allocation part of CORESET %d (set of 6 PRB/REG CCEs, max 0-based PRB index = %d) exceeds the number of available RB (%d) in BWP %d.',ch.CORESET,max(cs.AllocatedPRB),nrb,ch.BWP);
        end
        % Establish 0-based CCE indices defined by the PRB allocation
        ncces = unique(fix(cset.AllocatedPRB/6));
        % Remove any partial CCE from the allocation
        ncces = ncces(ncces < fix(nrb/6));     % Use only complete CCEs that fall within NRB
        potentialPRB = expander(6*ncces,6);    % Expand CCE to associated PRB set
        
        % Check the PDCCH allocation dimensionality, relative to the CORESET
        maxcce = cset.Duration*numel(ncces);
        if ch.StartCCE + ch.NumCCE >= maxcce
            error('The CCE range ([%d,%d] inclusive) of PDCCH %d exceeds the maximum number of CCE (%d) in CORESET %d.',ch.StartCCE,ch.StartCCE+ch.NumCCE-1,nch, maxcce, ch.CORESET);
        end
        
        % Calculate the subscripts of the PDCCH PRB associated with CCE set
        % Turn CCE into blocks of 6 REG/RB, in terms of symbols & PRB indices
        expcceindices = 6*ch.StartCCE + (0:6*ch.NumCCE-1);
        prblocations = [mod(expcceindices,cset.Duration)',potentialPRB(1+fix(expcceindices/cset.Duration))'];      % 0-origin symbols
        
        % Turn this into a cell array per symbol for reservation
        celloc1d = cell(1,cset.Duration);
        for c = 1:cset.Duration
            celloc1d{c} = reshape(prblocations(prblocations(:,1)==(c-1),2),1,[]);  % Store each PRB set as a row
        end
        % Repeat the 1 slot allocation cell array across all transmission occasions
        celloc = repmat(celloc1d,1,length(allocatedsymbols));
        
        % Expand symbols to match the CORESET duration
        symloc = expander(allocatedsymbols,cset.Duration);
        
        % Create a PRB reservation configuration
        reserved.Name = sprintf('Reserved for PDCCH transmission %d',nch);
        reserved.PRB = celloc;     % Reserved PRB (0-based indices, defined as a vector or cell array)
        reserved.Symbols = symloc; % OFDM symbols associated with reserved PRB (0-based indices, spanning one or more slots)
        reserved.Period = [];      % Total number of slots in the pattern period
        
        if isfield(waveconfig,'PDSCH')
            % Is this PDCCH sequence is associated with any of the PDSCH (same RNTI and BWP)
            % then configure the PDSCH sequence with the associated PDCCH PRB reservation
            rnti = ch.RNTI;
            for i = 1:length(pdsch)
                dch = pdsch(i);
                if (dch.RNTI == rnti) && (dch.BWP == ch.BWP)
                    pdsch(i).Reserved(end+1) = reserved;
                end
            end
        end
        
%         % Relative PRB linear indices in BWP (relative to 0-origin CORESET), for a single PDCCH instance
%         indblock = sum(prblocations .* [bwp(ch.BWP).NRB 1], 2);   % Column of 0-based linear indices
        
        %         % Mark the PRB used by this PDCCH for display in the associated BWP grid
        %         for s = allocatedsymbols
        %             ResourceGrids{ch.BWP}(1+(allocatedsymbols*bwp(ch.BWP).NRB)+indblock) = chplevel.PDCCH;  % Using column expansion to repeat the instances
        %         end
        
        % Turn subscripts into 0-based RE indices for a single PDCCH instance
        indpdcch = reSub2Ind(bwp(ch.BWP).NRB,celloc1d,0:cset.Duration-1);
        repdcch = expander(12*indpdcch,12,4,1,true)';  % Step by 4 RE with an offset of 1
        redmrs = expander(12*indpdcch,12,4,1,false)';  % RE carrying DM-RS
        
        %         % PDCCH instance symbol/bit capacity
        %         Gd = length(repdcch);
        %         G = Gd*2;
        %
        %         % Create a data source for this PDCCH sequence
        %         datasource = hVectorDataSource(ch.DataSource);
        
        % Loop over all the PDCCH transmission occasions and write the encoded
        % DCI payloads into the resource elements of the associated PDCCH instances
        for s = allocatedsymbols
            
            %             nID = ch.NID;   % Scrambing NID value for DM-RS (pdcch-DMRS-ScramblingID or NCellID, depending)
            %
            %             % Get the DCI payload bits from the data source
            %             dcibits = datasource.getPacket(ch.DataBlkSize);
            %
            %             % Encode the DCI payload to match the PDCCH bit capacity
            %             codeword = nrDCIEncode(dcibits,ch.RNTI,G);
            %
            %             % Get the PDCCH QPSK symbols
            %             symbols = nrPDCCH(codeword,nID,ch.RNTI);
            %
            % Combine with existing grid (shift indices to initial symbol for the search space instance)
            offset = 1+s*12*bwp(ch.BWP).NRB;
            %             ResourceElementGrids{ch.BWP}(offset+repdcch) = ResourceElementGrids{ch.BWP}(offset+repdcch) + symbols*db2mag(ch.Power);
            ResourceElementGrids{ch.BWP}(offset+repdcch) = chplevel.PDCCH;
            
            %             % Construct and map the PDCCH DM-RS
            %             nslot = mod(fix(s/symbperslot), bwp(ch.BWP).SubcarrierSpacing/15 * 10);  % Slot number, in a 10ms frame
            %             nsym = mod(s,symbperslot); % Symbol number in slot
            
            % Construct a single symbol column vector of DM-RS for the PDCCH
            ResourceElementGrids{ch.BWP}(offset+redmrs) = chplevel.DMRS;
            %             dmrssym = [];
            %             crboffset = carriers(bwp(ch.BWP).CarrierIdx).RBStart + bwp(ch.BWP).RBOffset; % First CRB associated with start of BWP
            %             for i = 1:cset.Duration
            %
            %                 prb = celloc1d{i};     % PRB indices associated with current symbol
            %                 slen = max(prb)+1;     % Number of PRB that the continuous PRBS sequence needs to cover
            %
            %                 % Construct PRBS for the transmission DM-RS, offseting the
            %                 % sequence to account for the origin of the BWP
            %                 cinit = mod(2^17*(symbperslot*nslot+nsym+1)*(2*nID+1)+2*nID,2^31);
            %                 nsc = 6;   % 3 DM-RS symbols per RB and 2 PRBS bits needed per QPSK symbol
            %                 cSeq = nrPRBS(cinit,nsc*[crboffset slen]);
            %                 % Select onto the subset required to match the PRB
            %                 cSeq = reshape(cSeq,nsc,[]);
            %                 cSeq = cSeq(:,prb+1);
            %                 % Create associated complex DM-RS symbols
            %                 dmrssym = [dmrssym; nrSymbolModulate(cSeq(:),'QPSK')]; %#ok<AGROW>
            %                 nsym = nsym + 1;  % Increment symbol number
            %             end
            %             % Combine PDCCH with the grid
            %             ResourceElementGrids{ch.BWP}(offset+redmrs) = ResourceElementGrids{ch.BWP}(offset+redmrs) + dmrssym*db2mag(ch.Power+ch.PowerDMRS);
            %         end
            % End of PDCCH sequence processing
        end
    end
    
    % Get the set of RB level resources, in each SCS carrier, that overlap
    % with the SS burst
    [ssbreserved,ssburst] = ssburstResources(ssburst,carriers);
    
    %     % Process the set of PDSCH transmission sequences
    %     % Create a single DL-SCH channel processing object for use with all the PDSCH sequences
    %     dlsch = hDLSCH();
    
    for nch = 1:length(pdsch)
        
        % Get a copy of the current PDSCH channel parameters
        ch = pdsch(nch);
        
        % Only process configuration if enabled
        if ~ch.Enable
            continue;
        end
        
        % Check the referenced BWP index
        checkIndex('PDSCH',pdsch,nch,'BWP',bwp);
        
        % Expand the allocated slot sequence by the repetition period, across
        % the length of the waveform
        allocatedSlots = expandbyperiod(ch.AllocatedSlots,ch.AllocatedPeriod,waveconfig.NumSubframes,bwp(ch.BWP).SubcarrierSpacing);
        if any(ch.AllocatedPRB >= bwp(ch.BWP).NRB)
            error('The allocated PRB indices (0-based, largest value = %d) for PDSCH %d exceed the NRB (%d) for BWP %d.',max(ch.AllocatedPRB),nch,bwp(ch.BWP).NRB,ch.BWP); % FIXME: Use actual channel number!
        end
        % Ensure that the allocated symbols for the slot are within a slot for the BWP CP
        symbperslot = symbolsPerSlot(bwp(ch.BWP));
        slotsymbs = ch.AllocatedSymbols(ch.AllocatedSymbols < symbperslot);
        if length(slotsymbs) ~= length(ch.AllocatedSymbols)
            warning('The slot-wise symbol allocation for PDSCH %d in BWP %d includes 0-based symbol indices which fall outside a slot (0...%d). Using only symbols within a slot.',nch,ch.BWP,symbperslot-1);
            ch.AllocatedSymbols = slotsymbs;
        end
        
        % Reserved PRB-level resources associated with SS burst
        rs = ssbreserved(bwp(ch.BWP).CarrierIdx);
        rs.PRB = rs.PRB - bwp(ch.BWP).RBOffset;
        ch.Reserved(end+1) = rs;         % Configure the channel with the pattern
        
        % Convert rate match pattern configurations into a format suitable
        % for the the hPDSCHResource function
        %
        % Turn reserved CORESET indices into reserved patterns
        % with format, reserved = struct('Name',{},'PRB',{},'Symbols',{},'Period',{});
        for rmp = ch.RateMatch
            % Process CORESET ratematch pattern part
            if isfield(rmp,'CORESET')
                for cidx = rmp.CORESET
                    % Expand and project CORESET into the BWP
                    % Pattern representation is single vector of PRB across all symbols
                    
                    % Check the CORESET index
                    if cidx < 1 || cidx > length(coreset)
                        error('For PDSCH %d, the ratematch CORESET index (%d) must be between 1 and the number of CORESET defined (%d)',...
                            nch,cidx,length(coreset));
                    end
                    
                    % Get a copy of the CORESET configuration
                    cs = coreset(cidx);
                    
                    % Expand the allocated slots across the repetition period
                    rmallocatedSlots = expandbyperiod(cs.AllocatedSlots,cs.AllocatedPeriod,waveconfig.NumSubframes,bwp(ch.BWP).SubcarrierSpacing);
                    % All CORESET symbols in each allocated slot
                    
                    % Expand to identify all symbols included in this CORESET sequence
                    slotsymbs = cs.AllocatedSymbols(cs.AllocatedSymbols+cs.Duration < symbperslot);
                    csetsymbols = expander(slotsymbs,cs.Duration);
                    rmallocatedsymbols = reshape(symbperslot*rmallocatedSlots+csetsymbols',1,[]);  % Use column expansion
                    
                    % Turn the allocated PRB parameter into blocks of 6 RB/REG CCEs
                    allocatedPRB = expander(unique(6*fix(cs.AllocatedPRB/6)),6);
                    
                    % Check that the associated PRB set fits within the associated BWP NRB
                    if max(allocatedPRB) >= bwp(ch.BWP).NRB
                        error('For PDSCH %d, the effective PRB allocation part of RateMatch CORESET %d (set of 6 PRB/REG CCEs, max PRB index = %d) exceeds the number of RB (%d) in BWP %d.',nch,cidx,max(allocatedPRB),bwp(ch.BWP).NRB,ch.BWP);
                    end
                    
                    % Create reserved configuration structure and push it onto the copy of the PDSCH parameters
                    rs.Name = sprintf('Reserved for CORESET %d',cidx);
                    rs.PRB = allocatedPRB;           % Reserved PRB (0-based indices, defined as a vector or cell array)
                    rs.Symbols = rmallocatedsymbols; % OFDM symbols associated with reserved PRB (0-based indices, spanning one or more slots)
                    rs.Period = [];                  % Total number of slots in the pattern period (empty means don't cyclically repeat)
                    ch.Reserved(end+1) = rs;         % Configure the channel with the pattern
                end
            end
            % Process bitmap derived ratematch pattern part
            if isfield(rmp,'Pattern')
                for rmpat = rmp.Pattern
                    % Name this pattern for identification purposes
                    rs.Name = sprintf('Reserved for rate-matching pattern');
                    
                    % Check that the associated PRB set fits within the associated BWP NRB
                    if max(rmpat.AllocatedPRB) >= bwp(ch.BWP).NRB
                        error('For PDSCH %d, the PRB allocation part of the RateMatch pattern exceeds the number of RB (%d) in BWP %d.',nch,bwp(ch.BWP).NRB,ch.BWP);
                    end
                    rs.PRB = rmpat.AllocatedPRB;
                    % Need to combine allocated symbols and allocated alots into a single list
                    rmallocslots = expandbyperiod(rmpat.AllocatedSlots,rmpat.AllocatedPeriod,waveconfig.NumSubframes,bwp(ch.BWP).SubcarrierSpacing);
                    rmallocsymbols = reshape(rmallocslots + rmpat.AllocatedSymbols',1,[]);
                    rs.Symbols = rmallocsymbols;    % OFDM symbols associated with reserved PRB (0-based indices, spanning one or more slots)
                    
                    rs.Period = [];                % Total number of slots in the pattern period (empty means don't repeat)
                    ch.Reserved(end+1) = rs;       % Configure the PDSCH channel with the pattern
                end
            end
        end
        
        % Display related PRB level processing
        %
        % Calculate the *PRB* linear indices of all the PDSCH instances, primarily
        % for display purposes here.
        % This is performed by marking the allocated PRB in an empty PRB grid
        % for the BWP in the entire waveform period, subtracting out the reserved
        % part then find the indices that have been used
        
        % Create an empty BWP spanning the length of the waveform
        rgrid = zeros(size(ResourceGrids{ch.BWP}));
        
        % Mark the PRB/symbols associated with all the PDSCH instances in this sequence
        for ns=allocatedSlots
            rgrid(1+ch.AllocatedPRB,1+symbperslot*ns+ch.AllocatedSymbols) = 1;
        end
        
        % Clear out all the 'reserved' PRB from the grid
        for rm = ch.Reserved
            % Expand the symbols indices by the period
            symbols = expandbyperiod(rm.Symbols,rm.Period*symbperslot,(1+max(allocatedSlots))*symbperslot);
            ind = reSub2Ind(bwp(ch.BWP).NRB,rm.PRB,symbols);
            % Knock out the reserved PRB
            rgrid(1+ind)=0;
        end
        
        % Identify all the indices that remain
        pdschindices = find(rgrid);
        
        %         % Mark the used PDSCH locations in the PRB grid
        %         ResourceGrids{ch.BWP}(pdschindices) = chplevel.PDSCH; %#ok<FNDSB>
        %
        % Waveform generation RE level processing
        %
        % The hPDSCHResources uses a slot-level set of parameters so map the
        % relevant parameter from the waveform level down to the slot level
        nrb = bwp(ch.BWP).NRB;
        ch.PRBSet = ch.AllocatedPRB;
        ch.SymbolSet = ch.AllocatedSymbols;
        crboffset = carriers(bwp(ch.BWP).CarrierIdx).RBStart + bwp(ch.BWP).RBOffset; % First CRB associated with start of BWP
        ch.PRBRefPoint = crboffset;
        
        % Create a data source for this PDSCH sequence
        datasource = hVectorDataSource(ch.DataSource);
        
        % Configure the DL-SCH processing object for this PDSCH sequence
        dlsch.TargetCodeRate = ch.TargetCodeRate;
        dlsch.Modulation = ch.Modulation;
        dlsch.NumLayers = ch.NLayers;
        
        % Loop over all the allocated slots
        for i = 1:length(allocatedSlots)
            
            % Get current slot number
            s = allocatedSlots(i);
            ch.NSlot = s;
            
            % Create an empty slot grid to contain a single PDSCH instance
            slotgrid = zeros(12*nrb,symbperslot,ch.NLayers);
            
            % Get the slot-oriented PDSCH indices, DM-RS indices and DM-RS symbol values
            [pdschREindices,dmrsREindices,dmrsSymbols,modinfo] = ...
                hPDSCHResources(struct('NDLRB',bwp(ch.BWP).NRB,'CyclicPrefix',bwp(ch.BWP).CyclicPrefix),ch);
            
            %             % Get the RV value for this transmission instance
            %             rvidx = mod(i-1,length(ch.RVSequence))+1;
            %             rv = ch.RVSequence(rvidx);
            %
            %             % For the first RV in a sequence, get a new transport block from
            %             % the data source and pass it to the DL-SCH processing
            %             if rvidx == 1
            %                trblksize = hPDSCHTBS(ch,modinfo.NREPerPRB-ch.Xoh_PDSCH);
            %                trblk = datasource.getPacket(trblksize);
            %                setTransportBlock(dlsch,trblk);
            %             end
            %
            %             % DL-SCH processing to create a codeword
            %             dlsch.OutputCodewordLength = modinfo.G;
            %             codeword = dlsch(1,rv);         % Use a single HARQ process
            %
            %             % PDSCH processing to create the PDSCH QAM symbols
            %             nID = ch.NID;
            %             symbols = nrPDSCH(codeword,ch.Modulation,ch.NLayers,nID,ch.RNTI);
            
            %             % Write the PDSCH and DM-RS symbols in the slot grid
            %             slotgrid(pdschREindices) = symbols*db2mag(ch.Power);
            %             slotgrid(dmrsREindices) = dmrsSymbols*db2mag(ch.Power+ch.PowerDMRS);
            % Write the PDSCH and DM-RS symbols in the slot grid
            slotgrid(pdschREindices) = chplevel.PDSCH;
            slotgrid(dmrsREindices) = chplevel.DMRS;
            
            % Combine PDSCH instance with the rest of the BWP grid
            ResourceElementGrids{ch.BWP}(:,s*symbperslot+(1:symbperslot),1:ch.NLayers) = ResourceElementGrids{ch.BWP}(:,s*symbperslot+(1:symbperslot),1:ch.NLayers) + slotgrid;
            
        end
        
        % End of PDSCH sequence processing
    end
end

%     % Create a new figure to display the plots
%     % Display *PRB* resource grids
%     % Map the BWPs into carrier sized PRB grids for display
%     if waveconfig.DisplayGrids
%         figure;
%         for bp = 1:length(ResourceGrids)
%
%             % Mark the unused RE in the overall BWP, relative to the carrier, so that
%             % it is easier to see with respect to the complete carrier layout
%             bgrid = ResourceGrids{bp};
%             cgrid = zeros(carriers((bwp(bp).CarrierIdx)).NRB, size(bgrid,2));
%             bgrid(bgrid==0) = 0.15;
%
%             % Write the BWP into the grid representing the carrier
%             cgrid(bwp(bp).RBOffset + (1:size(bgrid,1)),:) = bgrid;
%
%             % Mark the SS blocks
%             nsymbolsperhalfframe = ssbreserved(bwp(bp).CarrierIdx).Period*14;  % Always NCP
%             symbols = expandbyperiod(ssbreserved(bwp(bp).CarrierIdx).Symbols,nsymbolsperhalfframe,size(cgrid,2));
%             cgrid(ssbreserved(bwp(bp).CarrierIdx).PRB+1,symbols+1) = chplevel.SS_Burst;
%
%             % Plot the PRB BWP grid (relative to the carrier)
%             cscaling = 40;
%             subplot(length(ResourceGrids),1,bp)
%             image(cscaling*cgrid); axis xy; title(sprintf('BWP %d in Carrier (SCS=%dkHz). PDSCH, PDCCH and CORESET location',bp,bwp(bp).SubcarrierSpacing)); xlabel('Symbols'); ylabel('Carrier RB');
%
%             % Add a channel legend to the first BWP plot (applies to all)
%             if bp == 1
%                 % Extract channel names and colour marker levels
%                 fnames = strrep(fieldnames(chplevel),'_',' ');
%                 cmap = colormap(gcf);
%                 chpval = struct2cell(chplevel);
%                 clevels = cscaling*[chpval{:}];
%                 N = length(clevels);
%                 L = line(ones(N),ones(N), 'LineWidth',8);                   % Generate lines
%                 % Index the color map and associated the selected colours with the lines
%                 set(L,{'color'},mat2cell(cmap( min(1+clevels,length(cmap) ),:),ones(1,N),3));   % Set the colors according to cmap
%                 % Create legend
%                 legend(fnames{:});
%             end
%
%         end
%     end
%
%     % Initialise output variables for the baseband waveform and info structure
%     waveform = 0;
%     gridset = struct('ResourceGridBWP',{},'ResourceGridInCarrier',{},'Info',{});
%
% Establish the maximum carrier SCS configured and the associated k0 subtrahend
[maxcarrierscs,maxidx] = max(carrierscs); %#ok<ASGLU>
k0offset = (carriers(maxidx).RBStart + carriers(maxidx).NRB/2)*12*(carriers(maxidx).SubcarrierSpacing/15);

% Calculate the maximum OFDM sampling rate used across the configured SCS carriers
sr = @(x)getfield(hOFDMInfo(struct('NDLRB',x.NRB,'SubcarrierSpacing',x.SubcarrierSpacing)),'SamplingRate');
maxsr = max(arrayfun(sr,carriers));

% Modulate all the BWP grids and combine all into a single baseband waveform matrix
for bp = 1:length(ResourceElementGrids)
    
    % Get the current BWP RE grid
    bgrid = ResourceElementGrids{bp};
    
    % Get a copy of the SCS carrier config associated with the BWP numerology
    carrier = carriers(bwp(bp).CarrierIdx);
    nrb = carrier.NRB;
    
    % Check BWP dimensions relative to SCS carrier
    if (bwp(bp).RBOffset+bwp(bp).NRB) > nrb
        error('BWP %d (NRB = %d and RBOffset = %d @ %d kHz SCS) is outside of the SCS carrier bandwidth (NRB = %d).',bp,bwp(bp).NRB,bwp(bp).RBOffset,bwp(bp).SubcarrierSpacing,nrb);
    end
    
    % Create empty SCS carrier grid and assign in the BWP
    cgrid = zeros(12*nrb,size(bgrid,2),size(bgrid,3));
    cgrid(12*bwp(bp).RBOffset + (1:size(bgrid,1)),:,:) = bgrid;
    
    % Configure the general settings required by the modulation that are
    % specific to this BWP
    % Use the main input structure for this so that anything other
    % additional modulation specifics settings can be passed through
    % to the modulator
    waveconfig.NDLRB = nrb;
    waveconfig.CyclicPrefix = bwp(bp).CyclicPrefix;
    waveconfig.SubcarrierSpacing = bwp(bp).SubcarrierSpacing;
    waveconfig.NSymbol = 0;        % The waveform will always start at the 0th symbol in a slot/subframe/frame
    
        % Get dimensionality information derived from the parameters
        minfo = hOFDMInfo(waveconfig);
%     % Modulate the entire grid
%     [bwpwave,minfo] = hOFDMModulate(waveconfig,cgrid);
    
%     % Apply numerology dependent k0 offset, if required
%     k0 = (carrier.RBStart + carrier.NRB/2)*12 - (k0offset/(carrier.SubcarrierSpacing/15));
%     if k0~=0
%         t = (0:size(bwpwave,1)-1)' / minfo.SamplingRate;
%         bwpwave = bwpwave .* exp(1j*2*pi*k0*carrier.SubcarrierSpacing*1e3*t);
%     end
%     
%     % Add k0 value to the info
%     minfo.k0 = k0;
%     
%     % Resample to the maximum rate across all carriers, if required
%     if minfo.SamplingRate ~= maxsr
%         bwpwave = resample(bwpwave,maxsr,minfo.SamplingRate);
%     end
%     
%     % Combine this BWP with the rest of the waveform
%     waveform = waveform + bwpwave;
    
    % Capture the intermediate grids and modulation info
    gridset(bp).ResourceGridBWP = bgrid;
    gridset(bp).ResourceGridInCarrier = cgrid;
    gridset(bp).Info = minfo;
    
end

% % Display *subcarrier* resource grids
% if waveconfig.DisplayGrids
%     
%     % Create a new figure to display the subcarrier plots
%     figure;
%     plotCarriers(waveconfig,gridset);
%     
%     % Create a new figure to display the subcarrier plots
%     figure;
%     % Modulate all the BWP grids and combine all into a single baseband waveform matrix
%     for bp = 1:length(ResourceElementGrids)
%         % Plot the resource element grid (scaled complex magnitude)
%         subplot(length(ResourceElementGrids),1,bp)
%         image(40*abs(gridset(bp).ResourceGridInCarrier(:,:,1))); axis xy;
%         title(sprintf('BWP %d in Carrier (SCS=%dkHz)',bp,bwp(bp).SubcarrierSpacing)); xlabel('Symbols'); ylabel('Subcarriers');
%     end
% end

% Add SS burst sequence
% if ssburst.Enable
%     % The hSSBurst function creates a 5ms half frames of data and the waveform
%     % is parameterized in terms of 1ms subframes so we can work out how
%     % many complete instances are required, then generate and extract
%     % portion required in the output waveform
%     ssburst.SampleRate = maxsr;
%     ssburst.DisplayBurst = false;
%     ssburst.NCellID = waveconfig.NCellID;
%     
%     % Number of complete half frames required to cover the waveform
%     nhframes = ceil(waveconfig.NumSubframes/5);
%     
%     % Burst waveform variable
%     burstwaveform = [];
%     for i=0:nhframes-1
%         % Create the half frame sequences and concatenate
%         ssburst.NHalfFrame = mod(i,2);
%         ssburst.NFrame = i/2;
%         burstwaveform = [burstwaveform;hSSBurst(ssburst)]; %#ok<AGROW>
%     end
%     burstwaveform = db2mag(ssburst.Power)*burstwaveform;
%     
%     % Combine SS burst part with the rest of the waveform
%     waveform = waveform + burstwaveform(1:size(waveform,1),:);
% end

% End of main function
end


% Expand 'd' by amount 'e', with optional non-unity strides and exclusion
function expanded = expander(d,e,s,o,excl)
if nargin < 5
    excl = 0;
end
if nargin < 4
    o = 0;
end
if nargin < 3
    s = 1;
end
eseq = (o:s:e-1)';
if excl
    eseq = setdiff((0:e-1)',eseq);
end
expanded = reshape(reshape(d,1,[]) + eseq,1,[]);  % Use column expansion
end

% Expand 's' values with respect to period 'd', up to value 'nsf' (optionally accounting for the SCS)
function sp = expandbyperiod(s,p,nsf,scs)

if nargin > 3
    % Expand s by period p for ts length
    ts = nsf*1*fix(scs/15);
else
    ts = nsf;
end
% Is the period is empty then the pattern doesn't repeat, so doesn't need extending
if isempty(p)
    sp = s;
else
    sp = reshape(s(s<p),[],1)+p*(0:ceil(ts/max(p,1))-1);
end
sp = reshape(sp(sp < ts),1,[]);            % Trim any excess
end

% Turn sets of PRB/symbol subscripts into linear indices, supporting PRB cell arrays
function ind = reSub2Ind(nrb,prb,symbols)

% Use column expansion
if iscell(prb)
    ind = cell2mat(cellfun(@(x,y)reshape(reshape(x,[],1)+nrb*reshape(y,1,[]),1,[]),prb,num2cell(symbols),'UniformOutput',false));
else
    ind = reshape(reshape(prb,[],1) + nrb*reshape(symbols,1,[]),1,[]);
end

end

% Establish the number of symbols per slot from the cyclic prefix
function symbs = symbolsPerSlot(config)

if isstruct(config)
    config = config.CyclicPrefix;
end
cpoptions = {'Normal','Extended'};
symbs = sum(strcmpi(config,cpoptions) .* [14 12]);

end

% Map subcarriers/symbols from one numerology to another (source fs -> target ft)
function [mappedPRB,mappedSymbols] = mapNumerology(subcarriers,symbols,fs,ft) %#ok<DEFNU>

% Project the subcarrier indices into target PRB
mappedPRB = unique(fix(subcarriers*fs/(ft*12)),'stable');

if (ft < fs)
    % If ft/fs < 1, reduction
    mappedSymbols = unique(fix(symbols*ft/fs),'stable');
else
    % Else, repetition by ft/fs
    mappedSymbols = reshape((0:(ft/fs-1))' + symbols(:)'*ft/fs,1,[]);
end

end

% Check a set of named parameter index values against the length of the things
% that they index
function checkIndex(chname,chset,nch,varargin)
for p = 1:2:length(varargin)
    paramname = varargin{p};
    paramset = varargin{p+1};
    chindex = chset(nch).(paramname);
    plength = length(paramset);
    if (chindex < 1) || (chindex > plength)
        error('For %s %d, the %s index (%d) must be between 1 and the number of %s defined (%d)',chname,nch,paramname,chindex,paramname,plength);
    end
end
end

% Get the set of RB level resources in each SCS carrier that overlap
% with the SS burst
function [reserved, ssburst] = ssburstResources(ssburst,carriers)

% Get dependent SS block/burst parameters from the burst config
modinfo = hOFDMInfo(struct('NDLRB',275,'SubcarrierSpacing',240));
ssburst.SampleRate = modinfo.SamplingRate;  % This parameter is required by the burst info function
ssbinfo = hSSBurstInfo(ssburst);
ssburst.SubcarrierSpacing = ssbinfo.SubcarrierSpacing; % Write the SCS back into the config

% Create the output structure
patternnames = arrayfun(@(x,y)sprintf('SS burst resources (SCS=%d kHz) in SCS carrier %d (NRB=%d, SCS=%d kHz)',...
    ssburst.SubcarrierSpacing, x, y.NRB, y.SubcarrierSpacing),1:length(carriers),carriers,...
    'UniformOutput',false);
reserved = struct('Name',patternnames,'PRB',[],'Symbols',[],'Period',[]);

% If the burst is not active then return early
if ~ssburst.Enable
    return;
end

% Establish the maximum carrier SCS configured
% The centre of the overall waveform will be on k0 of this SCS carrier
carrierscs = [carriers.SubcarrierSpacing];
[maxcarrierscs,maxidx] = max(carrierscs); %#ok<ASGLU>

% Relative centre frequencies of first and last carriers of SS block
bnds = [-120 120-1]*ssburst.SubcarrierSpacing*1e3 + ssburst.FrequencySSB;
% Centre frequency of DC subcarrier of combined SCS waveform, relative to 'point A'
f0 = ((carriers(maxidx).RBStart + fix(carriers(maxidx).NRB/2))*12 + 6*mod(carriers(maxidx).NRB,2))*carriers(maxidx).SubcarrierSpacing*1e3;
% Relative centre frequencies of SS block edge carriers in waveform (max SCS carrier)
f = f0 + bnds;

% Calculate SCS carrier oriented RB indices
for i = 1:length(carriers)
    crb = fix(f/(12*carriers(i).SubcarrierSpacing*1e3)) - carriers(i).RBStart;
    reserved(i).PRB = crb(1):crb(2);
end

% Burst symbols in active half frame
symbols = reshape(ssbinfo.OccupiedSymbols',1,[])-1;
fs = ssburst.SubcarrierSpacing;     % 'Source' SCS

% Calculate SCS carrier oriented symbols indices
for i = 1:length(carriers)
    
    % Project the SS burst symbols into thhe SCS carrier
    ft = carriers(i).SubcarrierSpacing; % 'Target' SCS
    if (ft < fs)
        % If ft/fs < 1, reduction
        mappedSymbols = unique(fix(symbols*ft/fs),'stable');
    else
        % Else, repetition by ft/fs
        mappedSymbols = reshape((0:(ft/fs-1))' + symbols(:)'*ft/fs,1,[]);
    end
    reserved(i).Symbols = mappedSymbols;
    
    % Set the half frame periodicity, relative to the SCS carrier
    period = ssburst.SSBPeriodicity*ft/15; % Number of slots in SS burst period
    reserved(i).Period = period;
end

end

function plotCarriers(waveconfig,gridset)

if (isfield(waveconfig,'ChannelBandwidth'))
    cbw = waveconfig.ChannelBandwidth;
else
    cbw = [];
end

legends = {};
hold on;
ylimits = [-numel(gridset) numel(gridset)*2.5];
if (~isempty(cbw))
    plot([-cbw/2 -cbw/2],ylimits,'k--');
    legends = [legends 'Channel edges'];
end
xlabel('Frequency (MHz)');

carriers = waveconfig.Carriers;
[~,ix] = sort([carriers.SubcarrierSpacing]);
carriers = carriers(ix);

scsString = mat2str([carriers.SubcarrierSpacing]);
nrbString = mat2str([carriers.NRB]);
if (~isempty(cbw))
    titleStr = [num2str(cbw) ' MHz channel, '];
else
    titleStr = [];
end
title([titleStr 'SCS = ' scsString ', NRB = ' nrbString]);

blue = [0 0.447 0.741];
red = [0.850 0.325 0.098];
orange = [0.929 0.694 0.125];
green = [0.466 0.674 0.188];

bwpinfo = [gridset.Info];
bwpscs = [bwpinfo.SubcarrierSpacing];

for i = numel(carriers):-1:1
    
    NRB = carriers(i).NRB;
    SCS = carriers(i).SubcarrierSpacing;
    RBStart = carriers(i).RBStart;
    
    bwpidx = find(SCS == bwpscs,1);
    k0 = bwpinfo(bwpidx).k0;
    
    if (~isempty(cbw) && isfield(waveconfig,'FrequencyRange'))
        guardband = getGuardband(waveconfig.FrequencyRange,cbw,SCS);
    else
        guardband = [];
    end
    
    SCS = SCS / 1e3; % SCS now in MHz
    
    ypos = numel(carriers) - i;
    
    for rb = 0:(NRB-1)
        
        f = ((rb*12) + k0 - (NRB*12/2)) * SCS;
        r = rectangle('Position',[f ypos 12*SCS 1]);
        r.FaceColor = orange;
        
        if (rb==0)
            point_a = f - (RBStart*12*SCS);
        end
        
    end
    
    if (~isempty(guardband))
        plot(ones(1,2) * (-cbw/2 + guardband), ypos + [0 1],'Color',red,'LineWidth',2);
        legends = [legends 'Guardband edges']; %#ok<AGROW>
    end
    plot(ones(1,2) * point_a, ypos + [-0.2 1.2],'-..','Color',green,'LineWidth',2);
    legends = [legends 'Point A']; %#ok<AGROW>
    plot(ones(1,2) * k0 * SCS,ypos + [0.1 0.9],'Color',blue,'LineWidth',2);
    legends = [legends 'k_0']; %#ok<AGROW>
    
    if (i==numel(carriers))
        p = plot(ones(1,2) * k0 * SCS,ylimits,'k:');
        legends = [legends 'f_0']; %#ok<AGROW>
        p.Parent.YTick = [];
        lg = legend(legends);
        lg.AutoUpdate = 'off';
    end
    
    if (~isempty(guardband))
        plot(ones(1,2) * (cbw/2 - guardband), ypos + [0 1],'Color',red,'LineWidth',2);
    end
    
end

if (~isempty(cbw))
    plot([cbw/2 cbw/2],ylimits,'k--');
    p.Parent.XLim = [-cbw/2*1.1 cbw/2*1.1];
end
p.Parent.YLim = ylimits;

end

% TS 38.211 Section 5.3.3
% Minimum guardband and transmission bandwidth configuration
function guardband = getGuardband(fr,cbw,scs)

% Table 5.3.3-1: Minimum guardband [kHz] (FR1)
cbwFR1    = [    5     10    15     20     25     30     40     50     60     70     80     90    100];
guardsFR1 = [242.5  312.5 382.5  452.5  522.5  592.5  552.5  692.5    NaN    NaN    NaN    NaN    NaN; ...
    505.0  665.0 645.0  805.0  785.0  945.0  905.0 1045.0  825.0  965.0  925.0  885.0  845.0; ...
    NaN 1010.0 990.0 1330.0 1310.0 1290.0 1610.0 1570.0 1530.0 1490.0 1450.0 1410.0 1370.0];
scsFR1 = [15 30 60].';

% Table: 5.3.3-2: Minimum guardband [kHz] (FR2)
cbwFR2    = [  50  100  200  400];
guardsFR2 = [1210 2450 4930  NaN; ...
    1900 2420 4900 9860];
scsFR2 = [60 120].';

% return value in MHz
if (strcmpi(fr,'FR1'))
    guardband = guardsFR1(scsFR1==scs,cbwFR1==cbw) / 1e3;
else % FR2
    guardband = guardsFR2(scsFR2==scs,cbwFR2==cbw) / 1e3;
end

end

