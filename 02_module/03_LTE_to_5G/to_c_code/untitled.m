trBlkLen = 5120;
trBlk = randi([0 1],trBlkLen,1,'int8');
out = c_test(trBlk,trBlkLen);