function [H,nVar] = hChannelEstimatePDSCH(gnb,chs,grid,varargin)
%hChannelEstimatePDSCH channel estimation using PDSCH DM-RS
%   [H,NVAR] = hChannelEstimatePDSCH(GNB,CHS,GRID) performs channel
%   estimation using the PDSCH DM-RS, returning channel estimate H and
%   noise variance estimate NVAR. Channel estimation is performed on the
%   resource grid GRID with number of resource blocks, subcarrier spacing
%   and cyclic prefix length given by cell-wide settings structure GNB. The
%   PDSCH DM-RS is created by hPDSCHResources using GNB and the
%   PDSCH-specific structure CHS. See hPDSCHResources for more information.
%
%   Example:
%   % Create a waveform containing the PDSCH DM-RS and pass it through a 
%   % TDL-C channel. Estimate the channel response and compare it with the
%   % perfect channel estimator.
%
%   gnb.NRB = 51;
%   gnb.SubcarrierSpacing = 30;
%   gnb.CyclicPrefix = 'Normal';
%
%   pdsch.PDSCHMappingType = 'A';
%   pdsch.DMRSTypeAPosition = 2;
%   pdsch.DMRSLength = 2;
%   pdsch.DMRSAdditionalPosition = 1;
%   pdsch.DMRSConfigurationType = 1;
%   pdsch.NLayers = 4;
%   pdsch.DMRSType = 1;
%   pdsch.PRBSet = 0:21;
%   pdsch.Modulation = '64QAM';
%   pdsch.NIDNSCID = 1;
%   pdsch.NSCID = 1;
%   pdsch.PortSet = [0 1 3 4];
%   pdsch.NSlot = 0;
%
%   [~,dmrsind,dmrs] = hPDSCHResources(gnb,pdsch);
%   slotGrid = zeros(12*gnb.NRB,14,length(pdsch.PortSet));
%   slotGrid(dmrsind) = dmrs;
%   txWaveform = hOFDMModulate(gnb,slotGrid);
%
%   channel = nrTDLChannel;
%   channel.NumTransmitAntennas = pdsch.NLayers;
%   channel.DelayProfile = 'TDL-C';
%   chInfo = info(channel);
%   maxChDelay = ceil(max(chInfo.PathDelays*channel.SampleRate)) + chInfo.ChannelFilterDelay;
%   txWaveform = [txWaveform; zeros(maxChDelay,size(txWaveform,2))];
%   [rxWaveform,pathGains] = channel(txWaveform);
%
%   offset = hTimingEstimatePDSCH(gnb,pdsch,rxWaveform);
%   rxWaveform = rxWaveform(1+offset:end,:);
%   rxGrid = hOFDMDemodulate(gnb,rxWaveform);
%   H = hChannelEstimatePDSCH(gnb,pdsch,rxGrid);
%
%   pathFilters = getPathFilters(channel);
%   H_ideal = nrPerfectChannelEstimate(pathGains,pathFilters,gnb.NRB,gnb.SubcarrierSpacing,pdsch.NSlot,offset);
%   figure;
%   plot(abs(H_ideal(:,1,1,1)),'ko');
%   hold on;
%   plot(abs(H(:,1,1,1)),'rx-');
%
%   See also hChannelEstimate, hPDSCHResources.

%   Copyright 2018-2019 The MathWorks, Inc.

    narginchk(3,4);
    
    % Create PDSCH DM-RS indices and symbols
    [~,refIndices,refSymbols] = hPDSCHResources(gnb,chs);
    
    % Determine CDM despreading required during channel estimation
    cdmType = getCDMType(chs);
    
    % Perform channel estimation
    %[H,nVar] = hChannelEstimate(grid,gnb.NRB,gnb.SubcarrierSpacing,refIndices,refSymbols,gnb.CyclicPrefix,cdmType,varargin{:});
    [H,nVar] = hChannelEstimate(grid,refIndices,refSymbols);%,'CyclicPrefix',gnb.CyclicPrefix,'CDMLengths',cdmType,varargin{:});

end

function cdmType = getCDMType(chs)
    
    if (chs.DMRSConfigurationType==1)
        
        % TS 38.211 Table 7.4.1.1.2-1
        lambda = [0 0 1 1 0 0 1 1];
        coverk = [0 1 0 1 0 1 0 1];
        coverl = [0 0 0 0 1 1 1 1];
        
    else % chs.DMRSConfigurationType==2
        
        % TS 38.211 Table 7.4.1.1.2-2
        lambda = [0 0 2 2 4 4 0 0 2 2 4 4];
        coverk = [0 1 0 1 0 1 0 1 0 1 0 1];
        coverl = [0 0 0 0 0 0 1 1 1 1 1 1];
        
    end
    
    cdmType = [0 0];
    
    if isfield(chs,'PortSet')
        ports = reshape(chs.PortSet,1,[]);
    else
        ports = 0:chs.NLayers-1;
    end
    
    ncoversfn = @(covers,lambda)arrayfun(@(x)numel(unique(covers(lambda==x))),unique(lambda));
    
    lambda = lambda(ports+1);
    
    coverk = coverk(ports+1);
    nk = ncoversfn(coverk,lambda);
    if (any(nk>1))
        cdmType(1) = 2;
    end
    
    % TD-CDM is only applicable for double-symbol DMRS
    if (chs.DMRSLength==2)
        
        coverl = coverl(ports+1);
        nl = ncoversfn(coverl,lambda);
        if (any(nl>1))
            cdmType(2) = 2;
        end
    
    end
    
end
