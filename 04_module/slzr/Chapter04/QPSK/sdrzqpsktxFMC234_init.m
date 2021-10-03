function SimParams = sdrzqpsktxFMC234_init
% Set simulation parameters

%   Copyright 2014-2015 The MathWorks, Inc.

%SDR TX parameters
%SimParams.RadioFrontEndSampleRate = 245.760e3;
SimParams.Fs = 2e6;  %baseband sampling rate at QPSK transmitter output (ie. entering AD9361 TX prior to DUC) = 2 samples/QPSL symbol
SimParams.Ts = 1 / SimParams.Fs;
SimParams.RadioChannelMapping = 1;

% General simulation parameters
SimParams.Upsampling = 4; % Samples/symbol in TX RRC filter 
SimParams.Samples_per_symbol = 4; % Samples/symbol in TX RRC filter 
SimParams.Symbolrate = SimParams.Fs/SimParams.Samples_per_symbol; % in symbols/sec
SimParams.Datarate = SimParams.Symbolrate * 2; % QPSK = 2 bits/symbol

SimParams.FrameSize = 100; % Number of symbols per frame
%SimParams.FrameTime = SimParams.Ts * SimParams.FrameSize * SimParams.Upsampling;
SimParams.FrameTime = SimParams.FrameSize / SimParams.Symbolrate;
% Tx parameters
SimParams.BarkerLength = 13; % Number of Barker code symbols
SimParams.DataLength = (SimParams.FrameSize - SimParams.BarkerLength)*2; % Number of data payload bits per frame
SimParams.MsgLength = 105; % Number of message bits per frame, 7 ASCII characters

SimParams.RxBufferedFrames = 10; % Received buffer length (in frames)
SimParams.RCFiltSpan = 10; % Group delay of Raised Cosine Tx Rx filters (in symbols)

