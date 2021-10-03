function addSLZRtoPath

rootDir = fileparts(which(mfilename));

addpath(genpath(rootDir), '-end');

end

