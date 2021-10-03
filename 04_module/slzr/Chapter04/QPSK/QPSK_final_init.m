function SimParams = QPSK_final_init
% Set simulation parameters
% SimParams = sdruqpsktx_init

%   Copyright 2012-2013 The MathWorks, Inc.

% General simulation parameters
SimParams.Upsampling =4; % Upsampling factor for root raised cosine transmit filter
SimParams.Fs = 2e5; % Sample rate
SimParams.Ts = 1/SimParams.Fs; % Sample time
SimParams.PacketSize = 100; % Number of modulated symbols per packet

% Tx parameters
SimParams.BarkerLength = 13; % Number of Barker code symbols
SimParams.DataLength = (SimParams.PacketSize - SimParams.BarkerLength)*2; % Number of data payload bits per packet
SimParams.PreambleLength = (SimParams.BarkerLength *2); % Number of preamble bits per packet
SimParams.RCGroupDelay = 5; % Group delay for the root raised cosine receive filter


load ('Data4commQPSKTxHDL', 'data');
SimParams.data = data;
load ('Data4commQPSKTxHDL', 'preamble');
SimParams.preamble = preamble;
load ('Data4commQPSKTxHDL', 'rcRxFilt');
SimParams.rcRxFilt = rcRxFilt;
load ('Data4commQPSKTxHDL', 'rcTxFilt');
SimParams.rcTxFilt = rcTxFilt;


