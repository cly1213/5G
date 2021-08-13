function B = int2bin(x, N)

%%
%       SYNTAX: B = int2bin(x);
%               B = int2bin(x, N);
%               status = int2bin('selftest');
%
%  DESCRIPTION: Convert signed integers into binary bit matrix.
%
%               status = int2bin('selftest') runs selftests.
%
%        INPUT: - x (1-D row/col vector of real double)
%                   Input vector of signed integers to be converted.
%
%               - N (real double)
%                   Minimum number of bits to be used.
%
%       OUTPUT: - B (2-D array of real double)
%                   Binary bit matrix. Each element is either 0 or 1. Each row
%                   represents one decimal number. The left-most column is the
%                   most significant bit (MSB) and the right-most column is the
%                   least significant bit (LSB).
%
%               - status (real double)
%                   Test status. Valid values are:
%                       1 - Test passes.
%                       0 - Test fails.


%% Perform selftest.
if (nargin == 1) && ischar(x)
    B = int2bin_selftest;
    return;             % Early exit.
end


%% Assign default value for N.
if nargin == 1
    N = 1;
end


%% How many bits do we need to represent the most positive numbers?
[~, N_MOST_POSITIVE] = log2( max( x(x >= 0) ) );
N_MOST_POSITIVE      = N_MOST_POSITIVE + 1;     % MSB is negative.


%% How many bits do we need to represent the most negative numbers?
most_negative = -max( abs( x(x < 0) ) );
[~, N_MOST_NEGATIVE] = log2(-most_negative);


%% This is the final number of bits.
N = max([N_MOST_POSITIVE, N_MOST_NEGATIVE, N]);


%% Convert all negative integers to positive integers.
mask    = (x < 0);
x(mask) = x(mask) + (2^N);


%% Do conversion.
B = rem( floor(x(:) * pow2((1-N) : 0)),2);


end



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     FUNCTION: int2bin_selftest - Test int2bin.
%
%       SYNTAX: status = int2bin_selftest;
% 
%  DESCRIPTION: Test int2bin.
%
%        INPUT: none.
%
%       OUTPUT: - status (real double)
%                   Test status. Valid values are:
%                       1 - Test passes.
%                       0 - Test fails.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function status = int2bin_selftest


%% Initialize status.
status = 1;


%% Test. Positive integers only.
B = int2bin(0:3);
I = [0 0 0; ...
     0 0 1; ...
     0 1 0; ...
     0 1 1];
if max(abs(B(:) - I(:))) > 0
    status = 0;
end


%% Test. Positive integers only.
B = int2bin(0:3, 4);
I = [0 0 0 0; ...
     0 0 0 1; ...
     0 0 1 0; ...
     0 0 1 1];
if max(abs(B(:) - I(:))) > 0
    status = 0;
end


%% Test. Positive integers only.
B = int2bin(0:3, 1);
I = [0 0 0; ...
     0 0 1; ...
     0 1 0; ...
     0 1 1];
if max(abs(B(:) - I(:))) > 0
    status = 0;
end


%% Test. Negative integers only.
B = int2bin(-4 : -1);
I = [1 0 0; ...
     1 0 1; ...
     1 1 0; ...
     1 1 1];
if max(abs(B(:) - I(:))) > 0
    status = 0;
end


%% Test. Negative integers only.
B = int2bin(-4 : -1, 4);
I = [1 1 0 0; ...
     1 1 0 1; ...
     1 1 1 0; ...
     1 1 1 1];
if max(abs(B(:) - I(:))) > 0
    status = 0;
end


%% Test. Negative integers only.
B = int2bin(-4 : -1, 1);
I = [1 0 0; ...
     1 0 1; ...
     1 1 0; ...
     1 1 1];
if max(abs(B(:) - I(:))) > 0
    status = 0;
end


%% Test. Mix of both positive and negative integers.
B = int2bin([0:3, -4 : -1]);
I = [0 0 0; ...
     0 0 1; ...
     0 1 0; ...
     0 1 1; ...
     1 0 0; ...
     1 0 1; ...
     1 1 0; ...
     1 1 1];
if max(abs(B(:) - I(:))) > 0
    status = 0;
end


%% Test. Mix of both positive and negative integers.
B = int2bin([0:3, -4 : -1], 5);
I = [0 0 0 0 0; ...
     0 0 0 0 1; ...
     0 0 0 1 0; ...
     0 0 0 1 1; ...
     1 1 1 0 0; ...
     1 1 1 0 1; ...
     1 1 1 1 0; ...
     1 1 1 1 1];
if max(abs(B(:) - I(:))) > 0
    status = 0;
end


%% Test. Mix of both positive and negative integers.
B = int2bin([0:3, -4 : -1], 1);
I = [0 0 0; ...
     0 0 1; ...
     0 1 0; ...
     0 1 1; ...
     1 0 0; ...
     1 0 1; ...
     1 1 0; ...
     1 1 1];
if max(abs(B(:) - I(:))) > 0
    status = 0;
end


end


