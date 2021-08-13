function addMLCMtoPath

rootDir = fileparts(which(mfilename));

addpath(genpath(rootDir), '-end');

end
