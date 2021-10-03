%% Section 1: Transmitter System Object
tx = sdrtx('ADI RF SOM');
tx.CenterFrequency = 5e9;
tx.BasebandSampleRate = 1e6;
tx.Gain = 0;
tx.ChannelMapping = 1;
tx.ShowAdvancedProperties = true;
tx.BypassUserLogic = true;
%tx.ChannelMapping = [1,2]; % For enabling both channels
%tx.Gain = [-10,0]; % For individual gains for both channels.
%% Section 2: Transmitter Methods
methods(tx)
%% Section 3: Define data
t = 0:1/tx.BasebandSampleRate:4-1/tx.BasebandSampleRate;
x = exp(1i * 2 * pi * 200e3 * t');
transmitRepeat(tx,x);
% x1 = exp(1i * 2 * pi * 200e3 * t');
% x2 = exp(1i * 2 * pi * 300e3 * t');%Complex tone
% transmitRepeat(tx,[x1,x2]);
% one complex sample is 4 bytes. For 4 sec worth data 
% data is 15.26 MB.  Radio I/O can use upto 64MB of DDR3
%% Section 4: Sum of 2 tones
release(tx)
y = exp(1i*(2*pi*100e3*t'))+exp(1i*(2*pi*300e3*t'));
y = 0.1*y;
transmitRepeat(tx,y)
%% Section 5:   Chirp Data
release(tx)
H = dsp.Chirp;
H.InitialFrequency = 0;
H.TargetFrequency = 0.5e6;
H.SampleRate = tx.BasebandSampleRate;
H.SamplesPerFrame = H.SampleRate;
y = step(H);
transmitRepeat(tx,y)