%% Section 1: Transmitter System Object
tx = sdrtx('ADI RF SOM');
tx.CenterFrequency = 5e9;
tx.BasebandSampleRate = 32e6;
tx.Gain = 0;
tx.ChannelMapping = 1;
tx.ShowAdvancedProperties = true;
tx.BypassUserLogic = true;
tx.EnableBurstMode = 1;
tx.NumFramesInBurst = 20;
%tx.ChannelMapping = [1,2]; % For enabling both channels
%tx.Gain = [-10,0]; % For individual gains for both channels.
%% Section 2: Transmitter Methods
methods(tx)
%% Section 3: Define data
t = 0:1/tx.BasebandSampleRate:0.5-1/tx.BasebandSampleRate;
x = exp(1i * 2 * pi * 200e3 * t');
transmitRepeat(tx,x);
% length(x) = 16000000
% Transmitter rate = 16000000 * 32 bits = 512Mbps
% one complex sample is 4 bytes. For 0.5 sec worth data 
% data is 61.0352 MB.  Radio I/O can use upto 64MB of DDR3
