function [offset,mag] = hTimingEstimate(waveform,NRB,SCS,initialNSlot,refInd,refSym,varargin)
%hTimingEstimate timing estimation
%   [OFFSET,MAG] = hTimingEstimate(...) performs timing estimation by
%   cross-correlating known reference signals with the input waveform.
%   OFFSET is a scalar indicating the estimated timing offset, an integer
%   number of samples relative to the first sample of the input waveform.
%   MAG is a matrix giving the estimated impulse response magnitude for
%   each antenna in the input waveform.
%
%   [OFFSET,MAG] = hTimingEstimate(WAVEFORM,NRB,SCS,INITIALNSLOT,REFIND,REFSYM)
%   performs timing estimation by correlating the input waveform WAVEFORM
%   with a reference waveform created by OFDM modulating a grid containing
%   the symbols given by REFSYM at the locations given by REFIND. The OFDM
%   modulation uses number of resource blocks NRB, subcarrier spacing SCS
%   and initial slot number INITIALNSLOT.
%
%   [OFFSET,MAG] = hTimingEstimate(...,CPLEN) allows the cyclic prefix
%   length to be specified. CPLEN must be 'normal' for normal cyclic prefix
%   length (default) or 'extended' for extended cyclic prefix length. Note
%   that for the numerologies specified in TS 38.211 Section 4.2, extended
%   cyclic prefix length is only applicable for 60 kHz subcarrier spacing.
%
%   Example:
%   % Create a resource grid containing the PSS and pass it through a TDL-C
%   % channel, and estimate the timing offset:
%
%   ncellid = 42;
%   pssInd = nrPSSIndices();
%   pssSym = nrPSS(ncellid);
%   txGrid = zeros([240 4]);
%   txGrid(pssInd) = pssSym;
%
%   gnb.NRB = 20;
%   gnb.SubcarrierSpacing = 15;
%   gnb.NSymbol = 0;
%   txWaveform = hOFDMModulate(gnb,txGrid);
%
%   channel = nrTDLChannel;
%   channel.DelayProfile = 'TDL-C';
%   rxWaveform = channel(txWaveform);
%   
%   ofdmInfo = hOFDMInfo(gnb);
%   nSlot = gnb.NSymbol / ofdmInfo.SymbolsPerSlot;
%   offset = hTimingEstimate(rxWaveform,gnb.NRB,gnb.SubcarrierSpacing,nSlot,pssInd,pssSym);
%
%   See also hOFDMInfo, hOFDMModulate.

%   Copyright 2018-2019 The MathWorks, Inc.
    
    narginchk(6,7);
    
    % Get optional inputs
    cplen = getOptionalInputs(varargin{:});
    
    % Get OFDM information
    gnb.NRB = NRB;
    gnb.SubcarrierSpacing = SCS;
    gnb.CyclicPrefix = cplen;
    ofdmInfo = hOFDMInfo(gnb);
    
    % Get the number of subcarriers K and OFDM symbols L from the OFDM 
    % information
    K = ofdmInfo.NSubcarriers;
    L = ofdmInfo.SymbolsPerSlot;
    
    % Get the number of layers, based on the range of the reference symbol
    % indices
    nlayers = ceil(max(double(refInd(:))/(K*L)));
    
    % Create an OFDM resource grid for the layers, map the reference 
    % symbols and perform OFDM modulation
    grid = zeros([K L nlayers]);
    grid(refInd) = refSym;
    gnb.NSymbol = initialNSlot * ofdmInfo.SymbolsPerSlot;
    ref = hOFDMModulate(gnb,grid);
    
    % Get the number of time samples T and receive antennas Nr in the 
    % waveform
    [T,Nr] = size(waveform);
    
    % Pad the input waveform if necessary to make it longer than the
    % correlation reference signal; this is required to normalize xcorr
    % behavior as it always pads the shorter input signal
    minlength = size(ref,1);
    if (T < minlength)
        waveform = [waveform; zeros([minlength-T Nr])];
        T = minlength;
    end
    
    % Create array 'mag' to store correlation magnitude for each time
    % sample, receive antenna and layer
    mag = zeros([T Nr nlayers]);
    
    % For each receive antenna
    for nr = 1:Nr
        
        % For each layer
        for nu = 1:nlayers
        
            % Correlate the given antenna of the received signal with the
            % given layer of the reference signal
            refcorr = xcorr(waveform(:,nr),ref(:,nu));
            mag(:,nr,nu) = abs(refcorr(T:end) * nlayers);
            
        end
        
    end
    
    % Sum the magnitudes of the layers
    mag = sum(mag,3);
    
    % Find timing peak in the sum of the magnitudes of the receive antennas
    [~,peakindex] = max(sum(mag,2));
    offset = peakindex - 1;
    
end

function cplen = getOptionalInputs(varargin)

    if (nargin==0)
        cplen = 'Normal';
    else
        cplen = varargin{1};
    end

end
