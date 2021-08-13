clear variables

%% Main GUI widgets
f = figure('Visible','off', ...
    'Units','characters',...
    'Position',[70 5 180 58],...
    'Resize','off',...
    'MenuBar','none',...
    'Name','5G NR Downlink Signal Generator');

TabSize = [142 17];
tabgp = uitabgroup(f,'Units','characters', ...
    'Parent', f, 'Position',[2 40 TabSize]);
CellTab = uitab(tabgp,'Title','Cell-Wide Settings');
BWPartTab = uitab(tabgp,'Title','Bandwidth Part');
CORESETTab = uitab(tabgp,'Title','CORESET');
PDCCHTab = uitab(tabgp,'Title','PDCCH');
PDSCHTab = uitab(tabgp,'Title','PDSCH');
MCSTab = uitab(tabgp,'Title','Modulation & Coding');
DMRSTab = uitab(tabgp,'Title','DMRS');
PTRSTab = uitab(tabgp,'Title','PTRS');
% PowerTab = uitab(tabgp,'Title','Power Levels');
% AdvancedTab = uitab(tabgp,'Title','Advanced');

widgets.f = f;
widgets.leftPane = tabgp;
widgets.CellTab = CellTab;
widgets.BWPart = BWPartTab;
widgets.CORESET = CORESETTab;
widgets.PDCCHTab = PDCCHTab;
widgets.PDSCHTab = PDSCHTab;
widgets.DMRSTab = DMRSTab;
% widgets.PowerTab = PowerTab;

handles.Data.params.TabSize = TabSize;
handles.widgets = widgets;

%% Cell-wide settings

% line = 1;
% Text(handles,CellTab,'Frequency Range',line,'left');
% widgets.hCellBW = Popup(handles,CellTab,{'FR1','FR2'},line,'right',@cellBW);
% handles.Data.gnb.FR = 'FR1';

line = 1;
widgets.hSCSConfigText = Text(handles,CellTab,'Subcarrier spacing',line,'left');
% widgets.hSCSConfig = Popup(handles,CellTab,{'15','30','60','120','240'},line,'right',@setSCSConfig);
widgets.hSCSConfig = Popup(handles,CellTab,{'15','30','60','120','240'},line,'middle',@getPopupValueDouble,'Data.gnb.SCSConfig');
handles.Data.gnb.SCSConfig = 30;
widgets.hSCSConfig.Value = 2;
% widgets.hSCSConfig.Visible = 'off';
% widgets.hTDDConfigText.Visible = 'off';

line = 2;
Text(handles,CellTab,'Cell Bandwidth (in RBs)',line,'left');
widgets.hCellBW = Popup(handles,CellTab,{'5','10','15','20','25','30','40','50','60','70','80','90','100'},line,'middle',@getPopupValueDouble,'Data.gnb.NDLRB');
widgets.hCellBW.Value = 7;
handles.Data.gnb.ChannelBandwidth = 40;

line = 3;
widgets.hNCellIDText = Text(handles,CellTab,'Cell ID',line,'left');
% widgets.hNCellID = Edit(handles,CellTab,'0',line,'right',@getEditValueDouble);
widgets.hNCellID = Edit(handles,CellTab,'0',line,'middle',@getEditValueDouble,'Data.gnb.NCellID');
handles.Data.gnb.NCellID = 0;

line = 4;
Text(handles,CellTab,'Number of subframes',line,'left');
% widgets.hNCellID = Edit(handles,CellTab,'0',line,'right',@getEditValueDouble);
widgets.hNumSubframes = Edit(handles,CellTab,'2',line,'middle',@getEditValueDouble,'Data.gnb.NumSubframes');
handles.Data.gnb.NumSubframes = 2;

%% Bandwidth Part
line = 1;
widgets.hNRBText = Text(handles,BWPartTab,'Nr Resource Blocks',line,'left');
widgets.hNRB = Edit(handles,BWPartTab,'25',line,'middle',@getEditValueDouble,'Data.bwp.NRB');
handles.Data.bwp.NRB = 25;

line = 2;
widgets.hRBOffsetText = Text(handles,BWPartTab,'Resource Block Offset (RBO)',line,'left');
widgets.hRBOffset = Edit(handles,BWPartTab,'10',line,'middle',@getEditValueDouble,'Data.bwp.NRBOffset');
handles.Data.bwp.NRBOffset = 10;

%% CORESET

line = 1;
Text(handles,CORESETTab,'Duration (OFDM symbols)',line,'left');
widgets.hCORESETDuration = Popup(handles,CORESETTab,{'1','2','3'},line,'middle',@getPopupValueDouble,'Data.coreset.Duration');
handles.Data.coreset.Duration = 2;
widgets.hCORESETDuration.Value = 2;

line = 2;
Text(handles,CORESETTab,'Allocated PRBs',line,'left');
widgets.hCORESETAllocatedPRB = Edit(handles,CORESETTab,'6*[0 1 2]',line,'middle',@getEditValueString,'Data.coreset.AllocatedPRB');
handles.Data.coreset.AllocatedPRB = '6*[0 1 2]';

line = 3;
Text(handles,CORESETTab,'Allocated Symbols',line,'left');
widgets.hCORESETAllocatedSymbols = Edit(handles,CORESETTab,'0',line,'middle',@getEditValueString,'Data.coreset.AllocatedSymbols');
handles.Data.coreset.AllocatedSymbols = '0';

line = 4;
Text(handles,CORESETTab,'Allocated Slots',line,'left');
widgets.hCORESETAllocatedSlots = Edit(handles,CORESETTab,'0',line,'middle',@getEditValueString,'Data.coreset.AllocatedSlots');
handles.Data.coreset.AllocatedSlots = '0';

line = 5;
Text(handles,CORESETTab,'Allocated Period',line,'left');
widgets.hCORESETAllocatedPeriod = Edit(handles,CORESETTab,'1',line,'middle',@getEditValueDouble,'Data.coreset.AllocatedPeriod');
handles.Data.coreset.AllocatedPeriod = 1;

%% PDCCH Settings
line = 1;
Text(handles,PDCCHTab,'Start CCE',line,'left');
widgets.hPDCCHStartCCE = Edit(handles,PDCCHTab,'1',line,'middle',@getEditValueDouble,'Data.PDCCH.StartCCE');
handles.Data.PDCCH.StartCCE = 1;

line = 2;
Text(handles,PDCCHTab,'Number of CCEs',line,'left');
widgets.hPDCCHNumCCE = Popup(handles,PDCCHTab,{'1','2','4','8','16'},line,'middle',@getPopupValueDouble,'Data.PDCCH.NumCCE');
widgets.hPDCCHNumCCE.Value = 2;
handles.Data.PDCCH.NumCCE = 2;

line = 3;
Text(handles,PDCCHTab,'Allocated Search Spaces',line,'left');
widgets.hPDCCHSearchSpaces = Edit(handles,PDCCHTab,'0',line,'middle',@getEditValueString,'Data.PDCCH.SearchSpaces');
handles.Data.PDCCH.SearchSpaces = '0';

line = 4;
Text(handles,PDCCHTab,'Allocated Period',line,'left');
widgets.hPDCCHAllocatedPeriod = Edit(handles,PDCCHTab,'1',line,'middle',@getEditValueDouble,'Data.PDCCH.AllocatedPeriod');
handles.Data.PDCCH.AllocatedPeriod = 1;



%% PDSCH Settings
line = 1;
Text(handles,PDSCHTab,'Physical Resource Blocks',line,'left');
widgets.hPDSCHAllocatedPRB = Edit(handles,PDSCHTab,'[0:20]',line,'middle',@getEditValueString,'Data.PDSCH.AllocatedPRB');
handles.Data.PDSCH.AllocatedPRB = '[0:20]';
Radio(handles,PDSCHTab,'Enable',line,'right',@EnablePDSCH);
handles.Data.PDSCH.Enable = 0;

line = 2;
widgets.hAllocatedSymbols = Text(handles,PDSCHTab,'Allocated Symbols',line,'left');
widgets.hPDSCHAllocatedSymbols = Edit(handles,PDSCHTab,'2:10',line,'middle',@getEditValueString,'Data.PDSCH.AllocatedSymbols');
handles.Data.PDSCH.AllocatedSymbols = '2:10';

line = 3;
widgets.hPDSCHAllocatedSlots = Text(handles,PDSCHTab,'Allocated Slots',line,'left');
widgets.hPDSCHAllocatedSlots = Edit(handles,PDSCHTab,'0',line,'middle',@getEditValueString,'Data.PDSCH.AllocatedSlots');
handles.Data.PDSCH.AllocatedSlots = '0';

line = 4;
widgets.hPDSCHAllocatedSlots = Text(handles,PDSCHTab,'Allocated Period',line,'left');
widgets.hPDSCHAllocatedSlots = Edit(handles,PDSCHTab,'1',line,'middle',@getEditValueDouble,'Data.PDSCH.AllocatedPeriod');
handles.Data.PDSCH.AllocatedPeriod = 1;

%% Modulation and Coding
line = 1;
widgets.hCodeRateText = Text(handles,MCSTab,'Code rate',line,'left');
widgets.hCodeRate = Edit(handles,MCSTab,'0.4785',line,'middle',@getEditValueDouble,'Data.PDSCH.TargetCodeRate');
handles.Data.PDSCH.TargetCodeRate = 0.4785;

line = 2;
widgets.hModulationText = Text(handles,MCSTab,'Modulation',line,'left');
widgets.hModulation = Popup(handles,MCSTab,{'QPSK','16QAM','64QAM'},line,'middle',@getPopupValueString,'Data.PDSCH.Modulation');
widgets.hModulation.Value = 1;
handles.Data.PDSCH.Modulation = 'QPSK';

line = 3;
widgets.hPDSCHNLayers = Text(handles,MCSTab,'Number of Layers',line,'left');
widgets.hPDSCHNLayers = Edit(handles,MCSTab,'2',line,'middle',@getEditValueDouble,'Data.PDSCH.NLayers');
handles.Data.PDSCH.NLayers = 2;


%% DMRS Allocation
line = 1;
Text(handles,DMRSTab,'PDSCH Mapping Type',line,'left');
widgets.hPDSCHMappingType = Popup(handles,DMRSTab,{'A','B'},line,'middle',@getPopupValueString,'Data.PDSCH.MappingType');
handles.Data.PDSCH.MappingType = 'A';

line = 2;
widgets.hDL_DMRS_typeA_posText = Text(handles,DMRSTab,'First DMRS position',line,'left');
widgets.hDL_DMRS_typeA_pos = Popup(handles,DMRSTab,{'2','3'},line,'middle',@getPopupValueDouble,'Data.DMRS.DL_DMRS_typeA_pos');
handles.Data.DMRS.DL_DMRS_typeA_pos = 3;
widgets.hDL_DMRS_typeA_pos.Value = 2;
widgets.hDL_DMRS_typeA_posText.Visible = 'on';
widgets.hDL_DMRS_typeA_pos.Visible = 'on';

line = 3;
widgets.hDL_DMRS_add_posText = Text(handles,DMRSTab,'Nr of additional DMRS',line,'left');
widgets.hDL_DMRS_add_pos = Edit(handles,DMRSTab,'0',line,'middle',@getEditValueDouble,'Data.PDSCH.DL_DMRS_add_pos');
handles.Data.PDSCH.DL_DMRS_add_pos = 0;

line = 4;
Text(handles,DMRSTab,'Configuration type',line,'left');
widgets.hPDSCHDL_DMRS_config_type = Popup(handles,DMRSTab,{'1','2'},line,'middle',@getPopupValueDouble,'Data.PDSCH.DL_DMRS_config_type');
handles.Data.PDSCH.DL_DMRS_config_type = 1;
widgets.hPDSCHDL_DMRS_config_type.Value = 1;


%% PTRS Allocation
line = 1;
% Text(handles,PTRSTab,'PDSCH Mapping Type',line,'left');
% widgets.hPDSCHMappingType = Popup(handles,DMRSTab,{'A','B'},line,'right',@getPopupValueString,'Data.PDSCH.MappingType');
% handles.Data.PDSCH.MappingType = 'A';

hRadio = Radio(handles,PTRSTab,'Enable',line,'right',@EnablePTRS);
handles.Data.PDSCH.EnablePTRS = 0;
widgets.hPTRS_Enable.Value = 0;

% %% Power settings
% line = 1;
% ChangePowerDefault = 0;
% position = 'left';
% hChangePower = Radio(handles,PowerTab,'Change power levels',line,position,@changePower);
% hChangePower.Value = ChangePowerDefault;
% handles.Data.params.changePower = ChangePowerDefault;
% 
% line = 2;
% Text(handles,PowerTab,'Cell-specific RS power = 0dB',line,'left');
% 
% line = 3;
% widgets.hPDSCHpowerText = Text(handles,PowerTab,'PDSCH power (dB)',line,'left');
% widgets.hPDSCHpower = Edit(handles,PowerTab,'0',line,'right',@setPDSCHpower);
% widgets.hPDSCHpower.Enable = 'off';
% widgets.hPDSCHpowerText.Enable = 'off';
% 
% line = 4;
% widgets.hPDCCHpowerText = Text(handles,PowerTab,'PDCCH power (dB)',line,'left');
% widgets.hPDCCHpower = Edit(handles,PowerTab,'0',line,'right',@setPDCCHpower);
% widgets.hPDCCHpower.Enable = 'off';
% widgets.hPDCCHpowerText.Enable = 'off';
% 
% line = 5;
% widgets.hPHICHpowerText = Text(handles,PowerTab,'PHICH power (dB)',line,'left');
% widgets.hPHICHpower = Edit(handles,PowerTab,'0',line,'right',@setPHICHpower);
% widgets.hPHICHpower.Enable = 'off';
% widgets.hPHICHpowerText.Enable = 'off';
% 
% line = 6;
% widgets.hPCFICHpowerText = Text(handles,PowerTab,'PCFICH power (dB)',line,'left');
% widgets.hPCFICHpower = Edit(handles,PowerTab,'0',line,'right',@setPCFICHpower);
% widgets.hPCFICHpower.Enable = 'off';
% widgets.hPCFICHpowerText.Enable = 'off';
% 
% %% Advanced
% line = 1;
% ReceiverCodeDefault = 1;
% position = 'left';
% hReceiverCode = Radio(handles,AdvancedTab,'Generate receiver code',line,position,@ReceiverCode);
% hReceiverCode.Value = ReceiverCodeDefault;
% handles.Data.params.ReceiverCode = ReceiverCodeDefault;

%% Info
% widgets.hParamInfoPanel = uipanel(...
%     'Units','characters',...
%     'Title',{  'Info' },...
%     'Clipping','on',...
%     'Position',[108 18 50 20],...
%     'Visible', 'on' ...
%     );
% 
% 
% widgets.hParamInfo = uitable(...
%     'Parent',widgets.hParamInfoPanel,...
%     'FontSize',11,...
%     'Units','characters',...
%     'Enable','on', ...
%     'Position',[0 0 48 19],...
%     'ColumnWidth',{80 80}, ...
%     'ColumnName',[], ...
%     'ColumnFormat',{'char' 'char'}, ...
%     'RowName',[], ...
%     'Data',{  blanks(0) blanks(0) }...
%     );

%% Messages
% widgets.hMessagePanel = uipanel(...
%     'Units','characters',...
%     'Title',{  'Messages' },...
%     'Clipping','on',...
%     'Position',[108 6 50 11],...
%     'Tag','InfoPanel', ...
%     'Visible', 'on' ...
%     );
% 
% 
% widgets.hCheckInfo = uicontrol(...
%     'Parent',widgets.hMessagePanel,...
%     'FontSize',11,...
%     'Units','characters',...
%     'Position',[0 0 54 10],...
%     'BackgroundColor',[0.5 1 1 ],...
%     'String',{  '' },...
%     'HorizontalAlignment','left', ...
%     'Style','text',...
%     'Tag','CheckInfo'...
%     );


%% Figure
widgets.hPlot = axes('Units','characters','Position',[11,7,166,31]); 

% Legend
widgets.hPlotLegend = axes('Units','characters','Position',[146,41,8,8],'XTickLabel',cell('')); 
imagesc(widgets.hPlotLegend,[0 1.5 0.7 1.8 1.3]');
widgets.hPlotLegend.XTickLabel = cell('');
widgets.hPlotLegend.YTickLabel = cell('');

legendText = sprintf('Unallocated\nPDCCH\nPDSCH\nDMRS\nPTRS');
hText = uicontrol('Style','text','String',legendText,...
    'Parent', f, ...
    'Units','characters',...
    'FontSize',13,'HorizontalAlignment','left', ...
    'Position',[158 41 22 8]);


%% Finish

% Make the GUI visible.
handles.widgets = widgets;

% Display info
% codeGeneration(handles);
handles = createInfo(handles);

set(f,'Visible','on')

guidata(f,handles)

function Pos = setIndentV(TabSize, lineNr)
Pos = TabSize(2)-3*lineNr-2;
end

function indentH = setIndentH(position)
if strcmp(position,'left')
    indentH = 3;
elseif strcmp(position,'middle')
    indentH = 55;
else
    indentH = 105;
end
end


function hRadio = Radio(handles,parent,field,line,position,callback)
indentV = setIndentV(handles.Data.params.TabSize, line);
indentH = setIndentH(position);
hRadio = uicontrol('Style','radiobutton','String',field,...
    'Parent', parent, ...
    'Units','characters',...
    'FontSize',12,'Callback',callback,...
    'Position',[indentH indentV 48 2]);

end

% function hPopup = Popup(handles,parent,Choices,line,position,callback)
% indentV = setIndentV(handles.Data.params.TabSize, line);
% indentH = setIndentH(position);
% hPopup = uicontrol('Style','popup','String',Choices,...
%     'Parent', parent, ...
%     'Units','characters',...
%     'FontSize',12,'Callback',callback, ...
%     'Position',[indentH indentV 38 2]);
% end

function hPopup = Popup(handles,parent,Choices,line,position,callback,Tag)
indentV = setIndentV(handles.Data.params.TabSize, line);
indentH = setIndentH(position);
hPopup = uicontrol('Style','popup','String',Choices,...
    'Parent', parent, ...
    'Units','characters',...
    'FontSize',12,'Callback',callback, ...
    'Tag', Tag, ...
    'Position',[indentH indentV 38 2]);
end

function hText = Text(handles,parent,Label,line,position)
indentV = setIndentV(handles.Data.params.TabSize, line);
indentH = setIndentH(position);
hText = uicontrol('Style','text','String',Label,...
    'Parent', parent, ...
    'Units','characters',...
    'FontSize',12,'HorizontalAlignment','left', ...
    'Position',[indentH indentV 48 2]);
end

function hEdit = Edit(handles,parent,Label,line,position,callback,Tag)
indentV = setIndentV(handles.Data.params.TabSize, line);
indentH = setIndentH(position);
hEdit = uicontrol('Style','edit','String',Label,...
    'Parent', parent, ...
    'Units','characters',...
    'FontSize',12,'Callback',callback,...
    'Tag', Tag, ...
    'Position',[indentH indentV 38 2]);
end


%% Cell-wide parameters
function cellBW(source, eventdata)
handles = guidata(gcbo);
ind = get(source,'Value');
ListValues = get(source,'String');
NDLRB = str2num(ListValues{ind});
handles.Data.gnb.NDLRB = NDLRB;
% If allocation is full-bandwith, update the value there too
if strcmp(handles.Data.params.RAllocType,'All RBs')
    handles.Data.PDSCH.PRBSet = sprintf('(0:%d)''',handles.Data.gnb.NDLRB-1);
end
handles = createInfo(handles);
guidata(gcbo, handles);
end

function setPDSCHMappingType(source, eventdata)
handles = guidata(gcbo);
ind = get(source,'Value');
ListValues = get(source,'String');
MappingType = (ListValues{ind});
handles.Data.PDSCH.MappingType = MappingType;

% If Mapping type A, turn on Position First symbol parameter
if strcmp(MappingType,'A')
    handles.widgets.hDL_DMRS_typeA_posText.Visible = 'on';
    handles.widgets.hDL_DMRS_typeA_pos.Visible = 'on';
    handles.Data.DMRS.DL_DMRS_typeA_pos = 3;
    handles.widgets.hDL_DMRS_typeA_pos.Value = 2;  % Set default: 2nd value (=3)
else
    handles.widgets.hDL_DMRS_typeA_posText.Visible = 'off';
    handles.widgets.hDL_DMRS_typeA_pos.Visible = 'off';
end

handles = createInfo(handles);
guidata(gcbo, handles);
end

function TDDConfiguration(source, eventdata)
handles = guidata(gcbo);
ind = get(source,'Value');
ListValues = get(source,'String');
TDDConfig = str2double(ListValues{ind});
handles.Data.gnb.TDDConfig = TDDConfig;

% If TDDConfig ~=1, RC field must be omitted
if TDDConfig ~= 1
    if isfield(handles.Data.gnb,'RC')
        handles.Data.gnb = rmfield(handles.Data.gnb,'RC');
    end
end

handles = createInfo(handles);
guidata(gcbo, handles);
end

function command = parseTag(source)
% Get list of fields in lead
Tag = source.Tag;
separators = regexp(Tag,'\.');
command = sprintf('handles.%s',Tag(1:separators(1)-1));
for ii=2:numel(separators)
    command = sprintf('%s.%s',command,Tag(separators(ii-1)+1:separators(ii)-1));
end
command = sprintf('%s.%s',command,Tag(separators(end)+1:end));
end

function getPopupValueDouble(source, eventdata)
handles = guidata(gcbo);
ind = get(source,'Value');
ListValues = get(source,'String');
ValueDouble = str2double(ListValues{ind});
command = parseTag(source);
command = sprintf('%s = %f;',command,ValueDouble);
eval(command)
handles = createInfo(handles);
guidata(gcbo, handles);
end

function getPopupValueString(source, eventdata)
handles = guidata(gcbo);
ind = get(source,'Value');
ListValues = get(source,'String');
ValueString = ListValues{ind};
command = parseTag(source);
command = sprintf('%s = ''%s'';',command,ValueString);
eval(command)
handles = createInfo(handles);
guidata(gcbo, handles);
end

function getEditValueString(source, eventdata)
handles = guidata(gcbo);
ValueString = get(source,'String');
command = parseTag(source);
command = sprintf('%s = ''%s'';',command,ValueString);
eval(command)
handles = createInfo(handles);
guidata(gcbo, handles);
end

function getEditValueDouble(source, eventdata)
handles = guidata(gcbo);
Value = get(source,'String');
ValueDouble = str2num(Value);
command = parseTag(source);
command = sprintf('%s = %f;',command,ValueDouble);
eval(command)
handles = createInfo(handles);
guidata(gcbo, handles);
end


%% PDSCH Allocation
function setRAllocType(source, eventdata)
handles = guidata(gcbo);
ind = get(source,'Value');
ListValues = get(source,'String');
RAllocType = ListValues{ind};
handles.Data.gnb.TotSubframes = 10;
handles.widgets.hPRBSet.Visible = 'off';
handles.widgets.hPRBSetText.Visible = 'off';

if strcmp(RAllocType,'All RBs')
    handles.Data.PDSCH.PRBSet = sprintf('(0:%d)''',handles.Data.gnb.NDLRB-1);
elseif strcmp(RAllocType,'Fixed Subset')
    handles.widgets.hPRBSet.Visible = 'on';
    handles.widgets.hPRBSetText.Visible = 'on';
    handles.Data.PDSCH.PRBSet = sprintf('(2:4)''');
else  % Variable
    handles.Data.gnb.TotSubframes = 1;
end
handles.Data.params.RAllocType = RAllocType;
handles = createInfo(handles);
guidata(gcbo, handles);
end

function setMCS(source, eventdata)
handles = guidata(gcbo);
ind = get(source,'Value');
ListValues = get(source,'String');
MCS = str2num(ListValues{ind});
handles.Data.params.MCS = MCS;
% Set the modulation in accordance
[~,Modulation]=lteMCS(MCS);
handles.Data.PDSCH.Modulation = Modulation;
handles = createInfo(handles);
guidata(gcbo, handles);
end

function setTBSMethod(source, eventdata)
handles = guidata(gcbo);
ind = get(source,'Value');
ListValues = get(source,'String');
Method = ListValues{ind};
handles.widgets.hCodeRate.Visible = 'off';
handles.widgets.hCodeRateText.Visible = 'off';
handles.widgets.hModulation.Visible = 'off';
handles.widgets.hModulationText.Visible = 'off';
handles.widgets.hMCS.Visible = 'off';
handles.widgets.hMCSText.Visible = 'off';
handles.widgets.hTBS.Visible = 'off';
handles.widgets.hTBSText.Visible = 'off';
if strcmp(Method,'CodeRate and Modulation')
    handles.widgets.hCodeRate.Visible = 'on';
    handles.widgets.hCodeRateText.Visible = 'on';
    handles.widgets.hModulation.Visible = 'on';
    handles.widgets.hModulationText.Visible = 'on';
elseif strcmp(Method,'MCS')
    handles.widgets.hMCS.Visible = 'on';
    handles.widgets.hMCSText.Visible = 'on';
else  % Directly TBS
    % Define a default
    TBSDefault = lteTBS(handles.Data.gnb.NDLRB,0);
    if handles.Data.params.subframe5
        handles.widgets.hTBS.String = sprintf('%d',TBSDefault);
        handles.Data.PDSCH.TrBlkSizes = repmat(TBSDefault,1,10);
    else
    handles.widgets.hTBS.String = sprintf('[%d %d %d %d %d 0 %d %d %d %d]', ...
        TBSDefault,TBSDefault,TBSDefault,TBSDefault,TBSDefault,TBSDefault,TBSDefault,TBSDefault,TBSDefault);
        handles.Data.PDSCH.TrBlkSizes = eval(handles.widgets.hTBS.String);
    end
    handles.widgets.hTBS.Visible = 'on';
    handles.widgets.hTBSText.Visible = 'on';
    handles.widgets.hModulation.Visible = 'on';
    handles.widgets.hModulationText.Visible = 'on';
end
handles.Data.params.TBSMethod = Method;
handles = createInfo(handles);
guidata(gcbo, handles);
end

function setTBS(source, eventdata)
handles = guidata(gcbo);
TBS = str2num(get(source,'String'));
if numel(TBS) == 1
    TBS = repmat(TBS,1,10);
end
handles.Data.PDSCH.TrBlkSizes = TBS;
handles = createInfo(handles);
guidata(gcbo, handles);
end

function setModulation(source, eventdata)
handles = guidata(gcbo);
ind = get(source,'Value');
ListValues = get(source,'String');
handles.Data.PDSCH.Modulation = ListValues{ind};
handles = createInfo(handles);
guidata(gcbo, handles);
end

function setCodeRate(source, eventdata)
handles = guidata(gcbo);
handles.Data.PDSCH.TargetCodeRate = str2double(get(source,'String'));
handles = createInfo(handles);
guidata(gcbo, handles);
end

%% Transmission scheme
function setTxScheme(source, eventdata)
handles = guidata(gcbo);
ind = get(source,'Value');
ListValues = get(source,'String');
TxScheme = ListValues{ind};
handles.Data.PDSCH.TxScheme = TxScheme;

% Activate or deactivate NTxAnts
ListTxSchemesWithDMRS = handles.Data.params.ListTxSchemesWithDMRS;
if isempty(ismember(TxScheme,ListTxSchemesWithDMRS))
    handles.widgets.hNTxAnts.Visible = 'off';
    handles.widgets.hNTxAntsText.Visible = 'off';
else
    handles.widgets.hNTxAnts.Visible = 'on';
    handles.widgets.hNTxAntsText.Visible = 'on';
end
handles = createInfo(handles);
guidata(gcbo, handles);
end

function setNrLayers(source, eventdata)
handles = guidata(gcbo);
handles.Data.PDSCH.NLayers = str2double(get(source,'String'));
handles = createInfo(handles);
guidata(gcbo, handles);
end

%% PTRS
function EnablePTRS(source, eventdata)
handles = guidata(gcbo);
handles.Data.PDSCH.EnablePTRS = get(source,'Value');
handles = createInfo(handles);
guidata(gcbo, handles);
end

%% Advanced
function ReceiverCode(source, eventdata)
handles = guidata(gcbo);
handles.Data.params.ReceiverCode = get(source,'Value');
guidata(gcbo, handles);
end


%% Power levels
function changePower(source, eventdata)
handles = guidata(gcbo);
handles.Data.params.changePower = get(source,'Value');
% Turn on or off power level control
if handles.Data.params.changePower
    % Make controls active
    handles.widgets.hPDSCHpower.Enable = 'on';
    handles.widgets.hPDSCHpowerText.Enable = 'on';
    handles.widgets.hPDCCHpower.Enable = 'on';
    handles.widgets.hPDCCHpowerText.Enable = 'on';
    handles.widgets.hPHICHpower.Enable = 'on';
    handles.widgets.hPHICHpowerText.Enable = 'on';
    handles.widgets.hPCFICHpower.Enable = 'on';
    handles.widgets.hPCFICHpowerText.Enable = 'on';
    % Add fields to structure and set them to current widget value
    handles.Data.PDSCH.Rho = str2num(handles.widgets.hPDSCHpower.String);
    handles.Data.PDSCH.PDCCHPower = str2num(handles.widgets.hPDCCHpower.String);
    handles.Data.gnb.PHICHPower = str2num(handles.widgets.hPHICHpower.String);
    handles.Data.gnb.PCFICHPower = str2num(handles.widgets.hPCFICHpower.String);
else
    % Make controls inactive
    handles.widgets.hPDSCHpower.Enable = 'off';
    handles.widgets.hPDSCHpowerText.Enable = 'off';
    handles.widgets.hPDCCHpower.Enable = 'off';
    handles.widgets.hPDCCHpowerText.Enable = 'off';
    handles.widgets.hPHICHpower.Enable = 'off';
    handles.widgets.hPHICHpowerText.Enable = 'off';
    handles.widgets.hPCFICHpower.Enable = 'off';
    handles.widgets.hPCFICHpowerText.Enable = 'off';
    % Remove fields to structure
    if isfield(handles.Data.PDSCH,'Rho')
        handles.Data.PDSCH = rmfield(handles.Data.PDSCH,'Rho');
        handles.Data.PDSCH = rmfield(handles.Data.PDSCH,'PDCCHPower');
        handles.Data.gnb = rmfield(handles.Data.gnb,'PHICHPower');
        handles.Data.gnb = rmfield(handles.Data.gnb,'PCFICHPower');
    end
end
guidata(gcbo, handles);

end

function setPDSCHpower(source, eventdata)
handles = guidata(gcbo);
handles.Data.PDSCH.Rho = str2num(get(source,'String'));
guidata(gcbo, handles);
end



%% Parameter checking
function checkParams(source, eventdata)
handles = guidata(gcbo);
% handles = EnsureConsistency(handles);
handles = createInfo(handles);
guidata(gcbo, handles);
end

%% Code generation
function makeCode(source, eventdata)
handles = guidata(gcbo);
% handles = EnsureConsistency(handles);
handles = createInfo(handles)

end


