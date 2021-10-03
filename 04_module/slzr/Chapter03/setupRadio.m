%% Setup Radio Object
dev = sdrdev('ADI RF SOM');
dev.IPAddress = '192.168.3.2';
dev.testConnection;
%dev.launchSetupWizard Set launch wizard
%% Zynq object
z = zynq();
z.IPAddress = dev.IPAddress;
z.openShell('serial')
