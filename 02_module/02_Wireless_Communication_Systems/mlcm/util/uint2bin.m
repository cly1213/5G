function B = uint2bin(x, N)

%%
%       SYNTAX: B = uint2bin(x);
%               B = uint2bin(x, N);
%               status = uint2bin('selftest');
%
%  DESCRIPTION: Convert unsigned integers into binary bit matrix.
%
%               status = uint2bin('selftest') runs selftests.
%
%        INPUT: - x (1-D row/col vector of real double)
%                   Input vector of unsigned integers to be converted.
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
    B = uint2bin_selftest;
    return;             % Early exit.
end


%% Assign default value for N.
if nargin == 1
    N = 1;
end


%% Do conversion.
if any(x(:) < 0)
    error('Input must be zero or positive integers.');
end
[~, e] = log2(max(x)); % How many digits do we need to represent the numbers?
B = rem( floor(x(:) * pow2(1-max(N,e):0)),2);


end



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     FUNCTION: uint2bin_selftest - Test uint2bin.
%
%       SYNTAX: status = uint2bin_selftest;
% 
%  DESCRIPTION: Test uint2bin.
%
%        INPUT: none.
%
%       OUTPUT: - status (real double)
%                   Test status. Valid values are:
%                       1 - Test passes.
%                       0 - Test fails.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function status = uint2bin_selftest


%% Initialize status.
status = 1;


%% Test.
A = uint2bin(2);
I = [1 0];
if max(abs(A(:) - I(:))) > 0
    status = 0;
end


%% Test. Input N is actually not large enough.
A = uint2bin(4, 2);
I = [1 0 0];
if max(abs(A(:) - I(:))) > 0
    status = 0;
end


%% Test.
A = uint2bin((0:3)');
I = [0 0; 0 1; 1 0; 1 1];
if max(abs(A(:) - I(:))) > 0
    status = 0;
end


%% Test.
A = uint2bin((0:3)', 5);
I = [0 0 0 0 0; 0 0 0 0 1; 0 0 0 1 0; 0 0 0 1 1];
if max(abs(A(:) - I(:))) > 0
    status = 0;
end


%% Test.
A = uint2bin((0:3)', 1);
I = [0 0; 0 1; 1 0; 1 1];
if max(abs(A(:) - I(:))) > 0
    status = 0;
end


%% Test.
A = uint2bin(0:15);
x = bin2uint(A);
if max(abs(x - (0:15))) > 0
    status = 0;
end


end










