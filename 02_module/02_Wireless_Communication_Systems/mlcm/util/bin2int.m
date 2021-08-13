function x = bin2int(B)

%%
%       SYNTAX: x = bin2int(B);
%               status = bin2int('selftest');
%
%  DESCRIPTION: Convert binary bit matrix into signed integers.
%
%               status = bin2int('selftest') runs selftests.
%
%        INPUT: - B (2-D array of real double)
%                   Binary bit matrix. Each element is either 0 or 1. Each row
%                   represents one decimal number. The left-most column is the
%                   most significant bit (MSB) and the right-most column is the
%                   least significant bit (LSB).
%
%       OUTPUT: - x (1-D row vector of real double)
%                   Row vector of converted signed integers.
%
%               - status (real double)
%                   Test status. Valid values are:
%                       1 - Test passes.
%                       0 - Test fails.

%% Perform selftest.
if (nargin == 1) && ischar(B)
    x = bin2int_selftest;
    return;             % Early exit.
end


%% Do conversion.
n       = size(B, 2);
twos    = pow2(n-1 : -1 : 0);
twos(1) = -twos(1);
X       = B .* twos;   % Make use of implicit expansion.
x       = sum(X, 2)';


end


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%     FUNCTION: bin2int_selftest - Test bin2int.
%
%       SYNTAX: status = bin2int_selftest;
% 
%  DESCRIPTION: Test bin2int.
%
%        INPUT: none.
%
%       OUTPUT: - status (real double)
%                   Test status. Valid values are:
%                       1 - Test passes.
%                       0 - Test fails.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function status = bin2int_selftest


%% Initialize status.
status = 1;


%% Test: N = 0.
A = [0 0 0; 0 0 1; 0 1 0; 0 1 1; 1 0 0; 1 0 1; 1 1 0; 1 1 1];
x = bin2int(A);
if max(abs(x - [0, 1, 2, 3, -4, -3, -2, -1])) > 0
    status = 0;
end


end


