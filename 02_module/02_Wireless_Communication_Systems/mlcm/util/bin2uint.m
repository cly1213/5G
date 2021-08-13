function x = bin2uint(B)

%%
%       SYNTAX: x = bin2uint(B);
%               status = bin2uint('selftest');
%
%  DESCRIPTION: Convert binary bit matrix into unsigned integers.
%
%               status = bin2uint('selftest') runs selftests.
%
%        INPUT: - B (2-D array of real double)
%                   Binary bit matrix. Each element is either 0 or 1. Each row
%                   represents one decimal number. The left-most column is the
%                   most significant bit (MSB) and the right-most column is the
%                   least significant bit (LSB).
%
%       OUTPUT: - x (1-D row vector of real double)
%                   Row vector of converted unsigned integers.
%
%               - status (real double)
%                   Test status. Valid values are:
%                       1 - Test passes.
%                       0 - Test fails.

%% Perform selftest.
if (nargin == 1) && ischar(B)
    x = bin2uint_selftest;
    return;             % Early exit.
end


%% Do conversion.
n    = size(B, 2);
twos = pow2(n-1 : -1 : 0);
X    = B .* twos;   % Make use of implicit expansion.
x    = sum(X, 2)';


end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     FUNCTION: bin2uint_selftest - Test bin2uint.
%
%       SYNTAX: status = bin2uint_selftest;
% 
%  DESCRIPTION: Test bin2uint.
%
%        INPUT: none.
%
%       OUTPUT: - status (real double)
%                   Test status. Valid values are:
%                       1 - Test passes.
%                       0 - Test fails.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function status = bin2uint_selftest


%% Initialize status.
status = 1;


%% Test: N = 0.
A = [0 0 0; 0 0 1; 0 1 0; 0 1 1; 1 0 0; 1 0 1; 1 1 0; 1 1 1];
x = bin2uint(A);
if max(abs(x - (0:7))) > 0
    status = 0;
end


end


