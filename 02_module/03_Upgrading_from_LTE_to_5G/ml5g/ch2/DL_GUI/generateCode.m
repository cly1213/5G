function generateCode(handles)
%% Read in template
filename = 'codeTemplate.m';
fileID = fopen(filename);
C = textscan(fileID,'%s','Whitespace','');
fclose(fileID);

%% Generate output file
filenameOut = 'tbd.m';
fileID = fopen(filenameOut,'w');
x = C{1};
x = x{1};

% Perform all substitutions
fieldsToProcess = {'PDSCH' 'DMRS' 'gnb' 'bwp' 'coreset', 'PDCCH'};
for fieldNr = 1:numel(fieldsToProcess)
    field = fieldsToProcess{fieldNr};
    category = handles.Data.(field);
    fnList = fieldnames(category);
    for ii=1:numel(fnList)
        fn = fnList{ii};
        searchString = sprintf('@%s_%s@',field,fn);
        replaceString = category.(fn);
        if ~ischar(replaceString)
            replaceString = num2str(replaceString);
        end
        x = regexprep(x,searchString,replaceString);
    end
end

% Write out file
fprintf(fileID,'%s',x);
fclose(fileID);
