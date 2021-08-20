function out = parseOptions(fcnName,options,varargin)
%parseOptions parse options from a space-separated options string
%
%   Note: This is an internal undocumented function and its API and/or
%   functionality may change in subsequent releases.
%
%   OUT = parseOptions(FCNNAME,OPTIONS,NAME,VALUE,...) parses NAME,VALUE
%   pair options for the function FCNNAME, where FCNNAME is the calling
%   function name and OPTIONS is the set of option names to be parsed.
%   Supported NAME,VALUE pairs are:
%   
%   'OutputDataType'       - 'double' for double precision (default)
%                            'single' for single precision
%
%   'IndexStyle'           - 'index' for linear indices (default)
%                            'subscript' for [subcarrier, symbol, antenna]
%                            subscript row form
%
%   'IndexBase'            - '1based' for 1-based indices (default)
%                            '0based' for 0-based indices
%
%   'MappingType'          - 'binary' to map true to  1, false to 0 (default)
%                            'signed' to map true to -1, false to 1
%
%   'DecisionType'         - 'soft' for soft-decision demodulation/decoding (default)
%                            'hard' for hard-decision demodulation/decoding
%                            Note: for nrLDPCDecode, the default is 'hard'
%
%   'ExtractionMethod'     - 'allplanes' (default) or 'direct'
%
%   'OutputFormat'         - 'info' for information part output (default)
%                            'whole' for whole codeword output
%
%   'Algorithm'            - 'Belief propagation' (default),
%                            'Layered belief propagation',
%                            'Normalized min-sum', and 'Offset min-sum',
%                            specify the different LDPC decoding algorithm
%                            choices.
%
%   'ScalingFactor'        - For Normalized min-sum LDPC decoding.
%                            Input value is numeric, real scalar, 0<x<=1
%                            (default 0.75)
%
%   'Offset'               - For Offset min-sum LDPC decoding.
%                            Input value is numeric, real scalar >=0
%                            (default 0.5)
%
%   'Termination'          - 'early' for decoding termination when 
%                            parity-checks are satisfied (default)
%                            'max' for decoding termination after maximum 
%                            iterations
%
%   'CyclicPrefix'         - 'normal' for normal cyclic prefix (default)
%                            'extended' for extended cyclic prefix
%
%   'CDMLengths'           - A 2-element row vector [FD TD] specifying the
%                            length of FD-CDM and TD-CDM despreading to
%                            perform (default [1 1])
%
%   'AveragingWindow'      - A 2-element row vector [F T] specifying the
%                            number of adjacent reference symbols in the
%                            frequency domain F and time domain T over
%                            which to average prior to interpolation
%                            (default [0 0])
%
%   'OutputResourceFormat' - 'concatenated' for output of all CSI-RS
%                            resources concatenated into a single column (default)
%                            'cell' for cell array output with each cell
%                            corresponding to an individual CSI-RS resource

%   Copyright 2018-2019 The MathWorks, Inc.

    % persistent variables:
    % optionParsers: container of inputParser objects, one per function
    %     optionDef: definition of option values, used to set up 
    %                inputParsers and to fill out partial matches
    persistent optionParsers optionDef;
    
    if (isempty(optionParsers))

        % Set of inputParsers, one for each function
        optionParsers = containers.Map;
        
        % Option definitions, default first
        optionDef.OutputDataType = ["double" "single"];
        optionDef.IndexBase = ["1based" "0based"];
        optionDef.IndexStyle = ["index" "subscript"];
        optionDef.MappingType = ["binary" "signed"];
        optionDef.DecisionType = ["soft" "hard"];
        optionDef.ExtractionMethod = ["allplanes" "direct"];
        optionDef.OutputFormat = ["info" "whole"];
        optionDef.Algorithm = ["Belief propagation" "Layered belief propagation" ...
                               "Normalized min-sum" "Offset min-sum"];
        optionDef.ScalingFactor = {0.75 @validateScalingFactor};
        optionDef.Offset = {0.5 @validateOffset};
        optionDef.Termination = ["early" "max"];
        optionDef.CyclicPrefix = ["normal" "extended"];
        optionDef.CDMLengths = {[1 1] @validateCDMLengths};
        optionDef.AveragingWindow = {[0 0] @validateAveragingWindow};
        optionDef.OutputResourceFormat = ["concatenated","cell"];

    end
    
    if (~isKey(optionParsers,fcnName))
        % Build inputParser for function 'fcnName'
        optionParser = inputParser;
        optionParser.FunctionName = fcnName;
        for p = string(reshape(options,1,[]))
            thisDef = optionDef.(p);
            if (isstring(thisDef))
                % String choice, first value is the default and
                % validateStringOption is the validator
                optionParser.addParameter(p,thisDef(1), ...
                    @(x)validateStringOption(p,thisDef,x));
            else
                % Custom validator, first element of cell array is the 
                % default and second element is the validator
                optionParser.addParameter(p,thisDef{1},thisDef{2});
            end
        end
        optionParsers(fcnName) = optionParser;
    else
        optionParser = optionParsers(fcnName);
    end
    
    % If the input is a structure, assume it contains options already
    % parsed and return immediately
    if (nargin==3 && isstruct(varargin{1}))
        out = varargin{1};
        return;
    end
    
    % Perform parsing
    parse(optionParser,varargin{:});
    
    % For nrLDPCDecode, set the default to 'hard' if using the default
    results = optionParser.Results;
    if (strcmp(fcnName,'nrLDPCDecode') && ...
        any(strcmp(optionParser.UsingDefaults,'DecisionType')))
        results.DecisionType = "hard";
    end
    
    % Output results structure for requested options, including expanding
    % partial string matches into full matches
    out = struct();
    for i = 1:numel(options)
        option = options{i};
        values = optionDef.(option);
        if (isstring(values))
            out.(option) = ...
                char(values(startsWith(values,results.(option), ...
                'IgnoreCase',true)));
        else
            out.(option) = results.(option);
        end
    end

end

function validateStringOption(name,validstr,in)

    validateattributes(in,{'char' 'string'},{},'',name);
    validatestring(in,validstr,'',name);

end

function validateCDMLengths(in)

    validateattributes(in,{'numeric'}, ...
        {'row','ncols',2,'positive','integer'},'','CDMLengths');
    
end

function validateAveragingWindow(in)

    validateattributes(in,{'numeric'}, ...
        {'row','ncols',2,'nonnegative','integer'},'','AveragingWindow');
    
end

function validateScalingFactor(in)

    validateattributes(in,{'numeric'},{'scalar','real','>',0,'<=',1}, ...
    '','ScalingFactor');

end

function validateOffset(in)

    validateattributes(in,{'numeric'},{'scalar','real','>=',0}, ...
    '','Offset');

end