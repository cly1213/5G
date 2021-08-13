function status = mlcmSelftest(machineType)

%%
%       SYNTAX: status = mlcmSelftest;
%               status = mlcmSelftest(machineType);
%
%  DESCRIPTION: Go through all matlab files in the MLCM course.
%
%               The function assumes that user has already added MLCM course
%               folders into MATLAB search path.
%
%        INPUT: - machineType (string)
%                   Machine type. Valid types are:
%                       'trainer' - Trainer PC. 
%                       'student' - Student PC. Default.
%
%       OUTPUT: - status (real double)
%                   Status. Valid values are:
%                       0 - Fail.
%                       1 - Pass.


%% Assign input arguments.
if nargin == 0
    machineType = 'student';
end


%% Initialize status.
status = 1;


%% Run one mfile in each chapter. Student machine only.
if strcmp(machineType, 'student')
    filenames = { ...
        'qpskBits.m',               ...     % Chapter 2.
        'qpskNoNoiseForLoop.m',     ...     % Chapter 3.
        'qpskPhaseOffset.m',        ...     % Chapter 4.
        'multicarrier.m',           ...     % Chapter 5.
        'TXDiversityUncoded.m',     ...     % Chapter 6.
        };
    mlcmSelftestEnableWarning;
    for n = 1:length(filenames)
        selftest_mlcm_run(filenames{n});
        c = slsvWarningListener('get');
        if ~isempty(c)
            status = 0;
        end
    end
    mlcmSelftestDisableWarning;
end


%% Run all mfiles in each chapter. Trainer machine only.
if strcmp(machineType, 'trainer')
    filenames = getAllMfiles;
    mlcmSelftestEnableWarning;
    for n = 1:length(filenames)
        selftest_mlcm_run(filenames{n});
        c = slsvWarningListener('get');
        if ~isempty(c)
            status = 0;
        end
    end
    mlcmSelftestDisableWarning;
end


% %% Test plotdlrg.m.
% fprintf('Running %s ...\n', which('plotdlrg'));
% mlteSelftestEnableWarning;
% NCellID = 0;
% for bw = {'1.4MHz', '3MHz'}
%     for duplexmode = {'FDD', 'TDD'}
%         close all
%         plotdlrg(bw{1}, duplexmode{1}, NCellID);
%         close all
%         c = slsvWarningListener('get');
%         if ~isempty(c)
%             status = 0;
%         end
%     end
% end
% mlteSelftestDisableWarning;
% 
% 
% %% Test fftf.m.
% fprintf('Running %s ...\n', which('fftf'));
% if fftf('selftest') == 0
%     status = 0;
% end
% 
% 
% %% Test mlteInd2sub.m.
% fprintf('Running %s ...\n', which('mlteInd2sub'));
% if mlteInd2sub('selftest') == 0
%     status = 0;
% end
% 
% 
% %% Test mlteSub2ind.m.
% fprintf('Running %s ...\n', which('mlteSub2ind'));
% if mlteSub2ind('selftest') == 0
%     status = 0;
% end


%% Delete files.
delete('.\channelCoeffs.mat');


end



function selftest_mlcm_run(filename)

fprintf('Running %s ...\n', which(filename));

close all
run(filename);
close all

end



function mlcmSelftestEnableWarning

slsvWarningListener('enable');
slsvWarningListener('skip_disabled_warnings', true);
slsvWarningListener('clear');

end



function mlcmSelftestDisableWarning

slsvWarningListener('disable');

end



function filenames = getAllMfiles
 
%% Initialize filenames.
filenames = {};

%% Chapter 2.
filenames{end+1} = 'qpskBits.m';
filenames{end+1} = 'qpskModulated.m';
filenames{end+1} = 'qpskConstellation.m';
filenames{end+1} = 'sampling.m';
filenames{end+1} = 'aliasing.m';
filenames{end+1} = 'qpskPulseShape.m';
filenames{end+1} = 'qpskVisualize.m';
filenames{end+1} = 'qpskEyeMeasurement.m';
filenames{end+1} = 'qpskSpectrum.m';
filenames{end+1} = 'qpskUpconversion.m';
filenames{end+1} = 'qpskDemod.m';
filenames{end+1} = 'qpskErrorRate.m';

%% Chapter 3.
filenames{end+1} = 'qpskNoNoiseForLoop.m';
filenames{end+1} = 'qpskAWGN.m';
filenames{end+1} = 'BERAWGNScript.m';
filenames{end+1} = 'coursedoc_coding.m';
filenames{end+1} = 'convolutionalLTE.m';
filenames{end+1} = 'qpskConvFcn.m';
filenames{end+1} = 'qpskConvFcn_term.m';
filenames{end+1} = 'BERConvScript.m';
filenames{end+1} = 'turboLTE.m';
filenames{end+1} = 'qpskTurboFcn.m';
filenames{end+1} = 'qpskAWGNFcn.m';
filenames{end+1} = 'BERTurboScript.m';
filenames{end+1} = 'ldpcDVB.m';
filenames{end+1} = 'qpskLDPCFcn.m';
filenames{end+1} = 'BERLDPCScript.m';
filenames{end+1} = 'BERConvScriptParallel.m';

%% Chapter 4.
filenames{end+1} = 'qpskPhaseOffset.m';
filenames{end+1} = 'qpskAWGNPO.m';
filenames{end+1} = 'dqpskAWGNPO.m';
filenames{end+1} = 'BERDQPSKScript.m';
filenames{end+1} = 'qpskFrequencyOffset.m';
filenames{end+1} = 'qpskAWGNPOFO.m';
filenames{end+1} = 'qpskCarrierSync.m';
filenames{end+1} = 'qpskAWGNPOFO_Comp.m';
filenames{end+1} = 'BERCarrierSyncScript.m';
filenames{end+1} = 'dqpskUncodedJitter.m';
filenames{end+1} = 'dqpskUncodedGardner.m';
filenames{end+1} = 'dqpskUncodedGardnerVaryJitter.m';
filenames{end+1} = 'BERTimingSyncScript.m';
filenames{end+1} = 'qpsk_FixChannelCreation.m';
filenames{end+1} = 'estimateChannel.m';
filenames{end+1} = 'qpsk_FixChannelCorrection.m';
filenames{end+1} = 'qpsk_noTraining.m';
filenames{end+1} = 'qpsk_Training.m';
filenames{end+1} = 'qpsk_Alignment.m';
filenames{end+1} = 'qam16MultipathCreate.m';
filenames{end+1} = 'qam16Multipath_eqlms.m';

%% Chapter 5.
filenames{end+1} = 'multicarrier.m';
filenames{end+1} = 'WiFiNoChannel.m';
filenames{end+1} = 'FilterSine.m';
filenames{end+1} = 'WiFiWithChannel.m';
filenames{end+1} = 'WiFiWithWindowing.m';
filenames{end+1} = 'PAPRComparison.m';
filenames{end+1} = 'OFDMFrameSync.m';
filenames{end+1} = 'WiFiWithSync.m';
filenames{end+1} = 'WiFiWithEqualization.m';

%% Chapter 6.
filenames{end+1} = 'beamformOFDMDemo.m';
filenames{end+1} = 'RXDiversityUncoded.m';
filenames{end+1} = 'TXDiversityUncoded.m';
filenames{end+1} = 'LTEwithTXDiversity.m';
filenames{end+1} = 'FlatFadeMIMOChanCapacity.m';
filenames{end+1} = 'SpatialMultiplexingZF.m';
filenames{end+1} = 'SpatialMultiplexingMMSE.m';
filenames{end+1} = 'SpatialMultiplexingCI.m';
filenames{end+1} = 'MIMOChanExample.m';
filenames{end+1} = 'MIMOOFDMWithEqualization.m';

%% Exercise.
filenames{end+1} = 'qamNoiseless_soln.m';
filenames{end+1} = 'convEncFIR_soln.m';
filenames{end+1} = 'IEEE80211aton.m';
filenames{end+1} = 'IEEE80211atonSol.m';
filenames{end+1} = 'OSTBCNoChan.m';
filenames{end+1} = 'TXDiversityEx.m';
filenames{end+1} = 'TXDiversityExSol.m';

end

