function validateNLayers(simParameters)
    % Validate the number of layers
    if length(simParameters.PDSCH.PortSet)~= simParameters.PDSCH.NLayers
        error('The number of elements of PortSet (%d) must be the same as the number of layers (%d)',...
            length(simParameters.PDSCH.PortSet), simParameters.PDSCH.NLayers);
    end

    if simParameters.PDSCH.NLayers > min(simParameters.NTxAnts,simParameters.NRxAnts)
        error('The number of layers (%d) must satisfy NLayers <= min(NTxAnts,NRxAnts) = min(%d,%d) = (%d)',...
            simParameters.PDSCH.NLayers,simParameters.NTxAnts,simParameters.NRxAnts,min(simParameters.NTxAnts,simParameters.NRxAnts));
    end
end