function range = noLayersRange(nTxAnts,nRxAnts)

    maxNLayers = min(nTxAnts, nRxAnts);
    
    if maxNLayers > 8
        maxNLayers = 8;
    end
    
    nLayersItems = [{'1'} {'2'} {'3'} {'4'} {'5'} {'6'} {'7'} {'8'}];

    range = nLayersItems(1:maxNLayers);

end

