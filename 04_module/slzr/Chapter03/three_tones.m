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
%% Section 3:  3 tones Data
t = 0:1/tx.BasebandSampleRate:0.5-1/tx.BasebandSampleRate;
y = exp(1i*(2*pi*100e3*t'))+exp(1i*(2*pi*200e3*t'))+exp(1i*(2*pi*300e3*t'));
y = 0.1*y;
figure, pwelch(y,[],[],[],tx.BasebandSampleRate)
transmitRepeat(tx,y)

