function [decbits] = c_test(trBlk,trBlkLen)
%C_TEST Summary of this function goes here
%   Detailed explanation goes here
targetCodeRate = 567/1024;
encUL = nrULSCH;
encUL.TargetCodeRate = targetCodeRate;
setTransportBlock(encUL,trBlk);
mod = '64QAM';
nLayers = 1;
outlen = 10240;
rv = 0;
codedTrBlock = encUL(mod,nLayers,outlen,rv);
decUL = nrULSCHDecoder;
decUL.TargetCodeRate = targetCodeRate;
decUL.TransportBlockLength = trBlkLen;
rxSoftBits = 1.0 - 2.0*double(codedTrBlock);
[decbits,blkerr] = decUL(rxSoftBits,mod,nLayers,rv);

end

