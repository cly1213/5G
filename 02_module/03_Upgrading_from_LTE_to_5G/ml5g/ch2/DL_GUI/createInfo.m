function handles = createInfo(handles)
handles = EnsureConsistency(handles);
% codeGeneration(handles);  % This creates the file called "tbd"
generateCode(handles);  % This creates the file called "tbd"
[waveconfig,bwpset,txInfo] = tbd();
Visualize(waveconfig,bwpset,txInfo,handles.widgets.hPlot)

return
try
    gnb = handles.Data.gnb;
    PDSCH = handles.Data.PDSCH;
    gnb.PDSCH = PDSCH;
    PRBSet = str2num(PDSCH.PRBSet);
    ncw = handles.Data.params.NCodeWords;
    
    LeadingSpaces = repmat(' ',1,4);
    
    % Compute information and display it in info
    if strcmp(handles.Data.params.TBSMethod,'MCS')
        [itbs,Modulation]=lteMCS(handles.Data.params.MCS);
        handles.widgets.hParamInfo.ColumnName = {'TrBlkSizes' 'Code Rate' 'Modulation' };
        
        if ncw == 1
            NrLayers = PDSCH.NLayers;
        else
            NrLayers = [floor(PDSCH.NLayers/2) ceil(PDSCH.NLayers/2)];
        end
        
        if strcmp(gnb.DuplexMode,'FDD')
            nprb = size(str2num(PDSCH.PRBSet),1);
            % Data is data displayed. Has 3 columns per codeword:
            % [ TBS CodeRate Modulation ]
            Data = cell(10,3*ncw);
            for cw=1:ncw
                PDSCH.TrBlkSizes = lteTBS(nprb,itbs,NrLayers(cw));
                TBS = num2str(PDSCH.TrBlkSizes);
                TBSstring = sprintf('%s%s',LeadingSpaces,TBS);
                % Compute code rate and assign it to 3rd column
                for sf = 0:9
                    cr = ComputeCodeRate(gnb,PDSCH,sf,NrLayers(cw));
                    Data(sf+1,3*cw-1) = {cr};
                end
                if ~(handles.Data.params.subframe5)
                    Data(:,3*cw-2) = {TBSstring};
                    Data{5+1,3*cw-2} = sprintf('%s%s',LeadingSpaces,'0');
                    Data{5+1,3*cw-1} = '';
                    Data{1,3} = [LeadingSpaces Modulation];
                    handles.widgets.hParamInfo.Data = Data;
                else
                    Data(:,3*cw-2) = { TBSstring };
                    Data(1,3) = { sprintf('%s%s',LeadingSpaces,Modulation)};
                    handles.widgets.hParamInfo.Data = Data;
                end
            end
        else % TDD
            % Need to compute each sf separately because of UL and special
            % subframes
            % Data is data displayed. Has 3 columns per codeword:
            % [ TBS CodeRate Modulation ]
            Data = cell(10,3*ncw);
            for cw=1:ncw
                for sf = 0:9
                    % Compute nprb including special computation for special
                    % subframes
                    [nprb,SubframeType] = computeNRPB(PDSCH,gnb,sf);
                    if strcmp(SubframeType,'Uplink')
                        % Set TBS to 0 for uplink
                        TBSstring = sprintf('%s0',LeadingSpaces);
                        Data(sf+1,3*cw-2) = {TBSstring};
                        cr = '';
                    else
                        % Use computed nprb to get TBS
                        PDSCH.TrBlkSizes = lteTBS(nprb,itbs);
                        TBS = num2str(PDSCH.TrBlkSizes);
                        TBSstring = sprintf('%s%s',LeadingSpaces,TBS);
                        Data(sf+1,3*cw-2) = {TBSstring};
                        
                        cr = ComputeCodeRate(gnb,PDSCH,sf,NrLayers(cw));
                    end
                    Data{sf+1,3*cw-1} = cr;
                    
                end
                % Set TBS manually to 0 if no PDSCH in subframe 5
                if ~(handles.Data.params.subframe5)
                    Data{5+1,3*cw-2} = sprintf('%s0',LeadingSpaces);
                end
                
                Data{1,3*cw} = [LeadingSpaces Modulation];
            end
            
            handles.widgets.hParamInfo.Data = Data;
            
        end
        
    elseif strcmp(handles.Data.params.TBSMethod,'CodeRate and Modulation')
        
        enbfull = gnb;
        TBS = zeros(ncw,10);
        Data = cell(10,3*ncw);  % 3 columns per codeword
        % Fill out TBS based on lteRMCDL and assign them to table
        for nSubframe = 0:9
            enbfull.nSubframe = nSubframe;
            enbfull.PDSCH.PRBSet = PRBSet;
            if isfield(enbfull.PDSCH,'TrBlkSizes')
                enbfull.PDSCH = rmfield(enbfull.PDSCH,'TrBlkSizes');
            end
            enbfull = lteRMCDL(enbfull,ncw);
            
            for cw = 1:ncw
                TBS(cw,nSubframe+1) = enbfull.PDSCH.TrBlkSizes(cw,nSubframe+1);
                % Display value as string w/ leading spaces for alignment
                Data{nSubframe+1,1+3*(cw-1)} = sprintf('%s%s',LeadingSpaces,num2str(TBS(cw,nSubframe+1)));
            end
        end
        
        % Get modulation as single string for switch statement
        % Only supports same modulation for both codewords
        if ~iscell(PDSCH.Modulation)
            Modulation = PDSCH.Modulation;
        else
            Modulation = PDSCH.Modulation{1};
        end
        
        % Determine the MCS for each TBS
        for sf = 0:9
            NrLayers = floor(PDSCH.NLayers/2);
            if cw == 2
                NrLayers = [floor(PDSCH.NLayers/2) ceil(PDSCH.NLayers/2)];
            end
            for cw = 1:ncw
                TBSize = TBS(cw,sf+1);
                
                nprb = computeNRPB(PDSCH,gnb,sf);
                ind= find(lteTBS(nprb,0:26,NrLayers(cw)) == TBSize);
                iTBS = ind-1;
                switch Modulation
                    case 'QPSK'
                        iMCS = iTBS;
                    case '16QAM'
                        iMCS = iTBS+1;
                    otherwise % case '64QAM'
                        iMCS = iTBS+2;
                end
                Data{sf+1,3*cw-1} = sprintf('%s%s',LeadingSpaces,num2str(iMCS));
                % Add code rate
                Data(sf+1,3*cw) = {enbfull.PDSCH.ActualCodeRate(cw,sf+1)};
            end
        end
        
        % Set value manually to 0 & empty for subframe 5
        if ~(handles.Data.params.subframe5)
            for cw = 1:ncw
                Data{5+1,3*cw-2} = sprintf('%s%s',LeadingSpaces,'0');
                Data{5+1,3*cw-1} = sprintf('%s%s',LeadingSpaces,'');
                Data{5+1,3*cw} = sprintf('%s%s',LeadingSpaces,'');
            end
        end
        
        if ncw == 1
            handles.widgets.hParamInfo.ColumnName = {'TrBlkSizes' 'MCS' 'Code Rate'};
        else
            handles.widgets.hParamInfo.ColumnName = {'TrBlkSizes1' 'MCS1' 'Code Rate' 'TrBlkSizes2' 'MCS2' 'Code Rate'};
        end
        handles.widgets.hParamInfo.Data = Data;
        
    else   % TBS
        % Compute code rate
        Data = cell(10,2);
        enbfull = gnb;
        enbfull.PDSCH.PRBSet = PRBSet;
        enbfull.CFI = 2;
        enbfull = lteRMCDL(enbfull,handles.Data.params.NCodeWords);
        for ii = 1:10
            TBS = double(handles.Data.PDSCH.TrBlkSizes(ii));
            coded = enbfull.PDSCH.CodedTrBlkSizes(ii);
            if ~coded || ((ii==6) && ~(handles.Data.params.subframe5))
                cr = 'N/A';
            else
                cr = TBS/coded;
                cr = sprintf('%.3f', cr);
            end
            Data{ii} = cr;
        end
        handles.widgets.hParamInfo.ColumnName = {'Code rate'};
        handles.widgets.hParamInfo.Data = Data;
        
    end
    
catch
    % Something went wrong, maybe because parameters are not consistent
    handles.widgets.hParamInfo.ColumnName = {'' ''};
    handles.widgets.hParamInfo.Data = {'Pending...'};
    
end

function [nprb,SubframeType] = computeNRPB(PDSCH,gnb,sf)
% Handle special subframes differently
nprb = size(str2num(PDSCH.PRBSet),1);
SubframeType = 'Downlink';
if strcmp(gnb.DuplexMode,'TDD')
    enbTDD = gnb;
    enbTDD.NSubframe = sf;
    %     enbTDD.SSC = 1;  % for now
    enbTDD.CyclicPrefix = 'Normal';  % for now
    duplexInfo = lteDuplexingInfo(enbTDD);
    if strcmp(duplexInfo.SubframeType,'Special')
        if (nprb>0)
            % Apply rules in 36.213 Section 7.1.7 for selecting the TB Size
            if ((enbTDD.SSC == 9) && strcmpi(enbTDD.CyclicPrefix,'Normal')) || ((enbTDD.SSC == 7) && strcmpi(enbTDD.CyclicPrefix,'Extended'))
                nprb = max(floor(nprb*0.375),1);
            else
                nprb = max(floor(nprb*0.75),1);
            end
        end
        
    end
    SubframeType = duplexInfo.SubframeType;
end

function cr = ComputeCodeRate(gnb,PDSCH,sf,NrLayers)
% Compute code rate
% This may need some adjustment for 2 codewords
gnb.CFI = 2;
gnb.NSubframe = sf;
[~,info] = ltePDSCHIndices(gnb,gnb.PDSCH,str2num(PDSCH.PRBSet));
codedTbSize = double(transpose(info.G));

if PDSCH.TrBlkSizes == 0
    cr = 'N/A';
else
    cr = double(PDSCH.TrBlkSizes)*NrLayers/codedTbSize;
    cr = sprintf('%.3f', cr);
end

