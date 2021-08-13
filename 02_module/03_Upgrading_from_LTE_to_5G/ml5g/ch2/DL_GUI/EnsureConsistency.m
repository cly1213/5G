function handles = EnsureConsistency(handles)

% If Mapping type A, turn on Position First symbol parameter
MappingType = handles.Data.PDSCH.MappingType;
if strcmp(MappingType,'A')
    handles.widgets.hDL_DMRS_typeA_posText.Visible = 'on';
    handles.widgets.hDL_DMRS_typeA_pos.Visible = 'on';
%     handles.Data.DMRS.DL_DMRS_typeA_pos = 3;
%     handles.widgets.hDL_DMRS_typeA_pos.Value = 2;  % Set default: 2nd value (=3)
else
    % If PDSCH Mapping type B, disable position parameters
    handles.widgets.hDL_DMRS_typeA_posText.Visible = 'off';
    handles.widgets.hDL_DMRS_typeA_pos.Visible = 'off';
end

% If Mapping type A, turn on Position First symbol parameter
if strcmp(MappingType,'A')
    % Make sure PDSCH allocation starts no later than position 2 or 3
    AllocatedSymbols = str2num(handles.Data.PDSCH.AllocatedSymbols);
    minSymbol = min(AllocatedSymbols);
    firstDMRS = handles.Data.DMRS.DL_DMRS_typeA_pos;
    if (minSymbol > firstDMRS)
        fprintf('Extending symbol allocation down to %d\n', firstDMRS);
        AllocatedSymbols = [firstDMRS:minSymbol-1 AllocatedSymbols];
        handles.Data.PDSCH.AllocatedSymbols = formatPRB(AllocatedSymbols);
        handles.widgets.hPDSCHAllocatedSymbols.String = handles.Data.PDSCH.AllocatedSymbols;
    end
else
    % Make sure PDSCH is 2,4, or 7 long
    % not implemented
end

% Switch bandwidth range depending on SCS and infer max number of RBs for
% BWP
SCSConfig = handles.Data.gnb.SCSConfig;
switch(SCSConfig)
    case 15
        listBWs = {'5','10','15','20','25','30','40','50'};
        listNRBs = [25 52	79	106	133	160	216	270];
    case 30
        listBWs = {'5','10','15','20','25','30','40','50','60','80','90','100'};
        listNRBs = [11 24	38	51	65	78	106	133	162	217	245	273];
    case 60
        listBWs = {'10','15','20','25','30','40','50','60','80','90','100','200'};
        listNRBs = [11 18	24	31	38	51	65	79	107	121	135 264];
    case 120
        listBWs = {'50','100','200','400'};
        listNRBs = [32 66	132	264];
    otherwise
        listBWs = {'50','100','200','400'};
        listNRBs = [16 33 66 132];
end
if (handles.widgets.hCellBW.Value > numel(listBWs))
    handles.widgets.hCellBW.Value = 1;
end
handles.widgets.hCellBW.String = listBWs;
ChannelBandwidth = handles.widgets.hCellBW.String{handles.widgets.hCellBW.Value};
handles.Data.gnb.ChannelBandwidth = str2double(ChannelBandwidth);

% Maximum number of resource blocks
MaxNRB = listNRBs(handles.widgets.hCellBW.Value);
handles.widgets.hNRBText.String = sprintf('Nr Resource Blocks (<=%d-RBO)',MaxNRB);

% Ensure bandwidth part is smaller than BW
NRB = handles.Data.bwp.NRB;
if NRB + handles.Data.bwp.NRBOffset > MaxNRB
    % Reduce offset first
        handles.Data.bwp.NRBOffset = max(0,MaxNRB-NRB);
%     if handles.Data.bwp.NRBOffset > MaxNRB
%         handles.Data.bwp.NRBOffset = 0;
%         handles.Data.bwp.NRB = MaxNRB;
%     else
    % Then decrease NRB if needed once offset is down to 0
        handles.Data.bwp.NRB = MaxNRB-handles.Data.bwp.NRBOffset;
%     end
end
handles.Data.gnb.MaxNRB = MaxNRB;
handles.widgets.hNRB.String = num2str(handles.Data.bwp.NRB);
handles.widgets.hRBOffset.String = num2str(handles.Data.bwp.NRBOffset);

% Ensure PDSCH fits in BWP
NRB = handles.Data.bwp.NRB;
AllocatedPRBnum = str2num(handles.Data.PDSCH.AllocatedPRB);
MaxPRB = max(AllocatedPRBnum);
if MaxPRB > NRB - 1
    % remove all values above NRB-1
    AllocatedPRBnum(AllocatedPRBnum>NRB-1) = [];
    if isempty(AllocatedPRBnum)
        AllocatedPRBnum = 0;   % assign at least 1
    end
    formattedPRB = formatPRB(AllocatedPRBnum);
    handles.Data.PDSCH.AllocatedPRB = formattedPRB;
    handles.widgets.hPDSCHAllocatedPRB.String = formattedPRB;
end

function formattedPRB = formatPRB(PRB)
% This function formats a vector of numbers into a string with ranges
% For example: 0 1 2 5 6  => [0:2 5:6]
if numel(PRB) == 1
    formattedPRB = sprintf('%d',PRB);
else   
    diffPRB = diff(PRB);
    sep = find(diffPRB > 1);
    if isempty(sep)
        formattedPRB = sprintf('[%d:%d]',PRB(1), PRB(end));
    else
        previousSep = 0;
        formattedPRB = sprintf('[%d',PRB(1));
        for ii=1:numel(sep)
            if sep(ii) == previousSep + 1  % new value is next
                formattedPRB = sprintf('%s %d',formattedPRB,PRB(1+sep(ii)));
            else
                formattedPRB = sprintf('%s:%d %d',formattedPRB,PRB(sep(ii)),PRB(1+sep(ii)));
            end
            previousSep = sep(ii);
        end
        if sep(end) == numel(PRB)-1  % Last value is standalone
        else
            formattedPRB = sprintf('%s:%d',formattedPRB,PRB(end));
        end
        formattedPRB = sprintf('%s]',formattedPRB);
        
    end
end
        
return



PDSCH = handles.Data.PDSCH;
gnb = handles.Data.gnb;
message = '';

% Check PRBSet is valid
PRBSet = str2num(PDSCH.PRBSet);
if (min(PRBSet) < 0) || (max(PRBSet) > gnb.NDLRB-1)
    message = 'Invalid PRBSet, Changing it to full assignment';
    PDSCH.PRBSet = sprintf('(0:%d)''',gnb.NDLRB-1);
end

% Different decisions depending on the transmission scheme
switch PDSCH.TxScheme
    case 'Port0'
        % Enforce NCodeWords = 1
        [handles,message] = EnforceNCodeWords(handles,message);
        % Enforce Nlayers = 1
        [PDSCH,message] = EnforceNLayers1(PDSCH,message);  
        % Check that CellRefP is 1 if transmission scheme is 'Port0'
        if gnb.CellRefP ~= 1
            gnb.CellRefP = 1;
            message = sprintf('%sCellRefP must be 1 for ''Port0'' transmission\nChanging it to 1\n', ...
                message);
        end
        
    case 'Port5'
        % Enforce NCodeWords = 1
        [handles,message] = EnforceNCodeWords(handles,message);
        % Enforce Nlayers = 1
        [PDSCH,message] = EnforceNLayers1(PDSCH,message); 
        % Activate W, NTxAnts, DMRS
        handles = ActivateWNTxAntsDRMS(handles);
        
    case 'Port7-8'
        % Enforce Nlayers = 1 or 2
        if (PDSCH.NLayers > 2)
            PDSCH.NLayers = 1;
            message = sprintf('%sNLayers must be 1 or 2 for ''Port7-8'' transmission\nChanging it to 1\n', ...
                message);
        end
        % Activate W, NTxAnts, DMRS
        handles = ActivateWNTxAntsDRMS(handles);
        
    case 'Port8'
        % Enforce NCodeWords = 1
        [handles,message] = EnforceNCodeWords(handles,message);
        % Enforce Nlayers = 1
        [PDSCH,message] = EnforceNLayers1(PDSCH,message); 
        % Activate W, NTxAnts, DMRS
        handles = ActivateWNTxAntsDRMS(handles);
        
    case 'Port7-14'
        % Activate W, NTxAnts, DMRS
        handles = ActivateWNTxAntsDRMS(handles);
        % Activate CSIRefP,CSIRSConfig, and CSIRSPeriod
        handles.gnb.Active.CSIRefP = 1;
        handles.gnb.Active.CSIRSConfig = 1;
        handles.gnb.Active.CSIRSPeriod = 1;
        % NCodeWords must be > 1 if NLayers > 4
        if handles.Data.params.NCodeWords == 1 && (PDSCH.NLayers > 4)
            message = sprintf('%sNCodeWords must be 2 for ''Port7-14'' with more than 4 layers\nChanging it to 2\n', ...
                message);
            handles.Data.params.NCodeWords = 2;
        end
% %         % ZeroPowerCSIRSPeriod is active if CSIRSPeriod is anything other
% %         % than 'off'
% %         if ~strcmp(gnb.CSIRSPeriod,'off')
% %             handles.gnb.Active.ZeroPowerCSIRSPeriod = 1;
% %         end


    case 'TxDiversity'
        % Enforce NCodeWords = 1
        [handles,message] = EnforceNCodeWords(handles,message);
        % Enforce CellRefP = 2 or 4
        [gnb,message] = EnforceMultiAntenna(PDSCH,gnb,message);
        % Enforce NLayers > 1
        [PDSCH,message] = EnforceMultiLayers(PDSCH,message)
        % Enforce NLayers <= CellRefP
        [PDSCH,message] = EnforceNLayersCellRefP(PDSCH,gnb,message);
       
    case 'SpatialMux'
        % Enforce CellRefP = 2 or 4
        [gnb,message] = EnforceMultiAntenna(PDSCH,gnb,message);
        % Enforce NLayers <= CellRefP
        [PDSCH,message] = EnforceNLayersCellRefP(PDSCH,gnb,message);
        % PMISet is necessary
        handles.PDSCH.Active.PMISet = 1;

    case 'MultiUser'
        % Enforce NLayers <= CellRefP
        [PDSCH,message] = EnforceNLayersCellRefP(PDSCH,gnb,message);
        % PMISet is necessary
        handles.PDSCH.Active.PMISet = 1;

    case 'CDD'
        % Enforce CellRefP = 2 or 4
        [gnb,message] = EnforceMultiAntenna(PDSCH,gnb,message);
        % Enforce NLayers > 1
        [PDSCH,message] = EnforceMultiLayers(PDSCH,message);
        % Enforce NLayers <= CellRefP
        [PDSCH,message] = EnforceNLayersCellRefP(PDSCH,gnb,message);
end

% Enforce NCodeWords = 1 if NLayers = 1
if handles.Data.params.NCodeWords == 2 && (PDSCH.NLayers == 1)
    message = sprintf('%sNCodeWords must be 1 when NLayers=1\nChanging it to 1\n', ...
        message);
    handles.Data.params.NCodeWords = 1;
end

% For MultiUser, NCodeWords = 1 and NLayers <= 2
if strcmp(PDSCH.TxScheme,'MultiUser')
    if ~handles.Data.params.NCodeWords == 1
        handles.Data.params.NCodeWords = 1;
        % Display message
        message = sprintf('%sFor MultiUser, NCodewords must be 1\nChanging NCodeWords to 1\n', ...
            message);
    end
    if (PDSCH.NLayers > 2)
        PDSCH.NLayers = 2;
        % Display message
        message = sprintf('%sFor MultiUser, NLayers must be <=2\nChanging it to 2\n', ...
            message);
    end
end

% If TxScheme is 'SpatialMux', 'CDD', Can map 1 codeword to 2
% layers only if CellRefP = 4
% What we want to enforce: 
% If NCodeWords = 1, NLayers can be 1 or 2. It can be 2 only when CellRefP
% is 4
% If NCodeWords = 2, NLayers can be 2,3, or 4
if ismember(PDSCH.TxScheme,{'SpatialMux','CDD'})
    if handles.Data.params.NCodeWords == 1
        
        if (PDSCH.NLayers == 2)
            if gnb.CellRefP ~= 4
                handles.Data.params.NCodeWords = 2;
                % Display message
                message = sprintf('%sFor SpatialMux, CDD and MultiUser, single codeword to 2 layers requires CellRefP=4\nChanging NCodeWords to 2\n', ...
                    message);
            end
        elseif (PDSCH.NLayers > 2)
            handles.Data.params.NCodeWords = '2';
            % Display message
            message = sprintf('%sFor SpatialMux, CDD and MultiUser, NLayers > 2 requires two codewords\nChanging NCodeWords to 2\n', ...
                message);
        end
    else % NCodeWords is '2'
        % We know that we have NLayers > 1 (otherwise NCodeWords would not
        % be 1 as per earlier test
        % Besides, we have already enforced NLayers <= CellRefP. So, we
        % should be good
    end
end
% fprintf('%s\n', message);
handles.widgets.hCheckInfo.String = message;

if (handles.Data.params.NCodeWords == 2) && (numel(PDSCH.Modulation) == 1)
    PDSCH.Modulation = {PDSCH.Modulation PDSCH.Modulation};
end

% Copy modified values back to main structure
handles.Data.PDSCH = PDSCH;
handles.Data.gnb = gnb;

% Copy parameters that may have been modified back to GUI
handles.widgets.hCellRefP.Value = updateValueList(handles.widgets.hCellRefP,gnb.CellRefP);
handles.widgets.hNrLayers.String = num2str(PDSCH.NLayers);
handles.widgets.hNCodeWords.String = num2str(handles.Data.params.NCodeWords);
handles.widgets.hPRBSet.String = PDSCH.PRBSet;

function Value = updateValueList(h, NewValue)
    list = h.String;
    Value = find(ismember(list,num2str(NewValue)));
        

function [handles,message] = EnforceNCodeWords(handles,message)
    % Enforce NCodeWords = 1
    if handles.Data.params.NCodeWords == 2
        message = sprintf('%sNCodeWords must be 1 for ''%s''\nChanging it to 1\n', ...
            message, handles.Data.PDSCH.TxScheme);
        handles.Data.params.NCodeWords = 1;
        if isfield(handles.Data.PDSCH,'Modulation') && ...
                iscell(handles.Data.PDSCH.Modulation) && numel(handles.Data.PDSCH.Modulation) 
            handles.Data.PDSCH.Modulation = handles.Data.PDSCH.Modulation(1);
        end
    end

 function [PDSCH,message] = EnforceNLayers1(PDSCH,message)
     % Enforce NLayers = 1
     if (PDSCH.NLayers ~= 1)
         message = sprintf('%sNLayers must be 1 for ''%s'' transmission\nChanging it to 1\n', ...
             message, PDSCH.TxScheme);
         PDSCH.NLayers = 1;
     end

 function [PDSCH,message] = EnforceNLayersCellRefP(PDSCH,gnb,message)
     % Enforce NLayers <= CellRefP
     if (PDSCH.NLayers > gnb.CellRefP)
         message = sprintf('%sNLayers cannot be > CellRefP\nChanging it from %d to %d\n', ...
             message,PDSCH.NLayers,gnb.CellRefP);
         % Set NLayers to CellRefP
         PDSCH.NLayers = gnb.CellRefP;
     end

function [gnb,message] = EnforceMultiAntenna(PDSCH,gnb,message)
    % Check that number of antenna ports is 2 or 4 for Tx diversity and
    % SpatialMux
    if gnb.CellRefP ~= 2 &&  gnb.CellRefP ~= 4
        % Set CellRefP to 2
        gnb.CellRefP = 2;
        % Display message
        message = sprintf('%sCellRefP must be 2 or 4 for ''%s'' transmission\nChanging it to 2\n', ...
            message, PDSCH.TxScheme);
    end

function [PDSCH,message] = EnforceMultiLayers(PDSCH,message)
    % Check that nr of layers is > 1
    if PDSCH.NLayers == 1
        % Set NLayers to 2
        PDSCH.NLayers = 2;
        % Display message
        message = sprintf('%sNrLayers must be > 1 for ''%s'' transmission\nChanging it to 2\n', ...
            message, PDSCH.TxScheme);
    end

    
function handles = ActivateWNTxAntsDRMS(handles)
%     % W and NTxAnts are only needed (active) if TxScheme is 'Port5', 'Port7-8', 'Port8', or 'Port7-14'
%     handles.PDSCH.Active.W = 1;
%     handles.PDSCH.Active.NTxAnts = 1;
%     % Enable code generation for DMRS
%     handles.ChannelsRequested.DMRS = 1;
%     set(handles.Widgets.hDMRS,'Value',1);
