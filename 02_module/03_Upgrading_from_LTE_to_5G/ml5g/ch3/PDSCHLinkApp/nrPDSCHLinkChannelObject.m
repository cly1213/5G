function channel = nrPDSCHLinkChannelObject(simParameters,varargin)

    if nargin > 1
        channel = varargin{1};
    else
        channel = [];
    end

    nTxAnts = simParameters.NTxAnts;
    nRxAnts = simParameters.NRxAnts;

    if strcmpi(simParameters.ChannelType,'CDL')
        if isempty(channel)
            channel = nrCDLChannel; % CDL channel object
        else
            reset(channel);
            release(channel);            
        end 
        
        channel.DelayProfile = simParameters.DelayProfile;
        channel.DelaySpread = simParameters.DelaySpread;        
        channel.MaximumDopplerShift = simParameters.MaximumDopplerShift; 

        % Turn the overall number of antennas into a specific antenna panel
        % array geometry
        [channel.TransmitAntennaArray.Size, channel.ReceiveAntennaArray.Size] = ...
            arrayGeometry(nTxAnts,nRxAnts);

    elseif strcmpi(simParameters.ChannelType,'TDL')
        if isempty(channel)
            channel = nrTDLChannel; % TDL channel object
        else
            reset(channel);
            release(channel);
        end
        % Set the channel geometry
        channel.DelayProfile = 'TDL-C';
        channel.DelaySpread = simParameters.DelaySpread;
        channel.MaximumDopplerShift = simParameters.MaximumDopplerShift; 
        channel.NumTransmitAntennas = nTxAnts;
        channel.NumReceiveAntennas = nRxAnts;
    else
        error('ChannelType parameter field must be either CDL or TDL.');
    end

end

function [txArrayGeometry, rxArrayGeometry] = arrayGeometry(nTxAnts,nRxAnts)

    % Setup the transmit antenna geometry
    % Table of antenna panel array configurations
    % M:  no. of rows in each antenna panel
    % N:  no. of columns in each antenna panel
    % P:  no. of polarizations (1 or 2)
    % Mg: no. of rows in the array of panels
    % Ng: no. of columns in the array of panels
    % Row format: [M  N   P   Mg  Ng]
    antarrays = ...
        [1   1   1   1   1;   % 1 ants
        2   1   1   1   1;   % 2 ants
        2   2   1   1   1;   % 4 ants
        2   4   1   1   1;   % 8 ants
        4   4   1   1   1;   % 16 ants
        4   8   1   1   1;   % 32 ants
        8   8   1   1   1;   % 64 ants
        8  16   1   1   1;   % 128 ants
        16 16   1   1   1];  % 256 ants
%     antarrays = ...
%         [1   1   1   1   1;   % 1 ants
%         1   1   2   1   1;   % 2 ants
%         2   1   2   1   1;   % 4 ants
%         2   2   2   1   1;   % 8 ants
%         2   4   2   1   1;   % 16 ants
%         4   4   2   1   1;   % 32 ants
%         4   4   2   1   2;   % 64 ants
%         4   8   2   1   2;   % 128 ants
%         4   8   2   2   2;   % 256 ants
%         8   8   2   2   2;   % 512 ants
%         8  16   2   2   2];  % 1024 ants
    antselected = 1+fix(log2(nTxAnts));
    txArrayGeometry = antarrays(antselected,:);

    % Setup the receive antenna geometry
    if nRxAnts == 1
        % In the following settings, the number of rows in antenna array,
        % columns in antenna array, polarizations, row array panels and the
        % columns array panels are all 1
        rxArrayGeometry = ones(1,5);
    else
        % In the following settings, the no. of rows in antenna array is
        % nRxAntennas/2, the no. of columns in antenna array is 1, the no.
        % of polarizations is 2, the no. of row array panels is 1 and the
        % no. of column array panels is 1. The values can be changed to
        % create alternative antenna setups
        rxArrayGeometry = [fix(nRxAnts/2),1,2,1,1];
    end

end