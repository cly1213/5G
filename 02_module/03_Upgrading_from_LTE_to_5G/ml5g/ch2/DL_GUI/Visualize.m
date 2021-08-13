function Visualize(waveconfig,bwpset,txInfo,varargin)

ResourceElementGrids = createResourceGrid(waveconfig,bwpset,txInfo);
if nargin > 1
    haxes = varargin{1};
    imagesc(haxes,ResourceElementGrids(:,:,1));
    axis(haxes,'xy')
    % title(haxes,'CORESET (green), PDSCH (teal), PDCCH (orange), DMRS (yellow)')
    xlabel(haxes,'Symbols')
    ylabel(haxes,'Subcarriers')
else
    figure; imagesc(ResourceElementGrids(:,:,1));
    axis xy
    % title('CORESET (green), PDSCH (teal), PDCCH (orange), DMRS (yellow)')
    xlabel('Symbols')
    ylabel('Subcarriers')
end

function y = createResourceGrid(waveconfig,bwpset,txInfo)
y = zeros(size(bwpset.ResourceGridBWP));

% Define channel plotting ID markers
colorLevel = '';
colorLevel.PDCCH = 1.5;
colorLevel.PDSCH = 0.7;
colorLevel.DMRS = 1.8;
colorLevel.PTRS = 1.3;
% colorLevel.CORESET = 1.2;
colorLevel.SS_Burst = 0.6;


% PDSCH related channels
resources = txInfo.WaveformResources.PDSCH.Resources;
y = assignIndices(y,resources,'DMRSIndices',colorLevel.DMRS);
y = assignIndices(y,resources,'PTRSIndices',colorLevel.PTRS);
y = assignIndices(y,resources,'ChannelIndices',colorLevel.PDSCH);

% PDCCH related channels
resources = txInfo.WaveformResources.PDCCH.Resources;
y = assignIndices(y,resources,'DMRSIndices',colorLevel.DMRS);
y = assignIndices(y,resources,'ChannelIndices',colorLevel.PDCCH);

% NO CSI yet


function y = assignIndices(y,resources,field,colorLevel)
for ii=1:numel(resources)
    x = resources(ii).(field);
    if ~isempty(x)
        NSlot = resources(ii).NSlot;
        portNr = 1;
        y(x(:,portNr) + NSlot*size(y,1)*14) = colorLevel;
    end
end
