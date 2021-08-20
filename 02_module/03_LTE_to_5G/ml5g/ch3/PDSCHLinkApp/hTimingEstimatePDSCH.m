function [offset,mag] = hTimingEstimatePDSCH(gnb,chs,waveform)
%hTimingEstimatePDSCH timing estimation using PDSCH DM-RS
%   [OFFSET,MAG] = hTimingEstimatePDSCH(GNB,CHS,WAVEFORM) performs timing
%   estimation using the PDSCH DM-RS. OFFSET is a scalar indicating the
%   estimated timing offset, an integer number of samples relative to the
%   first sample of the input waveform WAVEFORM. MAG is a matrix giving the
%   estimated impulse response magnitude for each antenna of WAVEFORM.
%   
%   Timing estimation is performed by correlating WAVEFORM with a reference
%   waveform created by OFDM modulating the PDSCH DM-RS. OFDM modulation is
%   performed according to the cell-wide settings in structure GNB, and the
%   PDSCH DM-RS is created by hPDSCHResources using GNB and the
%   PDSCH-specific structure CHS. See hPDSCHResources for more information.
%
%   Example:
%   % Create a waveform containing the PDSCH DM-RS, pass it through a TDL-C
%   % channel, and estimate the timing offset:
%
%   gnb.NRB = 51;
%   gnb.SubcarrierSpacing = 30;
%   gnb.CyclicPrefix = 'Normal';
%
%   pdsch.PDSCHMappingType = 'A';
%   pdsch.DMRSTypeAPosition = 2;
%   pdsch.DMRSLength = 2;
%   pdsch.DMRSAdditionalPosition = 1;
%   pdsch.NLayers = 2;
%   pdsch.DMRSConfigurationType = 1;
%   pdsch.PRBSet = 0:21;
%   pdsch.Modulation = '64QAM';
%   pdsch.NIDNSCID = 1;
%   pdsch.NSCID = 1;
%   pdsch.PortSet = 0:(pdsch.NLayers-1);
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
%   rxWaveform = channel(txWaveform);
%
%   offset = hTimingEstimatePDSCH(gnb,pdsch,rxWaveform);
%
%   See also hTimingEstimate, hPDSCHResources.

%   Copyright 2018-2019 The MathWorks, Inc.

    narginchk(3,3);
    
    % Create PDSCH DM-RS indices and symbols
    [~,refIndices,refSymbols] = hPDSCHResources(gnb,chs);
    
    % Perform timing estimation
    [offset,mag] = hTimingEstimate(waveform,gnb.NRB,gnb.SubcarrierSpacing,chs.NSlot,refIndices,refSymbols,gnb.CyclicPrefix);

end
