% Encode the DL-SCH transport blocks
codedTrBlock = encodeDLSCH(pdsch.Modulation,pdsch.NLayers,...
    pdschIndicesInfo.G,harqProcesses(harqProcIdx).RV,harqProcIdx-1);

% PDSCH modulation and precoding
pdschSymbols = nrPDSCH(codedTrBlock,pdsch.Modulation,pdsch.NLayers,gnb.NCellID,pdsch.RNTI);
pdschSymbols = pdschSymbols*wtx;

% PDSCH mapping in grid associated with PDSCH transmission period
pdschGrid = zeros(waveformInfo.NSubcarriers,waveformInfo.SymbolsPerSlot,nTxAnts);
[~,pdschAntIndices] = nrExtractResources(pdschIndices,pdschGrid);
pdschGrid(pdschAntIndices) = pdschSymbols;

% PDSCH DM-RS precoding and mapping (CSI-RS omitted)
for p = 1:size(dmrsSymbols,2)
    [~,dmrsAntIndices] = nrExtractResources(dmrsIndices(:,p),pdschGrid);
    pdschGrid(dmrsAntIndices) = pdschGrid(dmrsAntIndices) + dmrsSymbols(:,p)*wtx(p,:);
end

% OFDM modulation of associated resource elements
txWaveform = hOFDMModulate(gnp,pdschGrid);