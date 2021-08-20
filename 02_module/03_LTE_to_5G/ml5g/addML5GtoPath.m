function addML5GtoPath

% Get the current course folder
rootDir = fileparts(mfilename('fullpath'));

% Populate list of folders to add to path
path2add = [];
path2add = [path2add, rootDir, ';'];
path2add = [path2add, genpath(fullfile(rootDir,'ch2'))];
path2add = [path2add, genpath(fullfile(rootDir,'ch3'))];

% Add folders to the path
addpath(path2add,'-end');

end