function validateParameters(prmName,prm,fcnName)
% nr5g.internal.validateParameters Validate common 5G parameters
%
%   Note: This is an internal undocumented function and its API and/or
%   functionality may change in subsequent releases.
%
%   Example: 
%
%   L = 3;
%   nr5g.internal.validateParameters('ListLength',L,'nrPolarDecode')

%   Copyright 2018 The MathWorks, Inc.

%#codegen

    switch prmName
        case 'ListLength'
            % Validate decoding list length (L) to be a power of two
            validateattributes(prm, {'numeric'}, ...
                {'scalar','integer','positive','finite'},fcnName,'L');
            coder.internal.errorIf( floor(log2(prm))~=log2(prm), ...
                'nr5g:nrPrmListLength:notPow2',prm);
            
        case 'RV'
            % validate RV to be scalar integer between [0,3]
            validateattributes(prm,{'numeric'},...
                {'scalar','integer','>=',0,'<=',3},fcnName,'RV');

        case 'HARQID'
            % validate HARQ ID to be scalar integer between [0,15]
            validateattributes(prm,{'numeric'}, ...
                    {'scalar','integer','>=',0,'<=',15},fcnName,'HARQID');

        % Add more case statements for other shared parameters
    end

end