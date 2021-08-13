function [encodeDLSCH,decodeDLSCH] = nrPDSCHLinkDLSCHObjects(pdsch)

    % Create DLSCH encoder system object
    encodeDLSCH = nrDLSCH;
    encodeDLSCH.MultipleHARQProcesses = pdsch.EnableHARQ;
    encodeDLSCH.TargetCodeRate = pdsch.TargetCodeRate;

    % Create DLSCH decoder system object
    decodeDLSCH = nrDLSCHDecoder;
    decodeDLSCH.MultipleHARQProcesses = pdsch.EnableHARQ;
    decodeDLSCH.TargetCodeRate = pdsch.TargetCodeRate;

end

