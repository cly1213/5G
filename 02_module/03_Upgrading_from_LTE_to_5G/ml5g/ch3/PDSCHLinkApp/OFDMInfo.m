function info = OFDMInfo(NRB,SCS,ECP)
%OFDMInfo OFDM modulation related information
%
%   Note: This is an internal undocumented function and its API and/or
%   functionality may change in subsequent releases.
%
%   INFO = OFDMInfo(NRB,SCS,ECP) provides dimensional information related
%   to OFDM modulation for number of resource blocks NRB (1...275),
%   subcarrier spacing SCS (15,30,60,120,24) and flag ECP indicating
%   extended (true) or normal (false) cyclic prefix length.

%   Copyright 2019 The MathWorks, Inc.

%#codegen

    % Subcarrier spacing configuration
    % TS 38.211 Section 4.3.2
    mu = log2(SCS / 15);
    
    % Total number of subcarriers in the resource grid
    % TS 38.211 Section 4.4.4.1
    K = NRB * 12;
    
    % Choose IDFT size based on three rules:
    %   * power of 2 size
    %   * maximum occupancy (K / Nfft) of 85%
    %   * minimum of 128 (so that cyclic prefix lengths are always integer)
    nfft = max(power(2,ceil(log2(K / 0.85))),128);
    
    % OFDM sample rate given by reference subcarrier spacing (15kHz),
    % subcarrier spacing configuration 'mu' and IDFT size 'Nfft'
    SR = 2^mu * 15e3 * nfft;
    
    % OFDM symbols per slot and per subframe
    % TS 38.211 Section 4.3.2
    if ECP
        symbolsPerSlot = 12;
    else
        symbolsPerSlot = 14;
    end
    L = symbolsPerSlot * 2^mu;
    
    % Nominal cyclic prefix lengths in LTE numerology (SCS=15kHz,Nfft=2048)
    % TS 38.211 Section 5.3.1
    if ECP
        NCP = 512;
    else
        NCP = 144;
    end
    
    % Adjust for IDFT size in use
    NCP = NCP / 2048 * nfft;
    
    % Create vector of cyclic prefix lengths across a subframe and adjust 
    % cyclic prefix lengths at start of each half subframe
    cpLengths = NCP * ones(1,L);
    cpLengths([1 1+L/2]) = (SR*1e-3 - (L*nfft + (L-2)*NCP)) / 2;
    
    info.K = K;
    info.Nfft = nfft;
    info.SampleRate = SR;
    info.SymbolsPerSlot = symbolsPerSlot;
    info.SymbolsPerSubframe = L;
    coder.varsize('info.CyclicPrefixLengths',[1 Inf],[0 1]);
    info.CyclicPrefixLengths = cpLengths;
    info.SlotsPerSubframe = 2^mu;
    
end
