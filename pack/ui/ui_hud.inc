<Page BackgroundColor='#00FFFF' DragAccepts='Item,Shortcut' Name='HUD' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' runengine='true' ScrollExtent='1024,768' showcursor='false' Size='1024,768' Visible='false' wantsinput='shared'>
<Page Location='298,160' movable='true' Name='Alarm' PackLocation='Center,Center' PackLocationProp='-214/0001,-224/0001' popup='True' ScrollExtent='466,406' Size='466,406' Visible='false'>
<Text Font='/Fonts.HudFont3' LocalText='22:22' Location='331,236' Name='CurrentTime' ScrollExtent='79,25' Size='79,25' TextAlignment='Center' TextAlignmentVertical='Center'>22:22</Text>
<Text Font='/Fonts.HudFont1' LocalText='[@AlarmCurrentTime]' Location='207,236' Name='CurrentTimeText' ScrollExtent='121,25' Size='121,25' TextAlignment='Right' TextAlignmentVertical='Center'>@AlarmCurrentTime</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@AlarmWarningTooltip]' Location='253,312' Name='WarningCheck' ScrollExtent='184,25' Size='184,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@AlarmWarningTooltip'>@AlarmWarning</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@AlarmOnStartupTooltip]' Location='51,312' Name='StartupCheck' ScrollExtent='184,25' Size='184,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@AlarmOnStartupTooltip'>@AlarmOnStartup</Checkbox>
<Text duplicate='true' Font='/Fonts.HudFont3' LocalText='[@AlarmText]' Location='24,35' Name='Text' PackLocation='left,top' PackLocationProp='0024/0001,0035/0001' PackSize='absolute,absolute' PackSizeProp='0055/0001,0342/0001' ScrollExtent='411,64' Size='411,64' TextAlignment='Center' TextAlignmentVertical='Center'>@AlarmText</Text>
<Text Font='/Fonts.HudFont1' LocalText='[@AlarmMinutes]' LocalTooltip='[@AlarmMinutesTooltip]' Location='57,121' Name='MinText' ScrollExtent='108,25' Size='108,25' TextAlignment='Right' TextAlignmentVertical='Center' Tooltip='@AlarmMinutesTooltip'>@AlarmMinutes</Text>
<Sliderbar LocalTooltip='[@AlarmMinutesTooltip]' Location='173,118' Name='MinSlider' ScrollExtent='173,25' Size='173,25' Style='/Sliderbars.Options.Style' Tooltip='@AlarmMinutesTooltip' UpperLimit='60'/>
<Textbox BackgroundColor='#DDDDDD' BackgroundOpacity='0.475' Location='378,118' MaxLength='2' Name='MinuteInput' PackLocation='left,bottom' PackLocationProp='0378/0001,-288/0001' PackSize='absolute,fixed' PackSizeProp='0436/0001,0002/0003' ScrollExtent='30,28' Size='30,28' Style='/ConsoleTextbox.Style'>0</Textbox>
<Text Font='/Fonts.HudFont1' LocalText='[@AlarmHours]' LocalTooltip='[@AlarmHoursTooltip]' Location='66,167' Name='HourText' ScrollExtent='99,25' Size='99,25' TextAlignment='Right' TextAlignmentVertical='Center' Tooltip='@AlarmHoursTooltip'>@AlarmHours</Text>
<Sliderbar LocalTooltip='[@AlarmHoursTooltip]' Location='173,164' Name='HourSlider' ScrollExtent='173,25' Size='173,25' Style='/Sliderbars.Options.Style' Tooltip='@AlarmHoursTooltip' UpperLimit='24' Value='2'/>
<Textbox BackgroundColor='#DDDDDD' BackgroundOpacity='0.475' Location='378,163' MaxLength='2' Name='HourInput' PackLocation='left,bottom' PackLocationProp='0378/0001,-243/0001' PackSize='absolute,fixed' PackSizeProp='0434/0001,0002/0003' ScrollExtent='32,28' Size='32,28' Style='/ConsoleTextbox.Style'>2</Textbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@AlarmUseTimeTooltip]' Location='51,208' Name='TimeCheck' ScrollExtent='198,25' Size='198,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@AlarmUseTimeTooltip'>@AlarmUseTime</Checkbox>
<Text Font='/Fonts.HudFont1' LocalText='[@AlarmTime]' Location='216,207' Name='TimeText' ScrollExtent='108,25' Size='108,25' TextAlignment='Right' TextAlignmentVertical='Center'>@AlarmTime</Text>
<Textbox BackgroundColor='#DDDDDD' BackgroundOpacity='0.475' Location='332,205' MaxLength='36' Name='TimeInput' PackLocation='left,bottom' PackLocationProp='0332/0001,-201/0001' PackSize='absolute,fixed' PackSizeProp='0386/0001,0002/0003' ScrollExtent='80,28' Size='80,28' Style='/ConsoleTextbox.Style'></Textbox>
<Text Font='/Fonts.HudFont1' LocalText='[@AlarmMessage]' Location='54,238' Name='MessageText' ScrollExtent='255,25' Size='255,25' TextAlignmentVertical='Center'>@AlarmMessage</Text>
<Textbox BackgroundColor='#DDDDDD' BackgroundOpacity='0.475' Location='52,265' MaxLength='255' Name='TextInput' PackLocation='left,bottom' PackLocationProp='0052/0001,-141/0001' PackSize='absolute,fixed' PackSizeProp='0105/0001,0002/0003' ScrollExtent='361,28' Size='361,28' Style='/ConsoleTextbox.Style'></Textbox>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='368,8' Name='CancelButton' PackLocation='right,top' PackLocationProp='-098/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='82,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-384/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button LocalText='[@AlarmClear]' LocalTooltip='[@AlarmClearTooltip]' Location='353,347' Name='Clear' PackLocation='center, bottom' PackLocationProp='0120/0001,xxxx/xxxx' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@AlarmClearTooltip'>@AlarmClear</Button>
<Button LocalText='[@AlarmSet]' LocalTooltip='[@AlarmSetTooltip]' Location='32,347' Name='Set' PackLocation='center, bottom' PackLocationProp='-201/0001,xxxx/xxxx' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@AlarmSetTooltip'>@AlarmSet</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@AlarmTitle]' Location='101,5' Name='TitleText' ScrollExtent='265,20' Size='265,20' TextAlignment='Center' TextAlignmentVertical='Center'>@AlarmTitle</Text>
<Rectangle Color='#385E61' GetsInput='false' Location='24,34' PackSize='absolute,absolute' PackSizeProp='0052/0001,0135/0001' ScrollExtent='414,271' Size='414,271'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='53,-1' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='362,32' Size='362,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='20,342' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='420,31' Size='420,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-1,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='466,389' Size='466,389' Stretch='false'/>
</Page>
<Page Location='426,290' MinimumSize='145,58' movable='false' Name='EscapeMenu' PackLocation='center,center' PackLocationProp='-086/0001,-094/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='213,216' Size='213,216' Visible='false'>
<Page Name='MenuPage' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='213,216' Size='213,216'>
<Text AbsorbsInput='false' BackgroundColor='#00F2C9' BackgroundOpacity='0.224' Enabled='false' Font='/Fonts.DefaultFont' LocalText='[@OptionMenu]' Location='12,18' Name='MenuTitle' PackLocation='left,top' PackLocationProp='0012/0001,0018/0001' PackSize='absolute,fixed' PackSizeProp='0024/0001,0002/0003' ScrollExtent='189,21' Size='189,21' SizeIncrement='0,0' TextAlignment='Center'>@OptionMenu</Text>
<PopupMenu DataSource='EscapeData' Location='16,42' MaximumSize='161,153' MinimumSize='161,153' Name='Menu' PackLocation='left,top' PackLocationProp='0016/0001,0042/0001' PackSize='absolute,fixed' PackSizeProp='0052/0001,0002/0003' ScrollExtent='161,153' Size='161,153' Style='PopupMenuStyle'>
</PopupMenu>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.DialogBackground.style' ScrollExtent='213,216' Size='213,216' Stretch='false'/>
</Page>
<DataSource Name='EscapeData'>
<Data localtext='[@EscapeRecall]' menuindex='0' Name='Recall' text='@EscapeRecall'/>
<Data localtext='[@EscapeInstantAction]' menuindex='1' Name='InstantAction' text='@EscapeInstantAction'/>
<Data localtext='[@EscapeVideo]' menuindex='2' Name='VideoOptions' text='@EscapeVideo'/>
<Data localtext='[@EscapeSound]' menuindex='3' Name='SoundOptions' text='@EscapeSound'/>
<Data localtext='[@EscapeGame]' menuindex='4' Name='GameOptions' text='@EscapeGame'/>
<Data localtext='[@EscapeKeymapping]' menuindex='5' Name='Keymapping' text='@EscapeKeymapping'/>
<Data localtext='[@EscapeHelp]' menuindex='6' Name='Help' text='@EscapeHelp'/>
<Data localtext='[@EscapeQuit]' menuindex='7' Name='Quit' text='@EscapeQuit'/>
<Data localtext='[@EscapeCancel]' menuindex='8' Name='Cancel' text='@EscapeCancel'/>
</DataSource>
<PopupMenuStyle ButtonStyle='/Buttons.HUD_VoiceMacro.style' ItemHeight='17' Name='PopupMenuStyle'/>
</Page>
<Page BackgroundColor='#FFFFFF' Location='228,204' MinimumSize='400,240' minsize='400,240' movable='true' Name='CSManagement' PackLocation='center,center' PackLocationProp='-284/0001,-180/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' resizable='false' ScrollExtent='483,386' Size='483,386' Visible='false'>
<Button Location='413,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-070/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'></Button>
<Button Location='55,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0055/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'></Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@cs_title]' Location='101,7' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0007/0001' PackSize='absolute,fixed' PackSizeProp='0208/0001,0002/0003' ScrollExtent='275,20' Size='275,20' TextAlignment='Center' TextAlignmentVertical='Center'>@cs_title</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='25,0' Name='Title' PackLocation='left,top' PackLocationProp='0025/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0049/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='434,32' Size='434,32'/>
<Text Enabled='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@cs_help]' Location='32,46' PackLocation='left,bottom' PackLocationProp='0032/0001,-340/0001' PackSize='absolute,fixed' PackSizeProp='0063/0001,0002/0003' ScrollExtent='420,50' Size='420,50' TextAlignment='Center'>@cs_help</Text>
<Scrollbar Control='ItemInfoText' Location='293,126' Name='ItemInfoScrollbar' PackLocation='right,top' PackLocationProp='-190/0001,0126/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0166/0001' ScrollExtent='10,220' Size='10,220' Style='/ScrollBars.vertical.style'/>
<Listbox DataSource='AppealsData' Location='33,126' Name='AppealsListbox' PackLocation='left,top' PackLocationProp='0033/0001,0126/0001' PackSize='absolute,absolute' PackSizeProp='0223/0001,0166/0001' RowTemplate='AppealsTemplate' ScrollExtent='2000,220' Size='260,220' Style='/Listboxes.Clear.style'/>
<Button LocalText='[@cs_new]' Location='324,115' Name='NewAppeal' PackLocation='right,top' PackLocationProp='-159/0001,0115/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='140,20' Size='140,20' Style='/Buttons.TextButton.style'>@cs_new</Button>
<Button LocalText='[@cs_bug]' Location='323,145' Name='NewBug' PackLocation='right,top' PackLocationProp='-160/0001,0145/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='140,20' Size='140,20' Style='/Buttons.TextButton.style'>@cs_bug</Button>
<Button LocalText='[@cs_view]' Location='324,176' Name='ViewAppeal' PackLocation='right,top' PackLocationProp='-159/0001,0176/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='140,20' Size='140,20' Style='/Buttons.TextButton.style'>@cs_view</Button>
<Button LocalText='[@cs_cancel]' Location='324,205' Name='CancelAppeal' PackLocation='right,top' PackLocationProp='-159/0001,0205/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='140,20' Size='140,20' Style='/Buttons.TextButton.style'>@cs_cancel</Button>
<Button IsCancelButton='true' LocalText='[@Cancel]' Location='324,336' Name='CancelButton' PackLocation='right,bottom' PackLocationProp='-159/0001,-050/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='140,20' Size='140,20' Style='/Buttons.TextButton.style'>@Cancel</Button>
<Rectangle Color='#385E61' GetsInput='false' Location='22,36' PackSize='absolute,absolute' PackSizeProp='0043/0001,0316/0001' ScrollExtent='440,70' Size='440,70'/>
<Rectangle Color='#385E61' GetsInput='false' Location='23,116' PackSize='absolute,absolute' PackSizeProp='0193/0001,0146/0001' ScrollExtent='290,240' Size='290,240'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='483,369' Size='483,369' Stretch='false'/>
<Template Name='AppealsTemplate' Size='2000,16'>\<text font = \'/Fonts.HudFont2\' location = \'3,1\' size = \'2000,18\'\>
$Name$
\</text\></Template>
<DataSource Name='AppealsData'>
<Data Name='Title of an appeal - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -'/>
</DataSource>
</Page>
<Page BackgroundColor='#FFFFFF' Location='228,204' MinimumSize='400,240' minsize='400,240' movable='true' Name='CSNewRequest' PackLocation='center,center' PackLocationProp='-284/0001,-180/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' resizable='false' ScrollExtent='482,386' Size='482,386' Visible='false'>
<Dropdownbox BackgroundColor='#FFFFFF' BackgroundOpacity='0.675' BackgroundTint='#000000' DataSource='Category0Data' Location='32,46' Name='Category0' PackLocation='left,top' PackLocationProp='0032/0001,0046/0001' PackSize='absolute,fixed' PackSizeProp='0063/0001,0002/0003' RowTemplate='BugReportTemplate' ScrollExtent='419,32' SelectedItemIndex='5' Size='419,32' Style='/Dropdowns.HudPane.style'/>
<Dropdownbox BackgroundColor='#FFFFFF' BackgroundOpacity='0.675' BackgroundTint='#000000' DataSource='Category1Data' Location='32,86' Name='Category1' PackLocation='left,top' PackLocationProp='0032/0001,0086/0001' PackSize='absolute,fixed' PackSizeProp='0063/0001,0002/0003' RowTemplate='BugReportTemplate' ScrollExtent='419,32' SelectedItemIndex='5' Size='419,32' Style='/Dropdowns.HudPane.style'/>
<Button Location='412,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-070/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'></Button>
<Button Location='55,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0055/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'></Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@cs_new_title]' Location='101,7' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0007/0001' PackSize='absolute,fixed' PackSizeProp='0208/0001,0002/0003' ScrollExtent='274,20' Size='274,20' TextAlignment='Center' TextAlignmentVertical='Center'>@cs_new_title</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='25,0' Name='Title' PackLocation='left,top' PackLocationProp='0025/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0049/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='433,32' Size='433,32'/>
<Textbox Activated='true' BackgroundColor='#385E61' BackgroundOpacity='1.000' Location='33,146' MaxLength='3800' MaxLines='Unlimited' Name='Body' PackLocation='left,top' PackLocationProp='0033/0001,0146/0001' PackSize='absolute,absolute' PackSizeProp='0074/0001,0216/0001' ScrollExtent='408,170' Size='408,170' Style='/Textboxes.Bordered' WrapWidth='404'></Textbox>
<Scrollbar Control='ItemInfoText' Location='442,146' Name='ItemInfoScrollbar' PackLocation='right,top' PackLocationProp='-040/0001,0146/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0216/0001' ScrollExtent='10,170' Size='10,170' Style='/ScrollBars.vertical.style'/>
<Button LocalText='[@OK]' Location='23,335' Name='OkButton' PackLocation='left,bottom' PackLocationProp='0023/0001,-051/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='140,20' Size='140,20' Style='/Buttons.TextButton.style'>@OK</Button>
<Button IsCancelButton='true' LocalText='[@Cancel]' Location='323,336' Name='CancelButton' PackLocation='right,bottom' PackLocationProp='-159/0001,-050/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='140,20' Size='140,20' Style='/Buttons.TextButton.style'>@Cancel</Button>
<Rectangle Color='#385E61' GetsInput='false' Location='22,36' PackSize='absolute,fixed' PackSizeProp='0043/0001,0002/0003' ScrollExtent='439,90' Size='439,90'/>
<Rectangle Color='#385E61' GetsInput='false' Location='23,136' PackLocation='top,left' PackLocationProp='0023/0001,0136/0001' PackSize='absolute,absolute' PackSizeProp='0044/0001,0196/0001' ScrollExtent='438,190' Size='438,190'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='482,369' Size='482,369' Stretch='false'/>
<DataSource Name='Category0Data'/>
<DataSource Name='Category1Data'/>
</Page>
<ImageStyle Name='TabBorderTopStyle'>
<ImageFrame Source='ui_window_map_tab_border_00' SourceRect='8,0,24,2'/>
</ImageStyle>
<Page Name='OverheadMap' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' runengine='false' ScrollExtent='1024,768' Size='1024,768' Visible='false' wantsinput='Shared'>
<Textbox Location='460,400' MinimumSize='32,16' Name='EditTextbox' ScrollExtent='128,20' Size='128,20' Style='/Textboxes.Clear' TooltipStyle='/Tooltips.Default' Visible='false'>Test Text</Textbox>
<Page BackgroundOpacity='1.000' Name='Buildings' ScrollExtent='512,512' Size='512,512' Visible='false'>
<Image Name='amp_station' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.amp_station'/>
<Image Location='68,0' Name='bunker_lg' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.bunker_lg'/>
<Image Location='142,0' Name='bunker_sm' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.bunker_sm'/>
<Image Location='220,0' Name='comm_station' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.comm_station'/>
<Image Location='7,88' Name='comm_station_dsp' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.comm_station_dsp'/>
<Image Location='75,89' Name='cryo_facility' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cryo_facility'/>
<Image Location='148,89' Name='meeting_building' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.meeting_building'/>
<Image Location='225,89' Name='orbital_building' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.orbital_building'/>
<Image Location='12,180' Name='tech_plant' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.tech_plant'/>
<Image Location='83,182' Name='tower_a' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.tower_a'/>
<Image Location='154,182' Name='tower_b' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.tower_b'/>
<Image Location='230,182' Name='tower_c' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.tower_c'/>
<Image Location='9,265' Name='vt_building' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.vt_building'/>
<Image Location='88,265' Name='vt_dropship' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.vt_dropship'/>
<Image Location='160,265' Name='vt_vehicle' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.vt_vehicle'/>
<Image Location='235,265' Name='warpgate' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.warpgate'/>
<Image Location='9,342' Name='bridge_start' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.bridge_start'/>
<Image Location='88,342' Name='bridge_mid' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.bridge_mid'/>
<Image Location='160,342' Name='bridge_end' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.bridge_end'/>
<Image Location='235,342' Name='vr_training' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.vr_training'/>
<Image Location='9,411' Name='bunker_gauntlet' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.bunker_gauntlet'/>
<Image Location='88,411' Name='vt_spawn' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.vt_spawn'/>
</Page>
<Page BackgroundOpacity='1.000' maxsize='500,500' minsize='100,100' movable='true' Name='Templates' preserveaspectratio='true' resizable='true' ScrollExtent='377,387' Size='377,387' Visible='false'>
<Image Location='131,32' Name='SquadBlip0' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_0'/>
<Image Location='6,32' Name='SquadBlip1' ScrollExtent='7,14' Size='7,14' Stretch='false' Style='/Icons.HUD.Radar_digit_1'/>
<Image Location='20,32' Name='SquadBlip2' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_2'/>
<Image Location='34,32' Name='SquadBlip3' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_3'/>
<Image Location='48,32' Name='SquadBlip4' ScrollExtent='11,14' Size='11,14' Stretch='false' Style='/Icons.HUD.Radar_digit_4'/>
<Image Location='62,32' Name='SquadBlip5' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_5'/>
<Image Location='77,32' Name='SquadBlip6' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_6'/>
<Image Location='91,32' Name='SquadBlip7' ScrollExtent='11,14' Size='11,14' Stretch='false' Style='/Icons.HUD.Radar_digit_7'/>
<Image Location='105,32' Name='SquadBlip8' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_8'/>
<Image Location='119,32' Name='SquadBlip9' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_9'/>
<Image Location='146,35' Name='SoldierBlip' ScrollExtent='10,10' Size='10,10' Stretch='false' Style='/Icons.HUD.Radar_soldier_blip' UserResizable='true'/>
<Image Location='5,62' Name='LineBlip' ScrollExtent='12,3' Size='12,3' Stretch='false' Style='/Icons.HUD.Radar_line_blip'/>
<Image Location='23,59' Name='AvatarBlip' ScrollExtent='14,16' Size='14,16' Stretch='false' Style='/Icons.HUD.Radar_avatar_blip'/>
<Image Location='47,56' Name='QuadBlip' ScrollExtent='15,24' Size='15,24' Stretch='false' Style='/Icons.HUD.Radar_quad_blip'/>
<Image Location='72,53' Name='HarasserBlip' ScrollExtent='17,28' Size='17,28' Stretch='false' Style='/Icons.HUD.Radar_harasser_blip'/>
<Image Location='96,53' Name='EnforcerBlip' ScrollExtent='16,28' Size='16,28' Stretch='false' Style='/Icons.HUD.Radar_enforcer_blip'/>
<Image Location='118,54' Name='MarauderBlip' ScrollExtent='15,28' Size='15,28' Stretch='false' Style='/Icons.HUD.Radar_marauder_blip'/>
<Image Location='141,53' Name='ThresherBlip' ScrollExtent='15,28' Size='15,28' Stretch='false' Style='/Icons.HUD.Radar_thresher_blip'/>
<Image Location='163,53' Name='LightningBlip' ScrollExtent='16,28' Size='16,28' Stretch='false' Style='/Icons.HUD.Radar_lightning_blip'/>
<Image Location='4,87' Name='VanguardBlip' ScrollExtent='18,28' Size='18,28' Stretch='false' Style='/Icons.HUD.Radar_vanguard_blip'/>
<Image Location='30,88' Name='ProwlerBlip' ScrollExtent='18,28' Size='18,28' Stretch='false' Style='/Icons.HUD.Radar_prowler_blip'/>
<Image Location='55,89' Name='MagriderBlip' ScrollExtent='15,29' Size='15,29' Stretch='false' Style='/Icons.HUD.Radar_magrider_blip'/>
<Image Location='75,88' Name='DelivererBlip' ScrollExtent='16,33' Size='16,33' Stretch='false' Style='/Icons.HUD.Radar_deliverer_blip'/>
<Image Location='96,88' Name='SunderBlip' ScrollExtent='19,37' Size='19,37' Stretch='false' Style='/Icons.HUD.Radar_sunder_blip'/>
<Image Location='118,90' Name='AntBlip' ScrollExtent='18,32' Size='18,32' Stretch='false' Style='/Icons.HUD.Radar_ant_blip'/>
<Image Location='142,91' Name='AmsBlip' ScrollExtent='15,40' Size='15,40' Stretch='false' Style='/Icons.HUD.Radar_ams_blip'/>
<Image Location='6,143' Name='GalaxyBlip' ScrollExtent='47,43' Size='47,43' Stretch='false' Style='/Icons.HUD.Radar_galaxy_blip'/>
<Image Location='60,145' Name='MosquitoBlip' ScrollExtent='15,28' Size='15,28' Stretch='false' Style='/Icons.HUD.Radar_mosquito_blip'/>
<Image Location='82,145' Name='ReaverBlip' ScrollExtent='22,30' Size='22,30' Stretch='false' Style='/Icons.HUD.Radar_reaver_blip'/>
<Image Location='111,147' Name='MaxBlip' ScrollExtent='20,10' Size='20,10' Stretch='false' Style='/Icons.HUD.Radar_max_blip'/>
<Image Location='142,147' Name='MissileBlip' ScrollExtent='4,11' Size='4,11' Stretch='false' Style='/Icons.HUD.Radar_missile_blip'/>
<Image Location='8,197' Name='Hack' ScrollExtent='46,32' Size='46,32' Stretch='false' Style='/Icons.Map.Facility.Hack_icon'/>
<Image Location='63,197' Name='Generator' ScrollExtent='12,32' Size='12,32' Stretch='false' Style='/Icons.Map.Facility.Generator_icon'/>
<Image Location='85,197' Name='Boomer' ScrollExtent='30,32' Size='30,32' Stretch='false' Style='/Icons.Map.Equipment.Boomer_icon'/>
<Image Location='122,197' Name='HEMine' ScrollExtent='34,32' Size='34,32' Stretch='false' Style='/Icons.Map.Equipment.Hemine_icon'/>
<Image Location='7,235' Name='Spitfire' ScrollExtent='25,32' Size='25,32' Stretch='false' Style='/Icons.Map.Equipment.Spitfire_icon'/>
<Image Location='38,235' Name='MotionSensor' ScrollExtent='32,32' Size='32,32' Stretch='false' Style='/Icons.Map.Equipment.Motion_sensor_icon'/>
<Image Location='80,235' Name='SpawnTube' ScrollExtent='11,32' Size='11,32' Stretch='false' Style='/Icons.Map.Facility.SpawnTube_icon'/>
<Image Location='99,235' Name='Repair' ScrollExtent='15,21' Size='15,21' Stretch='false' Style='/Icons.Map.Facility.Benefit_Repair_icon'/>
<Image Location='122,235' Name='ShieldedVehicle' ScrollExtent='37,12' Size='37,12' Stretch='false' Style='/Icons.Map.Facility.Benefit_ShieldedVehicle_icon'/>
<Image Location='122,252' Name='AssaultVehicle' ScrollExtent='40,16' Size='40,16' Stretch='false' Style='/Icons.Map.Facility.Benefit_AssaultVehicle_icon'/>
<Image Location='6,277' Name='SquareImage' ScrollExtent='20,20' Size='20,20' Style='/Icons.Map.Misc.Square_icon'/>
<Image Location='29,277' Name='TriangleImage' ScrollExtent='19,20' Size='19,20' Style='/Icons.Map.Misc.Triangle_icon'/>
<Image Location='52,277' Name='CircleImage' ScrollExtent='20,20' Size='20,20' Style='/Icons.Map.Misc.Circle_icon'/>
<Image Location='78,277' Name='DeadAvatarBlip' ScrollExtent='27,17' Size='27,17' Style='/Icons.Map.Respawn.Dead_avatar_icon'/>
<Text continentid='1' Font='/Fonts.HudFont1' GetsInput='false' LocalText='Example map text small' Location='78,307' Name='MapTextSmall' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>Example map text small</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='Example map text medium' Location='78,328' Name='MapTextMedium' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>Example map text medium</Text>
<Text continentid='1' Font='/Fonts.HudFont3' GetsInput='false' LocalText='Example map text large' Location='78,351' Name='MapTextLarge' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>Example map text large</Text>
<Image Location='200,19' Name='Droppod' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Misc.Droppod_icon'/>
<Image Location='243,19' Name='Hotspot' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Misc.Hotspot_icon'/>
<Image Location='282,19' Name='Respawn' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Respawn.Respawn_icon'/>
<Image Location='324,19' Name='RespawnAms' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Respawn.Respawn_ams_icon'/>
<Image Location='200,61' Name='Soi' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_icon'/>
<Image Location='243,61' Name='SoiNC' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_nc_icon'/>
<Image Location='286,61' Name='SoiTR' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_tr_icon'/>
<Image Location='327,61' Name='SoiVS' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_vs_icon'/>
<Image Location='200,105' Name='Warpgate' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Legend.Warpgate_icon'/>
<Image Location='244,105' Name='MotionSensorRange' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_icon'/>
<Image Location='287,105' Name='SpitfireRange' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_icon'/>
<Image Location='327,105' Name='WeatherDirection' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Weather.Direction'/>
<Image Location='201,147' Name='WarpDots' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Warp.Dots'/>
<Image Location='245,147' Name='WarpLine' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Warp.Line'/>
<Image Location='289,147' Name='WarpTarget' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Warp.Target'/>
<Image Location='327,147' Name='WeatherRange' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Weather.Range'/>
<Image Location='201,194' Name='WarpgateSelection' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Warp.Selection'/>
<Image Location='245,194' Name='WarpgateSelectionEffect' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Warp.SelectionEffect'/>
<Image Location='289,194' Name='SelectionBrackets' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Misc.Brackets_icon'/>
</Page>
<Page BackgroundColor='#FFFF00' Location='451,35' movable='true' Name='DroppodToolbar' PackLocation='proportional,proportional' PackLocationProp='0547/1024,0075/0768' ScrollExtent='193,81' Size='193,81'>
<Button BackgroundColor='#FFFFFF' LocalText='[@LaunchDroppod]' LocalTooltip='[@LaunchDroppodTooltip]' Location='31,25' Name='DroppodLaunchButton' OnPress='psc_launchdroppod
psc_hidemap' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@LaunchDroppodTooltip'>@LaunchDroppod</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.800' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='193,81' Size='193,81' Stretch='false'/>
<Image AbsorbsInput='false' BackgroundColor='#FFFFFF' BackgroundOpacity='1.000' Name='Flash' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='193,81' Size='193,81' Stretch='false' Visible='false'/>
</Page>
<Page BackgroundColor='#FFFF00' Location='446,648' movable='true' Name='CommanderToolbar' PackLocation='proportional,proportional' PackLocationProp='0534/1024,0709/0768' ScrollExtent='177,123' Size='177,123'>
<Page Location='0,91' Name='Title' ScrollExtent='177,32' Size='177,32'>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@ToggleWindowSizeTooltip]' Location='121,6' Name='ToggleSize' PackLocation='right,top' PackLocationProp='-056/0001,0006/0001' ScrollExtent='9,20' Size='9,20' Style='/Buttons.ActiveItems.checkstyle' Tooltip='@ToggleWindowSizeTooltip'>V</Checkbox>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadMapCommand]' Location='44,0' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0044/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0097/0001,0002/0003' ScrollExtent='80,32' Size='80,32' TextAlignment='Center' TextAlignmentVertical='Center' TruncateElipsis='false'>@OverheadMapCommand</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='17,0' Name='Title' PackLocation='left,top' PackLocationProp='0017/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0034/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='143,32' Size='143,32'/>
</Page>
<Page Name='MainPage' ScrollExtent='177,123' Size='177,123' Visible='false'>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleFriendliesTooltip]' Location='21,37' Name='FriendlyToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleFriendliesTooltip'>@ToggleFriendlies</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEnemiesTooltip]' Location='21,59' Name='EnemyToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEnemiesTooltip'>@ToggleEnemies</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@AddWaypointTooltip]' Location='21,81' Name='AddWaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@AddWaypointTooltip'>@AddWaypoint</Checkbox>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0016/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0016/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='177,107' Size='177,107' Stretch='false'/>
</Page>
<Page Name='FlippedPage' ScrollExtent='177,123' Size='177,123'>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleFriendliesTooltip]' Location='21,22' Name='FriendlyToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleFriendliesTooltip'>@ToggleFriendlies</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEnemiesTooltip]' Location='21,44' Name='EnemyToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEnemiesTooltip'>@ToggleEnemies</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@AddWaypointTooltip]' Location='21,66' Name='AddWaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@AddWaypointTooltip'>@AddWaypoint</Checkbox>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.700' PackLocation='left,bottom' PackLocationProp='0000/0001,-123/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0010/0001' RStyleDefault='/WindowPanes.SmallFlippedBackground.style' ScrollExtent='177,113' Size='177,113' Stretch='false'/>
</Page>
</Page>
<Page BackgroundColor='#FFFF00' Location='630,535' movable='true' Name='BattleplanToolbar' PackLocation='proportional,proportional' PackLocationProp='0718/1024,0684/0768' ScrollExtent='177,299' Size='177,299'>
<Page Location='0,205' Name='Title' ScrollExtent='177,32' Size='177,32'>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@ToggleWindowSizeTooltip]' Location='121,6' Name='ToggleSize' PackLocation='right,top' PackLocationProp='-056/0001,0006/0001' ScrollExtent='9,20' Size='9,20' Style='/Buttons.ActiveItems.checkstyle' Tooltip='@ToggleWindowSizeTooltip'>V</Checkbox>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadMapBattleplan]' Location='44,0' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0044/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0097/0001,0002/0003' ScrollExtent='80,32' Size='80,32' TextAlignment='Center' TextAlignmentVertical='Center' TruncateElipsis='false'>@OverheadMapBattleplan</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='17,0' Name='Title' PackLocation='left,top' PackLocationProp='0017/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0034/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='143,32' Size='143,32'/>
</Page>
<Page Name='MainPage' ScrollExtent='177,237' Size='177,237' Visible='false'>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor0Tooltip]' Location='21,37' Name='Color0Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor0Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor1Tooltip]' Location='89,37' Name='Color1Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor1Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor2Tooltip]' Location='21,59' Name='Color2Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor2Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor3Tooltip]' Location='89,59' Name='Color3Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor3Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor4Tooltip]' Location='21,81' Name='Color4Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor4Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor5Tooltip]' Location='89,81' Name='Color5Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor5Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor6Tooltip]' Location='21,103' Name='Color6Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor6Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor7Tooltip]' Location='90,103' Name='Color7Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor7Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleDrawTooltip]' Location='21,129' Name='DrawToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleDrawTooltip'>@ToggleDraw</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEraseTooltip]' Location='21,151' Name='EraseToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEraseTooltip'>@ToggleErase</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEditTextTooltip]' Location='21,173' Name='EditTextToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEditTextTooltip'>@ToggleEditText</Checkbox>
<Button LocalText='[@MapButtonClearAll]' LocalTooltip='[@MapButtonClearAllTooltip]' Location='21,195' Name='ClearAllButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonClearAllTooltip'>@MapButtonClearAll</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0016/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0016/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='177,221' Size='177,221' Stretch='false'/>
</Page>
<Page Name='FlippedPage' ScrollExtent='177,237' Size='177,237'>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor0Tooltip]' Location='21,22' Name='Color0Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor0Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor1Tooltip]' Location='89,22' Name='Color1Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor1Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor2Tooltip]' Location='21,44' Name='Color2Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor2Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor3Tooltip]' Location='89,44' Name='Color3Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor3Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor4Tooltip]' Location='21,66' Name='Color4Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor4Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor5Tooltip]' Location='89,66' Name='Color5Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor5Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor6Tooltip]' Location='21,88' Name='Color6Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor6Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor7Tooltip]' Location='90,88' Name='Color7Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor7Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleDrawTooltip]' Location='21,114' Name='DrawToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleDrawTooltip'>@ToggleDraw</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEraseTooltip]' Location='21,136' Name='EraseToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEraseTooltip'>@ToggleErase</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEditTextTooltip]' Location='21,158' Name='EditTextToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEditTextTooltip'>@ToggleEditText</Checkbox>
<Button LocalText='[@MapButtonClearAll]' LocalTooltip='[@MapButtonClearAllTooltip]' Location='21,180' Name='ClearAllButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonClearAllTooltip'>@MapButtonClearAll</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.700' PackLocation='left,bottom' PackLocationProp='0000/0001,-237/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0011/0001' RStyleDefault='/WindowPanes.SmallFlippedBackground.style' ScrollExtent='177,226' Size='177,226' Stretch='false'/>
</Page>
</Page>
<Page Location='270,600' movable='true' Name='MainToolbar' PackLocation='proportional,proportional' PackLocationProp='0358/1024,0686/0768' ScrollExtent='177,172' Size='177,172'>
<Page Location='0,140' Name='Title' ScrollExtent='177,32' Size='177,32'>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@ToggleWindowSizeTooltip]' Location='121,6' Name='ToggleSize' PackLocation='right,top' PackLocationProp='-056/0001,0006/0001' ScrollExtent='9,20' Size='9,20' Style='/Buttons.ActiveItems.checkstyle' Tooltip='@ToggleWindowSizeTooltip'>V</Checkbox>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadMapToolbar]' Location='42,0' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0042/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0101/0001,0002/0003' ScrollExtent='76,32' Size='76,32' TextAlignment='Center' TextAlignmentVertical='Center' TruncateElipsis='false'>@OverheadMapToolbar</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='17,0' Name='Title' PackLocation='left,top' PackLocationProp='0017/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0033/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='144,32' Size='144,32'/>
</Page>
<Page Name='MainPage' ScrollExtent='177,172' Size='177,172' Visible='false'>
<Button LocalText='[@MapButtonGlobal]' LocalTooltip='[@MapButtonGlobalTooltip]' Location='21,37' Name='GlobalViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonGlobalTooltip'>@MapButtonGlobal</Button>
<Button LocalText='[@MapButtonContinental]' LocalTooltip='[@MapButtonContinentalTooltip]' Location='21,37' Name='ContinentViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonContinentalTooltip'>@MapButtonContinental</Button>
<Button LocalText='[@MapButtonZoomIn]' LocalTooltip='[@MapButtonZoomInTooltip]' Location='21,60' Name='ZoomInButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonZoomInTooltip'>@MapButtonZoomIn</Button>
<Button LocalText='[@MapButtonZoomOut]' LocalTooltip='[@MapButtonZoomOutTooltip]' Location='21,83' Name='ZoomOutButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonZoomOutTooltip'>@MapButtonZoomOut</Button>
<Button LocalText='[@MapButtonFindPlayer]' LocalTooltip='[@MapButtonFindPlayerTooltip]' Location='21,106' Name='CenterViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonFindPlayerTooltip'>@MapButtonFindPlayer</Button>
<Button LocalText='[@MapButtonFindWaypoint]' LocalTooltip='[@MapButtonFindWaypointTooltip]' Location='21,129' Name='FindWaypointButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonFindWaypointTooltip'>@MapButtonFindWaypoint</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0016/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0016/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='177,156' Size='177,156' Stretch='false'/>
</Page>
<Page Name='FlippedPage' ScrollExtent='177,172' Size='177,172'>
<Button LocalText='[@MapButtonGlobal]' LocalTooltip='[@MapButtonGlobalTooltip]' Location='21,22' Name='GlobalViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonGlobalTooltip'>@MapButtonGlobal</Button>
<Button LocalText='[@MapButtonContinental]' LocalTooltip='[@MapButtonContinentalTooltip]' Location='21,22' Name='ContinentViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonContinentalTooltip'>@MapButtonContinental</Button>
<Button LocalText='[@MapButtonZoomIn]' LocalTooltip='[@MapButtonZoomInTooltip]' Location='21,45' Name='ZoomInButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonZoomInTooltip'>@MapButtonZoomIn</Button>
<Button LocalText='[@MapButtonZoomOut]' LocalTooltip='[@MapButtonZoomOutTooltip]' Location='21,68' Name='ZoomOutButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonZoomOutTooltip'>@MapButtonZoomOut</Button>
<Button LocalText='[@MapButtonFindPlayer]' LocalTooltip='[@MapButtonFindPlayerTooltip]' Location='21,91' Name='CenterViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonFindPlayerTooltip'>@MapButtonFindPlayer</Button>
<Button LocalText='[@MapButtonFindWaypoint]' LocalTooltip='[@MapButtonFindWaypointTooltip]' Location='21,114' Name='FindWaypointButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonFindWaypointTooltip'>@MapButtonFindWaypoint</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.700' PackLocation='left,bottom' PackLocationProp='0000/0001,-172/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0010/0001' RStyleDefault='/WindowPanes.SmallFlippedBackground.style' ScrollExtent='177,162' Size='177,162' Stretch='false'/>
</Page>
</Page>
<Page Location='830,517' movable='true' Name='ToggleToolbar' PackLocation='proportional,proportional' PackLocationProp='0918/1024,0644/0768' ScrollExtent='177,255' Size='177,255'>
<Page Location='0,223' Name='Title' ScrollExtent='177,32' Size='177,32'>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@ToggleWindowSizeTooltip]' Location='120,6' Name='ToggleSize' PackLocation='right,top' PackLocationProp='-057/0001,0006/0001' ScrollExtent='9,20' Size='9,20' Style='/Buttons.ActiveItems.checkstyle' Tooltip='@ToggleWindowSizeTooltip'>V</Checkbox>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadToggleToolbar]' Location='43,0' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0043/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0104/0001,0002/0003' ScrollExtent='73,42' Size='73,32' TextAlignment='Center' TextAlignmentVertical='Center' TruncateElipsis='false'>@OverheadToggleToolbar</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='15,0' Name='Title' PackLocation='left,top' PackLocationProp='0015/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0033/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='144,32' Size='144,32'/>
</Page>
<Page Name='MainPage' ScrollExtent='177,255' Size='177,255' Visible='false'>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleTextOn/Off]' Location='21,37' Name='TextToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleTextOn/Off'>@OverheadToggleText</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleResourcesTooltip]' Location='21,59' Name='ResourceToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleResourcesTooltip'>@OverheadToggleResources</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEquipmentTooltip]' Location='21,81' Name='EquipmentToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEquipmentTooltip'>@OverheadToggleEquipment</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleSOITooltip]' Location='21,103' Name='BuildingSOIToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleSOITooltip'>@OverheadToggleBuildingSOI</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleFacilityInfoTooltip]' Location='21,125' Name='BuildingStateToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleFacilityInfoTooltip'>@OverheadToggleFacilityInfo</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleSquadTooltip]' Location='21,147' Name='SquadToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleSquadTooltip'>@OverheadToggleSquad</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleHotSpotsTooltip]' Location='21,169' Name='HotSpotToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleHotSpotsTooltip'>@OverheadToggleHotSpots</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleWeatherTooltip]' Location='21,191' Name='WeatherToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleWeatherTooltip'>@OverheadToggleWeather</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleBattleplanTooltip]' Location='21,213' Name='BattleplanToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleBattleplanTooltip'>@OverheadToggleBattleplan</Checkbox>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0016/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0016/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='177,239' Size='177,239' Stretch='false'/>
</Page>
<Page Name='FlippedPage' ScrollExtent='177,255' Size='177,255'>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleTextOn/Off]' Location='21,22' Name='TextToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleTextOn/Off'>@OverheadToggleText</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleResourcesTooltip]' Location='21,44' Name='ResourceToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleResourcesTooltip'>@OverheadToggleResources</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEquipmentTooltip]' Location='21,66' Name='EquipmentToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEquipmentTooltip'>@OverheadToggleEquipment</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleSOITooltip]' Location='21,88' Name='BuildingSOIToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleSOITooltip'>@OverheadToggleBuildingSOI</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleSOITooltip]' Location='21,110' Name='BuildingStateToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleSOITooltip'>@OverheadToggleFacilityInfo</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleSquadTooltip]' Location='21,132' Name='SquadToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleSquadTooltip'>@OverheadToggleSquad</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleHotSpotsTooltip]' Location='21,154' Name='HotSpotToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleHotSpotsTooltip'>@OverheadToggleHotSpots</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleWeatherTooltip]' Location='21,176' Name='WeatherToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleWeatherTooltip'>@OverheadToggleWeather</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleBattleplanTooltip]' Location='21,198' Name='BattleplanToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleBattleplanTooltip'>@OverheadToggleBattleplan</Checkbox>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.700' RStyleDefault='/WindowPanes.SmallFlippedBackground.style' ScrollExtent='177,245' Size='177,245' Stretch='false'/>
</Page>
</Page>
<Page Location='2,391' movable='true' Name='MapLegend' PackLocation='proportional,proportional' PackLocationProp='0137/1024,0581/0768' ScrollExtent='270,380' Size='270,380'>
<Page Location='0,348' Name='Title' ScrollExtent='270,32' Size='270,32'>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@ToggleWindowSizeTooltip]' Location='207,5' Name='ToggleSize' PackLocation='right,top' PackLocationProp='-063/0001,0005/0001' ScrollExtent='9,20' Size='9,20' Style='/Buttons.ActiveItems.checkstyle' Tooltip='@ToggleWindowSizeTooltip'>V</Checkbox>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadMapLegend]' Location='51,0' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0051/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0117/0001,0002/0003' ScrollExtent='153,32' Size='153,32' TextAlignment='Center' TextAlignmentVertical='Center' TruncateElipsis='false'>@OverheadMapLegend</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='24,0' Name='Title' PackLocation='left,top' PackLocationProp='0024/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0048/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='222,32' Size='222,32'/>
</Page>
<Page Name='MainPage' ScrollExtent='270,380' Size='270,380' Visible='false'>
<Image Color='#FFFF00' Location='21,38' Name='Hotspot' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Misc.Hotspot_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendHotSpot]' Location='66,38' MaxLines='1' Name='HotSpotLabel' PackLocation='left,top' PackLocationProp='0066/0001,0038/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendHotSpot</Text>
<Image Color='#00FFFF' Location='21,78' Name='Respawn' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Respawn.Respawn_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendRespawn]' Location='66,78' MaxLines='1' Name='RespawnLabel' PackLocation='left,top' PackLocationProp='0066/0001,0078/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendRespawn</Text>
<Image Color='#00FFFF' Location='21,118' Name='RespawnAms' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Respawn.Respawn_ams_icon'/>
<Image Color='#00FFFF' Location='21,118' Name='RespawnAMSBack' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Respawn.Respawn_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendRespawnAms]' Location='66,118' MaxLines='1' Name='RespawnAmsLabel' PackLocation='left,top' PackLocationProp='0066/0001,0118/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendRespawnAms</Text>
<Image Color='#0404FF' Location='21,158' Name='SoiNC' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_nc_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiNC]' Location='66,158' MaxLines='1' Name='SoiNCLabel' PackLocation='left,top' PackLocationProp='0066/0001,0158/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendSoiNC</Text>
<Image Color='#ED0000' Location='21,198' Name='SoiTR' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_tr_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiTR]' Location='66,198' MaxLines='1' Name='SoiTRLabel' PackLocation='left,top' PackLocationProp='0066/0001,0198/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendSoiTR</Text>
<Image Color='#9400CB' Location='21,238' Name='SoiVS' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_vs_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiVS]' Location='66,238' MaxLines='1' Name='SoiVSLabel' PackLocation='left,top' PackLocationProp='0066/0001,0238/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendSoiVS</Text>
<Image Color='#000000' Location='21,278' Name='Warpgate' PackLocation='left,top' PackLocationProp='0021/0001,0278/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Legend.Warpgate_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendWarpgate]' Location='66,278' MaxLines='1' Name='WarpgateLabel' PackLocation='left,top' PackLocationProp='0066/0001,0278/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendWarpgate</Text>
<Image Color='#00FFFF' Location='21,318' Name='WarpgateSelectionEffect' PackLocation='left,top' PackLocationProp='0021/0001,0318/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Warp.SelectionEffect'/>
<Image Color='#00FFFF' Location='21,318' Name='WarpgateSelection' PackLocation='left,top' PackLocationProp='0021/0001,0318/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Warp.Selection'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendWarpgateSelection]' Location='66,318' MaxLines='1' Name='WarpgateSelectionLabel' PackLocation='left,top' PackLocationProp='0066/0001,0318/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendWarpgateSelection</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' Opacity='0.700' PackSize='absolute,absolute' PackSizeProp='0000/0001,0016/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='270,364' Size='270,364' Stretch='false'/>
</Page>
<Page Name='FlippedPage' ScrollExtent='270,380' Size='270,380'>
<Image Color='#FFFF00' Location='21,25' Name='Hotspot' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Misc.Hotspot_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendHotSpot]' Location='66,25' MaxLines='1' Name='HotSpotLabel' PackLocation='left,top' PackLocationProp='0066/0001,0025/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendHotSpot</Text>
<Image Color='#00FFFF' Location='21,65' Name='Respawn' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Respawn.Respawn_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendRespawn]' Location='66,65' MaxLines='1' Name='RespawnLabel' PackLocation='left,top' PackLocationProp='0066/0001,0065/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendRespawn</Text>
<Image Color='#00FFFF' Location='21,105' Name='RespawnAms' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Respawn.Respawn_ams_icon'/>
<Image Color='#00FFFF' Location='21,105' Name='RespawnAMSBack' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Respawn.Respawn_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendRespawnAms]' Location='66,105' MaxLines='1' Name='RespawnAmsLabel' PackLocation='left,top' PackLocationProp='0066/0001,0105/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendRespawnAms</Text>
<Image Color='#0404FF' Location='21,145' Name='SoiNC' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_nc_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiNC]' Location='66,145' MaxLines='1' Name='SoiNCLabel' PackLocation='left,top' PackLocationProp='0066/0001,0145/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendSoiNC</Text>
<Image Color='#ED0000' Location='21,185' Name='SoiTR' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_tr_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiTR]' Location='66,185' MaxLines='1' Name='SoiTRLabel' PackLocation='left,top' PackLocationProp='0066/0001,0185/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendSoiTR</Text>
<Image Color='#9400CB' Location='21,225' Name='SoiVS' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_vs_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiVS]' Location='66,225' MaxLines='1' Name='SoiVSLabel' PackLocation='left,top' PackLocationProp='0066/0001,0225/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendSoiVS</Text>
<Image Color='#000000' Location='21,265' Name='Warpgate' PackLocation='left,top' PackLocationProp='0021/0001,0265/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Legend.Warpgate_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendWarpgate]' Location='66,265' MaxLines='1' Name='WarpgateLabel' PackLocation='left,top' PackLocationProp='0066/0001,0265/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendWarpgate</Text>
<Image Color='#00FFFF' Location='21,305' Name='WarpgateSelectionEffect' PackLocation='left,top' PackLocationProp='0021/0001,0305/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Warp.SelectionEffect'/>
<Image Color='#00FFFF' Location='21,305' Name='WarpgateSelection' PackLocation='left,top' PackLocationProp='0021/0001,0305/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Warp.Selection'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendWarpgateSelection]' Location='66,305' MaxLines='1' Name='WarpgateSelectionLabel' PackLocation='left,top' PackLocationProp='0066/0001,0305/0001' PackSize='absolute,fixed' PackSizeProp='0089/0001,0002/0003' ScrollExtent='181,36' Size='181,36' TextAlignmentVertical='Center'>@OverheadLegendWarpgateSelection</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.700' PackLocation='left,bottom' PackLocationProp='0000/0001,-380/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0010/0001' RStyleDefault='/WindowPanes.SmallFlippedBackground.style' ScrollExtent='270,370' Size='270,370' Stretch='false'/>
</Page>
</Page>
<Page Name='TitleBar' PackSize='1,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,32' Size='1024,32'>
<Text Font='/Fonts.HudFont3' LocalText='[@MapTitle]' Location='70,8' Name='TitleText' PackLocation='left,top' PackLocationProp='0070/0001,0008/0001' PackSize='absolute,fixed' PackSizeProp='0139/0001,0002/0003' ScrollExtent='885,20' Size='885,20' TextAlignment='Center' TextAlignmentVertical='Center'>@MapTitle</Text>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='40,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0040/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='964,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-060/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Image BackgroundOpacity='1.000' Name='Title' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' RStyleDefault='/WindowPanes.TitleBarFocus.style' ScrollExtent='1024,32' Size='1024,32'/>
</Page>
<WeatherOverlay AbsorbsInput='false' Name='WeatherOverlay' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='1024,768' Size='1024,768'/>
<Page BackgroundColor='#182142' BackgroundOpacity='1.000' Name='GlobalMap' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='1024,768' Size='1024,768'>
<Page AbsorbsInput='false' Name='Text' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768'>
<Text continentid='1' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z1]' Location='178,456' Name='Solsar' PackLocation='proportional,proportional' PackLocationProp='0303/1024,0467/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@z1</Text>
<Text continentid='2' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z2]' Location='774,401' Name='Hossin' PackLocation='proportional,proportional' PackLocationProp='0899/1024,0412/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@z2</Text>
<Text continentid='3' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z3]' Location='0,632' Name='Cyssor' PackLocation='proportional,proportional' PackLocationProp='0125/1024,0643/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@z3</Text>
<Text continentid='4' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z4]' Location='365,129' Name='Ishundar' PackLocation='proportional,proportional' PackLocationProp='0490/1024,0140/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@z4</Text>
<Text continentid='5' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z5]' Location='608,269' Name='Forseral' PackLocation='proportional,proportional' PackLocationProp='0733/1024,0280/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@z5</Text>
<Text continentid='6' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z6]' Location='0,108' Name='Ceryshen' PackLocation='proportional,proportional' PackLocationProp='0125/1024,0119/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@z6</Text>
<Text continentid='7' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z7]' Location='774,630' Name='Esamir' PackLocation='proportional,proportional' PackLocationProp='0899/1024,0641/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@z7</Text>
<Text continentid='8' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z8]' Location='461,604' Name='Oshur' PackLocation='proportional,proportional' PackLocationProp='0586/1024,0615/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@z8</Text>
<Text continentid='9' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z9]' Location='385,377' Name='Searhus' PackLocation='proportional,proportional' PackLocationProp='0510/1024,0388/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@z9</Text>
<Text continentid='10' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z10]' Location='36,325' Name='Amerish' PackLocation='proportional,proportional' PackLocationProp='0161/1024,0336/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@z10</Text>
<Text continentid='11' empire='1' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@home1]' Location='257,658' Name='SanctuaryNC' PackLocation='proportional,proportional' PackLocationProp='0382/1024,0669/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@home1</Text>
<Text continentid='12' empire='0' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@home2]' Location='215,221' Name='SanctuaryTR' PackLocation='proportional,proportional' PackLocationProp='0340/1024,0232/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@home2</Text>
<Text continentid='13' empire='2' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@home3]' Location='588,482' Name='SanctuaryVS' PackLocation='proportional,proportional' PackLocationProp='0713/1024,0493/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@home3</Text>
</Page>
<Page Name='MapImages' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Image BoundaryPolygon='38.000,80.000,87.000,40.000,97.000,4.000,130.000,3.000,156.000,37.000,177.000,57.000,176.000,104.000,185.000,138.000,161.000,188.000,88.000,222.000,56.000,186.000' Location='191,355' Name='Solsar' PackLocation='proportional,proportional' PackLocationProp='0303/1024,0467/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' SourceResource='ui_map01g'/>
<Image BoundaryPolygon='111.000,25.000,171.000,52.000,161.000,96.000,208.000,132.000,213.000,174.000,158.000,204.000,96.000,204.000,36.000,178.000,21.000,79.000' Location='803,300' Name='Hossin' PackLocation='proportional,proportional' PackLocationProp='0915/1024,0412/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' SourceResource='ui_map02g'/>
<Image BoundaryPolygon='2.000,11.000,157.000,24.000,211.000,56.000,217.000,129.000,212.000,205.000,36.000,220.000,1.000,166.000' Location='9,531' Name='Cyssor' PackLocation='proportional,proportional' PackLocationProp='0121/1024,0643/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' SourceResource='ui_map03g'/>
<Image BoundaryPolygon='111.000,9.000,151.000,19.000,198.000,53.000,220.000,70.000,211.000,145.000,176.000,187.000,106.000,219.000,55.000,207.000,11.000,135.000,1.000,75.000,18.000,40.000' Location='378,28' Name='Ishundar' PackLocation='proportional,proportional' PackLocationProp='0490/1024,0140/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' SourceResource='ui_map04g'/>
<Image BoundaryPolygon='86.000,27.000,107.000,27.000,161.000,51.000,224.000,120.000,193.000,152.000,159.000,190.000,103.000,210.000,68.000,198.000,21.000,130.000' Location='621,168' Name='Forseral' PackLocation='proportional,proportional' PackLocationProp='0733/1024,0280/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' SourceResource='ui_map05g'/>
<Image BoundaryPolygon='39.000,39.000,102.000,28.000,202.000,97.000,187.000,179.000,166.000,201.000,27.000,202.000' Location='-10,7' Name='Ceryshen' PackLocation='proportional,proportional' PackLocationProp='0102/1024,0119/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' SourceResource='ui_map06g'/>
<Image BoundaryPolygon='6.000,16.000,117.000,3.000,183.000,65.000,211.000,97.000,213.000,186.000,207.000,221.000,149.000,220.000,47.000,192.000,7.000,154.000' Location='784,529' Name='Esamir' PackLocation='proportional,proportional' PackLocationProp='0896/1024,0641/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' SourceResource='ui_map07g'/>
<Image BoundaryPolygon='69.000,29.000,158.000,35.000,182.000,62.000,178.000,100.000,205.000,129.000,172.000,182.000,51.000,207.000,18.000,112.000' Location='474,503' Name='Oshur' PackLocation='proportional,proportional' PackLocationProp='0586/1024,0615/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' SourceResource='ui_map08g'/>
<Image BoundaryPolygon='18.000,13.000,66.000,10.000,207.000,51.000,215.000,136.000,196.000,195.000,97.000,214.000,24.000,208.000,9.000,102.000' Location='398,276' Name='Searhus' PackLocation='proportional,proportional' PackLocationProp='0510/1024,0388/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' SourceResource='ui_map09g'/>
<Image BoundaryPolygon='74.000,26.000,155.000,12.000,188.000,26.000,204.000,111.000,187.000,180.000,34.000,209.000,26.000,152.000,68.000,100.000' Location='29,228' Name='Amerish' PackLocation='proportional,proportional' PackLocationProp='0141/1024,0340/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' SourceResource='ui_map10g'/>
<Image BoundaryPolygon='51.000,11.000,90.000,10.000,167.000,43.000,177.000,117.000,156.000,165.000,97.000,163.000,19.000,128.000,19.000,70.000' Location='291,580' Name='SanctuaryNC' PackLocation='proportional,proportional' PackLocationProp='0403/1024,0692/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' SourceResource='ui_map11g'/>
<Image BoundaryPolygon='60.000,56.000,105.000,55.000,158.000,74.000,168.000,136.000,147.000,164.000,61.000,164.000' Location='228,120' Name='SanctuaryTR' PackLocation='proportional,proportional' PackLocationProp='0340/1024,0232/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' SourceResource='ui_map12g'/>
<Image BoundaryPolygon='38.000,59.000,87.000,42.000,189.000,37.000,194.000,90.000,177.000,151.000,122.000,188.000,72.000,190.000,42.000,156.000' Location='594,369' Name='SanctuaryVS' PackLocation='proportional,proportional' PackLocationProp='0706/1024,0481/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' SourceResource='ui_map13g'/>
</Page>
<Image Name='Lines' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Style='/Plates.GlobalMapLinework'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='38.000,80.000,87.000,40.000,97.000,4.000,130.000,3.000,156.000,37.000,177.000,57.000,176.000,104.000,185.000,138.000,161.000,188.000,88.000,222.000,56.000,186.000' continentid='1' Location='191,355' Name='Solsar' PackLocation='proportional,proportional' PackLocationProp='0303/1024,0467/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' zonename='z1'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='111.000,25.000,171.000,52.000,161.000,96.000,208.000,132.000,213.000,174.000,158.000,204.000,96.000,204.000,36.000,178.000,21.000,79.000' continentid='2' Location='803,300' Name='Hossin' PackLocation='proportional,proportional' PackLocationProp='0915/1024,0412/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' zonename='z2'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='2.000,11.000,157.000,24.000,211.000,56.000,217.000,129.000,212.000,205.000,36.000,220.000,1.000,166.000' continentid='3' Location='9,531' Name='Cyssor' PackLocation='proportional,proportional' PackLocationProp='0121/1024,0643/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' zonename='z3'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='111.000,9.000,151.000,19.000,198.000,53.000,220.000,70.000,211.000,145.000,176.000,187.000,106.000,219.000,55.000,207.000,11.000,135.000,1.000,75.000,18.000,40.000' continentid='4' Location='378,28' Name='Ishundar' PackLocation='proportional,proportional' PackLocationProp='0490/1024,0140/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' zonename='z4'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='86.000,27.000,107.000,27.000,161.000,51.000,224.000,120.000,193.000,152.000,159.000,190.000,103.000,210.000,68.000,198.000,21.000,130.000' continentid='5' Location='621,168' Name='Forseral' PackLocation='proportional,proportional' PackLocationProp='0733/1024,0280/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' zonename='z5'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='39.000,39.000,102.000,28.000,202.000,97.000,187.000,179.000,166.000,201.000,27.000,202.000' continentid='6' Location='-10,7' Name='Ceryshen' PackLocation='proportional,proportional' PackLocationProp='0102/1024,0119/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' zonename='z6'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='6.000,16.000,117.000,3.000,183.000,65.000,211.000,97.000,213.000,186.000,207.000,221.000,149.000,220.000,47.000,192.000,7.000,154.000' continentid='7' Location='784,529' Name='Esamir' PackLocation='proportional,proportional' PackLocationProp='0896/1024,0641/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' zonename='z7'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='69.000,29.000,158.000,35.000,182.000,62.000,178.000,100.000,205.000,129.000,172.000,182.000,51.000,207.000,18.000,112.000' continentid='8' Location='474,503' Name='Oshur' PackLocation='proportional,proportional' PackLocationProp='0586/1024,0615/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' zonename='z8'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='18.000,13.000,66.000,10.000,207.000,51.000,215.000,136.000,196.000,195.000,97.000,214.000,24.000,208.000,9.000,102.000' continentid='9' Location='398,276' Name='Searhus' PackLocation='proportional,proportional' PackLocationProp='0510/1024,0388/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' zonename='z9'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='74.000,26.000,155.000,12.000,188.000,26.000,204.000,111.000,187.000,180.000,34.000,209.000,26.000,152.000,68.000,100.000' continentid='10' Location='29,228' Name='Amerish' PackLocation='proportional,proportional' PackLocationProp='0141/1024,0340/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' zonename='z10'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='51.000,11.000,90.000,10.000,167.000,43.000,177.000,117.000,156.000,165.000,97.000,163.000,19.000,128.000,19.000,70.000' continentid='11' Location='291,580' Name='SanctuaryNC' PackLocation='proportional,proportional' PackLocationProp='0403/1024,0692/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' zonename='home1'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='60.000,56.000,105.000,55.000,158.000,74.000,168.000,136.000,147.000,164.000,61.000,164.000' continentid='12' Location='228,120' Name='SanctuaryTR' PackLocation='proportional,proportional' PackLocationProp='0340/1024,0232/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' zonename='home2'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='38.000,59.000,87.000,42.000,189.000,37.000,194.000,90.000,177.000,151.000,122.000,188.000,72.000,190.000,42.000,156.000' continentid='13' Location='594,369' Name='SanctuaryVS' PackLocation='proportional,proportional' PackLocationProp='0706/1024,0481/0768' PackSize='proportional,proportional' PackSizeProp='0224/1024,0224/0768' ScrollExtent='224,224' Size='224,224' zonename='home3'/>
<Image Name='Water' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Style='/Plates.GlobalMapWater'/>
</Page>
<Page BackgroundColor='#182142' BackgroundOpacity='1.000' Name='MapWindow' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Page Activated='true' Location='285,37' movable='true' Name='RespawnProgress' PackLocation='center,top' PackLocationProp='-227/0001,0037/0001' ScrollExtent='455,66' Size='455,66'>
<Page AbsorbsInput='false' Enabled='false' GetsInput='false' Name='Release' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='455,66' Size='455,66'>
<Text AbsorbsInput='false' BackgroundColor='#00F2C9' Font='/Fonts.HudFont3' LocalText='[@ReleaseCountdownText]' Location='27,11' Name='ReleaseCountdownText' PackLocation='center,top' PackLocationProp='-200/0001,0011/0001' PackSize='absolute,fixed' PackSizeProp='0055/0001,0002/0003' ScrollExtent='400,20' Size='400,20' TextAlignment='Center' TextAlignmentVertical='Center'>@ReleaseCountdownText</Text>
<Progressbar AbsorbsInput='false' BarBackgroundColor='#00F2C9' Color='#777777' Location='27,33' Name='ReleaseProgress' PackLocation='center,bottom' PackLocationProp='-200/0001,-033/0001' PackSize='absolute,fixed' PackSizeProp='0055/0001,0002/0003' Progress='1.000' ScrollExtent='400,13' Size='400,13' Style='/ProgressBars.Health.style' TooltipStyle='/Fonts.DefaultFont'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.700' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='455,66' Size='455,66' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' Enabled='false' GetsInput='false' Name='RespawnCountdown' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='455,66' Size='455,66' Visible='false'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' LocalText='[@RespawnCountdownText]' Location='27,11' Name='RespawnCountdownText' PackLocation='center,top' PackLocationProp='-200/0001,0011/0001' PackSize='absolute,fixed' PackSizeProp='0055/0001,0002/0003' ScrollExtent='400,20' Size='400,20' TextAlignment='Center'>@RespawnCountdownText</Text>
<Progressbar AbsorbsInput='false' BarBackgroundColor='#00F2C9' Color='#777777' Location='27,33' Name='RespawnProgress' PackLocation='center,bottom' PackLocationProp='-200/0001,-033/0001' PackSize='absolute,fixed' PackSizeProp='0055/0001,0002/0003' Progress='0.330' ScrollExtent='400,13' Size='400,13' Style='/ProgressBars.Health.style' TooltipStyle='/Fonts.DefaultFont'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.700' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='455,66' Size='455,66' Stretch='false'/>
</Page>
</Page>
<Page Activated='true' BackgroundColor='#FFFF00' Location='831,566' movable='true' Name='RespawnSanctuary' PackLocation='right,bottom' PackLocationProp='-193/0001,-202/0001' ScrollExtent='185,180' Size='185,180' Visible='false'>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' Location='12,8' Name='MapText' PackLocation='left,top' PackLocationProp='0012/0001,0008/0001' PackSize='absolute,fixed' PackSizeProp='0025/0001,0002/0003' ScrollExtent='160,18' ShadowStyle='/Shadows.Default' Size='160,18' TextAlignment='Center' TextAlignmentVertical='Center'></Text>
<OverheadMap AbsorbsInput='false' Location='32,25' Name='Map' PackLocation='center,center' PackLocationProp='-060/0001,-065/0001' ScrollExtent='120,120' Size='120,120'/>
<Page AbsorbsInput='false' BackgroundColor='#64719B' BackgroundOpacity='0.475' Enabled='false' GetsInput='false' Location='32,26' Name='Water' ScrollExtent='120,120' Size='120,120'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Name='Background' Opacity='0.700' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='185,180' Size='185,180' Stretch='false'/>
</Page>
<Page Activated='true' BackgroundColor='#FFFF00' Location='831,358' movable='true' Name='RespawnOther' PackLocation='right,bottom' PackLocationProp='-193/0001,-410/0001' ScrollExtent='185,180' Size='185,180' Visible='false'>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' Location='12,8' Name='MapText' PackLocation='left,top' PackLocationProp='0012/0001,0008/0001' PackSize='absolute,fixed' PackSizeProp='0025/0001,0002/0003' ScrollExtent='160,18' ShadowStyle='/Shadows.Default' Size='160,18' TextAlignment='Center' TextAlignmentVertical='Center'></Text>
<OverheadMap AbsorbsInput='false' Location='32,30' Name='Map' PackLocation='center,center' PackLocationProp='-060/0001,-060/0001' ScrollExtent='120,120' Size='120,120'/>
<Page AbsorbsInput='false' BackgroundColor='#64719B' BackgroundOpacity='0.475' Enabled='false' GetsInput='false' Location='32,26' Name='Water' ScrollExtent='120,120' Size='120,120'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Name='Background' Opacity='0.700' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='185,180' Size='185,180' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' Location='0,32' Name='MapScrollPage' PackLocation='left,top' PackLocationProp='0000/0001,0032/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0032/0001' ScrollExtent='1024,736' Size='1024,736'>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Location='64,0' Name='North' PackLocation='left,top' PackLocationProp='0064/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0128/0001,0002/0003' ScrollExtent='896,64' Size='896,64'/>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Location='960,0' Name='NorthEast' PackLocation='right,top' PackLocationProp='-064/0001,0000/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='64,64' Size='64,64'/>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Location='960,64' Name='East' PackLocation='right,top' PackLocationProp='-064/0001,0064/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0128/0001' ScrollExtent='64,608' Size='64,608'/>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Location='960,672' Name='SouthEast' PackLocation='right,bottom' PackLocationProp='-064/0001,-064/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='64,64' Size='64,64'/>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Location='64,672' Name='South' PackLocation='left,bottom' PackLocationProp='0064/0001,-064/0001' PackSize='absolute,fixed' PackSizeProp='0128/0001,0002/0003' ScrollExtent='896,64' Size='896,64'/>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Location='0,672' Name='SouthWest' PackLocation='left,bottom' PackLocationProp='0000/0001,-064/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='64,64' Size='64,64'/>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Location='0,64' Name='West' PackLocation='left,top' PackLocationProp='0000/0001,0064/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0128/0001' ScrollExtent='64,608' Size='64,608'/>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Name='NorthWest' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='64,64' Size='64,64'/>
</Page>
<Text continentid='1' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@Solsar]' Location='78,7' Name='MapText' PackLocation='proportional,proportional' PackLocationProp='0203/1024,0018/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@Solsar</Text>
<OverheadMap AbsorbsInput='false' Name='OverheadMap' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768'/>
</Page>
</Page>
<Page Name='RespawnMenu' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Visible='false' visualeditlock='true'>
<Page Location='285,305' Name='Release' PackLocation='center,center' PackLocationProp='-227/0001,-079/0001' ScrollExtent='455,159' Size='455,159'>
<Text AbsorbsInput='false' BackgroundColor='#00F2C9' Font='/Fonts.HudFont3' LocalText='[@ReleaseCountdownText]' Location='27,11' Name='ReleaseCountdownText' PackLocation='center,top' PackLocationProp='-200/0001,0011/0001' PackSize='absolute,absolute' PackSizeProp='0055/0001,0082/0001' ScrollExtent='400,77' Size='400,77' TextAlignment='Center' TextAlignmentVertical='Center'>@ReleaseCountdownText</Text>
<Progressbar AbsorbsInput='false' BarBackgroundColor='#00F2C9' Color='#777777' Location='27,96' Name='ReleaseProgress' PackLocation='center,bottom' PackLocationProp='-200/0001,-063/0001' PackSize='absolute,fixed' PackSizeProp='0055/0001,0002/0003' Progress='1.000' ScrollExtent='400,13' Size='400,13' Style='/ProgressBars.Health.style' TooltipStyle='/Fonts.DefaultFont'/>
<Button LocalText='[@ReleaseButtonText]' Location='27,116' Name='OK' PackLocation='center,bottom' PackLocationProp='-200/0001,-043/0001' PackSize='absolute,fixed' PackSizeProp='0055/0001,0002/0003' ScrollExtent='400,20' Size='400,20' Style='/Buttons.TextButton.style'>@ReleaseButtonText</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.700' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='455,159' Size='455,159' Stretch='false'/>
</Page>
</Page>
<Page Location='772,243' MinimumSize='200,150' movable='true' Name='ExclamationHelp' PackLocation='Right,Bottom' PackLocationProp='-252/0001,-525/0001' PackSize='Fixed,Fixed' PackSizeProp='0002/0003,0002/0003' resizable='true' ScrollExtent='241,330' Size='241,330' Visible='false'>
<Text AbsorbsInput='false' Activated='true' Font='/Fonts.ChatFont' Location='16,34' Name='Text' PackSize='absolute,absolute' PackSizeProp='0046/0001,0055/0001' ScrollExtent='195,275' Size='195,275'></Text>
<Scrollbar Control='Text' Location='216,34' Name='ScrollText' PackLocation='right,top' PackLocationProp='-025/0001,0034/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0059/0001' ScrollExtent='10,271' Size='10,271' Style='/ScrollBars.vertical.style'/>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='170,8' Name='CancelButton' PackLocation='right,top' PackLocationProp='-071/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='55,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0055/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='25,0' Name='Title' PackSize='absolute,fixed' PackSizeProp='0050/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='191,32' Size='191,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,15' Name='Background' Opacity='0.700' PackSize='1,absolute' PackSizeProp='0002/0003,0018/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='241,312' Size='241,312' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' Location='284,319' Name='ProgressView' Opacity='0.800' PackLocation='center,center' PackLocationProp='-228/0001,-065/0001' ScrollExtent='455,93' Size='455,93' Visible='false'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' LocalText='Information about progress' Location='32,27' Name='InfoText' ScrollExtent='400,21' Size='400,21' TextAlignment='Center'>Information about progress</Text>
<Progressbar AbsorbsInput='false' Color='#777777' colorhack='#FFFFFF' colorheal='#FF0000' colorrepair='#0099C5' colorrevive='#FF0000' Location='29,54' Name='Progress' Progress='0.330' ScrollExtent='400,13' Size='400,13' Style='/ProgressBars.Health.style' TooltipStyle='/Fonts.DefaultFont'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.DialogBackground.style' ScrollExtent='455,93' Size='455,93' Stretch='false'/>
</Page>
<Namespace Name='HUDLineStyle'>
<ImageStyle Name='center'>
<ImageFrame Source='ui_hud_activeitem_border_00' SourceRect='10,0,22,4'/>
</ImageStyle>
<RectangleStyle Center='center' CenterShrinkH='true' CenterStretchH='true' Color='#000000' Name='style'/>
</Namespace>
<Namespace Name='InterferenceLineStyle'>
<ImageStyle Name='center'>
<ImageFrame Source='ui_inventory_buttons_00' SourceRect='0,71,32,103'/>
</ImageStyle>
<RectangleStyle Center='center' CenterShrinkH='true' CenterStretchH='true' Color='#000000' Name='style'/>
</Namespace>
<Namespace Name='BackgroundLineStyle'>
<ImageStyle Name='center'>
<ImageFrame Source='ui_inventory_buttons_00' SourceRect='33,71,64,103'/>
</ImageStyle>
<RectangleStyle Center='center' CenterShrinkH='true' CenterStretchH='true' Color='#000000' Name='style'/>
</Namespace>
<Page Name='VoiceMacro' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Visible='false' visualeditlock='true'>
<Page Location='235,308' Name='Level4' ScrollExtent='205,87' Size='205,87'>
<PopupMenuStyle ButtonStyle='/Buttons.HUD_VoiceMacro.style' Name='PopupMenuStyle'/>
<PopupMenu DataSource='Level3.6Data' Location='15,19' MaximumSize='175,112' MinimumSize='175,112' Name='Menu1' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='175,112' Size='175,112' Style='PopupMenuStyle'>
</PopupMenu>
<Image BackgroundOpacity='1.000' Name='Background' Opacity='0.800' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.DialogBackground.style' ScrollExtent='205,87' Size='205,87' Stretch='false'/>
</Page>
<Page Location='230,200' Name='Level3' ScrollExtent='206,104' Size='206,104'>
<PopupMenuStyle ButtonStyle='/Buttons.HUD_VoiceMacro.style' Name='PopupMenuStyle'/>
<PopupMenu DataSource='Level3.2Data' Location='15,20' MaximumSize='188,128' MinimumSize='188,128' Name='Menu1' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='188,128' Size='188,128' Style='PopupMenuStyle'>
</PopupMenu>
<Image BackgroundOpacity='1.000' Name='Background' Opacity='0.800' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.DialogBackground.style' ScrollExtent='206,104' Size='206,104' Stretch='false'/>
</Page>
<Page Location='34,188' MinimumSize='145,58' Name='Level2' ScrollExtent='249,262' Size='249,262'>
<Template Name='IconMenuTemplate' Size='64,24'>\<text font = \'/Fonts.ButtonIcons\' location = \'0,2\' name = \'Image1Icon\' scrollextent = \'32,20\' size = \'32,20\' visible = \'$IsLocal$\'\>
t
\</text\>
\<text font = \'/Fonts.ButtonIcons\' location = \'32,2\' name = \'Image1Icon\' scrollextent = \'32,20\' size = \'32,20\' visible = \'$IsSquad$\'\>
u
\</text\></Template>
<Listbox AbsorbsInput='false' DataSource='Level2Data' Enabled='false' GetsInput='false' Location='16,42' Name='IconMenu' RowTemplate='IconMenuTemplate' ScrollExtent='64,192' Size='64,192' Style='/Listboxes.Clear.style'/>
<PopupMenuStyle ButtonStyle='/Buttons.HUD_VoiceMacro.style' ItemHeight='24' Name='PopupMenuStyle'/>
<PopupMenu DataSource='Level2Data' Location='78,42' MaximumSize='155,192' MinimumSize='155,192' Name='Menu1' PackLocation='left,top' PackLocationProp='0078/0001,0042/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='155,192' Size='155,192' Style='PopupMenuStyle'>
</PopupMenu>
<Text BackgroundColor='#00F2C9' BackgroundOpacity='0.224' Font='/Fonts.HudFont2' LocalText='[@VoiceMacroTitle]' Location='12,18' Name='MenuTitle' PackLocation='left,top' PackLocationProp='0012/0001,0018/0001' PackSize='absolute,fixed' PackSizeProp='0024/0001,0002/0003' ScrollExtent='225,21' Size='225,21' SizeIncrement='0,0' TextAlignment='Center' TextAlignmentVertical='Center'>@VoiceMacroTitle</Text>
<Image BackgroundOpacity='1.000' Name='Background' Opacity='0.800' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.DialogBackground.style' ScrollExtent='249,262' Size='249,262' Stretch='false'/>
</Page>
<DataSource Name='Level2Data'>
<Data isall='true' islocal='false' issquad='false' localtext='[@VoiceL2_VeryQuick]' menu='Level3.1Data' Name='VeryQuick' text='@VoiceL2_VeryQuick'/>
<Data isall='false' islocal='true' issquad='true' localtext='[@VoiceL2_Attack]' menu='Level3.2Data' Name='Attack' text='@VoiceL2_Attack'/>
<Data isall='false' islocal='true' issquad='true' localtext='[@VoiceL2_Defend]' menu='Level3.3Data' Name='Defend' text='@VoiceL2_Defend'/>
<Data isall='false' islocal='true' issquad='true' localtext='[@VoiceL2_Need]' menu='Level3.4Data' Name='Need' text='@VoiceL2_Need'/>
<Data isall='false' islocal='true' issquad='true' localtext='[@VoiceL2_Repair]' menu='Level3.2Data' Name='Repair' text='@VoiceL2_Repair'/>
<Data isall='false' islocal='true' issquad='true' localtext='[@VoiceL2_Warning]' menu='Level3.6Data' Name='Warning' text='@VoiceL2_Warning'/>
<Data isall='false' islocal='true' issquad='true' localtext='[@VoiceL2_Self]' menu='Level3.7Data' Name='Self' text='@VoiceL2_Self'/>
<Data isall='false' islocal='false' issquad='true' localtext='[@VoiceL2_Tactical]' menu='Level3.8Data' Name='Tactical' text='@VoiceL2_Tactical'/>
</DataSource>
<DataSource Name='Level3.1Data'>
<Data localtext='[@VoiceL3_Anytime]' Name='Anytime' text='@VoiceL3_Anytime'/>
<Data localtext='[@VoiceL3_Best]' Name='Best' text='@VoiceL3_Best'/>
<Data localtext='[@VoiceL3_CeaseFire]' Name='CeaseFire' text='@VoiceL3_CeaseFire'/>
<Data localtext='[@VoiceL3_DontKnow]' Name='DontKnow' text='@VoiceL3_DontKnow'/>
<Data localtext='[@VoiceL3_Excellent]' Name='Excellent' text='@VoiceL3_Excellent'/>
<Data localtext='[@VoiceL3_Fantastic]' Name='Fantastic' text='@VoiceL3_Fantastic'/>
<Data localtext='[@VoiceL3_GreatShot]' Name='GreatShot' text='@VoiceL3_GreatShot'/>
<Data localtext='[@VoiceL3_Hail]' Name='Hail' text='@VoiceL3_Hail'/>
<Data localtext='[@VoiceL3_Move]' Name='Move' text='@VoiceL3_Move'/>
<Data localtext='[@VoiceL3_No]' Name='No' text='@VoiceL3_No'/>
<Data localtext='[@VoiceL3_Quiet]' Name='Quiet' text='@VoiceL3_Quiet'/>
<Data localtext='[@VoiceL3_NeedReconstruction]' Name='NeedReconstruction' text='@VoiceL3_NeedReconstruction'/>
<Data localtext='[@VoiceL3_Sorry]' Name='Sorry' text='@VoiceL3_Sorry'/>
<Data localtext='[@VoiceL3_Thanks]' Name='Thanks' text='@VoiceL3_Thanks'/>
<Data localtext='[@VoiceL3_Help]' Name='Help' text='@VoiceL3_Help'/>
<Data localtext='[@VoiceL3_Wave]' Name='Wave' text='@VoiceL3_Wave'/>
<Data localtext='[@VoiceL3_Stop]' Name='Stop' text='@VoiceL3_Stop'/>
<Data localtext='[@VoiceL3_Yes]' Name='Yes' text='@VoiceL3_Yes'/>
<Data localtext='[@VoiceL3_ZeroChance]' Name='ZeroChance' text='@VoiceL3_ZeroChance'/>
</DataSource>
<DataSource Name='Level3.2Data'>
<Data localtext='[@VoiceL3_TypeControl]' Name='TypeControl' text='@VoiceL3_TypeControl'/>
<Data localtext='[@VoiceL3_TypeDeployable]' Name='TypeDeployable' text='@VoiceL3_TypeDeployable'/>
<Data localtext='[@VoiceL3_TypeEquipment]' Name='TypeEquipment' text='@VoiceL3_TypeEquipment'/>
<Data localtext='[@VoiceL3_TypeGenerator]' Name='TypeGenerator' text='@VoiceL3_TypeGenerator'/>
<Data localtext='[@VoiceL3_TypeMedical]' Name='TypeMedical' text='@VoiceL3_TypeMedical'/>
<Data localtext='[@VoiceL3_TypeSpawn]' Name='TypeSpawn' text='@VoiceL3_TypeSpawn'/>
<Data localtext='[@VoiceL3_TypeTurret]' Name='TypeTurret' text='@VoiceL3_TypeTurret'/>
<Data localtext='[@VoiceL3_TypeVehicle]' Name='TypeVehicle' text='@VoiceL3_TypeVehicle'/>
</DataSource>
<DataSource Name='Level3.3Data'>
<Data localtext='[@VoiceL3_TypeControl]' Name='TypeControl' text='@VoiceL3_TypeControl'/>
<Data localtext='[@VoiceL3_TypeEquipment]' Name='TypeEquipment' text='@VoiceL3_TypeEquipment'/>
<Data localtext='[@VoiceL3_TypeGenerator]' Name='TypeGenerator' text='@VoiceL3_TypeGenerator'/>
<Data localtext='[@VoiceL3_TypeSpawn]' Name='TypeSpawn' text='@VoiceL3_TypeSpawn'/>
<Data localtext='[@VoiceL3_TypeTurret]' Name='TypeTurret' text='@VoiceL3_TypeTurret'/>
<Data localtext='[@VoiceL3_TypeVehicle]' Name='TypeVehicle' text='@VoiceL3_TypeVehicle'/>
</DataSource>
<DataSource Name='Level3.4Data'>
<Data localtext='[@VoiceL3_NeedAir]' Name='NeedAir' text='@VoiceL3_NeedAir'/>
<Data localtext='[@VoiceL3_NeedCovering]' Name='NeedCovering' text='@VoiceL3_NeedCovering'/>
<Data localtext='[@VoiceL3_NeedEscort]' Name='NeedEscort' text='@VoiceL3_NeedEscort'/>
<Data localtext='[@VoiceL3_NeedGunner]' Name='NeedGunner' text='@VoiceL3_NeedGunner'/>
<Data localtext='[@VoiceL3_NeedHacker]' Name='NeedHacker' text='@VoiceL3_NeedHacker'/>
<Data localtext='[@VoiceL3_NeedMedic]' Name='NeedMedic' text='@VoiceL3_NeedMedic'/>
<Data localtext='[@VoiceL3_NeedPassenger]' Name='NeedPassenger' text='@VoiceL3_NeedPassenger'/>
<Data localtext='[@VoiceL3_NeedRepairs]' Name='NeedRepairs' text='@VoiceL3_NeedRepairs'/>
</DataSource>
<DataSource Name='Level3.6Data'>
<Data localtext='[@VoiceL3_WarnAir]' Name='WarnAir' text='@VoiceL3_WarnAir'/>
<Data localtext='[@VoiceL3_WarnCloaked]' Name='WarnCloaked' text='@VoiceL3_WarnCloaked'/>
<Data localtext='[@VoiceL3_WarnMAX]' Name='WarnMAX' text='@VoiceL3_WarnMAX'/>
<Data localtext='[@VoiceL3_WarnSniper]' Name='WarnSniper' text='@VoiceL3_WarnSniper'/>
<Data localtext='[@VoiceL3_WarnTroops]' Name='WarnTroops' text='@VoiceL3_WarnTroops'/>
<Data localtext='[@VoiceL3_WarnGround]' Name='WarnGround' text='@VoiceL3_WarnGround'/>
<Data localtext='[@VoiceL3_WarnClear]' Name='WarnClear' text='@VoiceL3_WarnClear'/>
</DataSource>
<DataSource Name='Level3.7Data'>
<Data localtext='[@VoiceL3_SelfAttack]' menu='Level3.2Data' Name='SelfAttack' text='@VoiceL3_SelfAttack'/>
<Data localtext='[@VoiceL3_SelfDefend]' menu='Level3.3Data' Name='SelfDefend' text='@VoiceL3_SelfDefend'/>
<Data localtext='[@VoiceL3_SelfRepair]' menu='Level3.2Data' Name='SelfRepair' text='@VoiceL3_SelfRepair'/>
</DataSource>
<DataSource Name='Level3.8Data'>
<Data localtext='[@VoiceL3_TactFallback]' Name='TactFallBack' text='@VoiceL3_TactFallback'/>
<Data localtext='[@VoiceL3_TactCover]' Name='TactCover' text='@VoiceL3_TactCover'/>
<Data localtext='[@VoiceL3_TactDeploy]' Name='TactDeploy' text='@VoiceL3_TactDeploy'/>
<Data localtext='[@VoiceL3_TactEnemy]' Name='TactEnemy' text='@VoiceL3_TactEnemy'/>
<Data localtext='[@VoiceL3_TactFollow]' Name='TactFollow' text='@VoiceL3_TactFollow'/>
<Data localtext='[@VoiceL3_TactRetreat]' Name='TactRetreat' text='@VoiceL3_TactRetreat'/>
<Data localtext='[@VoiceL3_TactRequest]' Name='TactRequest' text='@VoiceL3_TactRequest'/>
<Data localtext='[@VoiceL3_TactSpreadOut]' Name='TactSpreadOut' text='@VoiceL3_TactSpreadOut'/>
<Data localtext='[@VoiceL3_TactTurret]' Name='TactTurret' text='@VoiceL3_TactTurret'/>
<Data localtext='[@VoiceL3_TactWaypoint]' Name='TactWaypoint' text='@VoiceL3_TactWaypoint'/>
<Data localtext='[@VoiceL3_TactDecline]' Name='TactDecline' text='@VoiceL3_TactDecline'/>
</DataSource>
</Page>
<Page Location='8,283' MinimumSize='145,58' movable='true' Name='PlayerInterfaceMenu' ScrollExtent='189,146' Size='189,146' Visible='false'>
<Page Name='MenuPage' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='189,146' Size='189,146'>
<Text AbsorbsInput='false' BackgroundColor='#00F2C9' BackgroundOpacity='0.224' Enabled='false' Font='/Fonts.DefaultFont' LocalText='[@PlayerMenu]' Location='12,18' Name='MenuTitle' PackLocation='left,top' PackLocationProp='0012/0001,0018/0001' PackSize='absolute,fixed' PackSizeProp='0024/0001,0002/0003' ScrollExtent='165,21' Size='165,21' SizeIncrement='0,0' TextAlignment='Center'>@PlayerMenu</Text>
<PopupMenu DataSource='SquadLeaderInviteData' Location='16,42' MaximumSize='156,85' MinimumSize='156,85' Name='Menu' PackLocation='left,top' PackLocationProp='0016/0001,0042/0001' PackSize='proportional,fixed' PackSizeProp='0156/0189,0002/0003' ScrollExtent='156,85' Size='156,85' Style='PopupMenuStyle'>
</PopupMenu>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.DialogBackground.style' ScrollExtent='189,146' Size='189,146' Stretch='false'/>
</Page>
<DataSource Name='SquadMemberData'>
<Data localtext='[@PlayerMenuTrade]' menuindex='0' Name='Trade' text='@PlayerMenuTrade'/>
<Data localtext='[@PlayerMenuFriends]' menuindex='3' Name='AddToFriends' text='@PlayerMenuFriends'/>
<Data localtext='[@PlayerMenuStats]' menuindex='4' Name='ViewStats' text='@PlayerMenuStats'/>
<Data localtext='[@PlayerMenuCancel]' menuindex='5' Name='Cancel' text='@PlayerMenuCancel'/>
</DataSource>
<DataSource Name='SquadLeaderInviteData'>
<Data localtext='[@PlayerMenuTrade]' menuindex='0' Name='Trade' text='@PlayerMenuTrade'/>
<Data localtext='[@PlayerMenuInvite]' menuindex='1' Name='Invite' text='@PlayerMenuInvite'/>
<Data localtext='[@PlayerMenuFriends]' menuindex='3' Name='AddToFriends' text='@PlayerMenuFriends'/>
<Data localtext='[@PlayerMenuStats]' menuindex='4' Name='ViewStats' text='@PlayerMenuStats'/>
<Data localtext='[@PlayerMenuCancel]' menuindex='5' Name='Cancel' text='@PlayerMenuCancel'/>
</DataSource>
<DataSource Name='SquadLeaderKickData'>
<Data localtext='[@PlayerMenuTrade]' menuindex='0' Name='Trade' text='@PlayerMenuTrade'/>
<Data localtext='[@PlayerMenuKick]' menuindex='2' Name='Kick' text='@PlayerMenuKick'/>
<Data localtext='[@PlayerMenuFriends]' menuindex='3' Name='AddToFriends' text='@PlayerMenuFriends'/>
<Data localtext='[@PlayerMenuStats]' menuindex='4' Name='ViewStats' text='@PlayerMenuStats'/>
<Data localtext='[@PlayerMenuCancel]' menuindex='5' Name='Cancel' text='@PlayerMenuCancel'/>
</DataSource>
<PopupMenuStyle ButtonStyle='/Buttons.HUD_VoiceMacro.style' ItemHeight='17' Name='PopupMenuStyle'/>
</Page>
<Page BackgroundColor='#FFFFFF' Location='292,107' minsize='404,344' movable='true' Name='BugReportPane' PackLocation='center,center' PackLocationProp='-220/0001,-277/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' resizable='false' ScrollExtent='440,463' Size='440,463' Visible='false'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' LocalText='[@BugReportTitle]' Location='101,7' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0007/0001' PackSize='absolute,fixed' PackSizeProp='0208/0001,0002/0003' ScrollExtent='232,20' Size='232,20' TextAlignment='Center' TextAlignmentVertical='Center'>@BugReportTitle</Text>
<Button LocalText='[@Cancel]' Location='55,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0055/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='370,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-070/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Dropdownbox BackgroundColor='#FFFFFF' BackgroundOpacity='0.675' BackgroundTint='#000000' DataSource='BugTypeData' Location='16,33' Name='BugTypeDropdown' PackLocation='left,top' PackLocationProp='0016/0001,0033/0001' PackSize='absolute,fixed' PackSizeProp='0032/0001,0002/0003' RowTemplate='BugReportTemplate' ScrollExtent='408,32' SelectedItemIndex='5' Size='408,32' Style='/Dropdowns.HudPane.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@BugRepeatableTitle]' Location='16,74' MaxLines='1' Name='RepeatableTitle' PackLocation='left,top' PackLocationProp='0016/0001,0074/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='158,21' Size='158,21' TextAlignment='Right' TextAlignmentVertical='Center'>@BugRepeatableTitle</Text>
<Dropdownbox BackgroundColor='#FFFFFF' BackgroundOpacity='0.675' BackgroundTint='#000000' DataSource='BugRepeatableData' Location='175,68' Name='RepeatableDropdown' PackLocation='left,top' PackLocationProp='0175/0001,0068/0001' PackSize='absolute,fixed' PackSizeProp='0191/0001,0002/0003' RowTemplate='BugReportTemplate' ScrollExtent='249,32' SelectedItemIndex='1' Size='249,32' Style='/Dropdowns.HudPane.style'/>
<Rectangle Color='#385E61' GetsInput='false' Location='16,104' Name='LocationBorder' PackSize='absolute,fixed' PackSizeProp='0032/0001,0002/0003' ScrollExtent='408,141' Size='408,141'/>
<Checkbox BackgroundOpacity='1.000' Location='22,111' Name='CurrentLocationCheck' PackLocation='left,top' PackLocationProp='0022/0001,0111/0001' PackSize='absolute,fixed' PackSizeProp='0044/0001,0002/0003' ScrollExtent='396,25' Size='396,25' Style='/Buttons.BugReportRadio.style'>@BugCurrentLocation</Checkbox>
<Rectangle Color='#385E61' GetsInput='false' Location='52,138' Name='LocationDivider' PackLocation='left,top' PackLocationProp='0052/0001,0138/0001' PackSize='absolute,fixed' PackSizeProp='0080/0001,0002/0003' ScrollExtent='360,1' Size='360,1'/>
<Checkbox BackgroundOpacity='1.000' Location='22,144' Name='OtherLocationCheck' PackLocation='left,top' PackLocationProp='0022/0001,0144/0001' PackSize='absolute,fixed' PackSizeProp='0044/0001,0002/0003' ScrollExtent='396,25' Size='396,25' Style='/Buttons.BugReportRadio.style'>@BugOtherLocation</Checkbox>
<Dropdownbox BackgroundColor='#FFFFFF' BackgroundOpacity='0.675' BackgroundTint='#000000' DataSource='BugLocationData' Location='52,172' Name='OtherLocationDropdown' PackLocation='left,top' PackLocationProp='0052/0001,0172/0001' PackSize='absolute,fixed' PackSizeProp='0080/0001,0002/0003' RowTemplate='BugReportTemplate' ScrollExtent='360,32' SelectedItemIndex='4' Size='360,32' Style='/Dropdowns.HudPane.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@BugOtherLocationX]' Location='60,210' MaxLines='1' Name='LocationXTitle' PackLocation='left,top' PackLocationProp='0060/0001,0210/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='58,42' Size='58,21' TextAlignment='Right' TextAlignmentVertical='Center' TruncateElipsis='false'>@BugOtherLocationX</Text>
<Textbox BackgroundColor='#385E61' BackgroundOpacity='1.000' Location='122,206' MaxLength='4' Name='OtherLocationX' NumericInteger='true' PackLocation='left,top' PackLocationProp='0122/0001,0206/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='50,28' Size='50,28' Style='/Textboxes.Bordered'>8888</Textbox>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@BugOtherLocationY]' Location='180,210' MaxLines='1' Name='LocationYTitle' PackLocation='left,top' PackLocationProp='0180/0001,0210/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='58,42' Size='58,21' TextAlignment='Right' TextAlignmentVertical='Center' TruncateElipsis='false'>@BugOtherLocationY</Text>
<Textbox BackgroundColor='#385E61' BackgroundOpacity='1.000' Location='242,206' MaxLength='4' Name='OtherLocationY' NumericInteger='true' PackLocation='left,top' PackLocationProp='0242/0001,0206/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='50,28' Size='50,28' Style='/Textboxes.Bordered'>8888</Textbox>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@BugOtherLocationZ]' Location='300,210' MaxLines='1' Name='LocationZTitle' PackLocation='left,top' PackLocationProp='0300/0001,0210/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='58,42' Size='58,21' TextAlignment='Right' TextAlignmentVertical='Center' TruncateElipsis='false'>@BugOtherLocationZ</Text>
<Textbox BackgroundColor='#385E61' BackgroundOpacity='1.000' Location='363,206' MaxLength='4' Name='OtherLocationZ' NumericInteger='true' PackLocation='left,top' PackLocationProp='0363/0001,0206/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='50,28' Size='50,28' Style='/Textboxes.Bordered'>8888</Textbox>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@BugBriefTitle]' Location='16,252' MaxLines='1' Name='BriefTitle' PackLocation='left,top' PackLocationProp='0016/0001,0252/0001' PackSize='abs,fixed' PackSizeProp='xxxx/xxxx,0002/0003' ScrollExtent='408,21' Size='408,21' TextAlignmentVertical='Center'>@BugBriefTitle</Text>
<Textbox BackgroundColor='#385E61' BackgroundOpacity='1.000' Location='16,276' MaxLength='64' Name='BriefDescription' PackLocation='left,top' PackLocationProp='0016/0001,0276/0001' PackSize='absolute,fixed' PackSizeProp='0032/0001,0002/0003' ScrollExtent='568,28' Size='408,28' Style='/Textboxes.Bordered'>1234567890123456789012345678901234567890123456789012345678901234567890</Textbox>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@BugDetailedTitle]' Location='16,307' MaxLines='1' Name='DetailedTitle' PackLocation='left,top' PackLocationProp='0016/0001,0307/0001' PackSize='abs,fixed' PackSizeProp='xxxx/xxxx,0002/0003' ScrollExtent='408,21' Size='408,21' TextAlignmentVertical='Center'>@BugDetailedTitle</Text>
<Textbox BackgroundColor='#385E61' BackgroundOpacity='1.000' Location='16,330' MaxLength='2048' MaxLines='Unlimited' Name='DetailedDescription' PackLocation='left,bottom' PackLocationProp='0016/0001,-133/0001' PackSize='absolute,fixed' PackSizeProp='0032/0001,0002/0003' ScrollExtent='408,70' Size='408,70' Style='/Textboxes.Bordered' WrapWidth='Automatic'>12345678901234567890123456789012345678901234567890123456789012345678901234567890</Textbox>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='20,406' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0020/0001,-057/0001' PackSize='absolute,fixed' PackSizeProp='0036/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='404,31' Size='404,31'/>
<Button LocalText='[@OK]' Location='25,411' Name='OkButton' PackLocation='Center,bottom' PackLocationProp='-195/0001,-052/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@OK</Button>
<Button IsCancelButton='true' LocalText='[@Cancel]' Location='344,411' Name='CancelButton' PackLocation='center,bottom' PackLocationProp='0124/0001,-052/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='25,0' Name='Title' PackLocation='left,top' PackLocationProp='0025/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0049/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='391,32' Size='391,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='440,446' Size='440,446' Stretch='false'/>
<Template Name='BugReportTemplate' Size='390,16'>\<text font = \'/Fonts.HudFont2\' location = \'5,-1\' size = \'380,18\'\>
$Name$
\</text\></Template>
<DataSource Name='BugTypeData'>
<Data localname='[@Bug_Cat_None]' Name='@Bug_Cat_None'/>
<Data localname='[@Bug_Cat_Crash]' Name='@Bug_Cat_Crash' typename='crash'/>
<Data localname='[@Bug_Cat_Gameplay]' Name='@Bug_Cat_Gameplay' typename='gameplay'/>
<Data localname='[@Bug_Cat_Art]' Name='@Bug_Cat_Art' typename='art'/>
<Data localname='[@Bug_Cat_Sound]' Name='@Bug_Cat_Sound' typename='sound'/>
<Data localname='[@Bug_Cat_Hardware]' Name='@Bug_Cat_Hardware' typename='hardware'/>
<Data localname='[@Bug_Cat_Other]' Name='@Bug_Cat_Other' typename='other'/>
</DataSource>
<DataSource Name='BugRepeatableData'>
<Data localname='[@Bug_Repeatable_None]' Name='@Bug_Repeatable_None'/>
<Data localname='[@Bug_Repeatable_Yes]' Name='@Bug_Repeatable_Yes' repeatname='yes'/>
<Data localname='[@Bug_Repeatable_No]' Name='@Bug_Repeatable_No' repeatname='no'/>
</DataSource>
<DataSource Name='BugLocationData'>
<Data localname='[@Bug_Loc_None]' Name='@Bug_Loc_None'/>
<Data localname='[@z10]' locationname='zone' Name='@z10' zonename='z10'/>
<Data localname='[@z6]' locationname='zone' Name='@z6' zonename='z6'/>
<Data localname='[@z3]' locationname='zone' Name='@z3' zonename='z3'/>
<Data localname='[@z7]' locationname='zone' Name='@z7' zonename='z7'/>
<Data localname='[@z5]' locationname='zone' Name='@z5' zonename='z5'/>
<Data localname='[@z2]' locationname='zone' Name='@z2' zonename='z2'/>
<Data localname='[@z4]' locationname='zone' Name='@z4' zonename='z4'/>
<Data localname='[@z8]' locationname='zone' Name='@z8' zonename='z8'/>
<Data localname='[@z9]' locationname='zone' Name='@z9' zonename='z9'/>
<Data localname='[@z1]' locationname='zone' Name='@z1' zonename='z1'/>
<Data localname='[@main_base]' locationname='sanctuary' Name='@main_base'/>
<Data localname='[@orbital_station]' locationname='orbital_station' Name='@orbital_station'/>
<Data localname='[@vt_order]' locationname='combat' Name='@vt_order'/>
<Data localname='[@vt_vehicle]' locationname='vehicles' Name='@vt_vehicle'/>
<Data localname='[@vr_training]' locationname='shooting_gallery' Name='@vr_training'/>
</DataSource>
</Page>
<Page BackgroundColor='#FFFFFF' Location='292,179' minsize='404,344' movable='true' Name='AddSoulMark' PackLocation='center,center' PackLocationProp='-220/0001,-205/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' resizable='false' ScrollExtent='427,368' Size='427,368' Visible='false'>
<Dropdownbox BackgroundColor='#FFFFFF' BackgroundOpacity='0.675' BackgroundTint='#000000' DataSource='TypeData' Location='16,41' Name='type' PackLocation='left,top' PackLocationProp='0016/0001,0041/0001' PackSize='absolute,fixed' PackSizeProp='0046/0001,0002/0003' RowTemplate='TypeTemplate' ScrollExtent='381,32' Size='381,32' Style='/Dropdowns.HudPane.style'/>
<Textbox BackgroundColor='#385E61' BackgroundOpacity='1.000' Location='16,74' MaxLength='2048' MaxLines='Unlimited' Name='text' PackLocation='left,top' PackLocationProp='0016/0001,0074/0001' PackSize='absolute,absolute' PackSizeProp='0046/0001,0138/0001' ScrollExtent='381,230' Size='381,230' Style='/Textboxes.Bordered' WrapWidth='Automatic'>12345678901234567890123456789012345678901234567890123456789012345678901234567890</Textbox>
<Scrollbar Control='text' Location='398,73' Name='Scroll' PackLocation='right,top' PackLocationProp='-029/0001,0073/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0137/0001' ScrollExtent='9,231' Size='9,231' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' LocalText='[@asm_title]' Location='101,7' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0007/0001' PackSize='absolute,fixed' PackSizeProp='0208/0001,0002/0003' ScrollExtent='219,20' Size='219,20' TextAlignment='Center' TextAlignmentVertical='Center'>@asm_title</Text>
<Button LocalText='[@Cancel]' Location='357,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-070/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='20,311' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0020/0001,-057/0001' PackSize='absolute,fixed' PackSizeProp='0036/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='391,31' Size='391,31'/>
<Button LocalText='[@OK]' LocalTooltip='[@asm_ok]' Location='26,316' Name='OkButton' PackLocation='Center,bottom' PackLocationProp='-187/0001,-052/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@asm_ok'>@OK</Button>
<Button IsCancelButton='true' LocalText='[@Cancel]' LocalTooltip='[@Cancel]' Location='331,316' Name='CancelButton' PackLocation='center,bottom' PackLocationProp='0118/0001,-052/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@Cancel'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Location='25,0' Name='Title' PackLocation='left,top' PackLocationProp='0025/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0049/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='378,32' Size='378,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='427,351' Size='427,351' Stretch='false'/>
<DataSource Name='TypeData'>
<Data localname='[@sm_pn]' Name='@sm_pn' value='1'/>
<Data localname='[@sm_pp]' Name='@sm_pp' value='2'/>
<Data localname='[@sm_pv]' Name='@sm_pv' value='3'/>
</DataSource>
<Template Name='TypeTemplate' Size='390,16'>\<text font = \'/Fonts.HudFont2\' location = \'5,-1\' size = \'380,18\'\>
$Name$
\</text\></Template>
</Page>
<Page BackgroundColor='#FFFFFF' Location='292,107' minsize='404,344' movable='true' Name='SoulMark' PackLocation='center,center' PackLocationProp='-220/0001,-277/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' resizable='false' ScrollExtent='440,463' Size='440,463' Visible='false'>
<Scrollbar Control='text' Location='411,40' Name='Scroll' PackLocation='right,top' PackLocationProp='-029/0001,0040/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0104/0001' ScrollExtent='9,359' Size='9,359' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='Soulmark info goes here' Location='21,40' MaxLines='1' Name='text' PackLocation='left,top' PackLocationProp='0021/0001,0040/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='389,359' Size='389,359' TruncateElipsis='false'>Soulmark info goes here</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@sm_title]' Location='101,7' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0007/0001' PackSize='absolute,fixed' PackSizeProp='0208/0001,0002/0003' ScrollExtent='232,20' Size='232,20' TextAlignment='Center' TextAlignmentVertical='Center'>@sm_title</Text>
<Button LocalText='[@Cancel]' Location='370,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-070/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='20,406' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0020/0001,-057/0001' PackSize='absolute,fixed' PackSizeProp='0036/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='404,31' Size='404,31'/>
<Button LocalText='[@OK]' Location='185,411' Name='OkButton' PackLocation='Center,bottom' PackLocationProp='-035/0001,-052/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@OK</Button>
<Button LocalText='[@AddSoulmark]' LocalTooltip='[@sm_add]' Location='343,411' Name='AddButton' PackLocation='right,bottom' PackLocationProp='-097/0001,-052/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@sm_add'>@AddSoulmark</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='25,0' Name='Title' PackLocation='left,top' PackLocationProp='0025/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0049/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='391,32' Size='391,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='440,446' Size='440,446' Stretch='false'/>
</Page>
<Page Location='3,384' movable='true' Name='AcceptOutfitInvitation' PackLocation='left,bottom' PackLocationProp='0003/0001,-384/0001' ScrollExtent='211,97' ShowSound='interface_feedback_rollover.wav' Size='211,97' Visible='false'>
<Text AbsorbsInput='false' Color='#00F2C9' Enabled='false' Font='/Fonts.HudFont2' LocalText='100/100' Location='21,10' Name='InvitationText' PackLocation='left,top' PackLocationProp='0021/0001,0010/0001' PackSize='absolute,absolute' PackSizeProp='0037/0001,0062/0001' ScrollExtent='174,35' Size='174,35' TextAlignment='Center'>100/100</Text>
<Button LocalText='[@Yes]' Location='25,53' Name='AcceptButton' PackLocation='Center,bottom' PackLocationProp='-080/0001,-044/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@Yes</Button>
<Button LocalText='[@No]' Location='116,53' Name='DeclineButton' PackLocation='center,bottom' PackLocationProp='0011/0001,-044/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@No</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='19,47' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0019/0001,-050/0001' PackSize='absolute,fixed' PackSizeProp='0034/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='177,32' Size='177,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='2,0' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='211,97' Size='211,97' Stretch='false' Style=' '/>
</Page>
<Page Location='3,482' movable='true' Name='AcceptSquadInvitation' PackLocation='left,bottom' PackLocationProp='0003/0001,-286/0001' ScrollExtent='211,97' ShowSound='interface_feedback_rollover.wav' Size='211,97' Visible='false'>
<Text AbsorbsInput='false' Color='#00F2C9' Enabled='false' Font='/Fonts.HudFont2' LocalText='100/100' Location='21,10' Name='InvitationText' PackLocation='left,top' PackLocationProp='0021/0001,0010/0001' PackSize='absolute,absolute' PackSizeProp='0037/0001,0062/0001' ScrollExtent='174,35' Size='174,35' TextAlignment='Center'>100/100</Text>
<Button LocalText='[@Yes]' Location='25,53' Name='AcceptButton' PackLocation='Center,bottom' PackLocationProp='-080/0001,-044/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@Yes</Button>
<Button LocalText='[@No]' Location='116,53' Name='DeclineButton' PackLocation='center,bottom' PackLocationProp='0011/0001,-044/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@No</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='19,47' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0019/0001,-050/0001' PackSize='absolute,fixed' PackSizeProp='0034/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='177,32' Size='177,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='2,0' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='211,97' Size='211,97' Stretch='false' Style=' '/>
</Page>
<Page Location='3,482' movable='true' Name='AcceptVoiceInvitation' PackLocation='left,bottom' PackLocationProp='0003/0001,-286/0001' ScrollExtent='211,97' ShowSound='interface_feedback_rollover.wav' Size='211,97' Visible='false'>
<Text AbsorbsInput='false' Color='#00F2C9' Enabled='false' Font='/Fonts.HudFont2' LocalText='100/100' Location='21,10' Name='InvitationText' PackLocation='left,top' PackLocationProp='0021/0001,0010/0001' PackSize='absolute,absolute' PackSizeProp='0037/0001,0062/0001' ScrollExtent='174,35' Size='174,35' TextAlignment='Center'>100/100</Text>
<Button LocalText='[@Yes]' Location='25,53' Name='AcceptButton' PackLocation='Center,bottom' PackLocationProp='-080/0001,-044/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@Yes</Button>
<Button LocalText='[@No]' Location='116,53' Name='DeclineButton' PackLocation='center,bottom' PackLocationProp='0011/0001,-044/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@No</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='19,47' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0019/0001,-050/0001' PackSize='absolute,fixed' PackSizeProp='0034/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='177,32' Size='177,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='2,0' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='211,97' Size='211,97' Stretch='false' Style=' '/>
</Page>
<Page Color='#FF0000' GetsInput='false' Location='470,480' Name='GriefIndicator' PackLocation='Center,Center' PackLocationProp='-042/0001,0096/0001' ScrollExtent='130,40' Size='130,40' Visible='false'>
<Text AbsorbsInput='false' Font='/Fonts.OverheadFont' LocalText='+50' Location='46,0' Name='Text' ScrollExtent='84,40' Size='84,40' TextAlignmentVertical='Center'>+50</Text>
<Image AbsorbsInput='false' Name='GriefIcon' ScrollExtent='40,40' Size='40,40' SourceRect='0,0,32,32' SourceResource='grief_weapons_lock_icon' Style=' '/>
</Page>
<Page Location='224,42' movable='true' Name='SoldierStatus' PackLocation='right,top' PackLocationProp='-800/0001,0042/0001' ScrollExtent='147,72' Size='147,72' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/SmallFont' LocalText='100/100' Location='57,10' Name='HealthText' ScrollExtent='39,12' Size='39,12' TextAlignment='Center'>100/100</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/SmallFont' LocalText='100/100' Location='57,25' Name='StaminaText' ScrollExtent='39,12' Size='39,12' TextAlignment='Center'>100/100</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/SmallFont' LocalText='100/100' Location='57,40' Name='ArmorText' ScrollExtent='39,12' Size='39,12' TextAlignment='Center'>100/100</Text>
<Image AbsorbsInput='false' Color='#FF0000' Location='17,10' Name='HealthIcon' ScrollExtent='12,12' Size='12,12' Stretch='false' Style='/Icons.HUD.Health'/>
<Image AbsorbsInput='false' Color='#00F2C9' Location='17,25' Name='StaminaIcon' ScrollExtent='12,12' Size='12,12' Stretch='false' Style='/Icons.HUD.Stamina'/>
<Image AbsorbsInput='false' Color='#0099C5' Location='17,40' Name='ArmorIcon' ScrollExtent='12,12' Size='12,12' Stretch='false' Style='/Icons.HUD.Armor'/>
<Progressbar BackgroundColor='#858585' BarBackgroundColor='#FF0000' LocalTooltip='[@HeatlhTooltip]' Location='31,10' Name='Health' Progress='0.800' ScrollExtent='100,12' Size='100,12' Style='/ProgressBars.Health.style' Tooltip='@HeatlhTooltip'/>
<Progressbar BackgroundColor='#858585' BarBackgroundColor='#00F2C9' LocalTooltip='[@StaminaTooltip]' Location='32,25' Name='Stamina' Progress='0.400' ScrollExtent='100,12' Size='100,12' Style='/ProgressBars.Health.style' Tooltip='@StaminaTooltip'/>
<Progressbar BackgroundColor='#858585' BarBackgroundColor='#0099C5' LocalTooltip='[@ArmorTooltip]' Location='32,40' Name='Armor' Progress='0.600' ScrollExtent='100,12' Size='100,12' Style='/ProgressBars.Health.style' Tooltip='@ArmorTooltip'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='2,0' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='147,72' Size='147,72' Stretch='false' Style=' '/>
</Page>
<Page Activated='true' Location='9,589' movable='true' Name='VehicleIcons' Opacity='0.800' PackLocation='left,bottom' PackLocationProp='0009/0001,-179/0001' ScrollExtent='104,100' Size='104,100' Visible='false'>
<ImageStyle Name='FullOccupant'>
<ImageFrame Source='ui_vehicle_occupant_00' SourceRect='0,0,8,8'/>
</ImageStyle>
<ImageStyle Name='EmptyOccupant'>
<ImageFrame Source='ui_vehicle_occupant_00' SourceRect='8,0,16,8'/>
</ImageStyle>
<RectangleStyle Center='FullOccupant' Name='ROccupant'/>
<ButtonStyle MouseOverSound='interface_feedback_rollover.wav' Name='Occupant' RStyleDefault='ROccupant'/>
<Page isvehiclepage='true' Name='ams' PackLocation='center,center' PackLocationProp='-052/0001,-050/0001' ScrollExtent='38,100' Size='38,100' Visible='false'>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.800' ScrollExtent='38,100' Size='38,100' Style='/ProgressBars.ams.style'/>
</Page>
<Page isvehiclepage='true' Name='ant' PackLocation='center,center' PackLocationProp='-052/0001,-050/0001' ScrollExtent='56,100' Size='56,100' Visible='false'>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.800' ScrollExtent='56,100' Size='56,100' Style='/ProgressBars.ant.style'/>
</Page>
<Page isvehiclepage='true' Name='apc' ScrollExtent='45,100' Size='45,100' Visible='false'>
<Button Color='#F3E138' LocalTooltip='Bob' Location='19,12' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant' Tooltip='Bob'></Button>
<Button Color='#F3E138' Location='9,24' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='29,25' mountpointname='GunnerB' Name='GunnerB' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='9,40' mountpointname='PassengerA' Name='PassengerA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='29,40' mountpointname='PassengerB' Name='PassengerB' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='9,53' mountpointname='PassengerC' Name='PassengerC' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='29,54' mountpointname='PassengerD' Name='PassengerD' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='10,72' mountpointname='PassengerE' Name='PassengerE' RStyleDefault='OccupantStyle' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='28,73' mountpointname='PassengerF' Name='PassengerF' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='9,87' mountpointname='PassengerG' Name='HeavyA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='28,88' mountpointname='PassengerH' Name='HeavyB' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Image Color='#F3E138' LocalTooltip='Bob' Location='19,12' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant' Tooltip='Bob'/>
<Image Color='#F3E138' Location='9,24' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='29,25' mountpointname='GunnerB' Name='GunnerB' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='9,40' mountpointname='PassengerA' Name='PassengerA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='29,40' mountpointname='PassengerB' Name='PassengerB' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='9,53' mountpointname='PassengerC' Name='PassengerC' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='29,54' mountpointname='PassengerD' Name='PassengerD' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='10,72' mountpointname='PassengerE' Name='PassengerE' RStyleDefault='OccupantStyle' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='28,73' mountpointname='PassengerF' Name='PassengerF' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='9,87' mountpointname='PassengerG' Name='HeavyA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='28,88' mountpointname='PassengerH' Name='HeavyB' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.600' ScrollExtent='45,100' Size='45,100' Style='/ProgressBars.apc.style'/>
</Page>
<Page isvehiclepage='true' Name='dropship' ScrollExtent='104,100' Size='104,100' Visible='false'>
<Button Color='#F3E138' Location='48,6' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='43,16' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='53,16' mountpointname='GunnerB' Name='GunnerB' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='42,28' mountpointname='PassengerA' Name='PassengerA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='54,28' mountpointname='PassengerB' Name='PassengerB' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='42,39' mountpointname='PassengerC' Name='PassengerC' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='54,39' mountpointname='PassengerD' Name='PassengerD' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='42,48' mountpointname='PassengerE' Name='PassengerE' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='54,49' mountpointname='PassengerF' Name='PassengerF' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='42,59' mountpointname='PassengerG' Name='HeavyA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='54,59' mountpointname='PassengerH' Name='HeavyB' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='48,72' mountpointname='Vehicle' Name='Vehicle' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='48,88' mountpointname='gunnerC' Name='GunnerC' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Image Color='#F3E138' Location='48,6' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='43,16' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='53,16' mountpointname='GunnerB' Name='GunnerB' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='42,28' mountpointname='PassengerA' Name='PassengerA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='54,28' mountpointname='PassengerB' Name='PassengerB' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='42,39' mountpointname='PassengerC' Name='PassengerC' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='54,39' mountpointname='PassengerD' Name='PassengerD' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='42,48' mountpointname='PassengerE' Name='PassengerE' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='54,49' mountpointname='PassengerF' Name='PassengerF' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='42,59' mountpointname='PassengerG' Name='HeavyA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='54,59' mountpointname='PassengerH' Name='HeavyB' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='48,72' mountpointname='Vehicle' Name='Vehicle' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='48,88' mountpointname='gunnerC' Name='GunnerC' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.600' ScrollExtent='104,100' Size='104,100' Style='/ProgressBars.dropship.style'/>
</Page>
<Page isvehiclepage='true' Name='lightgunship' ScrollExtent='70,100' Size='70,100' Visible='false'>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.800' ScrollExtent='70,100' Size='70,100' Style='/ProgressBars.lightgunship.style'/>
</Page>
<Page isvehiclepage='true' Name='lightning' ScrollExtent='62,100' Size='62,100' Visible='false'>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.800' ScrollExtent='62,100' Size='62,100' Style='/ProgressBars.lightning.style'/>
</Page>
<Page isvehiclepage='true' Name='magrider' ScrollExtent='50,100' Size='50,100' Visible='false'>
<Button Color='#F3E138' Location='22,36' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='22,64' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Image Color='#F3E138' Location='22,36' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='22,64' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.800' ScrollExtent='50,100' Size='50,100' Style='/ProgressBars.magrider.style'/>
</Page>
<Page isvehiclepage='true' Name='manned_turret' ScrollExtent='96,100' Size='96,100' Visible='false'>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.700' ScrollExtent='96,100' Size='96,100' Style='/ProgressBars.manned_turret.style'/>
</Page>
<Page isvehiclepage='true' Name='mediumtransport' ScrollExtent='50,100' Size='50,100' Visible='false'>
<Button Color='#F3E138' Location='15,28' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='27,28' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='16,70' mountpointname='GunnerB' Name='GunnerB' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='15,49' mountpointname='PassengerA' Name='PassengerA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='27,49' mountpointname='PassengerB' Name='PassengerB' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Image Color='#F3E138' Location='15,28' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='27,28' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='16,70' mountpointname='GunnerB' Name='GunnerB' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='15,49' mountpointname='PassengerA' Name='PassengerA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='27,49' mountpointname='PassengerB' Name='PassengerB' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.800' ScrollExtent='50,100' Size='50,100' Style='/ProgressBars.mediumtransport.style'/>
</Page>
<Page isvehiclepage='true' Name='mosquito' ScrollExtent='54,100' Size='54,100' Visible='false'>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.800' ScrollExtent='54,100' Size='54,100' Style='/ProgressBars.mosquito.style'/>
</Page>
<Page isvehiclepage='true' Name='prowler' ScrollExtent='76,100' Size='76,100' Visible='false'>
<Button Color='#F3E138' Location='34,19' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='6,64' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='63,64' mountpointname='GunnerB' Name='GunnerB' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Image Color='#F3E138' Location='34,19' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='6,64' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='63,64' mountpointname='GunnerB' Name='GunnerB' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.800' ScrollExtent='76,100' Size='76,100' Style='/ProgressBars.prowler.style'/>
</Page>
<Page isvehiclepage='true' Name='quadassault' ScrollExtent='64,100' Size='64,100' Visible='false'>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.750' ScrollExtent='64,100' Size='64,100' Style='/ProgressBars.quadassault.style'/>
</Page>
<Page isvehiclepage='true' Name='quadstealth' ScrollExtent='64,100' Size='64,100' Visible='false'>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.750' ScrollExtent='64,100' Size='64,100' Style='/ProgressBars.quadassault.style'/>
</Page>
<Page isvehiclepage='true' Name='threemanheavybuggy' ScrollExtent='53,100' Size='53,100' Visible='false'>
<Button Color='#F3E138' Location='12,48' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='32,48' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='22,72' mountpointname='GunnerB' Name='GunnerB' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Image Color='#F3E138' Location='12,48' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyEmptyOccupant'/>
<Image Color='#F3E138' Location='32,48' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyEmptyOccupant'/>
<Image Color='#F3E138' Location='22,72' mountpointname='GunnerB' Name='GunnerB' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyEmptyOccupant'/>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='1.000' ScrollExtent='53,100' Size='53,100' Style='/ProgressBars.threemanheavybuggy.style'/>
</Page>
<Page isvehiclepage='true' Name='two_man_assault_buggy' ScrollExtent='60,100' Size='60,100' Visible='false'>
<Button Color='#F3E138' Location='18,48' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='35,48' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Image Color='#F3E138' Location='18,48' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='35,48' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.800' ScrollExtent='60,100' Size='60,100' Style='/ProgressBars.two_man_assault_buggy.style'/>
</Page>
<Page isvehiclepage='true' Name='twomanheavybuggy' ScrollExtent='54,100' Size='54,100' Visible='false'>
<Button Color='#F3E138' Location='23,44' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='23,76' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Image Color='#F3E138' Location='23,44' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='23,76' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.600' ScrollExtent='54,100' Size='54,100' Style='/ProgressBars.twomanheavybuggy.style'/>
</Page>
<Page isvehiclepage='true' Name='twomanhoverbuggy' ScrollExtent='54,100' Size='54,100' Visible='false'>
<Button Color='#F3E138' Location='18,56' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='29,56' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Image Color='#F3E138' Location='18,56' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='29,56' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.600' ScrollExtent='54,100' Size='54,100' Style='/ProgressBars.twomanhoverbuggy.style'/>
</Page>
<Page isvehiclepage='true' Name='vanguard' ScrollExtent='64,100' Size='64,100' Visible='false'>
<Button Color='#F3E138' Location='37,34' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='40,61' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Image Color='#F3E138' Location='37,34' mountpointname='Driver' Name='Driver' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Image Color='#F3E138' Location='40,61' mountpointname='GunnerA' Name='GunnerA' ScrollExtent='8,8' Size='8,8' Stretch='false' Style='EmptyOccupant'/>
<Progressbar BackgroundColor='#FF0000' BarBackgroundColor='#00F2C9' GetsInput='false' Name='Progress' Progress='0.800' ScrollExtent='65,100' Size='65,100' Style='/ProgressBars.vanguard.style'/>
</Page>
</Page>
<Page BackgroundColor='#0000FF' Location='930,212' movable='true' Name='Minimize' PackLocation='left,top' PackLocationProp='0930/0001,0212/0001' ScrollExtent='92,270' Size='92,270' Visible='false'>
<Button BackgroundColor='#FFFFFF' LocalText='t' LocalTooltip='[@MaximizeRadarTooltip]' Location='17,12' Name='Chat' RStyleDefault=' ' ScrollExtent='57,32' Size='57,32' Style='/Buttons.MinimizedButton.style' Tooltip='@MaximizeRadarTooltip'>t</Button>
<Button BackgroundColor='#FFFFFF' LocalText='*' LocalTooltip='[@MaximizeRadarTooltip]' Location='17,45' Name='Help' RStyleDefault=' ' ScrollExtent='57,32' Size='57,32' Style='/Buttons.MinimizedButton.style' Tooltip='@MaximizeRadarTooltip'>*</Button>
<Button BackgroundColor='#FFFFFF' LocalText='m' LocalTooltip='[@MaximizeRadarTooltip]' Location='17,78' Name='Inventory' RStyleDefault=' ' ScrollExtent='57,32' Size='57,32' Style='/Buttons.MinimizedButton.style' Tooltip='@MaximizeRadarTooltip'>m</Button>
<Button BackgroundColor='#FFFFFF' LocalText=')' LocalTooltip='[@MaximizeRadarTooltip]' Location='17,111' Name='Radar' RStyleDefault=' ' ScrollExtent='57,32' Size='57,32' Style='/Buttons.MinimizedButton.style' Tooltip='@MaximizeRadarTooltip'>)</Button>
<Button BackgroundColor='#FFFFFF' LocalText='n' LocalTooltip='[@MaximizeRadarTooltip]' Location='17,144' Name='ShortcutBar' RStyleDefault=' ' ScrollExtent='57,32' Size='57,32' Style='/Buttons.MinimizedButton.style' Tooltip='@MaximizeRadarTooltip'>n</Button>
<Button BackgroundColor='#FFFFFF' LocalText='v' LocalTooltip='[@MaximizeRadarTooltip]' Location='17,177' Name='SquadList' RStyleDefault=' ' ScrollExtent='57,32' Size='57,32' Style='/Buttons.MinimizedButton.style' Tooltip='@MaximizeRadarTooltip'>v</Button>
<Button BackgroundColor='#FFFFFF' LocalText='1' LocalTooltip='[@MaximizeRadarTooltip]' Location='17,210' Name='Trade' RStyleDefault=' ' ScrollExtent='57,32' Size='57,32' Style='/Buttons.MinimizedButton.style' Tooltip='@MaximizeRadarTooltip'>1</Button>
<Image BackgroundOpacity='1.000' Location='0,-1' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='92,270' Size='92,270' Stretch='false'/>
</Page>
<Page Location='953,527' movable='true' Name='SoldierManagement' PackLocation='right,bottom' PackLocationProp='-071/0001,-241/0001' ScrollExtent='72,192' Size='72,192'>
<Button LocalText='m' LocalTooltip='[@ToggleInventoryTooltip]' Location='19,12' Name='button_inventory' ScrollExtent='39,20' Size='39,20' Style='/Buttons.TitlebarButton.style' Tooltip='@ToggleInventoryTooltip'>m</Button>
<Button LocalText='n' LocalTooltip='[@ToggleCharacterTooltip]' Location='19,39' Name='button_character' ScrollExtent='39,20' Size='39,20' Style='/Buttons.TitlebarButton.style' Tooltip='@ToggleCharacterTooltip'>n</Button>
<Button LocalText='v' LocalTooltip='[@TogglePlayerTooltip]' Location='19,66' Name='button_player' ScrollExtent='39,20' Size='39,20' Style='/Buttons.TitlebarButton.style' Tooltip='@TogglePlayerTooltip'>v</Button>
<Button LocalText='o' LocalTooltip='[@ToggleMapTooltip]' Location='19,94' Name='button_map' ScrollExtent='39,20' Size='39,20' Style='/Buttons.TitlebarButton.style' Tooltip='@ToggleMapTooltip'>o</Button>
<Button LocalText='p' LocalTooltip='[@ToggleVehicleTooltip]' Location='19,122' Name='button_vehicle' ScrollExtent='39,20' Size='39,20' Style='/Buttons.TitlebarButton.style' Tooltip='@ToggleVehicleTooltip'>p</Button>
<Image Location='19,123' Name='button_vehicle_background' RStyleDefault='/Buttons.TitlebarButton.RRollover' ScrollExtent='39,20' Size='39,20'/>
<Button LocalText='J' LocalTooltip='[@ToggleOutfitTooltip]' Location='19,149' Name='button_stats' ScrollExtent='39,20' Size='39,20' Style='/Buttons.TitlebarButton.style' Tooltip='@ToggleOutfitTooltip'>J</Button>
<Image Location='19,149' Name='button_stats_background' RStyleDefault='/Buttons.TitlebarButton.RRollover' ScrollExtent='39,20' Size='39,20'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='3,0' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0003/0001' RStyleDefault='/WindowPanes.MiniBackground.style' ScrollExtent='72,189' Size='72,189' Stretch='false'/>
</Page>
<Page movable='true' Name='SquadList' PackLocation='Left,Top' PackLocationProp='0000/0001,0000/0001' PackSize='1,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,36' Size='1024,36' Visible='false'>
<Template Name='ListboxTemplate' Size='100,36'>\<text color = \'#FFDC00\' font = \'/Fonts.HudFont1\' location = \'6,3\' maxlines = \'1\' size = \'10,16\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$speaking$\'\>
$MemberID$
\</text\>
\<text color = \'#FFDC00\' font = \'/Fonts.HudFont1\' location = \'20,3\' maxlines = \'1\' size = \'$namesize$\' visible = \'$speaking$\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'6,3\' maxlines = \'1\' size = \'10,16\' textalignment = \'right\' truncateelipsis = \'false\'\>
$MemberID$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'20,3\' maxlines = \'1\' size = \'$namesize$\'\>
$Internationalize$
\</text\>
\<Progressbar barbackgroundcolor = \'#ff0000\' localtooltip = \'[@HeatlhTooltip]\' location = \'4,3\' progress = \'$health$\' size = \'$progresssize$,12\' style = \'/ProgressBars.Health.style\' tooltip = \'@HeatlhTooltip\'/\>
\<Progressbar barbackgroundcolor = \'#0099C5\' localtooltip = \'[@HeatlhTooltip]\' location = \'4,16\' progress = \'$armor$\' size = \'$progresssize$,12\' style = \'/ProgressBars.Health.style\' tooltip = \'@ArmorTooltip\'/\>
\<Image backgroundopacity = \'1.000\' color = \'#FFDC00\' location = \'2,0\' opacity = \'0.75\' packsize = \'1,1\' rstyledefault = \'SquadBorderRect\' size = \'$bordersize$\' visible = \'$speaking$\'/\>
\<Image backgroundopacity = \'1.000\' color = \'#00F2C9\' location = \'2,0\' opacity = \'0.75\' packsize = \'1,1\' rstyledefault = \'SquadBorderRect\' size = \'$bordersize$\'/\></Template>
<Listbox AbsorbsInput='false' DataSource='/DataSources.SquadList' GetsInput='false' Location='56,0' Name='SquadListbox' PackLocation='left,top' PackLocationProp='0056/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RowTemplate='ListboxTemplate' ScrollExtent='1024,36' Size='1024,36' Style='/Listboxes.ClearHorizontal.style'/>
<Button BackgroundColor='#FFFFFF' Enabled='false' LocalText='v' LocalTooltip='[@MaximizeRadarTooltip]' Name='Maximize' RStyleDefault=' ' ScrollExtent='57,32' Size='57,32' Style='/Buttons.MinimizedButton.style' Tooltip='@MaximizeRadarTooltip'>v</Button>
<ImageStyle Name='nw'>
<ImageFrame Source='ui_HUD_border_00' SourceRect='0,0,6,6'/>
</ImageStyle>
<ImageStyle Name='north'>
<ImageFrame Source='ui_HUD_border_00' SourceRect='6,0,10,6'/>
</ImageStyle>
<ImageStyle Name='ne'>
<ImageFrame Source='ui_HUD_border_00' SourceRect='10,0,16,6'/>
</ImageStyle>
<ImageStyle Name='west'>
<ImageFrame Source='ui_HUD_border_00' SourceRect='0,6,6,10'/>
</ImageStyle>
<ImageStyle Name='center'>
<ImageFrame Source='ui_HUD_border_00' SourceRect='6,6,10,10'/>
</ImageStyle>
<ImageStyle Name='east'>
<ImageFrame Source='ui_HUD_border_00' SourceRect='10,6,16,10'/>
</ImageStyle>
<ImageStyle Name='sw'>
<ImageFrame Source='ui_HUD_border_00' SourceRect='0,10,6,16'/>
</ImageStyle>
<ImageStyle Name='south'>
<ImageFrame Source='ui_HUD_border_00' SourceRect='6,10,10,16'/>
</ImageStyle>
<ImageStyle Name='se'>
<ImageFrame Source='ui_HUD_border_00' SourceRect='10,10,16,16'/>
</ImageStyle>
<RectangleStyle Center='center' CenterShrinkH='true' CenterShrinkV='true' CenterStretchH='true' CenterStretchV='true' East='east' EastShrink='true' EastStretch='true' Name='SquadBorderRect' North='north' NorthEast='ne' NorthShrink='true' NorthStretch='true' NorthWest='nw' South='south' SouthEast='se' SouthShrink='true' SouthStretch='true' SouthWest='sw' West='west' WestShrink='true' WestStretch='true'/>
</Page>
<Page Location='9,280' movable='true' Name='FriendsList' PackLocation='Left,Bottom' PackLocationProp='0009/0001,-488/0001' PackSize='Fixed,Fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='186,224' Size='186,224' Visible='false'>
<Listbox DataSource='/DataSources.FriendsList' GetsInput='false' Location='17,32' Name='FriendsListbox' PackLocation='left,top' PackLocationProp='0017/0001,0032/0001' PackSize='absolute,absolute' PackSizeProp='0044/0001,0044/0001' RowTemplate='ListboxTemplate' ScrollExtent='142,180' Size='142,180' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='FriendsListbox' Location='162,32' Name='ScrollFriendsList' PackLocation='right,top' PackLocationProp='-024/0001,0032/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0044/0001' ScrollExtent='9,180' Size='9,180' Style='/ScrollBars.vertical.style'/>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='111,9' Name='CancelButton' PackLocation='right,top' PackLocationProp='-075/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='58,10' Name='HelpButton' PackLocation='right,top' PackLocationProp='-128/0001,0010/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='29,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='130,32' Size='130,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,15' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0007/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='186,217' Size='186,217' Stretch='false'/>
<Template Name='ListboxTemplate' Size='142,18'>\<text color = \'#FFFF00\' font = \'/Fonts.HudFont1\' location = \'5,1\' maxlines = \'1\' size = \'132,16\' visible = \'$IsOnline$\'\>
$Internationalize$
\</text\>
\<text color = \'#AAAAAA\' font = \'/Fonts.HudFont1\' location = \'5,1\' maxlines = \'1\' size = \'132,16\' visible = \'$IsNotOnline$\'\>
$Internationalize$
\</text\></Template>
</Page>
<Page BackgroundColor='#FFFFFF' Location='124,213' movable='true' Name='ContainerView' PackLocation='center,center' PackLocationProp='-388/0001,-171/0001' ScrollExtent='303,236' Size='303,236' Visible='false'>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='62,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0062/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button LocalTooltip='[@CloseTooltip]' Location='225,8' Name='Close' PackLocation='right,top' PackLocationProp='-078/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'></Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@Trunk]' Location='79,4' Name='TitleText' PackLocation='Left,Top' PackLocationProp='0079/0001,0004/0001' PackSize='Absolute,fixed' PackSizeProp='0159/0001,0002/0003' ScrollExtent='144,23' Size='144,23' TextAlignment='Center' TextAlignmentVertical='Center'>@Trunk</Text>
<Grid CellCount='15,10' CellSize='17,17' DataSource='/DataSources.TargetInventory' DragAccepts='Item' Location='23,33' Name='Inventory' PackLocation='left,top' PackLocationProp='0023/0001,0033/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='255,170' Size='256,171' Style='/DefaultGrid.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='33,-1' Name='Title' PackLocation='left,top' PackLocationProp='0033/0001,-001/0001' PackSize='absolute,fixed' PackSizeProp='0062/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='241,32' Size='241,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,12' Name='Background' PackSize='absolute,absolute' PackSizeProp='0000/0001,0014/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='303,222' Size='303,222' Stretch='false' Style=' '/>
</Page>
<Page HideSound='interface_pane_close2.wav' Location='537,235' movable='true' Name='AvatarView' PackLocation='center,center' PackLocationProp='0025/0001,-149/0001' ScrollExtent='455,280' ShowSound='interface_pane_open.wav' Size='455,280' Visible='false'>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Location='3,0' Name='StealthArmor' ScrollExtent='281,171' Size='281,171' Visible='false'>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='206,10' Name='CloseButton' PackLocation='right,top' PackLocationProp='-075/0001,0010/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='53,9' Name='HelpButton' PackLocation='right,top' PackLocationProp='-228/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='77,7' Name='TitleText' ScrollExtent='124,20' Size='124,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='21,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='232,32' Size='232,32'/>
<Rectangle Color='#81C9D4' Location='25,36' Name='RightHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='133,36' Name='BackpackRect' ScrollExtent='103,103' Size='103,103' UserMovable='true'/>
<Grid CellCount='6,6' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='133,36' Name='Backpack' ScrollExtent='102,102' Size='103,103' Style='/DefaultGrid.style' UserMovable='true'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='25,36' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-2,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0014/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='281,157' Size='281,157' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Location='-4,0' Name='HeavyArmor' ScrollExtent='325,282' Size='325,282'>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='254,9' Name='CloseButton' PackLocation='right,top' PackLocationProp='-071/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='64,9' Name='HelpButton' PackLocation='left,top' PackLocationProp='0064/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='52,6' Name='TitleText' ScrollExtent='224,20' Size='224,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='33,0' Name='Title' PackSize='absolute,fixed' PackSizeProp='0058/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='267,32' Size='267,32'/>
<Rectangle Color='#81C9D4' Location='27,36' Name='BackpackRect' PackSize='absolute,absolute' PackSizeProp='0052/0001,0076/0001' ScrollExtent='273,206' Size='273,206'/>
<Grid CellCount='16,12' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='27,36' Name='Backpack' ScrollExtent='272,204' Size='275,213' Style='/DefaultGrid.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='2,14' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='325,262' Size='325,262' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Location='3,0' Name='MediumArmor' ScrollExtent='405,232' Size='405,232' Visible='false'>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='309,9' Name='CloseButton' PackLocation='right,top' PackLocationProp='-096/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='96,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-309/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='114,7' Name='TitleText' ScrollExtent='192,20' Size='192,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='68,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='289,32' Size='289,32'/>
<Rectangle Color='#81C9D4' Location='23,143' Name='LeftBackHolsterRect' ScrollExtent='154,52' Size='154,52'/>
<Rectangle Color='#81C9D4' Location='23,90' Name='RightBackHolsterRect' ScrollExtent='154,52' Size='154,52'/>
<Rectangle Color='#81C9D4' Location='23,37' Name='RightHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='125,37' Name='LeftHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='178,37' Name='BackpackRect' ScrollExtent='205,154' Size='205,154'/>
<Grid CellCount='12,9' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='178,37' Name='Backpack' ScrollExtent='204,153' Size='205,154' Style='/DefaultGrid.style'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,143' Name='LeftBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,90' Name='RightBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,37' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='125,37' Name='LeftHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='0,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='405,212' Size='405,212' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Location='3,0' Name='LightArmor' ScrollExtent='359,221' Size='359,221' Visible='false'>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='275,9' Name='CloseButton' PackLocation='right,top' PackLocationProp='-084/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Help]' LocalTooltip='[@HelpTooltip]' Location='80,9' Name='HelpButton' PackLocation='right,top' PackLocationProp='-279/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Help</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='100,6' Name='TitleText' ScrollExtent='174,20' Size='174,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='52,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='270,32' Size='270,32'/>
<Rectangle Color='#81C9D4' Location='23,90' Name='RightBackHolsterRect' ScrollExtent='154,52' Size='154,52'/>
<Rectangle Color='#81C9D4' Location='23,37' Name='RightHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='125,37' Name='LeftHipHolsterRect' OnShowEffector='Effectors.ShowInventory' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='179,36' Name='BackpackRect' ScrollExtent='154,154' Size='154,154'/>
<Grid CellCount='9,9' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='179,36' Name='Backpack' ScrollExtent='153,153' Size='154,154' Style='/DefaultGrid.style'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,90' Name='RightBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,37' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='125,37' Name='LeftHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-1,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0008/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='359,213' Size='359,213' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Location='2,0' Name='StandardArmor' ScrollExtent='357,175' Size='357,175' Visible='false'>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='273,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-084/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='77,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-280/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='96,5' Name='TitleText' ScrollExtent='174,20' Size='174,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='50,-1' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='271,32' Size='271,32'/>
<Rectangle Color='#81C9D4' Location='23,92' Name='RightBackHolsterRect' Opacity='0.750' ScrollExtent='154,52' Size='154,52'/>
<Rectangle Color='#81C9D4' Location='23,39' Name='RightHipHolsterRect' Opacity='0.750' ScrollExtent='52,52' Size='52,52'/>
<Rectangle BackgroundOpacity='1.000' Color='#81C9D4' Location='178,41' Name='BackpackRect' Opacity='0.750' ScrollExtent='154,103' Size='154,103'/>
<Grid BackgroundColor='#FFFFFF' BackgroundOpacity='1.000' CellCount='9,6' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='178,41' Name='Backpack' ScrollExtent='153,102' Size='154,103' Style='/DefaultGrid.style'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,92' Name='RightBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,39' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-1,9' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0010/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='357,165' Size='357,165' SizeIncrement='1,0' Stretch='false'/>
</Page>
</Page>
<Page HideSound='interface_pane_close2.wav' Location='54,227' movable='true' Name='TradeView' PackLocation='center,center' PackLocationProp='-458/0001,-157/0001' ScrollExtent='491,302' ShowSound='interface_pane_open.wav' Size='491,302' Visible='false'>
<Page AbsorbsInput='false' Location='-1,-1' Name='InvitePage' ScrollExtent='228,148' Size='228,148' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@TradeInviteText]' Location='15,20' Name='Text' PackLocation='left,top' PackLocationProp='0015/0001,0020/0001' PackSize='absolute,absolute' PackSizeProp='0031/0001,0074/0001' ScrollExtent='197,74' Size='197,74' TextAlignment='Center' TextAlignmentVertical='Center'>@TradeInviteText</Text>
<Button LocalText='[@Yes]' Location='19,103' Name='Yes' PackLocation='left,bottom' PackLocationProp='0019/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@Yes</Button>
<Button IsCancelButton='true' IsDefaultButton='true' LocalText='[@No]' Location='133,103' Name='No' PackLocation='right,bottom' PackLocationProp='-095/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@No</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='14,97' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0014/0001,-051/0001' PackSize='absolute,fixed' PackSizeProp='0029/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='199,32' Size='199,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='228,148' Size='228,148' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Name='MainPage' ScrollExtent='497,300' Size='497,300'>
<ImageStyle Name='right_arrow_bold'>
<ImageFrame Source='ui_hud_trade_arrowR_00' SourceRect='0,0,25,50'/>
</ImageStyle>
<ImageStyle Name='right_arrow'>
<ImageFrame Source='ui_hud_trade_arrowR_00' SourceRect='25,0,50,50'/>
</ImageStyle>
<ImageStyle Name='left_arrow_bold'>
<ImageFrame Source='ui_hud_trade_arrowL_00' SourceRect='0,0,25,50'/>
</ImageStyle>
<ImageStyle Name='left_arrow'>
<ImageFrame Source='ui_hud_trade_arrowL_00' SourceRect='25,0,49,50'/>
</ImageStyle>
<Text BackgroundColor='#00F2C9' BackgroundOpacity='0.224' Font='/Fonts.HudFont2' LocalText='[@VoiceMacroTitle]' Location='24,72' Name='MessageText' PackLocation='left,top' PackLocationProp='0024/0001,0072/0001' PackSize='absolute,fixed' PackSizeProp='0292/0001,0002/0003' ScrollExtent='205,154' Size='205,154' SizeIncrement='0,0' TextAlignment='Center' TextAlignmentVertical='Center'>@VoiceMacroTitle</Text>
<Text AbsorbsInput='false' BackgroundColor='#00F2C9' BackgroundOpacity='0.224' Enabled='false' Font='/Fonts.HudFont2' LocalText='[@VoiceMacroTitle]' Location='266,47' Name='MyName' PackLocation='left,top' PackLocationProp='0266/0001,0047/0001' PackSize='absolute,fixed' PackSizeProp='0293/0001,0002/0003' ScrollExtent='204,21' Size='204,21' SizeIncrement='0,0' TextAlignment='Center' TextAlignmentVertical='Center'>@VoiceMacroTitle</Text>
<Text AbsorbsInput='false' BackgroundColor='#00F2C9' BackgroundOpacity='0.224' Enabled='false' Font='/Fonts.HudFont2' LocalText='[@VoiceMacroTitle]' Location='24,47' Name='OtherName' PackLocation='left,top' PackLocationProp='0024/0001,0047/0001' PackSize='absolute,fixed' PackSizeProp='0292/0001,0002/0003' ScrollExtent='205,21' Size='205,21' SizeIncrement='0,0' TextAlignment='Center' TextAlignmentVertical='Center'>@VoiceMacroTitle</Text>
<Button LocalText='[@Trade]' LocalTooltip='[@TradeTooltip]' Location='210,237' Name='TradeButton' PackLocation='center,bottom' PackLocationProp='-038/0001,-063/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@TradeTooltip'>@Trade</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='401,9' Name='CloseButton' PackLocation='right,top' PackLocationProp='-096/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='100,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0100/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@TradeTitle]' Location='179,7' Name='TitleText' PackLocation='center,top' PackLocationProp='-069/0001,0007/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='161,20' Size='161,20' TextAlignment='Center' TextAlignmentVertical='Center'>@TradeTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='68,0' Name='Title' PackSize='absolute,fixed' PackSizeProp='0115/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='382,32' Size='382,32'/>
<Grid CellCount='12,9' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='265,72' Name='MyGrid' ScrollExtent='204,153' Size='205,154' Style='/DefaultGrid.style'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' Enabled='false' GetsInput='false' Location='265,72' Name='MyRect' ScrollExtent='205,154' Size='205,154'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='235,82' Name='MyReadyImage' PackSize='absolute,fixed' PackSizeProp='0472/0001,0002/0003' RStyleDefault=' ' ScrollExtent='25,50' Size='25,50' Style='left_arrow_bold'/>
<Grid CellCount='12,9' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='24,72' Name='OtherGrid' ScrollExtent='204,153' Size='205,154' Style='/DefaultGrid.style'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' Enabled='false' GetsInput='false' Location='24,72' Name='OtherRect' ScrollExtent='205,154' Size='205,154'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='235,139' Name='OtherReadyImage' PackSize='absolute,fixed' PackSizeProp='0472/0001,0002/0003' RStyleDefault=' ' ScrollExtent='25,50' Size='25,50' Style='right_arrow_bold'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='235,82' Name='MyArrow' PackSize='absolute,fixed' PackSizeProp='0472/0001,0002/0003' RStyleDefault=' ' ScrollExtent='25,50' Size='25,50' Style='left_arrow'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='235,139' Name='OtherArrow' PackSize='absolute,fixed' PackSizeProp='0472/0001,0002/0003' RStyleDefault=' ' ScrollExtent='25,50' Size='25,50' Style='right_arrow'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='26,232' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0026/0001,-068/0001' PackSize='absolute,fixed' PackSizeProp='0055/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='442,31' Size='442,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-1,13' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='497,280' Size='497,280' Stretch='false'/>
</Page>
</Page>
<Page HideSound='interface_pane_close2.wav' Location='345,166' movable='true' Name='Inventory' PackLocation='center,center' PackLocationProp='-167/0001,-218/0001' ScrollExtent='512,402' ShowSound='interface_pane_open.wav' Size='512,402' Visible='false'>
<Template Name='ListboxTemplate' Size='188,20'>\<text font = \'/Fonts.DefaultFont\' location = \'0,2\' size = \'118,16\'\>
$Name$
\</text\>
\<text font = \'/Fonts.DefaultFont\' location = \'190,2\' size = \'118,16\'\>
$Continent$
\</text\></Template>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Location='2,0' Name='SoldierStandardArmor' ScrollExtent='357,211' Size='357,211' Visible='false'>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='273,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-084/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='77,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-280/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='96,5' Name='TitleText' ScrollExtent='174,20' Size='174,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='50,-1' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='271,32' Size='271,32'/>
<Button LocalText='[@UseItem]' LocalTooltip='[@UseItemTooltip]' Location='24,154' Name='btn_use' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@UseItemTooltip'>@UseItem</Button>
<Button LocalText='[@DropItem]' LocalTooltip='[@DropItemTooltip]' Location='102,154' Name='btn_drop' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@DropItemTooltip'>@DropItem</Button>
<Button LocalText='[@DestroyItem]' LocalTooltip='[@DestroyItemTooltip]' Location='179,154' Name='btn_destroy' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@DestroyItemTooltip'>@DestroyItem</Button>
<Button LocalText='[@ClearInventory]' LocalTooltip='[@ClearInventoryTooltip]' Location='256,154' Name='btn_clear' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@ClearInventoryTooltip'>@ClearInventory</Button>
<Text Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='25,123' Name='RightBackText' ScrollExtent='150,20' Size='150,20' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Text Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='25,69' Name='RightHipText' ScrollExtent='48,51' Size='48,20' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Rectangle Color='#81C9D4' Location='23,92' Name='RightBackHolsterRect' Opacity='0.750' ScrollExtent='154,52' Size='154,52'/>
<Rectangle Color='#81C9D4' Location='23,39' Name='RightHipHolsterRect' Opacity='0.750' ScrollExtent='52,52' Size='52,52'/>
<Rectangle BackgroundOpacity='1.000' Color='#81C9D4' Location='178,41' Name='BackpackRect' Opacity='0.750' ScrollExtent='154,103' Size='154,103'/>
<Grid BackgroundColor='#FFFFFF' BackgroundOpacity='1.000' CellCount='9,6' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='178,41' Name='Backpack' ScrollExtent='153,102' Size='154,103' Style='/DefaultGrid.style'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,92' Name='RightBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,39' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='18,149' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='317,31' Size='317,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-1,9' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0010/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='357,201' Size='357,201' SizeIncrement='1,0' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Location='3,0' Name='SoldierLightArmor' ScrollExtent='359,253' Size='359,253' Visible='false'>
<Button LocalText='[@UseItem]' LocalTooltip='[@UseItemTooltip]' Location='24,201' Name='btn_use' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@UseItemTooltip'>@UseItem</Button>
<Button LocalText='[@DropItem]' LocalTooltip='[@DropItemTooltip]' Location='102,201' Name='btn_drop' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@DropItemTooltip'>@DropItem</Button>
<Button LocalText='[@DestroyItem]' LocalTooltip='[@DestroyItemTooltip]' Location='179,201' Name='btn_destroy' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@DestroyItemTooltip'>@DestroyItem</Button>
<Button LocalText='[@ClearInventory]' LocalTooltip='[@ClearInventoryTooltip]' Location='256,201' Name='btn_clear' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@ClearInventoryTooltip'>@ClearInventory</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='275,9' Name='CloseButton' PackLocation='right,top' PackLocationProp='-084/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Help]' LocalTooltip='[@HelpTooltip]' Location='80,9' Name='HelpButton' PackLocation='right,top' PackLocationProp='-279/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Help</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='100,6' Name='TitleText' ScrollExtent='174,20' Size='174,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='52,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='270,32' Size='270,32'/>
<Text Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='25,69' Name='RightHipText' ScrollExtent='48,51' Size='48,20' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Text Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='127,68' Name='LeftHipText' ScrollExtent='48,51' Size='48,20' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Text Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='25,121' Name='RightBackText' ScrollExtent='150,20' Size='150,20' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Rectangle Color='#81C9D4' Location='23,90' Name='RightBackHolsterRect' ScrollExtent='154,52' Size='154,52'/>
<Rectangle Color='#81C9D4' Location='23,37' Name='RightHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='125,37' Name='LeftHipHolsterRect' OnShowEffector='Effectors.ShowInventory' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='179,36' Name='BackpackRect' ScrollExtent='154,154' Size='154,154'/>
<Grid CellCount='9,9' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='179,36' Name='Backpack' ScrollExtent='153,153' Size='154,154' Style='/DefaultGrid.style'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,90' Name='RightBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,37' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='125,37' Name='LeftHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='19,195' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='317,31' Size='317,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-1,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0011/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='359,242' Size='359,242' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Location='3,0' Name='SoldierMediumArmor' ScrollExtent='405,266' Size='405,266' Visible='false'>
<Button LocalText='[@UseItem]' LocalTooltip='[@UseItemTooltip]' Location='26,204' Name='btn_use' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@UseItemTooltip'>@UseItem</Button>
<Button LocalText='[@DropItem]' LocalTooltip='[@DropItemTooltip]' Location='126,204' Name='btn_drop' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@DropItemTooltip'>@DropItem</Button>
<Button LocalText='[@DestroyItem]' LocalTooltip='[@DestroyItemTooltip]' Location='216,204' Name='btn_destroy' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@DestroyItemTooltip'>@DestroyItem</Button>
<Button LocalText='[@ClearInventory]' LocalTooltip='[@ClearInventoryTooltip]' Location='304,204' Name='btn_clear' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@ClearInventoryTooltip'>@ClearInventory</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='309,9' Name='CloseButton' PackLocation='right,top' PackLocationProp='-096/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='96,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-309/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='114,7' Name='TitleText' ScrollExtent='192,20' Size='192,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='68,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='289,32' Size='289,32'/>
<Text Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='25,69' Name='RightHipText' ScrollExtent='48,51' Size='48,20' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Text Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='127,68' Name='LeftHipText' ScrollExtent='48,51' Size='48,20' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Text Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='25,123' Name='RightBackText' ScrollExtent='150,20' Size='150,20' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Text Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='25,174' Name='LeftBackText' ScrollExtent='150,20' Size='150,20' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Rectangle Color='#81C9D4' Location='23,143' Name='LeftBackHolsterRect' ScrollExtent='154,52' Size='154,52'/>
<Rectangle Color='#81C9D4' Location='23,90' Name='RightBackHolsterRect' ScrollExtent='154,52' Size='154,52'/>
<Rectangle Color='#81C9D4' Location='23,37' Name='RightHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='125,37' Name='LeftHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='178,37' Name='BackpackRect' ScrollExtent='205,154' Size='205,154'/>
<Grid CellCount='12,9' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='178,37' Name='Backpack' ScrollExtent='204,153' Size='205,154' Style='/DefaultGrid.style'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,143' Name='LeftBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,90' Name='RightBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,37' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='125,37' Name='LeftHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='22,199' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='362,31' Size='362,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='0,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='405,246' Size='405,246' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Location='-4,0' Name='SoldierHeavyArmor' ScrollExtent='355,395' Size='355,395'>
<Button LocalText='[@UseItem]' LocalTooltip='[@UseItemTooltip]' Location='25,340' Name='btn_use' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@UseItemTooltip'>@UseItem</Button>
<Button LocalText='[@DropItem]' LocalTooltip='[@DropItemTooltip]' Location='103,340' Name='btn_drop' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@DropItemTooltip'>@DropItem</Button>
<Button LocalText='[@DestroyItem]' LocalTooltip='[@DestroyItemTooltip]' Location='180,340' Name='btn_destroy' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@DestroyItemTooltip'>@DestroyItem</Button>
<Button LocalText='[@ClearInventory]' LocalTooltip='[@ClearInventoryTooltip]' Location='257,340' Name='btn_clear' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@ClearInventoryTooltip'>@ClearInventory</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='274,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-081/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='73,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-282/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='95,7' Name='TitleText' PackSize='absolute,fixed' PackSizeProp='0180/0001,0002/0003' ScrollExtent='175,20' Size='175,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='41,0' Name='Title' PackSize='absolute,fixed' PackSizeProp='0072/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='283,32' Size='283,32'/>
<Image AbsorbsInput='false' BackgroundColor='#FFFFFF' BackgroundOpacity='0.200' Location='83,34' Name='BlockLeftHipHolster' ScrollExtent='188,86' Size='188,86'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' Location='83,34' Name='RightHipHolsterRect' ScrollExtent='188,86' Size='188,86'/>
<Rectangle Color='#81C9D4' Location='40,124' Name='BackpackRect' ScrollExtent='275,205' Size='275,205'/>
<Grid CellCount='16,12' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='40,124' Name='Backpack' ScrollExtent='272,204' Size='275,205' Style='/DefaultGrid.style'/>
<Grid AbsorbsInput='false' CellCount='11,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' GetsInput='false' Location='83,34' Name='RightHipHolster' ScrollExtent='187,765' Size='188,86' Style='/DefaultGrid.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='21,334' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='315,31' Size='315,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='2,14' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0013/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='355,382' Size='355,382' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Location='3,0' Name='SoldierStealthArmor' ScrollExtent='357,207' Size='357,207'>
<Button LocalText='[@UseItem]' LocalTooltip='[@UseItemTooltip]' Location='22,149' Name='btn_use' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@UseItemTooltip'>@UseItem</Button>
<Button LocalText='[@DropItem]' LocalTooltip='[@DropItemTooltip]' Location='100,149' Name='btn_drop' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@DropItemTooltip'>@DropItem</Button>
<Button LocalText='[@DestroyItem]' LocalTooltip='[@DestroyItemTooltip]' Location='177,149' Name='btn_destroy' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@DestroyItemTooltip'>@DestroyItem</Button>
<Button LocalText='[@ClearInventory]' LocalTooltip='[@ClearInventoryTooltip]' Location='254,149' Name='btn_clear' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@ClearInventoryTooltip'>@ClearInventory</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='276,9' Name='CloseButton' PackLocation='right,top' PackLocationProp='-081/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='89,9' Name='HelpButton' PackLocation='right,top' PackLocationProp='-268/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='91,6' Name='TitleText' ScrollExtent='162,20' Size='162,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='44,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='262,32' Size='262,32'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='27,67' Name='RightHipText' ScrollExtent='48,51' Size='48,20' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Rectangle Color='#81C9D4' Location='25,36' Name='RightHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='191,35' Name='BackpackRect' ScrollExtent='103,103' Size='103,103'/>
<Grid CellCount='6,6' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='191,35' Name='Backpack' ScrollExtent='102,102' Size='103,103' Style='/DefaultGrid.style'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='25,36' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='19,144' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='314,31' Size='314,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-2,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0014/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='357,193' Size='357,193' Stretch='false'/>
</Page>
</Page>
<Page Location='255,178' MinimumSize='427,409' movable='true' Name='EquipmentTerminal' noresizex='true' resizable='true' ScrollExtent='427,409' Size='427,409' Visible='false'>
<Image BackgroundOpacity='1.000' Location='381,58' Name='TabBorderTop5' Opacity='0.750' PackLocation='left,top' PackLocationProp='0381/0001,0058/0001' PackSize='absolute,fixed' PackSizeProp='0407/0001,0002/0003' ScrollExtent='20,1' Size='20,1' Style='TabBorderTopStyle'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Color='#385E61' Location='21,58' Name='TabBorder' PackSize='absolute,absolute' PackSizeProp='0045/0001,0126/0001' RStyleDefault='/WindowPanes.TabBorder.style' ScrollExtent='382,283' Size='382,283'/>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='352,8' Name='CancelButton' PackLocation='right,top' PackLocationProp='-075/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='58,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0058/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@EquipmentTerminalTitle]' Location='92,6' Name='TitleText' PackLocation='center,top' PackLocationProp='-121/0001,0006/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='245,20' Size='245,20' TextAlignment='Center' TextAlignmentVertical='Center'>@EquipmentTerminalTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='30,-1' Name='Title' PackSize='absolute,fixed' PackSizeProp='0054/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='373,32' Size='373,32'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@WeaponTabTooltip]' Location='21,35' Name='WeaponTab' ScrollExtent='72,24' Size='72,24' Style='/Buttons.WindowIconTab.style' Tooltip='@WeaponTabTooltip'>@WeaponTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ArmorTabTooltip]' Location='93,35' Name='ArmorTab' ScrollExtent='72,24' Size='72,24' Style='/Buttons.WindowIconTab.style' Tooltip='@ArmorTabTooltip'>@ArmorTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@EquipmentTabTooltip]' Location='165,35' Name='EquipmentTab' ScrollExtent='72,24' Size='72,24' Style='/Buttons.WindowIconTab.style' Tooltip='@EquipmentTabTooltip'>@EquipmentTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@VehicleTabTooltip]' Location='237,35' Name='VehicleAmmoTab' ScrollExtent='72,24' Size='72,24' Style='/Buttons.WindowIconTab.style' Tooltip='@VehicleTabTooltip'>@VehicleTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@FavotiresTabTooltip]' Location='309,35' Name='FavoritesTab' ScrollExtent='85,24' Size='85,24' Style='/Buttons.WindowIconTab.style' Tooltip='@FavotiresTabTooltip'>@FavoritesTab</Checkbox>
<Page AbsorbsInput='false' Location='24,62' Name='OrderPage' PackSize='absolute,absolute' PackSizeProp='0053/0001,0094/0001' ScrollExtent='374,315' Size='374,315'>
<Page Name='ListPage' PackSize='absolute,absolute' PackSizeProp='0000/0001,0131/0001' ScrollExtent='374,184' Size='374,184'>
<Image BackgroundOpacity='1.000' Location='289,155' Name='Selection' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='57,29' Size='57,29' Style='S'/>
<Scrollbar Control='OrderTerminalListbox' Location='364,8' Name='ScrollOrderTerminalListbox' PackLocation='right,top' PackLocationProp='-010/0001,0008/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0008/0001' ScrollExtent='9,176' Size='9,176' Style='/ScrollBars.vertical.style'/>
<Listbox DataSource='OrderTerminalDataSource' Location='2,8' Name='OrderTerminalListbox' PackSize='absolute,absolute' PackSizeProp='0015/0001,0008/0001' RowTemplate='OrderTerminalTemplate' ScrollExtent='359,464' Size='359,176' Style='/Listboxes.Clear.style'/>
</Page>
<Rectangle Color='#385E61' Location='0,187' Name='InfoRect' PackLocation='left,bottom' PackLocationProp='0000/0001,-128/0001' PackSize='absolute,fixed' PackSizeProp='0001/0001,0002/0003' ScrollExtent='373,1' Size='373,1'/>
<Text Font='/Fonts.HudFont2' LocalText='[@ItemInfo]' Location='3,190' Name='ItemInfoText' PackLocation='left,bottom' PackLocationProp='0003/0001,-125/0001' PackSize='absolute,fixed' PackSizeProp='0014/0001,0002/0003' ScrollExtent='360,86' Size='360,86' TextAlignment='Center'>@ItemInfo</Text>
<Scrollbar Control='ItemInfoText' Location='364,190' Name='ItemInfoScrollbar' PackLocation='right,bottom' PackLocationProp='-010/0001,-125/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='9,86' Size='9,86' Style='/ScrollBars.vertical.style'/>
<Button LocalText='[@BuyItem]' LocalTooltip='[@BuyTooltip]' Location='4,287' Name='BuyButton' PackLocation='center,bottom' PackLocationProp='-183/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@BuyTooltip'>@BuyItem</Button>
<Button LocalText='[@SellItem]' LocalTooltip='[@SellTooltip]' Location='298,287' Name='SellButton' PackLocation='center,bottom' PackLocationProp='0111/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@SellTooltip'>@SellItem</Button>
<DataSource Name='OrderTerminalDataSource'>
<Data color='#FFFFFF' hasitem1='false' hasitem2='false' hasitem3='false' hasitem4='false' hasitem5='false' hasitem6='false' internationalize='STANDARD ASSAULT' isheading='true' isitem='false' issubitem='false' Name='standard'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='false' internationalize='Repeater' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.repeater' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='25' item1.x='290' item2.icon='/ItemIcons1GridHigh.9mmbullet' item2.w='25' item2.x='320' item3.icon='/ItemIcons1GridHigh.9mmbullet_ap' item3.w='25' item3.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='false' internationalize='Scatter' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.isp' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='25' item1.x='290' item2.icon='/ItemIcons1GridHigh.shotgun_shell' item2.w='25' item2.x='320' item3.icon='/ItemIcons1GridHigh.shotgun_shell_ap' item3.w='25' item3.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='false' internationalize='Suppressor' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.suppressor' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='51' item1.x='265' item2.icon='/ItemIcons1GridHigh.9mmbullet' item2.w='25' item2.x='320' item3.icon='/ItemIcons1GridHigh.9mmbullet_ap' item3.w='25' item3.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='false' hasitem2='false' hasitem3='false' hasitem4='false' hasitem5='false' hasitem6='false' internationalize='MEDIUM ASSAULT' isheading='true' isitem='false' issubitem='false' Name='medium'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='false' internationalize='Gauss' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.gauss' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='51' item1.x='265' item2.icon='/ItemIcons1GridHigh.9mmbullet' item2.w='25' item2.x='320' item3.icon='/ItemIcons1GridHigh.9mmbullet_ap' item3.w='25' item3.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='true' hasitem5='true' hasitem6='true' hasitem7='true' internationalize='Punisher' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.9mmbullet' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='25' item1.x='200' item2.icon='/ItemIcons1GridHigh.9mmbullet_ap' item2.w='25' item2.x='230' item3.icon='/ItemIcons1GridHigh.rocket' item3.w='25' item3.x='260' item4.icon='/ItemIcons1GridHigh.frag_cartridge' item4.w='25' item4.x='290' item5.icon='/ItemIcons1GridHigh.jammer_cartridge' item5.w='25' item5.x='320' item6.icon='/ItemIcons1GridHigh.plasma_cartridge' item6.w='25' item6.x='350' item7.icon='/ItemIcons1GridHigh.punisher' item7.w='75' item7.x='120' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='false' internationalize='Sweeper' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.lasher' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='239' item2.icon='/ItemIcons1GridHigh.shotgun_shell' item2.w='25' item2.x='320' item3.icon='/ItemIcons1GridHigh.shotgun_shell_ap' item3.w='25' item3.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='false' hasitem2='false' hasitem3='false' hasitem4='false' hasitem5='false' hasitem6='false' internationalize='HEAVY ASSAULT' isheading='true' isitem='false' issubitem='false' Name='heavy'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='false' internationalize='Jackhammer' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.r_shotgun' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='239' item2.icon='/ItemIcons1GridHigh.shotgun_shell' item2.w='25' item2.x='320' item3.icon='/ItemIcons1GridHigh.shotgun_shell_ap' item3.w='25' item3.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='false' hasitem2='false' hasitem3='false' hasitem4='false' hasitem5='false' hasitem6='false' internationalize='SNIPER' isheading='true' isitem='false' issubitem='false' Name='sniper'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='false' hasitem4='false' internationalize='Bolt Driver' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.bolt_driver' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='270' item2.icon='/ItemIcons1GridHigh.bolt' item2.w='25' item2.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='false' hasitem2='false' hasitem3='false' hasitem4='false' hasitem5='false' hasitem6='false' internationalize='SPECIAL ASSAULT' isheading='true' isitem='false' issubitem='false' Name='special'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='false' hasitem3='false' hasitem4='false' internationalize='Decimator' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.phoenix' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='300' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='false' hasitem4='false' internationalize='Rocklet' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.rocklet' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='270' item2.icon='/ItemIcons1GridHigh.rocket' item2.w='25' item2.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='true' internationalize='Thumper' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.thumper' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='210' item2.icon='/ItemIcons1GridHigh.frag_cartridge' item2.w='25' item2.x='290' item3.icon='/ItemIcons1GridHigh.jammer_cartridge' item3.w='25' item3.x='320' item4.icon='/ItemIcons1GridHigh.plasma_cartridge' item4.w='25' item4.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
</DataSource>
<Template Name='OrderTerminalTemplate' Size='359,29'>\<image color = \'$item1.color$\' location = \'$item1.x$,2\' name = \'Image1Icon\' opacity = \'$item1.opacity$\' scrollextent = \'$item1.w$,25\' size = \'$item1.w$,25\' style = \'$item1.icon\' visible = \'$HasItem1$\'/\>
\<image color = \'$item2.color$\' location = \'$item2.x$,2\' name = \'Image2Icon\' opacity = \'$item2.opacity$\' scrollextent = \'$item2.w$,25\' size = \'$item2.w$,25\' style = \'$item2.icon\' visible = \'$HasItem2$\'/\>
\<image color = \'$item3.color$\' location = \'$item3.x$,2\' name = \'Image3Icon\' opacity = \'$item3.opacity$\' scrollextent = \'$item3.w$,25\' size = \'$item3.w$,25\' style = \'$item3.icon\' visible = \'$HasItem3$\'/\>
\<image color = \'$item4.color$\' location = \'$item4.x$,2\' name = \'Image4Icon\' opacity = \'$item4.opacity$\' scrollextent = \'$item4.w$,25\' size = \'$item4.w$,25\' style = \'$item4.icon\' visible = \'$HasItem4$\'/\>
\<image color = \'$item5.color$\' location = \'$item5.x$,2\' name = \'Image5Icon\' opacity = \'$item5.opacity$\' scrollextent = \'$item5.w$,25\' size = \'$item5.w$,25\' style = \'$item5.icon\' visible = \'$HasItem5$\'/\>
\<image color = \'$item6.color$\' location = \'$item6.x$,2\' name = \'Image6Icon\' opacity = \'$item6.opacity$\' scrollextent = \'$item6.w$,25\' size = \'$item6.w$,25\' style = \'$item6.icon\' visible = \'$HasItem6$\'/\>
\<image color = \'$item7.color$\' location = \'$item7.x$,2\' name = \'Image7Icon\' opacity = \'$item7.opacity$\' scrollextent = \'$item7.w$,25\' size = \'$item7.w$,25\' style = \'$item7.icon\' visible = \'$HasItem7$\'/\>
\<text align = \'center\' color = \'$color\' font = \'/Fonts.HudFont2\' location = \'4,2\' scrollextent = \'420,25\' size = \'420,25\' textalignmentvertical = \'center\' visible = \'$IsItem$\'\>
$Internationalize$ 
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'40,2\' size = \'380,50\' verticalalign = \'center\' visible = \'$IsSubitem$\'\>
$Internationalize$ 
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'0,3\' maxlines = \'1\' size = \'340,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsHeading$\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'200,2\' size = \'150,50\' verticalalign = \'center\'\>
$Time$
\</text\>
\<Image backgroundopacity = \'1.000\' location = \'0,10\' name = \'UnderlineTemplate\' rstyledefault = \'/Listboxes.ListboxContentHeader.style\' scrollextent = \'359,8\' size = \'359,8\' visible = \'$IsHeading$\'/\></Template>
</Page>
<Page AbsorbsInput='false' Location='24,62' Name='FavoritesPage' PackSize='absolute,absolute' PackSizeProp='0053/0001,0094/0001' ScrollExtent='374,315' Size='374,315' Visible='false'>
<Template Name='OldTemplate' Size='360,20'>\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'4,2\' maxlines = \'1\' size = \'32,20\'\>
$slot$
\</text\>
\<Checkbox backgroundopacity = \'1.0\' checked = \'$isdefault$\' getsinput = \'false\' location = \'50,0\' scrollextent = \'15,20\' size = \'15,20\' style = \'/Buttons.DefaultCheckbox.style\'\>
\</Checkbox\>
\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'100,2\' maxlines = \'1\' size = \'250,20\'\>
$name$
\</text\></Template>
<Text Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@InventoryFavoriteName]' LocalTooltip='[@SelectServerNewsTextHeadingTooltip]' Location='45,-3' Name='Name' ScrollExtent='261,20' Size='261,20' TextAlignment='Center' Tooltip='@SelectServerNewsTextHeadingTooltip' TooltipStyle='/Tooltips.Default'>@InventoryFavoriteName</Text>
<Text Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@InventoryFavoriteDefault]' LocalTooltip='[@SelectServerNewsTextHeadingTooltip]' Location='20,-3' Name='Default' ScrollExtent='80,51' Size='80,20' TextAlignment='Center' Tooltip='@SelectServerNewsTextHeadingTooltip' TooltipStyle='/Tooltips.Default' Visible='false'>@InventoryFavoriteDefault</Text>
<Listbox DataSource='/DataSources.InventoryFavorites' Location='2,24' Name='FavoritesListbox' PackSize='absolute,absolute' PackSizeProp='0014/0001,0062/0001' RowTemplate='FavoritesTemplate' ScrollExtent='360,253' Size='360,253' Style='/Listboxes.Clear.style'/>
<Button LocalText='[@LoadFavorite]' LocalTooltip='[@LoadFavoriteTooltip]' Location='4,287' Name='LoadButton' PackLocation='center,bottom' PackLocationProp='-183/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@LoadFavoriteTooltip'>@LoadFavorite</Button>
<Button LocalText='[@SaveFavorite]' LocalTooltip='[@SaveFavoriteTooltip]' Location='151,287' Name='SaveButton' PackLocation='center,bottom' PackLocationProp='-036/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@SaveFavoriteTooltip'>@SaveFavorite</Button>
<Button LocalText='[@DeleteFavorite]' LocalTooltip='[@DeleteFavoriteTooltip]' Location='298,287' Name='DeleteButton' PackLocation='center,bottom' PackLocationProp='0111/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@DeleteFavoriteTooltip'>@DeleteFavorite</Button>
<Template Name='FavoritesTemplate' Size='360,20'>\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'4,2\' maxlines = \'1\' size = \'32,20\'\>
$slot$
\</text\>
\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'40,2\' maxlines = \'1\' size = \'260,20\'\>
$name$
\</text\>
\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'310,2\' maxlines = \'1\' size = \'150,20\'\>
$time$
\</text\></Template>
</Page>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='23,343' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0023/0001,-066/0001' PackSize='absolute,fixed' PackSizeProp='0048/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='379,31' Size='379,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='0,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='427,392' Size='427,392' Stretch='false'/>
</Page>
<Page Location='298,160' movable='true' Name='VehicleTerminal' PackLocation='Center,Center' PackLocationProp='-214/0001,-224/0001' popup='True' ScrollExtent='466,406' Size='466,406' Visible='false'>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='368,8' Name='CancelButton' PackLocation='right,top' PackLocationProp='-098/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='82,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-384/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button LocalText='[@BuyVehicle]' LocalTooltip='[@BuyVehicleTooltip]' Location='193,347' Name='BuyButton' PackLocation='center, bottom' PackLocationProp='-040/0001,xxxx/xxxx' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@BuyVehicleTooltip'>@BuyVehicle</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@VehicleTerminalTitle]' Location='101,5' Name='TitleText' ScrollExtent='265,20' Size='265,20' TextAlignment='Center' TextAlignmentVertical='Center'>@VehicleTerminalTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='53,-1' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='362,32' Size='362,32'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' GetsInput='false' Location='20,31' Name='VehicleListboxRect' Opacity='0.750' ScrollExtent='420,204' Size='420,204'/>
<Scrollbar Control='VehicleListbox' Location='429,34' Name='VehicleListboxScroll' ScrollExtent='9,198' Size='9,198' Style='/ScrollBars.vertical.style'/>
<Listbox DataSource='VehicleDataSource' Location='25,34' Name='VehicleListbox' RowTemplate='VehicleNameTemplate' ScrollExtent='400,810' Size='394,198' Style='/Listboxes.Clear.style'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' GetsInput='false' Location='20,238' Name='VehicleInfoRect' Opacity='0.750' ScrollExtent='420,100' Size='420,100'/>
<Scrollbar Control='VehicleInfoText' Location='429,241' Name='VehicleTextScroll' ScrollExtent='9,95' Size='9,95' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/SmallFont' LocalText='Blah, Blah, Blah' Location='25,241' Name='VehicleInfoText' ScrollExtent='402,94' Size='402,94'>Blah, Blah, Blah</Text>
<Template Name='VehicleNameTemplate' Size='400,54'>\<text color = \'$color\' font = \'/SmallFont\' location = \'4,2\' size = \'250,50\' textalignmentvertical = \'center\'\>
$Internationalize$
\</text\>
\<text color = \'$timecolor\' font = \'/SmallFont\' location = \'150,2\' size = \'150,50\' textalignmentvertical = \'center\'\>
$Time$
\</text\>
\<image location = \'$item.x$,2\' name = \'Image\' opacity = \'$item.opacity$\' scrollextent = \'$item.w$,50\' size = \'$item.w$,50\' style = \'$item.icon\' visible = \'$HasIcon$\'/\></Template>
<DataSource Name='VehicleDataSource'>
<Data color='0xffffff' hasicon='true' internationalize='@ams' item.icon='/ItemIcons1GridHigh.punisher' item.opacity='0.5' item.w='100' item.x='275' Localinternationalize='[@ams]' Name='AMS' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' hasicon='true' internationalize='@ant' item.icon='/ItemIcons1GridHigh.punisher' item.opacity='0.5' item.w='100' item.x='275' Localinternationalize='[@ant]' Name='ANT' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@apc' item.icon='/ItemIcons1GridHigh.thumper' item.w='100' item.x='250' Localinternationalize='[@apc]' Name='APC' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@dropship' Localinternationalize='[@dropship]' Name='Dropship' price='1000' time='12:00' timecolor='#ff0000'/>
<Data color='0xffffff' internationalize='@lightgunship' Localinternationalize='[@lightgunship]' Name='Lightgunship' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@lightning' Localinternationalize='[@lightning]' Name='Lightning' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@magrider' Localinternationalize='[@magrider]' Name='Magrider' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@mosquito' Localinternationalize='[@mosquito]' Name='Mosquito' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@prowler' Localinternationalize='[@prowler]' Name='Prowler' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@quadassault' Localinternationalize='[@quadassault]' Name='Quadassault' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@threemanheavybuggy' Localinternationalize='[@threemanheavybuggy]' Name='ThreeManHeavyBuggy' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@two_man_assault_buggy' Localinternationalize='[@two_man_assault_buggy]' Name='Two_Man_Assault_Buggy' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@twomanheavybuggy' Localinternationalize='[@twomanheavybuggy]' Name='TwoManHeavyBuggy' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@twomanhoverbuggy' Localinternationalize='[@twomanhoverbuggy]' Name='TwoManHoverBuggy' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@vanguard' Localinternationalize='[@vanguard]' Name='Vanguard' price='1000' timecolor='#FF0000'/>
</DataSource>
<Namespace Name='Styles'>
<RectangleStyle Center='normal' Name='RNormal'/>
<RectangleStyle Center='pressed' Name='RPressed'/>
<RectangleStyle Center='rollover' Name='RRollover'/>
<ButtonStyle MouseOverSound='interface_feedback_rollover.wav' Name='Default' RStyleActivated='RPressed' RStyleDefault='RNormal' RStyleMouseOver='RRollover'/>
<ImageStyle Name='normal'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,191,132,220'/>
</ImageStyle>
<ImageStyle Name='pressed'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,249,132,278'/>
</ImageStyle>
<ImageStyle Name='rollover'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,220,132,249'/>
</ImageStyle>
</Namespace>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='20,342' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='420,31' Size='420,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-1,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='466,389' Size='466,389' Stretch='false'/>
</Page>
<Page HideSound='interface_pane_close2.wav' Location='210,154' movable='true' Name='ImplantTerminal' ScrollExtent='623,416' ShowSound='interface_pane_open.wav' Size='623,416' Visible='false'>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='447,7' Name='CancelButton' PackLocation='right,top' PackLocationProp='-176/0001,0007/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='160,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-463/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@ImplantTerminalTitle]' Location='182,5' Name='TitleText' ScrollExtent='264,20' Size='264,20' TextAlignment='Center' TextAlignmentVertical='Center'>@ImplantTerminalTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='132,-1' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='365,32' Size='365,32'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@ImplantUnacquiredTitle]' Location='29,66' Name='UnacquiredTitle' ScrollExtent='279,20' Size='279,20' TextAlignment='Center'>@ImplantUnacquiredTitle</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='28,63' Name='AvailableTitleRect' Opacity='0.750' ScrollExtent='281,25' Size='281,25'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' GetsInput='false' Location='28,87' Name='UnacquiredRect' Opacity='0.750' ScrollExtent='281,254' Size='281,254'/>
<Listbox DataSource='UnacquiredDataSource' Location='32,91' Name='UnacquiredListbox' RowTemplate='ListboxTemplate' ScrollExtent='260,245' Size='260,245' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='UnacquiredListbox' Location='296,90' Name='ScrollUnacquired' ScrollExtent='9,248' Size='9,248' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@ImplantDescriptionPane]' Location='315,66' Name='ItemInfoTitle' ScrollExtent='275,20' Size='275,20' TextAlignment='Center'>@ImplantDescriptionPane</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='313,62' Name='InfoTitleRect' Opacity='0.750' ScrollExtent='280,25' Size='280,25'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='313,86' Name='ItemInfoRect' Opacity='0.750' ScrollExtent='280,144' Size='280,144'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@ItemInfo]' Location='316,89' Name='ItemInfoText' ScrollExtent='260,138' Size='260,138'>@ItemInfo</Text>
<Scrollbar Control='ItemInfoText' Location='580,88' Name='ScrollItemInfo' ScrollExtent='9,139' Size='9,139' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@ImplantAcquiredTitle]' Location='314,238' Name='AcquiredTitle' ScrollExtent='276,20' Size='276,20' TextAlignment='Center'>@ImplantAcquiredTitle</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='313,236' Name='AcquiredTitleRect' Opacity='0.750' ScrollExtent='280,25' Size='280,25'/>
<Rectangle AbsorbsInput='false' BackgroundOpacity='1.000' Color='#00F2C9' Location='313,260' Name='AcquiredRect' Opacity='0.750' ScrollExtent='280,82' Size='280,82'/>
<Listbox DataSource='AcquiredDataSource' Location='316,263' Name='AcquiredListbox' RowTemplate='ListboxTemplate' ScrollExtent='260,77' Size='260,77' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='AcquiredListbox' Location='580,263' Name='ScrollAcquired' ScrollExtent='9,77' Size='9,77' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@ImplantAvailableCredits]' Location='174,37' Name='AvailableCurrency' ScrollExtent='274,20' Size='274,20' TextAlignment='Center'>@ImplantAvailableCredits</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='171,34' Name='AvailableRect' Opacity='0.750' ScrollExtent='279,25' Size='279,25'/>
<Button LocalText='[@BuyImplant]' LocalTooltip='[@BuyImplantTooltip]' Location='26,355' Name='BuyButton' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@BuyImplantTooltip' TooltipStyle=' '>@BuyImplant</Button>
<Button LocalText='[@SellImplant]' LocalTooltip='[@SellImplantTooltip]' Location='518,355' Name='SellButton' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@SellImplantTooltip'>@SellImplant</Button>
<DataSource Name='UnacquiredDataSource'>
<Data color='#FFFFFF' internationalize='WEAPONS' isheading='true' isnotheading='false' Name='Dummy1' price='10000'/>
<Data color='#FFFFFF' internationalize='Blah Blah Blah' isheading='false' isnotheading='true' Name='Dummy2' price='5000'/>
</DataSource>
<DataSource Name='AcquiredDataSource'>
<Data color='#FFFFFF' internationalize='WEAPONS' isheading='true' isnotheading='false' Name='Dummy1' price='-10000'/>
<Data color='#FFFFFF' internationalize='Blah Blah Blah' isheading='false' isnotheading='true' Name='Dummy2' price='-5000'/>
</DataSource>
<Template Name='ListboxTemplate' Size='260,20'>\<text color = \'$color\' font = \'/Fonts.HudFont2\' location = \'5,0\' maxlines = \'1\' size = \'255,20\' visible = \'$IsNotHeading$\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'-18,2\' maxlines = \'1\' size = \'260,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsHeading$\'\>
$Internationalize$
\</text\>
\<Image backgroundopacity = \'1.000\' location = \'0,10\' name = \'UnderlineTemplate\' rstyledefault = \'/Listboxes.ListboxContentHeader.style\' scrollextent = \'260,8\' size = \'260,8\' visible = \'$IsHeading$\'/\></Template>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='21,349' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='578,31' Size='578,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='0,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0018/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='623,398' Size='623,398' Stretch='false'/>
</Page>
<Page HideSound='interface_pane_close2.wav' Location='210,154' movable='true' Name='CertificationTerminal' ScrollExtent='623,416' ShowSound='interface_pane_open.wav' Size='623,416' Visible='false'>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='449,7' Name='CancelButton' PackLocation='right,top' PackLocationProp='-174/0001,0007/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='161,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-462/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@CertificationTerminalTitle]' Location='182,5' Name='TitleText' ScrollExtent='264,20' Size='264,20' TextAlignment='Center' TextAlignmentVertical='Center'>@CertificationTerminalTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='132,-1' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='365,32' Size='365,32'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@CertificationUnacquiredTitle]' Location='29,66' Name='UnacquiredTitle' ScrollExtent='279,20' Size='279,20' TextAlignment='Center'>@CertificationUnacquiredTitle</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='28,63' Name='AvailableTitleRect' Opacity='0.750' ScrollExtent='281,25' Size='281,25'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' GetsInput='false' Location='28,87' Name='UnacquiredRect' Opacity='0.750' ScrollExtent='281,254' Size='281,254'/>
<Listbox DataSource='UnacquiredDataSource' Location='32,91' Name='UnacquiredListbox' RowTemplate='ListboxTemplate' ScrollExtent='260,245' Size='260,245' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='UnacquiredListbox' Location='296,90' Name='ScrollUnacquired' ScrollExtent='9,248' Size='9,248' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@CertificationDescriptionPane]' Location='315,66' Name='ItemInfoTitle' ScrollExtent='275,20' Size='275,20' TextAlignment='Center'>@CertificationDescriptionPane</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='313,62' Name='InfoTitleRect' Opacity='0.750' ScrollExtent='280,25' Size='280,25'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='313,86' Name='ItemInfoRect' Opacity='0.750' ScrollExtent='280,136' Size='280,136'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@ItemInfo]' Location='316,89' Name='ItemInfoText' ScrollExtent='260,130' Size='260,130'>@ItemInfo</Text>
<Scrollbar Control='ItemInfoText' Location='580,88' Name='ScrollItemInfo' ScrollExtent='9,131' Size='9,131' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@CertificationAcquiredTitle]' Location='313,230' Name='AcquiredTitle' ScrollExtent='276,20' Size='276,20' TextAlignment='Center'>@CertificationAcquiredTitle</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='312,228' Name='AcquiredTitleRect' Opacity='0.750' ScrollExtent='280,25' Size='280,25'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='312,252' Name='AcquiredRect' Opacity='0.750' ScrollExtent='280,90' Size='280,90'/>
<Listbox DataSource='AcquiredDataSource' Location='315,255' Name='AcquiredListbox' RowTemplate='ListboxTemplate' ScrollExtent='260,85' Size='260,85' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='AcquiredListbox' Location='579,255' Name='ScrollAcquired' ScrollExtent='9,85' Size='9,85' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@CertificationAvailableCredits]' Location='176,38' Name='AvailableCurrency' ScrollExtent='274,20' Size='274,20' TextAlignment='Center'>@CertificationAvailableCredits</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='173,35' Name='AvailableRect' Opacity='0.750' ScrollExtent='279,25' Size='279,25'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CertificationBeingNeutralized]' Location='112,355' MaxLines='1' Name='UnlearnTime' ScrollExtent='397,18' Size='397,18' TextAlignment='Center' TruncateElipsis='false' Visible='false'>@CertificationBeingNeutralized</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='108,354' Name='UnlearnRect' Opacity='0.750' ScrollExtent='404,20' Size='404,20' Visible='false'/>
<Button LocalText='[@CertLearn]' LocalTooltip='[@CertLearnTooltip]' Location='27,354' Name='BuyButton' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@CertLearnTooltip'>@CertLearn</Button>
<Button LocalText='[@CertForget]' LocalTooltip='[@CertForgetTooltip]' Location='519,354' Name='SellButton' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@CertForgetTooltip'>@CertForget</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='21,349' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='578,31' Size='578,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='0,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0018/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='623,398' Size='623,398' Stretch='false'/>
<DataSource Name='UnacquiredDataSource'>
<Data color='#FFFFFF' internationalize='WEAPONS' isheading='true' isnotheading='false' Name='Dummy1' price='10000'/>
<Data color='#FFFFFF' internationalize='Blah Blah Blah' isheading='false' isnotheading='true' Name='Dummy2' price='5000'/>
</DataSource>
<DataSource Name='AcquiredDataSource'>
<Data color='#FFFFFF' internationalize='WEAPONS' isheading='true' isnotheading='false' Name='Dummy1' price='-10000'/>
<Data color='#FFFFFF' internationalize='Blah Blah Blah' isheading='false' isnotheading='true' Name='Dummy2' price='-5000'/>
</DataSource>
<Template Name='ListboxTemplate' Size='260,20'>\<text color = \'$color\' font = \'/Fonts.HudFont2\' location = \'5,0\' maxlines = \'1\' size = \'200,20\' visible = \'$IsNotHeading$\'\>
$Internationalize$
\</text\>
\<text color = \'$color\' font = \'/Fonts.HudFont2\' location = \'205,0\' size = \'50,20\' textalignment = \'center\' visible = \'$IsNotHeading$\'\>
$Price$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'-18,2\' maxlines = \'1\' size = \'260,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsHeading$\'\>
$Internationalize$
\</text\>
\<Image backgroundopacity = \'1.000\' location = \'0,10\' name = \'UnderlineTemplate\' rstyledefault = \'/Listboxes.ListboxContentHeader.style\' scrollextent = \'260,8\' size = \'260,8\' visible = \'$IsHeading$\'/\></Template>
</Page>
<Page Location='292,130' minsize='404,344' movable='true' Name='CharacterPane' resizable='false' ScrollExtent='442,386' Size='442,386' Visible='false'>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='16,335' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='409,31' Size='409,31'/>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@CharacterTitle]' Location='101,13' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0013/0001' PackSize='absolute,fixed' PackSizeProp='0208/0001,0002/0003' ScrollExtent='234,20' Size='234,20' TextAlignment='Center' TextAlignmentVertical='Center'>@CharacterTitle</Text>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CharacterInfoTabTooltip]' Location='19,46' Name='SoldierTab' ScrollExtent='72,24' Size='72,24' Style='/Buttons.WindowIconTab.style' Tooltip='@CharacterInfoTabTooltip'>@CharacterInfoTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@PlayerEventTooltip]' Location='100,46' Name='EventTab' ScrollExtent='72,24' Size='72,24' Style='/Buttons.WindowIconTab.style' Tooltip='@PlayerEventTooltip'>@CharacterEventsTab</Checkbox>
<Page Location='18,70' Name='SoldierPage' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='406,296' Size='406,296'>
<Page Location='206,-45' Name='CertificationPage' PackLocation='left,top' PackLocationProp='0206/0001,-045/0001' PackSize='absolute,Absolute' PackSizeProp='0206/0001,-048/0001' ScrollExtent='200,344' Size='200,344'>
<Rectangle Color='#385E61' GetsInput='false' Location='0,46' Name='BorderRect' PackSize='1,Absolute' PackSizeProp='0002/0003,0079/0001' ScrollExtent='200,265' Size='200,265'/>
<Listbox DataSource='CertificationsDataSource' Location='2,48' Name='CertificationsListbox' PackLocation='left,top' PackLocationProp='0002/0001,0048/0001' PackSize='absolute,absolute' PackSizeProp='0015/0001,0085/0001' RowTemplate='ListboxTemplate' ScrollExtent='185,259' Size='185,259' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='CertificationsListbox' Location='187,46' Name='ScrollCertifications' PackLocation='right,top' PackLocationProp='-013/0001,0046/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0083/0001' ScrollExtent='9,261' Size='9,261' Style='/ScrollBars.vertical.style'/>
<Template Name='ListboxTemplate' Size='182,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'$width$,18\' visible = \'$IsNotHeading$\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'-18,2\' maxlines = \'1\' size = \'$width$,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsHeading$\'\>
$Internationalize$
\</text\>
\<Image backgroundopacity = \'1.000\' location = \'0,10\' name = \'UnderlineTemplate\' rstyledefault = \'/Listboxes.ListboxContentHeader.style\' scrollextent = \'$width$,8\' size = \'$width$,8\' visible = \'$IsHeading$\'/\></Template>
<DataSource Name='CertificationsDataSource'>
<Data color='#FFFFFF' internationalize='WEAPONS' isheading='true' isnotheading='false' Name='Dummy1' width='182'/>
<Data color='#FFFFFF' internationalize='Happy go lucky' isheading='false' isnotheading='true' Name='Dummy2' width='182'/>
<Data color='#FFFFFF' internationalize='ARMOR' isheading='true' isnotheading='false' Name='Dummy3' width='182'/>
</DataSource>
</Page>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterSoldierName]' Location='0,4' MaxLines='1' Name='CharacterNameTitle' PackLocation='left,top' PackLocationProp='0000/0001,0004/0001' PackSize='absolute,fixed' PackSizeProp='0320/0001,0002/0003' ScrollExtent='86,28' Size='86,14'>@CharacterSoldierName</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='Character Name' Location='86,4' MaxLines='1' Name='CharacterName' PackLocation='left,top' PackLocationProp='0086/0001,0004/0001' PackSize='absolute,fixed' PackSizeProp='0289/0001,0002/0003' ScrollExtent='117,14' Size='117,14' TextAlignment='Right' TruncateElipsis='false'>Character Name</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterBattleRank]' Location='0,65' MaxLines='1' Name='BattleRankTitle' ScrollExtent='173,14' Size='173,14'>@CharacterBattleRank</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='88' Location='177,65' MaxLines='1' Name='BattleRank' ScrollExtent='20,14' Size='20,14' TextAlignment='Right' TruncateElipsis='false'>88</Text>
<Progressbar BarBackgroundColor='#43ABAE' Location='0,84' Name='BattleProgressLarge' Progress='0.400' ScrollExtent='200,10' Size='200,10' Style='/ProgressBars.CharacterExperienceStep.style'/>
<Progressbar BarBackgroundColor='#43ABAE' Location='0,97' Name='BattleProgressSmall' Progress='0.750' ScrollExtent='200,6' Size='200,6' Style='/ProgressBars.CharacterExperienceContinuous.style'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterCommandRank]' Location='0,110' MaxLines='1' Name='CommandRankTitle' ScrollExtent='173,14' Size='173,14'>@CharacterCommandRank</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='88' Location='177,110' MaxLines='1' Name='CommandRank' ScrollExtent='20,14' Size='20,14' TextAlignment='Right' TruncateElipsis='false'>88</Text>
<Progressbar BarBackgroundColor='#4284B8' Location='0,129' Name='CommandProgressLarge' Progress='0.400' ScrollExtent='200,10' Size='200,10' Style='/ProgressBars.CharacterExperienceStep.style'/>
<Progressbar BarBackgroundColor='#4284B8' Location='0,142' Name='CommandProgressSmall' Progress='0.750' ScrollExtent='200,6' Size='200,6' Style='/ProgressBars.CharacterExperienceContinuous.style'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterCertificationPoints]' Location='0,160' MaxLines='1' Name='CertificationPointsTitle' ScrollExtent='173,28' Size='173,14'>@CharacterCertificationPoints</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='88' Location='177,160' MaxLines='1' Name='CertificationPoints' ScrollExtent='20,14' Size='20,14' TextAlignment='Right' TruncateElipsis='false'>88</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterGriefPoints]' Location='0,180' MaxLines='1' Name='GriefPointsTitle' ScrollExtent='158,14' Size='158,14'>@CharacterGriefPoints</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='8888' Location='161,180' MaxLines='1' Name='GriefPoints' ScrollExtent='36,14' Size='36,14' TextAlignment='Right' TruncateElipsis='false'>8888</Text>
<Rectangle Location='25,209' Name='Implant1Rect' ScrollExtent='34,34' Size='34,34'/>
<Grid CellCount='1,1' CellSize='32,32' DataSource='Implant1Datasource' DragAccepts='Item,Shortcut' Location='26,210' Name='Implant1' ScrollExtent='32,32' Size='32,32' Style='/DefaultGrid.style'/>
<Progressbar Location='25,244' Name='Implant1Progress' Progress='0.400' ScrollExtent='23,10' Size='23,10' Style='/ProgressBars.CharacterImplant.style'/>
<Checkbox BackgroundOpacity='1.000' Location='49,244' Name='Implant1Check' ScrollExtent='10,10' Size='10,10' Style='/Buttons.CharacterImplantToggle.style'></Checkbox>
<Rectangle Location='83,209' Name='Implant2Rect' ScrollExtent='34,34' Size='34,34'/>
<Grid CellCount='1,1' CellSize='32,32' DataSource='Implant2Datasource' DragAccepts='Item,Shortcut' Location='84,210' Name='Implant2' ScrollExtent='32,32' Size='32,32' Style='/DefaultGrid.style'/>
<Progressbar Location='83,244' Name='Implant2Progress' Progress='1.000' ScrollExtent='23,10' Size='23,10' Style='/ProgressBars.CharacterImplant.style'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='107,244' Name='Implant2Check' ScrollExtent='10,10' Size='10,10' Style='/Buttons.CharacterImplantToggle.style'></Checkbox>
<Rectangle Location='141,209' Name='Implant3Rect' ScrollExtent='34,34' Size='34,34'/>
<Grid CellCount='1,1' CellSize='32,32' DataSource='Implant3Datasource' DragAccepts='Item,Shortcut' Location='142,210' Name='Implant3' ScrollExtent='32,32' Size='32,32' Style='/DefaultGrid.style'/>
<Progressbar Location='141,244' Name='Implant3Progress' ScrollExtent='23,10' Size='23,10' Style='/ProgressBars.CharacterImplant.style'/>
<Checkbox BackgroundOpacity='1.000' Enabled='false' Location='165,244' Name='Implant3Check' ScrollExtent='10,10' Size='10,10' Style='/Buttons.CharacterImplantToggle.style'></Checkbox>
<Button LocalText='[@CharacterStats]' LocalTooltip='[@CharacterStatsTooltip]' Location='165,270' Name='StatsButton' PackLocation='center, bottom' PackLocationProp='-038/0001,xxxx/xxxx' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@CharacterStatsTooltip'>@CharacterStats</Button>
<DataSource Name='Implant1Datasource'>
<Data e='1,1' guid='1' l='0,0' Name='surge' opacity='1.0' t='/Icons.shortcut' tooltip='Surge'/>
</DataSource>
<DataSource Name='Implant2Datasource'>
<Data e='1,1' guid='2' imagecolor='#008800' l='0,0' Name='personal_shield' opacity='1.0' t='/Icons.shortcut' tooltip='Personal Shield'/>
</DataSource>
<DataSource Name='Implant3Datasource'>
<Data e='1,1' guid='3' l='0,0' Name='advanced_targeting' opacity='1.0' t='/Icons.shortcut' tooltip='Advanced Targeting'/>
</DataSource>
</Page>
<Page Location='18,70' Name='EventPage' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0036/0001,0091/0001' ScrollExtent='406,295' Size='406,295' Visible='false'>
<Rectangle Color='#385E61' Location='2,2' Name='EventListRect' PackLocation='left,top' PackLocationProp='0002/0001,0002/0001' PackSize='absolute,absolute' PackSizeProp='0006/0001,0029/0001' ScrollExtent='400,266' Size='400,266'/>
<Listbox DataSource='EventList' Location='4,4' Name='EventListbox' PackLocation='left,top' PackLocationProp='0004/0001,0004/0001' PackSize='absolute,absolute' PackSizeProp='0022/0001,0033/0001' RowTemplate='ListboxTemplate' ScrollExtent='384,262' Size='384,262' Style='/Listboxes.Generic.style'/>
<Scrollbar Control='EventListbox' Location='391,2' Name='ScrollEventList' PackLocation='right,top' PackLocationProp='-015/0001,0002/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0031/0001' ScrollExtent='9,264' Size='9,264' Style='/ScrollBars.vertical.style'/>
<Checkbox BackgroundOpacity='1.000' Location='229,272' Name='CompletedOn' PackLocation='center,bottom' PackLocationProp='0026/0001,-023/0001' ScrollExtent='71,22' Size='71,22' Style='/Buttons.LargeRadiobox.style'>@CHKON</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='313,271' Name='CompletedOff' PackLocation='center,bottom' PackLocationProp='0110/0001,-024/0001' ScrollExtent='88,22' Size='88,22' Style='/Buttons.LargeRadiobox.style'>@CHKOFF</Checkbox>
<Template Name='ListboxTemplate' Size='384,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'25,2\' maxlines = \'1\' size = \'$width$,18\' visible = \'$IsNotHeading$\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'-18,2\' maxlines = \'1\' size = \'$width$,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsHeading$\'\>
$Internationalize$
\</text\>
\<Image backgroundopacity = \'1.000\' location = \'0,10\' name = \'UnderlineTemplate\' rstyledefault = \'/Listboxes.ListboxContentHeader.style\' scrollextent = \'$width$,8\' size = \'$width$,8\' visible = \'$IsHeading$\'/\>
\<Checkbox backgroundopacity = \'1.000\' checked = \'$ischecked$\' getsinput = \'false\' location = \'5,-2\' scrollextent = \'15,17\' size = \'15,17\' style = \'/Buttons.DefaultCheckbox.style\' visible = \'$IsNotHeading$\'\>
\</Checkbox\></Template>
<DataSource Name='EventList'>
<Data color='#FFFFFF' internationalize='FIRST TIME EVENT LIST' isheading='true' isnotheading='false' Name='EventListHeading' width='384'/>
<Data color='#FFFFFF' internationalize='Jimmy the Greek' isheading='false' isnotheading='true' Name='Event1' width='384'/>
</DataSource>
</Page>
<Button LocalText='[@Cancel]' Location='81,14' Name='HelpButton' PackLocation='left,top' PackLocationProp='0081/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='340,14' Name='CloseButton' PackLocation='right,top' PackLocationProp='-102/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='51,6' Name='Title' PackLocation='left,top' PackLocationProp='0051/0001,0006/0001' PackSize='absolute,fixed' PackSizeProp='0104/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='338,32' Size='338,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,20' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0021/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='442,365' Size='442,365' Stretch='false'/>
</Page>
<Page Location='112,130' minsize='404,344' movable='true' Name='StatisticsPane' PackLocation='center,center' PackLocationProp='-400/0001,-254/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' resizable='false' ScrollExtent='800,376' Size='800,376' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@StatisticsTitle]' Location='101,13' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0013/0001' PackSize='absolute,fixed' PackSizeProp='0208/0001,0002/0003' ScrollExtent='592,20' Size='592,20' TextAlignment='Center' TextAlignmentVertical='Center'>@StatisticsTitle</Text>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@StatsKillTabTooltip]' Location='19,46' Name='KillTab' ScrollExtent='72,24' Size='72,24' Style='/Buttons.WindowIconTab.style' Tooltip='@StatsKillTabTooltip'>@StatsKillTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@StatsFacilityTabTooltip]' Location='100,46' Name='FacilityTab' ScrollExtent='72,24' Size='72,24' Style='/Buttons.WindowIconTab.style' Tooltip='@StatsFacilityTabTooltip'>@StatsFacilityTab</Checkbox>
<Page Location='18,70' Name='KillStats' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,Absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='764,286' Size='764,286'>
<Rectangle Color='#385E61' GetsInput='false' Name='BorderRect' PackSize='1,Absolute' PackSizeProp='0002/0003,-001/0001' ScrollExtent='764,287' Size='764,287'/>
<Rectangle Color='#385E61' GetsInput='false' Location='4,45' Name='DividerRect0' PackSize='absolute,fixed' PackSizeProp='0008/0001,0002/0003' ScrollExtent='756,1' Size='756,1'/>
<Text Font='/Fonts.HudFont2' LocalText='[@KillItemTitle]' Location='4,5' MaxLines='2' Name='ItemTitle' ScrollExtent='223,34' Size='223,34' TextAlignment='Center' TextAlignmentVertical='Bottom'>@KillItemTitle</Text>
<Rectangle Color='#385E61' GetsInput='false' Location='228,50' Name='DividerRect1' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,235' Size='1,235'/>
<Image Location='282,10' Name='Empire2Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_NC'/>
<Rectangle Color='#385E61' GetsInput='false' Location='358,50' Name='DividerRect2' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,235' Size='1,235'/>
<Image Location='412,10' Name='Empire1Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_TR'/>
<Rectangle Color='#385E61' GetsInput='false' Location='488,50' Name='DividerRect3' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,235' Size='1,235'/>
<Text Font='/Fonts.HudFont2' LocalText='[@TotalKillsTitle]' Location='492,5' MaxLines='2' Name='TotalKillsTitle' ScrollExtent='123,34' Size='123,34' TextAlignment='Center' TextAlignmentVertical='Bottom'>@TotalKillsTitle</Text>
<Rectangle Color='#385E61' GetsInput='false' Location='618,50' Name='DividerRect4' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,235' Size='1,235'/>
<Image Location='672,10' Name='Empire0Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_VS'/>
<Listbox DataSource='/DataSources.KillStatistics' Location='2,48' Name='KillStatsListbox' PackLocation='left,top' PackLocationProp='0002/0001,0048/0001' PackSize='absolute,absolute' PackSizeProp='0015/0001,0049/0001' RowTemplate='ListboxTemplate' ScrollExtent='749,237' Size='749,237' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='KillStatsListbox' Location='751,48' Name='ScrollKillStats' PackLocation='right,top' PackLocationProp='-013/0001,0048/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0049/0001' ScrollExtent='9,237' Size='9,237' Style='/ScrollBars.vertical.style'/>
<Template Name='ListboxTemplate' Size='749,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'220,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'240,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire2old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'295,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire2new$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'370,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire1old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'425,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire1new$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'500,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$totalold$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'555,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$totalnew$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'630,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire0old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'685,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire0new$
\</text\></Template>
</Page>
<Page Location='18,70' Name='FacilityStats' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,Absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='764,286' Size='764,286' Visible='false'>
<Rectangle Color='#385E61' GetsInput='false' Name='BorderRect' PackSize='1,Absolute' PackSizeProp='0002/0003,-001/0001' ScrollExtent='764,287' Size='764,287'/>
<Rectangle Color='#385E61' GetsInput='false' Location='4,45' Name='DividerRect0' PackSize='absolute,fixed' PackSizeProp='0008/0001,0002/0003' ScrollExtent='756,1' Size='756,1'/>
<Text Font='/Fonts.HudFont2' LocalText='[@FacilityItemTitle]' Location='4,5' MaxLines='2' Name='ItemTitle' ScrollExtent='354,34' Size='354,34' TextAlignment='Center' TextAlignmentVertical='Bottom'>@FacilityItemTitle</Text>
<Rectangle Color='#385E61' GetsInput='false' Location='358,50' Name='DividerRect1' PackSize='fixed,absolute' PackSizeProp='0002/0003,0052/0001' ScrollExtent='1,234' Size='1,234'/>
<Image Location='412,10' Name='Empire2Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_NC'/>
<Rectangle Color='#385E61' GetsInput='false' Location='488,50' Name='DividerRect2' PackSize='fixed,absolute' PackSizeProp='0002/0003,0052/0001' ScrollExtent='1,234' Size='1,234'/>
<Image Location='539,10' Name='Empire1Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_TR'/>
<Rectangle Color='#385E61' GetsInput='false' Location='618,50' Name='DividerRect3' PackSize='fixed,absolute' PackSizeProp='0002/0003,0052/0001' ScrollExtent='1,234' Size='1,234'/>
<Text Font='/Fonts.HudFont2' LocalText='[@TotalFacilitiesTitle]' Location='625,5' MaxLines='2' Name='TotalKillsTitle' ScrollExtent='123,34' Size='123,34' TextAlignment='Center' TextAlignmentVertical='Bottom'>@TotalFacilitiesTitle</Text>
<Listbox DataSource='/DataSources.FacilityStatistics' Location='2,48' Name='FacilityStatsListbox' PackLocation='left,top' PackLocationProp='0002/0001,0048/0001' PackSize='absolute,absolute' PackSizeProp='0015/0001,0050/0001' RowTemplate='ListboxTemplate' ScrollExtent='749,236' Size='749,236' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='FacilityStatsListbox' Location='751,48' Name='ScrollFacilityStats' PackLocation='right,top' PackLocationProp='-013/0001,0048/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0050/0001' ScrollExtent='9,236' Size='9,236' Style='/ScrollBars.vertical.style'/>
<Template Name='ListboxTemplate' Size='749,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'350,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'370,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire2old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'425,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire2new$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'500,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire1old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'555,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire1new$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'630,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$totalold$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'685,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$totalnew$
\</text\></Template>
</Page>
<Button LocalText='[@Cancel]' Location='81,14' Name='HelpButton' PackLocation='left,top' PackLocationProp='0081/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='698,14' Name='CloseButton' PackLocation='right,top' PackLocationProp='-102/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Location='51,6' Name='Title' PackLocation='left,top' PackLocationProp='0051/0001,0006/0001' PackSize='absolute,fixed' PackSizeProp='0104/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='696,32' Size='696,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Location='0,20' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0021/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='800,355' Size='800,355' Stretch='false'/>
</Page>
<Page Location='209,160' minsize='400,344' movable='true' Name='OutfitPane' PackLocation='center,center' PackLocationProp='-303/0001,-224/0001' resizable='true' ScrollExtent='607,428' Size='607,428' Visible='false'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@OutfitPane]' Location='101,14' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0014/0001' PackSize='absolute,fixed' PackSizeProp='0204/0001,0002/0003' ScrollExtent='403,17' Size='403,17' TextAlignment='Center'>@OutfitPane</Text>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='507,14' Name='CloseButton' PackLocation='right,top' PackLocationProp='-100/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='78,14' Name='HelpButton' PackLocation='left,top' PackLocationProp='0078/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Rectangle Color='#385E61' GetsInput='false' Location='18,43' Name='OutfitNameBorder' PackSize='absolute,fixed' PackSizeProp='0151/0001,0002/0003' ScrollExtent='456,17' Size='456,17'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='Squad Name' Location='18,43' MaxLines='1' Name='OutfitName' PackLocation='left,top' PackLocationProp='0018/0001,0043/0001' PackSize='absolute,fixed' PackSizeProp='0151/0001,0002/0003' ScrollExtent='456,17' Size='456,17' TextAlignment='Center'>Squad Name</Text>
<Rectangle Color='#385E61' GetsInput='false' Location='478,43' Name='FormationDateBorder' PackLocation='right,top' PackLocationProp='-129/0001,0043/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='111,17' Size='111,17'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='12/25/02' Location='478,43' MaxLines='1' Name='FormationDate' PackLocation='right,top' PackLocationProp='-129/0001,0043/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='111,17' Size='111,17' TextAlignment='Center' TruncateElipsis='false'>12/25/02</Text>
<Rectangle Color='#385E61' GetsInput='false' Location='18,65' Name='OutfitPointsBorder' PackSize='absolute,fixed' PackSizeProp='0037/0001,0002/0003' ScrollExtent='570,17' Size='570,17'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@TotalOutfitPoints]' Location='18,65' MaxLines='1' Name='OutfitPoints' PackLocation='left,top' PackLocationProp='0018/0001,0065/0001' PackSize='absolute,fixed' PackSizeProp='0037/0001,0002/0003' ScrollExtent='570,17' Size='570,17' TextAlignment='Center'>@TotalOutfitPoints</Text>
<Rectangle Color='#385E61' GetsInput='false' Location='18,87' Name='MessageBorder' PackSize='absolute,fixed' PackSizeProp='0037/0001,0002/0003' ScrollExtent='570,51' Size='570,51'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='Message of the Day goes here...' Location='18,87' MaxLines='255' Name='MessageOfTheDay' PackLocation='left,top' PackLocationProp='0018/0001,0087/0001' PackSize='absolute,fixed' PackSizeProp='0037/0001,0002/0003' ScrollExtent='570,51' Size='570,51'>Message of the Day goes here...</Text>
<Button LocalText='[@OutfitInvite]' LocalTooltip='[@OutfitInviteTooltip]' Location='20,383' Name='InviteButton' PackLocation='left,bottom' PackLocationProp='0020/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@OutfitInviteTooltip'>@OutfitInvite</Button>
<Button LocalText='[@OutfitKick]' LocalTooltip='[@OutfitKickTooltip]' Location='101,383' Name='KickButton' PackLocation='left,bottom' PackLocationProp='0101/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@OutfitKickTooltip'>@OutfitKick</Button>
<Button LocalText='[@OutfitPromote]' LocalTooltip='[@OutfitPromoteTooltip]' Location='183,383' Name='PromoteButton' PackLocation='left,bottom' PackLocationProp='0183/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@OutfitPromoteTooltip'>@OutfitPromote</Button>
<Button LocalText='[@OutfitLeave]' LocalTooltip='[@OutfitLeaveTooltip]' Location='265,383' Name='LeaveButton' PackLocation='left,bottom' PackLocationProp='0265/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@OutfitLeaveTooltip'>@OutfitLeave</Button>
<Button LocalText='[@OutfitDecal]' LocalTooltip='[@OutfitDecalTooltip]' Location='347,383' Name='DecalButton' PackLocation='left,bottom' PackLocationProp='0347/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@OutfitDecalTooltip'>@OutfitDecal</Button>
<Button LocalText='[@OutfitTitle]' LocalTooltip='[@OutfitTitleTooltip]' Location='429,383' Name='TitleButton' PackLocation='left,bottom' PackLocationProp='0429/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@OutfitTitleTooltip'>@OutfitTitle</Button>
<Button LocalText='[@OutfitMessage]' LocalTooltip='[@OutfitMessageTooltip]' Location='511,115' Name='MessageButton' PackLocation='left,bottom' PackLocationProp='0511/0001,-313/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@OutfitMessageTooltip'>@OutfitMessage</Button>
<Button LocalText='[@OutfitList]' LocalTooltip='[@OutfitListTooltip]' Location='511,383' Name='OutfitListButton' PackLocation='left,bottom' PackLocationProp='0511/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@OutfitListTooltip'>@OutfitList</Button>
<Button LocalText='[@OutfitHeadingName]' LocalTooltip='[@OutfitHeadingNameTooltip]' Location='16,147' Name='NameHeading' PackLocation='left,top' PackLocationProp='0016/0001,0147/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='285,20' Size='285,20' Style='/Buttons.ListboxHeading.style' Tooltip='@OutfitHeadingNameTooltip'>@OutfitHeadingName</Button>
<Button LocalText='[@OutfitHeadingTitle]' LocalTooltip='[@OutfitHeadingTitleTooltip]' Location='311,147' Name='TitleHeading' PackLocation='left,top' PackLocationProp='0311/0001,0147/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='120,20' Size='120,20' Style='/Buttons.ListboxHeading.style' Tooltip='@OutfitHeadingTitleTooltip'>@OutfitHeadingTitle</Button>
<Button LocalText='[@OutfitHeadingPoints]' LocalTooltip='[@OutfitHeadingPointsTooltip]' Location='441,147' Name='PointsHeading' PackLocation='left,top' PackLocationProp='0441/0001,0147/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='60,20' Size='60,20' Style='/Buttons.ListboxHeading.style' Tooltip='@OutfitHeadingPointsTooltip'>@OutfitHeadingPoints</Button>
<Button LocalText='[@OutfitHeadingLastOn]' LocalTooltip='[@OutfitHeadingLastOnTooltip]' Location='511,147' Name='LastOnHeading' PackLocation='left,top' PackLocationProp='0511/0001,0147/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='70,20' Size='70,20' Style='/Buttons.ListboxHeading.style' Tooltip='@OutfitHeadingLastOnTooltip'>@OutfitHeadingLastOn</Button>
<Listbox AbsorbsInput='false' DataSource='/DataSources.OutfitList' Location='16,170' Name='OutfitListbox' PackLocation='left,top' PackLocationProp='0016/0001,0170/0001' PackSize='absolute,absolute' PackSizeProp='0042/0001,0225/0001' RowTemplate='ListboxTemplate' ScrollExtent='565,203' Size='565,203' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='OutfitListbox' Location='583,145' Name='ScrollOutfitList' PackLocation='right,top' PackLocationProp='-024/0001,0145/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0200/0001' ScrollExtent='9,228' Size='9,228' Style='/ScrollBars.vertical.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='51,6' Name='Title' PackLocation='left,top' PackLocationProp='0051/0001,0006/0001' PackSize='absolute,fixed' PackSizeProp='0103/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='504,32' Size='504,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='16,378' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0016/0001,-050/0001' PackSize='absolute,fixed' PackSizeProp='0031/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='576,31' Size='576,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,20' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='607,408' Size='607,408' Stretch='false'/>
<Template Name='ListboxTemplate' Size='565,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,1\' maxlines = \'1\' size = \'285,20\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'300,1\' maxlines = \'1\' size = \'120,20\' textalignment = \'Left\'\>
$Title$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'430,1\' maxlines = \'1\' size = \'60,20\' textalignment = \'Left\'\>
$Points$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'500,1\' maxlines = \'1\' size = \'60,20\' textalignment = \'Center\'\>
$LastOn$
\</text\></Template>
</Page>
<Page Location='140,210' minsize='400,344' movable='true' Name='OutfitListPane' PackLocation='center,center' PackLocationProp='-372/0001,-174/0001' resizable='true' ScrollExtent='730,320' Size='730,320' Visible='false'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@OutfitListPane]' Location='101,14' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0014/0001' PackSize='absolute,fixed' PackSizeProp='0204/0001,0002/0003' ScrollExtent='526,17' Size='526,17' TextAlignment='Center'>@OutfitListPane</Text>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='630,14' Name='CloseButton' PackLocation='right,top' PackLocationProp='-100/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='78,14' Name='HelpButton' PackLocation='left,top' PackLocationProp='0078/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button LocalText='[@OutfitListHeadingName]' LocalTooltip='[@OutfitListHeadingNameTooltip]' Location='21,50' Name='NameHeading' PackLocation='left,top' PackLocationProp='0021/0001,0050/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='279,20' Size='279,20' Style='/Buttons.ListboxHeading.style' Tooltip='@OutfitListHeadingNameTooltip'>@OutfitListHeadingName</Button>
<Button LocalText='[@OutfitListHeadingLeader]' LocalTooltip='[@OutfitListHeadingLeaderTooltip]' Location='310,50' Name='LeaderHeading' PackLocation='left,top' PackLocationProp='0310/0001,0050/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='220,20' Size='220,20' Style='/Buttons.ListboxHeading.style' Tooltip='@OutfitListHeadingLeaderTooltip'>@OutfitListHeadingLeader</Button>
<Button LocalText='[@OutfitListHeadingMembers]' LocalTooltip='[@OutfitListHeadingMembersTooltip]' Location='540,50' Name='MemberHeading' PackLocation='left,top' PackLocationProp='0540/0001,0050/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='71,20' Size='71,20' Style='/Buttons.ListboxHeading.style' Tooltip='@OutfitListHeadingMembersTooltip'>@OutfitListHeadingMembers</Button>
<Button LocalText='[@OutfitListHeadingPoints]' LocalTooltip='[@OutfitListHeadingPointsTooltip]' Location='620,50' Name='PointHeading' PackLocation='left,top' PackLocationProp='0620/0001,0050/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='80,20' Size='80,20' Style='/Buttons.ListboxHeading.style' Tooltip='@OutfitListHeadingPointsTooltip'>@OutfitListHeadingPoints</Button>
<Listbox AbsorbsInput='false' DataSource='/DataSources.OutfitListing' Enabled='false' Location='21,70' Name='OutfitListListbox' PackLocation='left,top' PackLocationProp='0021/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0051/0001,0098/0001' RowTemplate='ListboxTemplate' ScrollExtent='679,222' Size='679,222' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='OutfitListListbox' Location='706,70' Name='ScrollOutfitList' PackLocation='right,top' PackLocationProp='-024/0001,0070/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0098/0001' ScrollExtent='9,222' Size='9,222' Style='/ScrollBars.vertical.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='51,6' Name='Title' PackLocation='left,top' PackLocationProp='0051/0001,0006/0001' PackSize='absolute,fixed' PackSizeProp='0103/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='627,32' Size='627,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,20' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='730,300' Size='730,300' Stretch='false'/>
<Template Name='ListboxTemplate' Size='679,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,1\' maxlines = \'1\' size = \'275,20\'\>
$OutfitName$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'295,1\' maxlines = \'1\' size = \'215,20\' textalignment = \'Left\'\>
$OutfitLeader$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'525,1\' maxlines = \'1\' size = \'65,20\' textalignment = \'Center\'\>
$MemberCount$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'605,1\' maxlines = \'1\' size = \'70,20\' textalignment = \'Center\'\>
$Points$
\</text\></Template>
</Page>
<Page Location='296,188' minsize='400,344' movable='true' Name='OutfitCreationPane' resizable='true' ScrollExtent='440,350' Size='440,350' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@OutfitCreationPane]' Location='101,14' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0014/0001' PackSize='absolute,fixed' PackSizeProp='0204/0001,0002/0003' ScrollExtent='236,17' Size='236,17' TextAlignment='Center'>@OutfitCreationPane</Text>
<Button LocalText='[@Cancel]' Location='81,14' Name='HelpButton' PackLocation='left,top' PackLocationProp='0081/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Button IsCancelButton='true' LocalText='[@Cancel]' Location='340,14' Name='CloseButton' PackLocation='right,top' PackLocationProp='-100/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='Squad Name' Location='18,43' MaxLines='1' Name='SquadName' PackLocation='left,top' PackLocationProp='0018/0001,0043/0001' PackSize='absolute,fixed' PackSizeProp='0034/0001,0002/0003' ScrollExtent='406,17' Size='406,17' TextAlignment='Center'>Squad Name</Text>
<Listbox AbsorbsInput='false' DataSource='/DataSources.OutfitCreationList' GetsInput='false' Location='16,65' Name='OutfitListbox' PackLocation='left,top' PackLocationProp='0016/0001,0065/0001' PackSize='absolute,absolute' PackSizeProp='0042/0001,0149/0001' RowTemplate='ListboxTemplate' ScrollExtent='409,201' Size='398,201' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='OutfitListbox' Location='413,65' Name='ScrollOutfitList' PackLocation='right,top' PackLocationProp='-027/0001,0065/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0149/0001' ScrollExtent='9,201' Size='9,201' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='0:10' Location='20,272' MaxLines='1' Name='CreationStatus' PackLocation='left,bottom' PackLocationProp='0020/0001,-078/0001' PackSize='absolute,fixed' PackSizeProp='0038/0001,0002/0003' ScrollExtent='402,23' Size='402,23' TextAlignment='Center' TextAlignmentVertical='Center' TruncateElipsis='false'>0:10</Text>
<Button LocalText='[@OK]' LocalTooltip='[@OKTooltip]' Location='21,305' Name='OkButton' PackLocation='Center,bottom' PackLocationProp='-199/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@OKTooltip'>@OK</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CancelTooltip]' Location='344,305' Name='CancelButton' PackLocation='center,bottom' PackLocationProp='0124/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@CancelTooltip'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='51,6' Name='Title' PackLocation='left,top' PackLocationProp='0051/0001,0006/0001' PackSize='absolute, fixed' PackSizeProp='0103/0001,xxxx/xxxx' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='337,32' Size='337,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='15,300' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0015/0001,-050/0001' PackSize='absolute,fixed' PackSizeProp='0031/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='409,31' Size='409,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='16,268' Name='InfoBorder' PackLocation='left,bottom' PackLocationProp='0016/0001,-082/0001' PackSize='absolute,fixed' PackSizeProp='0031/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='409,31' Size='409,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,20' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='440,330' Size='440,330' Stretch='false'/>
<Template Name='ListboxTemplate' Size='409,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,1\' maxlines = \'1\' size = \'25,20\' textalignment = \'right\' truncateelipsis = \'false\'\>
$MemberID$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'40,1\' maxlines = \'1\' size = \'320,20\'\>
$Internationalize$
\</text\>
\<text color = \'#00FF00\' font = \'/Fonts.ButtonIcons\' location = \'360,1\' maxlines = \'1\' size = \'32,20\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$hasAccepted$\'\>
i
\</text\>
\<text color = \'#FF0000\' font = \'/Fonts.ButtonIcons\' location = \'360,1\' maxlines = \'1\' size = \'32,20\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$hasDeclined$\'\>
j
\</text\>
\<text color = \'#CCCCCC\' font = \'/Fonts.ButtonIcons\' location = \'360,1\' maxlines = \'1\' size = \'32,20\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$hasNotReplied$\'\>
G
\</text\></Template>
</Page>
<Page Location='296,188' MinimumSize='440,340' minsize='440,340' movable='true' Name='PlayerPane' resizable='true' ScrollExtent='440,370' Size='440,370' Visible='false'>
<Button LocalText='[@Cancel]' Location='340,14' Name='CloseButton' PackLocation='right,top' PackLocationProp='-100/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='81,14' Name='HelpButton' PackLocation='left,top' PackLocationProp='0081/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@PlayerPane]' Location='101,14' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0014/0001' PackSize='absolute,fixed' PackSizeProp='0204/0001,0002/0003' ScrollExtent='236,17' Size='236,17' TextAlignment='Center'>@PlayerPane</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='51,6' Name='Title' PackLocation='left,top' PackLocationProp='0051/0001,0006/0001' PackSize='absolute,fixed' PackSizeProp='0103/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='337,32' Size='337,32'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@PlayerSquadTooltip]' Location='20,49' Name='SquadTab' ScrollExtent='72,24' Size='72,24' Style='/Buttons.WindowIconTab.style' Tooltip='@PlayerSquadTooltip'>@PlayerSquad</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@PlayerFriendTooltip]' Location='102,49' Name='FriendTab' ScrollExtent='72,24' Size='72,24' Style='/Buttons.WindowIconTab.style' Tooltip='@PlayerFriendTooltip'>@PlayerFriend</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@PlayerFindTooltip]' Location='186,49' Name='FindTab' ScrollExtent='90,24' Size='90,24' Style='/Buttons.WindowIconTab.style' Tooltip='@PlayerFindTooltip'>@PlayerFind</Checkbox>
<Page Location='18,70' Name='SquadInfoPage' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='404,280' Size='404,280'>
<Rectangle Color='#385E61' Location='2,2' Name='SquadListRect' PackLocation='left,top' PackLocationProp='0002/0001,0002/0001' PackSize='absolute,absolute' PackSizeProp='0004/0001,0074/0001' ScrollExtent='400,206' Size='400,206'/>
<Listbox DataSource='/DataSources.SquadList' Location='4,4' Name='SquadListbox' PackLocation='left,top' PackLocationProp='0004/0001,0004/0001' PackSize='absolute,absolute' PackSizeProp='0008/0001,0078/0001' RowTemplate='ListboxTemplate' ScrollExtent='396,202' Size='396,202' Style='/Listboxes.Clear.style'/>
<Image BackgroundOpacity='1.000' Location='1,212' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0001/0001,-068/0001' PackSize='absolute,fixed' PackSizeProp='0004/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='400,31' Size='400,31'/>
<Button LocalText='[@SquadPromote]' LocalTooltip='[@PromoteTooltip]' Location='6,217' Name='PromoteButton' PackLocation='center,bottom' PackLocationProp='-196/0001,-063/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@PromoteTooltip'>@SquadPromote</Button>
<Button LocalText='[@SquadKick]' LocalTooltip='[@KickTooltip]' Location='111,217' Name='KickButton' PackLocation='center,bottom' PackLocationProp='-091/0001,-063/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@KickTooltip'>@SquadKick</Button>
<Button LocalText='[@SquadLeave]' LocalTooltip='[@LeaveTooltip]' Location='216,217' Name='LeaveButton' PackLocation='center,bottom' PackLocationProp='0014/0001,-063/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@LeaveTooltip'>@SquadLeave</Button>
<Button LocalText='[@SquadOpen]' LocalTooltip='[@OpenSquadTooltip]' Location='322,217' Name='MiniButton' PackLocation='center,bottom' PackLocationProp='0120/0001,-063/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@OpenSquadTooltip'>@SquadOpen</Button>
<Image BackgroundOpacity='1.000' Location='1,246' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0001/0001,-034/0001' PackSize='absolute,fixed' PackSizeProp='0004/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='400,31' Size='400,31'/>
<Button Enabled='false' LocalText='[@SquadVoiceHostStart]' LocalTooltip='[@SquadVoiceHostStartTooltip]' Location='34,251' Name='VoiceHostStartButton' PackLocation='center,bottom' PackLocationProp='-168/0001,-029/0001' ScrollExtent='150,20' Size='150,20' Style='/Buttons.TextButton.style' Tooltip='@SquadVoiceHostStartTooltip'>@SquadVoiceHostStart</Button>
<Button Enabled='false' LocalText='[@SquadVoiceHostStop]' LocalTooltip='[@SquadVoiceHostStopTooltip]' Location='34,251' Name='VoiceHostStopButton' PackLocation='center,bottom' PackLocationProp='-168/0001,-029/0001' ScrollExtent='150,20' Size='150,20' Style='/Buttons.TextButton.style' Tooltip='@SquadVoiceHostStopTooltip' Visible='false'>@SquadVoiceHostStop</Button>
<Button Enabled='false' LocalText='[@SquadVoiceJoinStart]' LocalTooltip='[@SquadVoiceJoinStartTooltip]' Location='218,251' Name='VoiceJoinStartButton' PackLocation='center,bottom' PackLocationProp='0016/0001,-029/0001' ScrollExtent='150,20' Size='150,20' Style='/Buttons.TextButton.style' Tooltip='@SquadVoiceJoinStartTooltip'>@SquadVoiceJoinStart</Button>
<Button Enabled='false' LocalText='[@SquadVoiceJoinStop]' LocalTooltip='[@SquadVoiceJoinStopTooltip]' Location='218,251' Name='VoiceJoinStopButton' PackLocation='center,bottom' PackLocationProp='0016/0001,-029/0001' ScrollExtent='150,20' Size='150,20' Style='/Buttons.TextButton.style' Tooltip='@SquadVoiceJoinStopTooltip' Visible='false'>@SquadVoiceJoinStop</Button>
<Template Name='ListboxTemplate' Size='396,20'>\<text color = \'$VoiceStatusColor$\' font = \'/Fonts.MiscIcons\' location = \'5,0\' maxlines = \'1\' size = \'20,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$VoiceStatus$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'30,4\' maxlines = \'1\' size = \'20,18\' textalignment = \'right\' truncateelipsis = \'false\'\>
$MemberID$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'60,4\' maxlines = \'1\' size = \'$width$,18\'\>
$Internationalize$
\</text\></Template>
</Page>
<Page Location='18,70' Name='FriendsPage' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='404,280' Size='404,280' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@NoFriends]' Location='52,111' MaxLines='1' Name='NoFriendsText' PackLocation='center,center' PackLocationProp='-150/0001,-029/0001' ScrollExtent='291,17' Size='291,17' TextAlignment='Center'>@NoFriends</Text>
<Rectangle Color='#385E61' Location='2,2' Name='FriendListRect' PackLocation='left,top' PackLocationProp='0002/0001,0002/0001' PackSize='absolute,absolute' PackSizeProp='0004/0001,0044/0001' ScrollExtent='400,236' Size='400,236'/>
<Listbox DataSource='/DataSources.FriendsList' Location='4,4' Name='FriendListbox' PackLocation='left,top' PackLocationProp='0004/0001,0004/0001' PackSize='absolute,absolute' PackSizeProp='0020/0001,0048/0001' RowTemplate='ListboxTemplate' ScrollExtent='384,232' Size='384,232' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='FriendListbox' Location='391,4' Name='ScrollFriendList' PackLocation='right,top' PackLocationProp='-013/0001,0004/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0048/0001' ScrollExtent='9,232' Size='9,232' Style='/ScrollBars.vertical.style'/>
<Image BackgroundOpacity='1.000' Location='1,246' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0001/0001,-034/0001' PackSize='absolute,fixed' PackSizeProp='0003/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='401,31' Size='401,31'/>
<Button LocalText='[@AddFriend]' LocalTooltip='[@AddFriendTooltip]' Location='6,251' Name='AddFriendButton' PackLocation='center,bottom' PackLocationProp='-196/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@AddFriendTooltip'>@AddFriend</Button>
<Button LocalText='[@DeleteFriend]' LocalTooltip='[@DeleteFriendTooltip]' Location='164,251' Name='DeleteFriendButton' PackLocation='center,bottom' PackLocationProp='-038/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@DeleteFriendTooltip'>@DeleteFriend</Button>
<Button LocalText='[@MonitorFriends]' LocalTooltip='[@MonitorFriendsTooltip]' Location='322,251' Name='MonitorFriendsButton' PackLocation='center,bottom' PackLocationProp='0120/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@MonitorFriendsTooltip'>@MonitorFriends</Button>
<Checkbox BackgroundOpacity='1.000' Location='255,254' Name='HideOn' PackLocation='center,bottom' PackLocationProp='0053/0001,-026/0001' ScrollExtent='57,22' Size='57,22' Style='/Buttons.LargeRadiobox.style' Visible='false'>@H</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='323,254' Name='HideOff' PackLocation='center,bottom' PackLocationProp='0121/0001,-026/0001' ScrollExtent='57,22' Size='57,22' Style='/Buttons.LargeRadiobox.style' Visible='false'>@NH</Checkbox>
<Template Name='ListboxTemplate' Size='384,20'>\<text color = \'#FFFF00\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'$width$,18\' textalignment = \'left\' truncateelipsis = \'true\' visible = \'$IsOnline$\'\>
$Internationalize$
\</text\>
\<text color = \'#FFFF00\' font = \'/Fonts.HudFont2\' location = \'-5,2\' maxlines = \'1\' size = \'$width$,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsOnline$\'\>
@FriendsList_Online
\</text\>
\<text color = \'#AAAAAA\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'$width$,18\' textalignment = \'left\' truncateelipsis = \'true\' visible = \'$IsNotOnline$\'\>
$Internationalize$
\</text\>
\<text color = \'#AAAAAA\' font = \'/Fonts.HudFont2\' location = \'-5,2\' maxlines = \'1\' size = \'$width$,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsNotOnline$\'\>
@FriendsList_Offline
\</text\></Template>
</Page>
<Page Location='18,70' Name='FindPage' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='404,280' Size='404,280' Visible='false'>
<Rectangle Color='#385E61' Location='2,2' Name='FindListRect' PackLocation='left,top' PackLocationProp='0002/0001,0002/0001' PackSize='absolute,absolute' PackSizeProp='0004/0001,0044/0001' ScrollExtent='400,236' Size='400,236'/>
<Listbox DataSource='FindList' Location='4,4' Name='FindListbox' PackLocation='left,top' PackLocationProp='0004/0001,0004/0001' PackSize='absolute,absolute' PackSizeProp='0020/0001,0048/0001' RowTemplate='ListboxTemplate' ScrollExtent='384,232' Size='384,232' Style='/Listboxes.Clear.style' Visible='false'/>
<Scrollbar Control='FindListbox' Location='391,4' Name='ScrollFindList' PackLocation='right,top' PackLocationProp='-013/0001,0004/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0048/0001' ScrollExtent='9,232' Size='9,232' Style='/ScrollBars.vertical.style'/>
<Image BackgroundOpacity='1.000' Location='1,246' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0001/0001,-034/0001' PackSize='absolute,fixed' PackSizeProp='0003/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='401,31' Size='401,31'/>
<Button LocalText='[@FindSearch]' LocalTooltip='[@FindSearchTooltip]' Location='6,251' Name='SearchButton' PackLocation='center,bottom' PackLocationProp='-196/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@FindSearchTooltip'>@FindSearch</Button>
<Button LocalText='[@FindMessage]' LocalTooltip='[@FindMessageTooltip]' Location='83,251' Name='MessageButton' PackLocation='center,bottom' PackLocationProp='-119/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@FindMessageTooltip'>@FindMessage</Button>
<Button LocalText='[@FindInfo]' LocalTooltip='[@FindInfoTooltip]' Location='160,251' Name='InfoButton' PackLocation='center,bottom' PackLocationProp='-042/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@FindInfoTooltip'>@FindInfo</Button>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@FindLookingOnTooltip]' Location='255,250' Name='LookingOn' PackLocation='center,bottom' PackLocationProp='0053/0001,-030/0001' ScrollExtent='57,22' Size='57,22' Style='/Buttons.LargeRadiobox.style' Tooltip='@FindLookingOnTooltip'>@L</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@FindLookingOffTooltip]' Location='323,250' Name='LookingOff' PackLocation='center,bottom' PackLocationProp='0121/0001,-030/0001' ScrollExtent='57,22' Size='57,22' Style='/Buttons.LargeRadiobox.style' Tooltip='@FindLookingOffTooltip'>@NL</Checkbox>
<Template Name='ListboxTemplate' Size='384,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'$width$,18\' visible = \'$IsNotHeading$\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'-18,2\' maxlines = \'1\' size = \'$width$,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsHeading$\'\>
$Internationalize$
\</text\>
\<Image backgroundopacity = \'1.000\' location = \'0,10\' name = \'UnderlineTemplate\' rstyledefault = \'/Listboxes.ListboxContentHeader.style\' scrollextent = \'$width$,8\' size = \'$width$,8\' visible = \'$IsHeading$\'/\></Template>
<DataSource Name='FindList'>
<Data color='#FFFFFF' internationalize='SQUAD LEADERS' isheading='true' isnotheading='false' Name='SquadLeaderHeading' width='384'/>
<Data color='#FFFFFF' internationalize='Jimmy the Greek' isheading='false' isnotheading='true' Name='SquadLeader1' width='384'/>
<Data color='#FFFFFF' internationalize='SOLO SOLDIERS' isheading='true' isnotheading='false' Name='SoloSoldierHeading' width='384'/>
</DataSource>
</Page>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,20' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='440,350' Size='440,350' Stretch='false'/>
</Page>
<Page Location='313,167' movable='true' Name='KeyCard' ScrollExtent='376,446' Size='376,446' Visible='false'>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='198,208' Name='AccessSeparator' RStyleDefault='/Listboxes.ListboxContentHeader.style' ScrollExtent='157,8' Size='157,8'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='198,324' Name='AccessSeparator' RStyleDefault='/Listboxes.ListboxContentHeader.style' ScrollExtent='157,8' Size='157,8'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@VehicleAccess]' Location='213,189' MaxLines='1' Name='VehicleTitle' PackLocation='left,top' PackLocationProp='0213/0001,0189/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='129,26' Size='129,26' TextAlignment='Center'>@VehicleAccess</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SquadAccessTooltip]' Location='200,217' Name='SquadAccess' ScrollExtent='144,26' Size='144,26' Style='/Buttons.Radiobox.style' Tooltip='@SquadAccessTooltip'>@SquadAccess</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@EmpireAccessTooltip]' Location='200,242' Name='EmpireAccess' ScrollExtent='144,26' Size='144,26' Style='/Buttons.Radiobox.style' Tooltip='@EmpireAccessTooltip'>@EmpireAccess</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@NoAccessTooltip]' Location='200,269' Name='NoAccess' ScrollExtent='144,26' Size='144,26' Style='/Buttons.Radiobox.style' Tooltip='@NoAccessTooltip'>@NoAccess</Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@TrunkAccess]' Location='211,305' MaxLines='1' Name='TrunkTitle' PackLocation='left,top' PackLocationProp='0211/0001,0305/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='129,26' Size='129,26' TextAlignment='Center'>@TrunkAccess</Text>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@TrunkAccessTooltip]' Location='200,334' Name='TrunkOpen' ScrollExtent='144,26' Size='144,26' Style='/Buttons.Radiobox.style' Tooltip='@TrunkAccessTooltip'>@TrunkAccess</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@TrunkLockedTooltip]' Location='200,360' Name='TrunkLocked' ScrollExtent='144,26' Size='144,26' Style='/Buttons.Radiobox.style' Tooltip='@TrunkLockedTooltip'>@TrunkLocked</Checkbox>
<Button LocalText='[@Cancel]' Location='294,9' Name='Close' PackLocation='right,top' PackLocationProp='-082/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='68,10' Name='HelpButton' PackLocation='right,top' PackLocationProp='-308/0001,0010/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@VehicleAccessTitle]' Location='90,9' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0090/0001,0009/0001' PackSize='absolute,fixed' PackSizeProp='0175/0001,0002/0003' ScrollExtent='201,17' Size='201,17' TextAlignment='Center'>@VehicleAccessTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='38,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='304,32' Size='304,32'/>
<DataSource Name='Foo'>
<Data displayname='Driver' icon='driver' location='10,2' Name='Driver' size='16,16'/>
<Data displayname='Passenger' icon='passenger' location='12,2' Name='Passenger' size='17,16'/>
<Data displayname='Vehicle' icon='vehicle' location='2,5' Name='Vehicle' size='30,17'/>
<Data displayname='Gunner' icon='gunner' location='4,2' Name='Gunner' size='27,16'/>
</DataSource>
<Rectangle AbsorbsInput='false' Color='#00F2C9' GetsInput='false' Location='20,40' Name='3DVehicleViewBorderRect' Opacity='0.750' ScrollExtent='336,136' Size='336,136'/>
<GameObjectView AbsorbsInput='false' Location='35,48' Name='3DVehicleView' ScrollExtent='309,120' Size='309,120'/>
<Template Name='OccupantTemplate' Size='220,22'>\<text color = \'$color\' font = \'/Fonts.HudFont1\' location = \'32,5\' size = \'200,12\'\>
$displayname$
\</text\>
\<image location = \'$location\' size = \'$size$\' stretch = \'false\' style = \'$icon$\'/\></Template>
<Rectangle AbsorbsInput='false' Color='#00F2C9' GetsInput='false' Location='186,176' Name='VerticalLine' Opacity='0.750' ScrollExtent='1,217' Size='1,217'/>
<Listbox DataSource='Foo' Location='19,183' Name='OccupantsListbox' RowTemplate='OccupantTemplate' ScrollExtent='220,213' SelectedItemIndex='0' Size='154,213' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='OccupantsListbox' Location='175,183' Name='ScrollOccupants' ScrollExtent='9,213' Size='9,213' Style='/ScrollBars.vertical.style'/>
<Button LocalText='[@KickPassenger]' LocalTooltip='[@KickPassengerTooltip]' Location='24,404' Name='KickPassenger' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@KickPassengerTooltip'>@KickPassenger</Button>
<Button LocalText='[@DeconstructVehicle]' LocalTooltip='[@DeconstructVehicleTooltip]' Location='280,405' Name='Deconstruct' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@DeconstructVehicleTooltip'>@DeconstructVehicle</Button>
<ImageStyle Name='driver'>
<ImageFrame Source='vehicle_keycard_icons_00' SourceRect='0,32,16,48'/>
</ImageStyle>
<ImageStyle Name='passenger'>
<ImageFrame Source='vehicle_keycard_icons_00' SourceRect='44,32,57,49'/>
</ImageStyle>
<ImageStyle Name='gunner'>
<ImageFrame Source='vehicle_keycard_icons_00' SourceRect='17,32,43,49'/>
</ImageStyle>
<ImageStyle Name='vehicle'>
<ImageFrame Source='vehicle_keycard_icons_00' SourceRect='0,50,28,66'/>
</ImageStyle>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='19,399' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='341,31' Size='341,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,15' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0012/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='376,434' Size='376,434' Stretch='false'/>
</Page>
<Page Location='5,4' maxsize='500,500' minsize='193,216' movable='true' Name='Radar' preserveaspectratio='true' resizable='true' ScrollExtent='212,233' Size='212,233'>
<Page Location='64,7' Name='HeadingPage' ScrollExtent='80,18' Size='80,18' Visible='false'>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Location='-60,0' Name='Heading' RStyleActivated=' ' ScrollExtent='662,18' Size='662,18' Stretch='false' Style='/Icons.HUD.Radar_directions'/>
</Page>
<Page Location='0,-1' Name='Control' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='212,30' Size='212,30'>
<Page Location='58,2' Name='MainControl' ScrollExtent='97,27' Size='97,27'>
<Button LocalTooltip='[@IncreaseRangeTooltip]' Location='31,3' Name='Up' PackLocation='right,top' PackLocationProp='-066/0001,0003/0001' ScrollExtent='41,12' Size='41,12' Style='/Buttons.Radar_Up.style' Tooltip='@IncreaseRangeTooltip'></Button>
<Button LocalTooltip='[@DecreaseRangeTooltip]' Location='36,15' Name='Down' PackLocation='right,top' PackLocationProp='-061/0001,0015/0001' ScrollExtent='33,12' Size='33,12' Style='/Buttons.Radar_Down.style' Tooltip='@DecreaseRangeTooltip'></Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='200' Location='-5,7' Name='Distance' PackLocation='right,top' PackLocationProp='-102/0001,0007/0001' ScrollExtent='46,17' Size='46,17' TextAlignment='Center' TextAlignmentVertical='Center'>200</Text>
</Page>
<Button LocalTooltip='[@MinimizeTooltip]' Location='19,1' Name='Minimize' ScrollExtent='37,30' Size='37,30' Style='/Buttons.HUD_Minimize.style' Tooltip='@MinimizeTooltip'></Button>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@ToggleWindowSizeTooltip]' Location='151,7' Name='ToggleSize' PackLocation='right,top' PackLocationProp='-061/0001,0007/0001' ScrollExtent='9,20' Size='9,20' Style='/Buttons.ActiveItems.checkstyle' Tooltip='@ToggleWindowSizeTooltip'>V</Checkbox>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Location='32,0' Name='Title' PackLocation='left,top' PackLocationProp='0032/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0055/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='157,32' Size='157,32'/>
</Page>
<Page BackgroundColor='#FFFFFF' Location='12,32' MinimumSize='100,100' Name='MapPage' PackSize='absolute,absolute' PackSizeProp='0024/0001,0045/0001' ScrollExtent='188,188' Size='188,188'>
<Image Enabled='false' Location='87,86' Name='PlayerBlip' PackLocation='center,center' PackLocationProp='-007/0001,-008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='14,16' Size='14,16' Stretch='false' Style='/Icons.HUD.Radar_avatar_blip'/>
<Image AbsorbsInput='false' Enabled='false' Location='0,1' Name='Compass' PackSize='absolute,absolute' PackSizeProp='0000/0001,0001/0001' ScrollExtent='188,187' Size='188,187' Style='/Icons.HUD.Radar_compass'/>
<Ellipse AbsorbsInput='false' ArcBegin='0.740' ArcEnd='0.760' Color='#FFFF00' Enabled='false' GetsInput='false' InnerRadiusColor='#FFFF00' Location='0,1' Name='VehicleFinder' PackSize='absolute,absolute' PackSizeProp='0000/0001,0001/0001' ScrollExtent='188,187' Size='188,187' Thickness='5.000'/>
<Ellipse AbsorbsInput='false' ArcBegin='0.600' ArcEnd='0.900' Color='#7AAACB' Enabled='false' GetsInput='false' InnerRadiusColor='#7AAACB' Location='0,1' Name='FOV' Opacity='0.500' PackSize='absolute,absolute' PackSizeProp='0000/0001,0001/0001' Rotation='0.750' ScrollExtent='188,187' Size='188,187' Thickness='600.000' Visible='false'/>
<Image Color='#FFDC00' Location='135,170' Name='SquadBlip0' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_0' Visible='false'/>
<Image Color='#FF0000' Location='45,170' Name='SquadBlip1' ScrollExtent='7,14' Size='7,14' Stretch='false' Style='/Icons.HUD.Radar_digit_1' Visible='false'/>
<Image Color='#FF0000' Location='55,170' Name='SquadBlip2' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_2' Visible='false'/>
<Image Color='#FF0000' Location='65,170' Name='SquadBlip3' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_3' Visible='false'/>
<Image Color='#FF0000' Location='75,170' Name='SquadBlip4' ScrollExtent='11,14' Size='11,14' Stretch='false' Style='/Icons.HUD.Radar_digit_4' Visible='false'/>
<Image Color='#FF0000' Location='85,170' Name='SquadBlip5' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_5' Visible='false'/>
<Image Color='#FF0000' Location='95,170' Name='SquadBlip6' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_6' Visible='false'/>
<Image Color='#FF0000' Location='105,170' Name='SquadBlip7' ScrollExtent='11,14' Size='11,14' Stretch='false' Style='/Icons.HUD.Radar_digit_7' Visible='false'/>
<Image Color='#FF0000' Location='115,170' Name='SquadBlip8' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_8' Visible='false'/>
<Image Color='#FF0000' Location='125,170' Name='SquadBlip9' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_9' Visible='false'/>
<Image Color='#FF0000' Location='125,170' Name='SoldierBlip' ScrollExtent='10,10' Size='10,10' Stretch='false' Style='/Icons.HUD.Radar_soldier_blip' UserResizable='true' Visible='false'/>
<Image Location='20,170' Name='LineBlip' PackLocation='Top,Left' PackLocationProp='0020/0001,0170/0001' ScrollExtent='12,3' Size='12,3' Stretch='false' Style='/Icons.HUD.Radar_line_blip' Visible='false'/>
<Image Location='35,170' Name='AvatarBlip' PackLocation='Top,Left' PackLocationProp='0035/0001,0170/0001' ScrollExtent='14,16' Size='14,16' Style='/Icons.HUD.Radar_avatar_blip' Visible='false'/>
<Image Location='75,150' Name='QuadBlip' PackLocation='Top,Left' PackLocationProp='0075/0001,0150/0001' ScrollExtent='15,24' Size='15,24' Style='/Icons.HUD.Radar_quad_blip' Visible='false'/>
<Image Location='75,150' Name='HarasserBlip' PackLocation='Top,Left' PackLocationProp='0075/0001,0150/0001' ScrollExtent='17,28' Size='17,28' Style='/Icons.HUD.Radar_harasser_blip' Visible='false'/>
<Image Location='75,150' Name='EnforcerBlip' PackLocation='Top,Left' PackLocationProp='0075/0001,0150/0001' ScrollExtent='16,28' Size='16,28' Style='/Icons.HUD.Radar_enforcer_blip' Visible='false'/>
<Image Location='75,150' Name='MarauderBlip' PackLocation='Top,Left' PackLocationProp='0075/0001,0150/0001' ScrollExtent='15,28' Size='15,28' Style='/Icons.HUD.Radar_marauder_blip' Visible='false'/>
<Image Location='75,150' Name='ThresherBlip' PackLocation='Top,Left' PackLocationProp='0075/0001,0150/0001' ScrollExtent='15,28' Size='15,28' Style='/Icons.HUD.Radar_thresher_blip' Visible='false'/>
<Image Location='75,150' Name='LightningBlip' PackLocation='Top,Left' PackLocationProp='0075/0001,0150/0001' ScrollExtent='16,28' Size='16,28' Style='/Icons.HUD.Radar_lightning_blip' Visible='false'/>
<Image Location='75,150' Name='VanguardBlip' PackLocation='Top,Left' PackLocationProp='0075/0001,0150/0001' ScrollExtent='18,28' Size='18,28' Style='/Icons.HUD.Radar_vanguard_blip' Visible='false'/>
<Image Location='75,150' Name='ProwlerBlip' PackLocation='Top,Left' PackLocationProp='0075/0001,0150/0001' ScrollExtent='18,28' Size='18,28' Style='/Icons.HUD.Radar_prowler_blip' Visible='false'/>
<Image Location='75,150' Name='MagriderBlip' PackLocation='Top,Left' PackLocationProp='0075/0001,0150/0001' ScrollExtent='15,29' Size='15,29' Style='/Icons.HUD.Radar_magrider_blip' Visible='false'/>
<Image Location='75,150' Name='DelivererBlip' PackLocation='Top,Left' PackLocationProp='0075/0001,0150/0001' ScrollExtent='16,33' Size='16,33' Style='/Icons.HUD.Radar_deliverer_blip' Visible='false'/>
<Image Location='75,150' Name='SunderBlip' PackLocation='Top,Left' PackLocationProp='0075/0001,0150/0001' ScrollExtent='19,37' Size='19,37' Style='/Icons.HUD.Radar_sunder_blip' Visible='false'/>
<Image Location='75,150' Name='AntBlip' PackLocation='Top,Left' PackLocationProp='0075/0001,0150/0001' ScrollExtent='18,32' Size='18,32' Style='/Icons.HUD.Radar_ant_blip' Visible='false'/>
<Image Location='35,150' Name='AmsBlip' PackLocation='Top,Left' PackLocationProp='0035/0001,0150/0001' ScrollExtent='15,40' Size='15,40' Style='/Icons.HUD.Radar_ams_blip' Visible='false'/>
<Image Location='31,120' Name='GalaxyBlip' PackLocation='Top,Left' PackLocationProp='0031/0001,0120/0001' ScrollExtent='47,43' Size='47,43' Style='/Icons.HUD.Radar_galaxy_blip' Visible='false'/>
<Image Location='50,150' Name='MosquitoBlip' PackLocation='Top,Left' PackLocationProp='0050/0001,0150/0001' ScrollExtent='15,28' Size='15,28' Style='/Icons.HUD.Radar_mosquito_blip' Visible='false'/>
<Image Location='50,150' Name='ReaverBlip' PackLocation='Top,Left' PackLocationProp='0050/0001,0150/0001' ScrollExtent='22,30' Size='22,30' Style='/Icons.HUD.Radar_reaver_blip' Visible='false'/>
<Image Location='50,150' Name='MaxBlip' PackLocation='Top,Left' PackLocationProp='0050/0001,0150/0001' ScrollExtent='20,10' Size='20,10' Style='/Icons.HUD.Radar_max_blip' Visible='false'/>
<Image Location='35,170' Name='MissileBlip' PackLocation='Top,Left' PackLocationProp='0035/0001,0170/0001' ScrollExtent='4,11' Size='4,11' Style='/Icons.HUD.Radar_missile_blip' Visible='false'/>
<Image Location='58,38' Name='HartBlip' PackLocation='Top,Left' PackLocationProp='0058/0001,0038/0001' ScrollExtent='60,128' Size='60,128' Style='/Icons.HUD.Radar_hart_blip' Visible='false'/>
<Image AbsorbsInput='false' Enabled='false' Location='0,1' Name='Building' Opacity='0.750' PackLocation='left,top' PackLocationProp='0000/0001,0001/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='193,192' Size='193,192' Style='BuildingMaps.Map_4_0'/>
<OverheadMap AbsorbsInput='false' Enabled='false' GetsInput='false' Location='0,1' Name='OverheadMap' Opacity='0.500' PackSize='absolute,absolute' PackSizeProp='0000/0001,0001/0001' ScrollExtent='188,187' Size='188,187'/>
<Namespace Name='BuildingMaps'>
<ImageStyle Name='Map_bunker_0'>
<ImageFrame>
<ImageFragment Source='ui_building_bunker_gauntlet_0_00' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,0' Source='ui_building_bunker_gauntlet_0_01' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,0' Source='ui_building_bunker_gauntlet_0_02' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,0' Source='ui_building_bunker_gauntlet_0_03' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,0' Source='ui_building_bunker_gauntlet_0_04' SourceRect='0,0,16,64'/>
<ImageFragment Offset='0,64' Source='ui_building_bunker_gauntlet_0_05' SourceRect='0,0,64,32'/>
<ImageFragment Offset='64,64' Source='ui_building_bunker_gauntlet_0_06' SourceRect='0,0,64,32'/>
<ImageFragment Offset='128,64' Source='ui_building_bunker_gauntlet_0_07' SourceRect='0,0,64,32'/>
<ImageFragment Offset='192,64' Source='ui_building_bunker_gauntlet_0_08' SourceRect='0,0,64,32'/>
<ImageFragment Offset='256,64' Source='ui_building_bunker_gauntlet_0_09' SourceRect='0,0,16,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_bunker_1'>
<ImageFrame>
<ImageFragment Source='ui_building_bunker_gauntlet_1_00' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,0' Source='ui_building_bunker_gauntlet_1_01' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,0' Source='ui_building_bunker_gauntlet_1_02' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,0' Source='ui_building_bunker_gauntlet_1_03' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,0' Source='ui_building_bunker_gauntlet_1_04' SourceRect='0,0,16,64'/>
<ImageFragment Offset='0,64' Source='ui_building_bunker_gauntlet_1_05' SourceRect='0,0,64,32'/>
<ImageFragment Offset='64,64' Source='ui_building_bunker_gauntlet_1_06' SourceRect='0,0,64,32'/>
<ImageFragment Offset='128,64' Source='ui_building_bunker_gauntlet_1_07' SourceRect='0,0,64,32'/>
<ImageFragment Offset='192,64' Source='ui_building_bunker_gauntlet_1_08' SourceRect='0,0,64,32'/>
<ImageFragment Offset='256,64' Source='ui_building_bunker_gauntlet_1_09' SourceRect='0,0,16,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_bunker_sm_0'>
<ImageFrame Source='ui_building_bunker_sm_0_00' SourceRect='0,0,32,32'/>
</ImageStyle>
<ImageStyle Name='Map_bunker_lg_0'>
<ImageFrame Source='ui_building_bunker_lg_0_00' SourceRect='0,0,64,64'/>
</ImageStyle>
<ImageStyle Name='Map_shooting_0'>
<ImageFrame>
<ImageFragment Source='ui_building_vr_shooting_0_00' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,0' Source='ui_building_vr_shooting_0_01' SourceRect='0,0,32,32'/>
<ImageFragment Offset='64,32' Source='ui_building_vr_shooting_0_02' SourceRect='0,0,32,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_training_0'>
<ImageFrame>
<ImageFragment Source='ui_building_vr_0_00' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,0' Source='ui_building_vr_0_01' SourceRect='0,0,60,64'/>
<ImageFragment Offset='128,64' Source='ui_building_vr_0_02' SourceRect='0,0,60,64'/>
<ImageFragment Offset='0,128' Source='ui_building_vr_0_03' SourceRect='0,0,64,61'/>
<ImageFragment Offset='64,128' Source='ui_building_vr_0_04' SourceRect='0,0,64,61'/>
<ImageFragment Offset='128,128' Source='ui_building_vr_0_05' SourceRect='0,0,60,61'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_meeting_0'>
<ImageFrame>
<ImageFragment Source='ui_building_meeting_0_00' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,0' Source='ui_building_meeting_0_01' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,64' Source='ui_building_meeting_0_02' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,128' Source='ui_building_meeting_0_03' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,128' Source='ui_building_meeting_0_04' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,128' Source='ui_building_meeting_0_05' SourceRect='0,0,64,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_towerc_0'>
<ImageFrame Source='ui_building_tower_c_0_00' SourceRect='0,0,64,64'/>
</ImageStyle>
<ImageStyle Name='Map_towerc_1'>
<ImageFrame Source='ui_building_tower_c_1_00' SourceRect='0,0,64,64'/>
</ImageStyle>
<ImageStyle Name='Map_towerc_2'>
<ImageFrame Source='ui_building_tower_c_2_00' SourceRect='0,0,64,64'/>
</ImageStyle>
<ImageStyle Name='Map_towerc_3'>
<ImageFrame Source='ui_building_tower_c_3_00' SourceRect='0,0,64,64'/>
</ImageStyle>
<ImageStyle Name='Map_towerb_0'>
<ImageFrame Source='ui_building_tower_b_0_00' SourceRect='0,0,64,64'/>
</ImageStyle>
<ImageStyle Name='Map_towerb_1'>
<ImageFrame Source='ui_building_tower_b_1_00' SourceRect='0,0,64,64'/>
</ImageStyle>
<ImageStyle Name='Map_towerb_2'>
<ImageFrame Source='ui_building_tower_b_2_00' SourceRect='0,0,64,64'/>
</ImageStyle>
<ImageStyle Name='Map_towerb_3'>
<ImageFrame Source='ui_building_tower_b_3_00' SourceRect='0,0,64,64'/>
</ImageStyle>
<ImageStyle Name='Map_towerb_4'>
<ImageFrame Source='ui_building_tower_b_4_00' SourceRect='0,0,64,64'/>
</ImageStyle>
<ImageStyle Name='Map_towera_0'>
<ImageFrame Source='ui_building_tower_a_0_00' SourceRect='0,0,64,64'/>
</ImageStyle>
<ImageStyle Name='Map_towera_1'>
<ImageFrame Source='ui_building_tower_a_1_00' SourceRect='0,0,64,64'/>
</ImageStyle>
<ImageStyle Name='Map_towera_2'>
<ImageFrame Source='ui_building_tower_a_2_00' SourceRect='0,0,64,64'/>
</ImageStyle>
<ImageStyle Name='Map_towera_3'>
<ImageFrame Source='ui_building_tower_a_3_00' SourceRect='0,0,64,64'/>
</ImageStyle>
<ImageStyle Name='Map_station_0'>
<ImageFrame>
<ImageFragment Source='ui_building_station_0_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_station_0_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='512,0' Source='ui_building_station_0_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='768,0' Source='ui_building_station_0_03' SourceRect='0,0,160,256'/>
<ImageFragment Offset='0,256' Source='ui_building_station_0_04' SourceRect='0,0,256,192'/>
<ImageFragment Offset='256,256' Source='ui_building_station_0_05' SourceRect='0,0,256,192'/>
<ImageFragment Offset='512,256' Source='ui_building_station_0_06' SourceRect='0,0,256,192'/>
<ImageFragment Offset='768,256' Source='ui_building_station_0_07' SourceRect='0,0,160,192'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_station_1'>
<ImageFrame>
<ImageFragment Source='ui_building_station_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_station_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='512,0' Source='ui_building_station_1_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='768,0' Source='ui_building_station_1_03' SourceRect='0,0,160,256'/>
<ImageFragment Offset='0,256' Source='ui_building_station_1_04' SourceRect='0,0,256,192'/>
<ImageFragment Offset='256,256' Source='ui_building_station_1_05' SourceRect='0,0,256,192'/>
<ImageFragment Offset='512,256' Source='ui_building_station_1_06' SourceRect='0,0,256,192'/>
<ImageFragment Offset='768,256' Source='ui_building_station_1_07' SourceRect='0,0,160,192'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_orbital_0'>
<ImageFrame>
<ImageFragment Source='ui_building_orbital_0_00' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,128' Source='ui_building_orbital_0_01' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,0' Source='ui_building_orbital_0_02' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,0' Source='ui_building_orbital_0_03' SourceRect='0,0,48,64'/>
<ImageFragment Offset='128,64' Source='ui_building_orbital_0_04' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,64' Source='ui_building_orbital_0_05' SourceRect='0,0,48,64'/>
<ImageFragment Offset='128,128' Source='ui_building_orbital_0_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,128' Source='ui_building_orbital_0_07' SourceRect='0,0,48,64'/>
<ImageFragment Offset='128,192' Source='ui_building_orbital_0_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,192' Source='ui_building_orbital_0_09' SourceRect='0,0,48,64'/>
<ImageFragment Offset='0,256' Source='ui_building_orbital_0_10' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_orbital_0_11' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_orbital_0_12' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_orbital_0_13' SourceRect='0,0,48,64'/>
<ImageFragment Offset='0,320' Source='ui_building_orbital_0_14' SourceRect='0,0,64,32'/>
<ImageFragment Offset='64,320' Source='ui_building_orbital_0_15' SourceRect='0,0,64,32'/>
<ImageFragment Offset='128,320' Source='ui_building_orbital_0_16' SourceRect='0,0,64,32'/>
<ImageFragment Offset='192,320' Source='ui_building_orbital_0_17' SourceRect='0,0,48,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_orbital_1'>
<ImageFrame>
<ImageFragment Source='ui_building_orbital_1_00' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,128' Source='ui_building_orbital_1_01' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,0' Source='ui_building_orbital_1_02' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,0' Source='ui_building_orbital_1_03' SourceRect='0,0,48,64'/>
<ImageFragment Offset='128,64' Source='ui_building_orbital_1_04' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,64' Source='ui_building_orbital_1_05' SourceRect='0,0,48,64'/>
<ImageFragment Offset='128,128' Source='ui_building_orbital_1_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,128' Source='ui_building_orbital_1_07' SourceRect='0,0,48,64'/>
<ImageFragment Offset='128,192' Source='ui_building_orbital_1_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,192' Source='ui_building_orbital_1_09' SourceRect='0,0,48,64'/>
<ImageFragment Offset='0,256' Source='ui_building_orbital_1_10' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_orbital_1_11' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_orbital_1_12' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_orbital_1_13' SourceRect='0,0,48,64'/>
<ImageFragment Offset='0,320' Source='ui_building_orbital_1_14' SourceRect='0,0,64,32'/>
<ImageFragment Offset='64,320' Source='ui_building_orbital_1_15' SourceRect='0,0,64,32'/>
<ImageFragment Offset='128,320' Source='ui_building_orbital_1_16' SourceRect='0,0,64,32'/>
<ImageFragment Offset='192,320' Source='ui_building_orbital_1_17' SourceRect='0,0,48,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_drop_0'>
<ImageFrame>
<ImageFragment Source='ui_building_dropship_0_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_dropship_0_01' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,128' Source='ui_building_dropship_0_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,256' Source='ui_building_dropship_0_03' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_building_dropship_0_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_building_dropship_0_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,384' Source='ui_building_dropship_0_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,384' Source='ui_building_dropship_0_07' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,384' Source='ui_building_dropship_0_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,384' Source='ui_building_dropship_0_09' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,384' Source='ui_building_dropship_0_10' SourceRect='0,0,64,64'/>
<ImageFragment Offset='320,384' Source='ui_building_dropship_0_11' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,448' Source='ui_building_dropship_0_12' SourceRect='0,0,64,32'/>
<ImageFragment Offset='64,448' Source='ui_building_dropship_0_13' SourceRect='0,0,64,32'/>
<ImageFragment Offset='128,448' Source='ui_building_dropship_0_14' SourceRect='0,0,64,32'/>
<ImageFragment Offset='192,448' Source='ui_building_dropship_0_15' SourceRect='0,0,64,32'/>
<ImageFragment Offset='256,448' Source='ui_building_dropship_0_16' SourceRect='0,0,64,32'/>
<ImageFragment Offset='320,448' Source='ui_building_dropship_0_17' SourceRect='0,0,64,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_drop_1'>
<ImageFrame>
<ImageFragment Source='ui_building_dropship_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_dropship_1_01' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,128' Source='ui_building_dropship_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,256' Source='ui_building_dropship_1_03' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_building_dropship_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_building_dropship_1_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,384' Source='ui_building_dropship_1_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,384' Source='ui_building_dropship_1_07' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,384' Source='ui_building_dropship_1_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,384' Source='ui_building_dropship_1_09' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,384' Source='ui_building_dropship_1_10' SourceRect='0,0,64,64'/>
<ImageFragment Offset='320,384' Source='ui_building_dropship_1_11' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,448' Source='ui_building_dropship_1_12' SourceRect='0,0,64,32'/>
<ImageFragment Offset='64,448' Source='ui_building_dropship_1_13' SourceRect='0,0,64,32'/>
<ImageFragment Offset='128,448' Source='ui_building_dropship_1_14' SourceRect='0,0,64,32'/>
<ImageFragment Offset='192,448' Source='ui_building_dropship_1_15' SourceRect='0,0,64,32'/>
<ImageFragment Offset='256,448' Source='ui_building_dropship_1_16' SourceRect='0,0,64,32'/>
<ImageFragment Offset='320,448' Source='ui_building_dropship_1_17' SourceRect='0,0,64,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_drop_2'>
<ImageFrame>
<ImageFragment Source='ui_building_dropship_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_dropship_2_01' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,128' Source='ui_building_dropship_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,256' Source='ui_building_dropship_2_03' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_building_dropship_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_building_dropship_2_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,384' Source='ui_building_dropship_2_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,384' Source='ui_building_dropship_2_07' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,384' Source='ui_building_dropship_2_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,384' Source='ui_building_dropship_2_09' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,384' Source='ui_building_dropship_2_10' SourceRect='0,0,64,64'/>
<ImageFragment Offset='320,384' Source='ui_building_dropship_2_11' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,448' Source='ui_building_dropship_2_12' SourceRect='0,0,64,32'/>
<ImageFragment Offset='64,448' Source='ui_building_dropship_2_13' SourceRect='0,0,64,32'/>
<ImageFragment Offset='128,448' Source='ui_building_dropship_2_14' SourceRect='0,0,64,32'/>
<ImageFragment Offset='192,448' Source='ui_building_dropship_2_15' SourceRect='0,0,64,32'/>
<ImageFragment Offset='256,448' Source='ui_building_dropship_2_16' SourceRect='0,0,64,32'/>
<ImageFragment Offset='320,448' Source='ui_building_dropship_2_17' SourceRect='0,0,64,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_drop_3'>
<ImageFrame>
<ImageFragment Source='ui_building_dropship_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_dropship_3_01' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,128' Source='ui_building_dropship_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,256' Source='ui_building_dropship_3_03' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_building_dropship_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_building_dropship_3_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,384' Source='ui_building_dropship_3_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,384' Source='ui_building_dropship_3_07' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,384' Source='ui_building_dropship_3_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,384' Source='ui_building_dropship_3_09' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,384' Source='ui_building_dropship_3_10' SourceRect='0,0,64,64'/>
<ImageFragment Offset='320,384' Source='ui_building_dropship_3_11' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,448' Source='ui_building_dropship_3_12' SourceRect='0,0,64,32'/>
<ImageFragment Offset='64,448' Source='ui_building_dropship_3_13' SourceRect='0,0,64,32'/>
<ImageFragment Offset='128,448' Source='ui_building_dropship_3_14' SourceRect='0,0,64,32'/>
<ImageFragment Offset='192,448' Source='ui_building_dropship_3_15' SourceRect='0,0,64,32'/>
<ImageFragment Offset='256,448' Source='ui_building_dropship_3_16' SourceRect='0,0,64,32'/>
<ImageFragment Offset='320,448' Source='ui_building_dropship_3_17' SourceRect='0,0,64,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_drop_4'>
<ImageFrame>
<ImageFragment Source='ui_building_dropship_4_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_dropship_4_01' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,128' Source='ui_building_dropship_4_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,256' Source='ui_building_dropship_4_03' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_building_dropship_4_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_building_dropship_4_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,384' Source='ui_building_dropship_4_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,384' Source='ui_building_dropship_4_07' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,384' Source='ui_building_dropship_4_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,384' Source='ui_building_dropship_4_09' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,384' Source='ui_building_dropship_4_10' SourceRect='0,0,64,64'/>
<ImageFragment Offset='320,384' Source='ui_building_dropship_4_11' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,448' Source='ui_building_dropship_4_12' SourceRect='0,0,64,32'/>
<ImageFragment Offset='64,448' Source='ui_building_dropship_4_13' SourceRect='0,0,64,32'/>
<ImageFragment Offset='128,448' Source='ui_building_dropship_4_14' SourceRect='0,0,64,32'/>
<ImageFragment Offset='192,448' Source='ui_building_dropship_4_15' SourceRect='0,0,64,32'/>
<ImageFragment Offset='256,448' Source='ui_building_dropship_4_16' SourceRect='0,0,64,32'/>
<ImageFragment Offset='320,448' Source='ui_building_dropship_4_17' SourceRect='0,0,64,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_tech_0'>
<ImageFrame>
<ImageFragment Source='ui_building_tech_plant_0_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_tech_plant_0_01' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,64' Source='ui_building_tech_plant_0_02' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,128' Source='ui_building_tech_plant_0_03' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,192' Source='ui_building_tech_plant_0_04' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,256' Source='ui_building_tech_plant_0_05' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_tech_plant_0_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_tech_plant_0_07' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_tech_plant_0_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,256' Source='ui_building_tech_plant_0_09' SourceRect='0,0,64,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_tech_1'>
<ImageFrame>
<ImageFragment Source='ui_building_tech_plant_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_tech_plant_1_01' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,64' Source='ui_building_tech_plant_1_02' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,128' Source='ui_building_tech_plant_1_03' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,192' Source='ui_building_tech_plant_1_04' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,256' Source='ui_building_tech_plant_1_05' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_tech_plant_1_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_tech_plant_1_07' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_tech_plant_1_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,256' Source='ui_building_tech_plant_1_09' SourceRect='0,0,64,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_tech_2'>
<ImageFrame>
<ImageFragment Source='ui_building_tech_plant_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_tech_plant_2_01' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,64' Source='ui_building_tech_plant_2_02' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,128' Source='ui_building_tech_plant_2_03' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,192' Source='ui_building_tech_plant_2_04' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,256' Source='ui_building_tech_plant_2_05' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_tech_plant_2_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_tech_plant_2_07' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_tech_plant_2_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,256' Source='ui_building_tech_plant_2_09' SourceRect='0,0,64,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_tech_3'>
<ImageFrame>
<ImageFragment Source='ui_building_tech_plant_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_tech_plant_3_01' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,64' Source='ui_building_tech_plant_3_02' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,128' Source='ui_building_tech_plant_3_03' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,192' Source='ui_building_tech_plant_3_04' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,256' Source='ui_building_tech_plant_3_05' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_tech_plant_3_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_tech_plant_3_07' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_tech_plant_3_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,256' Source='ui_building_tech_plant_3_09' SourceRect='0,0,64,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_bio_0'>
<ImageFrame>
<ImageFragment Source='ui_building_cyro_0_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_building_cyro_0_01' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_cyro_0_02' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_cyro_0_03' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_cyro_0_04' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,320' Source='ui_building_cyro_0_05' SourceRect='0,0,64,32'/>
<ImageFragment Offset='64,320' Source='ui_building_cyro_0_06' SourceRect='0,0,64,32'/>
<ImageFragment Offset='128,320' Source='ui_building_cyro_0_07' SourceRect='0,0,64,32'/>
<ImageFragment Offset='192,320' Source='ui_building_cyro_0_08' SourceRect='0,0,64,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_bio_1'>
<ImageFrame>
<ImageFragment Source='ui_building_cyro_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_building_cyro_1_01' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_cyro_1_02' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_cyro_1_03' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_cyro_1_04' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,320' Source='ui_building_cyro_1_05' SourceRect='0,0,64,32'/>
<ImageFragment Offset='64,320' Source='ui_building_cyro_1_06' SourceRect='0,0,64,32'/>
<ImageFragment Offset='128,320' Source='ui_building_cyro_1_07' SourceRect='0,0,64,32'/>
<ImageFragment Offset='192,320' Source='ui_building_cyro_1_08' SourceRect='0,0,64,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_bio_2'>
<ImageFrame>
<ImageFragment Source='ui_building_cyro_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_building_cyro_2_01' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_cyro_2_02' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_cyro_2_03' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_cyro_2_04' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,320' Source='ui_building_cyro_2_05' SourceRect='0,0,64,32'/>
<ImageFragment Offset='64,320' Source='ui_building_cyro_2_06' SourceRect='0,0,64,32'/>
<ImageFragment Offset='128,320' Source='ui_building_cyro_2_07' SourceRect='0,0,64,32'/>
<ImageFragment Offset='192,320' Source='ui_building_cyro_2_08' SourceRect='0,0,64,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_bio_3'>
<ImageFrame>
<ImageFragment Source='ui_building_cyro_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_building_cyro_3_01' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_cyro_3_02' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_cyro_3_03' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_cyro_3_04' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,320' Source='ui_building_cyro_3_05' SourceRect='0,0,64,32'/>
<ImageFragment Offset='64,320' Source='ui_building_cyro_3_06' SourceRect='0,0,64,32'/>
<ImageFragment Offset='128,320' Source='ui_building_cyro_3_07' SourceRect='0,0,64,32'/>
<ImageFragment Offset='192,320' Source='ui_building_cyro_3_08' SourceRect='0,0,64,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_comm_0'>
<ImageFrame>
<ImageFragment Source='ui_building_comm_0_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_comm_0_01' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,64' Source='ui_building_comm_0_02' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,128' Source='ui_building_comm_0_03' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,192' Source='ui_building_comm_0_04' SourceRect='0,0,32,64'/>
<ImageFragment Offset='0,256' Source='ui_building_comm_0_05' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_comm_0_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_comm_0_07' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_comm_0_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,256' Source='ui_building_comm_0_09' SourceRect='0,0,32,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_comm_1'>
<ImageFrame>
<ImageFragment Source='ui_building_comm_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_comm_1_01' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,64' Source='ui_building_comm_1_02' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,128' Source='ui_building_comm_1_03' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,192' Source='ui_building_comm_1_04' SourceRect='0,0,32,64'/>
<ImageFragment Offset='0,256' Source='ui_building_comm_1_05' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_comm_1_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_comm_1_07' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_comm_1_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,256' Source='ui_building_comm_1_09' SourceRect='0,0,32,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_comm_2'>
<ImageFrame>
<ImageFragment Source='ui_building_comm_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_comm_2_01' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,64' Source='ui_building_comm_2_02' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,128' Source='ui_building_comm_2_03' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,192' Source='ui_building_comm_2_04' SourceRect='0,0,32,64'/>
<ImageFragment Offset='0,256' Source='ui_building_comm_2_05' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_comm_2_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_comm_2_07' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_comm_2_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,256' Source='ui_building_comm_2_09' SourceRect='0,0,32,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_comm_3'>
<ImageFrame>
<ImageFragment Source='ui_building_comm_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_comm_3_01' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,64' Source='ui_building_comm_3_02' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,128' Source='ui_building_comm_3_03' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,192' Source='ui_building_comm_3_04' SourceRect='0,0,32,64'/>
<ImageFragment Offset='0,256' Source='ui_building_comm_3_05' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_comm_3_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_comm_3_07' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_comm_3_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,256' Source='ui_building_comm_3_09' SourceRect='0,0,32,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_comm_4'>
<ImageFrame>
<ImageFragment Source='ui_building_comm_4_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_comm_4_01' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,64' Source='ui_building_comm_4_02' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,128' Source='ui_building_comm_4_03' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,192' Source='ui_building_comm_4_04' SourceRect='0,0,32,64'/>
<ImageFragment Offset='0,256' Source='ui_building_comm_4_05' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,256' Source='ui_building_comm_4_06' SourceRect='0,0,64,64'/>
<ImageFragment Offset='128,256' Source='ui_building_comm_4_07' SourceRect='0,0,64,64'/>
<ImageFragment Offset='192,256' Source='ui_building_comm_4_08' SourceRect='0,0,64,64'/>
<ImageFragment Offset='256,256' Source='ui_building_comm_4_09' SourceRect='0,0,32,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_amp_0'>
<ImageFrame>
<ImageFragment Source='ui_building_amp_0_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_amp_0_01' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,64' Source='ui_building_amp_0_02' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,128' Source='ui_building_amp_0_03' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,192' Source='ui_building_amp_0_04' SourceRect='0,0,32,64'/>
<ImageFragment Offset='0,256' Source='ui_building_amp_0_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_building_amp_0_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_building_amp_0_07' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,320' Source='ui_building_amp_0_08' SourceRect='0,0,32,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_amp_1'>
<ImageFrame>
<ImageFragment Source='ui_building_amp_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_amp_1_01' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,64' Source='ui_building_amp_1_02' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,128' Source='ui_building_amp_1_03' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,192' Source='ui_building_amp_1_04' SourceRect='0,0,32,64'/>
<ImageFragment Offset='0,256' Source='ui_building_amp_1_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_building_amp_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_building_amp_1_07' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,320' Source='ui_building_amp_1_08' SourceRect='0,0,32,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_amp_2'>
<ImageFrame>
<ImageFragment Source='ui_building_amp_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_amp_2_01' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,64' Source='ui_building_amp_2_02' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,128' Source='ui_building_amp_2_03' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,192' Source='ui_building_amp_2_04' SourceRect='0,0,32,64'/>
<ImageFragment Offset='0,256' Source='ui_building_amp_2_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_building_amp_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_building_amp_2_07' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,320' Source='ui_building_amp_2_08' SourceRect='0,0,32,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_amp_3'>
<ImageFrame>
<ImageFragment Source='ui_building_amp_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_amp_3_01' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,64' Source='ui_building_amp_3_02' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,128' Source='ui_building_amp_3_03' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,192' Source='ui_building_amp_3_04' SourceRect='0,0,32,64'/>
<ImageFragment Offset='0,256' Source='ui_building_amp_3_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_building_amp_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_building_amp_3_07' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,320' Source='ui_building_amp_3_08' SourceRect='0,0,32,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map_amp_4'>
<ImageFrame>
<ImageFragment Source='ui_building_amp_4_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_building_amp_4_01' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,64' Source='ui_building_amp_4_02' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,128' Source='ui_building_amp_4_03' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,192' Source='ui_building_amp_4_04' SourceRect='0,0,32,64'/>
<ImageFragment Offset='0,256' Source='ui_building_amp_4_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_building_amp_4_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_building_amp_4_07' SourceRect='0,0,32,64'/>
<ImageFragment Offset='256,320' Source='ui_building_amp_4_08' SourceRect='0,0,32,64'/>
</ImageFrame>
</ImageStyle>
</Namespace>
</Page>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Enabled='false' Location='0,9' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0009/0001' PackSize='1,absolute' PackSizeProp='0002/0003,0012/0001' RStyleDefault='/WindowPanes.RadarBackground.style' ScrollExtent='212,221' Size='212,221' Stretch='false'/>
</Page>
<Page DragAccepts='Divider' DragBadCursor='/Cursors.DividerBad' DragGoodCursor='/Cursors.DividerGood' Location='639,4' MinimumSize='383,180' minsize='383,180' movable='true' Name='Chat' PackLocation='right,top' PackLocationProp='-385/0001,0004/0001' resizable='true' ScrollExtent='383,180' Size='383,180'>
<DataSource Name='Channels'>
<Data id='0' in='true' localtext='[@ChatChannelOpen]' Name='TypeOpen' text='@ChatChannelOpen'/>
<Data id='1' in='true' localtext='[@ChatChannelSquad]' Name='TypeSquad' text='@ChatChannelSquad'/>
<Data id='2' in='true' localtext='[@ChatChannelOutfit]' Name='TypeOutfit' text='@ChatChannelOutfit'/>
<Data id='3' in='true' localtext='[@ChatChannelCommand]' Name='TypeCommand' text='@ChatChannelCommand'/>
<Data id='4' in='true' localtext='[@ChatChannelAlliance]' Name='TypeAlliance' text='@ChatChannelAlliance'/>
</DataSource>
<Page Location='72,29' Name='SendPage' ScrollExtent='100,100' Size='100,100' Visible='false'>
<Listbox DataSource='Channels' Name='SendList' RowTemplate='SendTemplate' ScrollExtent='100,100' Size='100,100' Style='/Listboxes.Pulldown.style'/>
</Page>
<Page Location='152,29' Name='ReceivePage' ScrollExtent='100,100' Size='100,100' Visible='false'>
<Listbox DataSource='Channels' Name='ReceiveList' RowTemplate='ReceiveTemplate' ScrollExtent='120,100' Size='100,100' Style='/Listboxes.Pulldown.style'/>
</Page>
<Template Name='SendTemplate' Size='100,20'>\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'90,20\'\>
$Text$
\</text\></Template>
<Template Name='ReceiveTemplate' Size='120,20'>\<Checkbox backgroundopacity = \'1.0\' checked = \'$in$\' getsinput = \'false\' location = \'5,0\' scrollextent = \'15,20\' size = \'15,20\' style = \'/Buttons.DefaultCheckbox.style\'\>
\</Checkbox\>
\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'25,2\' maxlines = \'1\' size = \'90,20\' textalignment = \'left\'\>
$Text$
\</text\></Template>
<Rectangle Color='#385E61' Cursor='/Cursors.DividerGood' Dragable='true' DragBadCursor='/Cursors.DividerBad' DragGoodCursor='/Cursors.DividerGood' DragType='Divider' Location='15,88' Name='OutputDivider' PackLocation='left,top' PackLocationProp='0015/0001,0088/0001' PackSize='absolute,fixed' PackSizeProp='0037/0001,0002/0003' ScrollExtent='346,1' Size='346,1'/>
<Scrollbar Control='OutputStatus' getsheartbeat='true' Location='358,33' Name='ScrollOutputStatus' PackLocation='right,top' PackLocationProp='-025/0001,0033/0001' ScrollExtent='10,52' Size='10,52' Style='/ScrollBars.vertical.style'/>
<Scrollbar Control='OutputChat' getsheartbeat='true' Location='358,89' Name='ScrollOutputChat' PackLocation='right,top' PackLocationProp='-025/0001,0089/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0122/0001' ScrollExtent='10,58' Size='10,58' Style='/ScrollBars.vertical.style'/>
<Page Location='0,1' Name='ControlPage' PackSize='absolute,1' PackSizeProp='0003/0001,0002/0003' ScrollExtent='380,180' Size='380,180'>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ChatSendTooltip]' Location='72,8' Name='SendCheck' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TitlebarTextButton.checkstyle' Tooltip='@ChatSendTooltip'>@ChatSendText</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ChatReceiveTooltip]' Location='151,8' Name='ReceiveCheck' PackLocation='left,top' PackLocationProp='0151/0001,0008/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TitlebarTextButton.checkstyle' Tooltip='@ChatReceiveTooltip'>@ChatReceiveText</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ChatLFSTooltip]' Location='238,8' Name='LFSCheck' PackLocation='right,top' PackLocationProp='-142/0001,0008/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TitlebarTextButton.checkstyle' Tooltip='@ChatLFSTooltip'>@ChatLFSText</Checkbox>
<TextboxStyle CaratColor='#00F2C9' CaratWidth='2' Name='TextboxStyle' NormalTextStyle='/Fonts.ChatFont' SelectionColor='#444444' TextColor='#FFFFFF' TextPadding='0,6,2,2'/>
<Textbox Location='70,150' MaxLength='127' Name='Input' PackLocation='left,bottom' PackLocationProp='0070/0001,-030/0001' PackSize='absolute,fixed' PackSizeProp='0143/0001,0002/0003' ScrollExtent='237,25' Size='237,25' Style='TextboxStyle'></Textbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@ToggleWindowSizeTooltip]' Location='319,7' Name='ToggleSize' PackLocation='right,top' PackLocationProp='-061/0001,0007/0001' ScrollExtent='9,20' Size='9,20' Style='/Buttons.ActiveItems.checkstyle' Tooltip='@ToggleWindowSizeTooltip'>V</Checkbox>
<Button LocalTooltip='[@MinimizeTooltip]' Location='24,1' Name='Minimize' PackLocation='left,top' PackLocationProp='0024/0001,0001/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='37,30' Size='37,30' Style='/Buttons.HUD_Minimize.style' Tooltip='@MinimizeTooltip'></Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='44,146' Name='InputBar' PackLocation='left,bottom' PackLocationProp='0044/0001,-034/0001' PackSize='absolute,fixed' PackSizeProp='0085/0001,0002/0003' RStyleDefault='/WindowPanes.ChatInputBar.style' ScrollExtent='295,32' Size='295,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='38,0' Name='Title' PackLocation='left,top' PackLocationProp='0038/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0060/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='320,32' Size='320,32'/>
</Page>
<Text AbsorbsInput='false' DragAccepts='Divider' DragBadCursor='/Cursors.DividerBad' DragGoodCursor='/Cursors.DividerGood' Font='/Fonts.ChatFont' GetsInput='false' Location='17,33' minheight='32' Name='OutputStatus' PackSize='absolute,fixed' PackSizeProp='0047/0001,0002/0003' ScrollExtent='336,54' Size='336,54'></Text>
<Text AbsorbsInput='false' DragAccepts='Divider' DragBadCursor='/Cursors.DividerBad' DragGoodCursor='/Cursors.DividerGood' Font='/Fonts.ChatFont' GetsInput='false' Location='17,90' minheight='32' Name='OutputChat' PackLocation='left,top' PackLocationProp='0017/0001,0090/0001' PackSize='absolute,absolute' PackSizeProp='0047/0001,0124/0001' ScrollExtent='336,56' Size='336,56'></Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='0,17' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0017/0001' PackSize='1,absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='383,160' Size='383,160' Stretch='false'/>
</Page>
<Text BackgroundColor='#C0C0C0' Font='/Fonts.DefaultFont' LocalText='Info box' Location='346,212' Name='Info' PackLocation='Proportional, Proportional' PackLocationProp='0512/1024,xxxx/xxxx' ScrollExtent='333,71' ShadowStyle='/Shadows.HudInfo' Size='333,71' TextAlignment='Center' TextColor='#00F2C9'>Info box</Text>
<Page BackgroundColor='#FF0000' BackgroundOpacity='1.000' GetsInput='false' Name='DamageFeedback' Opacity='0.000' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Visible='false'/>
<Page BackgroundColor='#FFFFFF' BackgroundOpacity='1.000' GetsInput='false' Name='GriefFeedback' Opacity='0.000' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Visible='false'/>
<Page Location='384,256' Name='Sniper' PackLocation='center,center' PackLocationProp='-128/0001,-128/0001' ScrollExtent='256,256' Size='256,256' Visible='false'>
<Image Color='#00FF00' Name='Sniper' ScrollExtent='256,256' Size='256,256' SourceRect='0,0,256,256' SourceResource='sniper' Stretch='false' Style='off'/>
</Page>
<Page crosshairtype='ace' defaultcolor='#FFFFFF' enemycolor='#FF0000' friendlycolor='#00FF00' GetsInput='false' Location='262,134' Name='AceCrosshair' PackLocation='Center,Center' PackLocationProp='-250/0001,-250/0001' ScrollExtent='500,500' Size='500,500' Visible='false' visualeditlock='true'>
<Text Font='/SmallFont' LocalText='Valid Deploy Zone' Location='100,112' Name='ID' Opacity='0.500' ScrollExtent='100,12' Size='100,12' Visible='false'>Valid Deploy Zone</Text>
<Ellipse ArcEnd='0.000' Location='234,234' Name='COF' Opacity='0.500' Rotation='0.500' ScrollExtent='32,32' Size='32,32' Thickness='2.000'/>
<Ellipse ArcBegin='0.500' Color='#FF80FF' InnerRadiusColor='#00FF00' Location='229,229' Name='Fade' Opacity='0.010' Rotation='0.500' ScrollExtent='42,42' Size='42,42' Thickness='5.000' Visible='false'/>
<Image Location='234,202' Name='COF_Top' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='34,0,66,32' SourceResource='ui_pistol_crosshair' Visible='false'/>
<Image BackgroundColor='#FFFF80' BackgroundTint='#FFFF80' Location='202,234' Name='COF_Left' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='0,34,32,66' SourceResource='ui_pistol_crosshair' Visible='false'/>
<Image Location='234,234' Name='Reticle' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='0,0,32,32' SourceResource='ui_deploy_crosshair'/>
<Image Location='266,234' Name='COF_Right' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='68,34,100,66' SourceResource='ui_pistol_crosshair' Visible='false'/>
<Image Location='234,265' Name='COF_Bottom' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='34,66,66,100' SourceResource='ui_pistol_crosshair' Visible='false'/>
</Page>
<Page defaultcolor='#FFFFFF' enemycolor='#FF0000' friendlycolor='#00FF00' GetsInput='false' Location='264,134' Name='BaseCrosshair' PackLocation='Center,Center' PackLocationProp='-248/0001,-250/0001' ScrollExtent='500,500' Size='500,500' Visible='false' visualeditlock='true'>
<Text Font='/SmallFont' LocalText='Base Crosshair' Location='100,100' Name='ID' Opacity='0.500' ScrollExtent='100,12' Size='100,12' Visible='false'>Base Crosshair</Text>
<Text Color='#FFFF00' Font='/SmallFont' LocalText='Targeted Object Name



































Targeted Object Name



































' Location='100,312' Name='TargettedObjectName' ScrollExtent='300,852' Size='300,40' TextAlignment='Center' Visible='false'>Targeted Object Name



































Targeted Object Name



































</Text>
<Progressbar Location='150,339' Name='TaskProgress' Progress='0.400' ScrollExtent='200,16' Size='200,16' Style='/ProgressBars.ActionProgress.style' Visible='false'/>
<Text Font='/SmallFont' LocalText='Zoom 4x' Location='237,289' Name='Zoom' Opacity='0.000' ScrollExtent='73,12' Size='73,12' TextAlignment='Right'>Zoom 4x</Text>
</Page>
<Page defaultcolor='#FFFFFF' enemycolor='#FF0000' friendlycolor='#00FF00' GetsInput='false' Location='262,134' Name='DefaultCrosshair' PackLocation='Center,Center' PackLocationProp='-250/0001,-250/0001' ScrollExtent='500,500' Size='500,500' Visible='false' visualeditlock='true'>
<Text Font='/SmallFont' LocalText='Default Crosshair' Location='100,112' Name='ID' Opacity='0.500' ScrollExtent='100,12' Size='100,12' Visible='false'>Default Crosshair</Text>
<Ellipse Color='#00FF00' Location='233,234' Name='COF' Opacity='0.400' ScrollExtent='32,32' Size='32,32'/>
<Image LocalTooltip='0,0,32,32' Location='202,202' Name='COF_TopLeft' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='0,0,32,32' SourceResource='ui_pistol_crosshair' Stretch='false' Tooltip='0,0,32,32' TooltipStyle='ui_pistolcrosshair'/>
<Image Location='234,202' Name='COF_Top' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='34,0,66,32' SourceResource='ui_pistol_crosshair'/>
<Image Location='266,202' Name='COF_TopRight' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='68,0,100,32' SourceResource='ui_pistol_crosshair' Stretch='false'/>
<Image Location='202,234' Name='COF_Left' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='0,34,32,66' SourceResource='ui_pistol_crosshair'/>
<Image Location='234,234' Name='Reticle' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='34,34,66,66' SourceResource='ui_pistol_crosshair' Visible='false'/>
<Image Location='266,234' Name='COF_Right' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='68,34,100,66' SourceResource='ui_pistol_crosshair'/>
<Image Location='202,265' Name='COF_BottomLeft' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='0,66,32,100' SourceResource='ui_pistol_crosshair'/>
<Image Location='234,265' Name='COF_Bottom' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='34,66,66,100' SourceResource='ui_pistol_crosshair'/>
<Image Location='266,265' Name='COF_BottomRight' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='68,66,100,100' SourceResource='ui_pistol_crosshair'/>
</Page>
<Page BackgroundColor='#FFFFFF' crosshairtype='dumbfire_missile' defaultcolor='#FFFFFF' enemycolor='#FF0000' friendlycolor='#00FF00' GetsInput='false' Location='262,134' Name='DumbFireCrosshair' PackLocation='Center,Center' PackLocationProp='-250/0001,-250/0001' ScrollExtent='500,500' Size='500,500' Visible='false' visualeditlock='true'>
<Image Location='214,214' Name='Reticle' Opacity='0.500' ScrollExtent='64,64' Size='64,64' SourceResource='ui_crosshair_missile_dumbfire'/>
<Text Font='/SmallFont' LocalText='Rifle Crosshair' Location='100,112' Name='ID' Opacity='0.500' ScrollExtent='100,12' Size='100,12' Visible='false'>Rifle Crosshair</Text>
<Ellipse ArcBegin='0.813' ArcEnd='0.937' GetsInput='false' InnerRadiusOpacity='0.250' Location='240,240' Name='COF_TopRight' Opacity='0.750' ScrollExtent='25,25' Size='25,25' Thickness='10.000'/>
<Ellipse ArcBegin='0.063' ArcEnd='0.188' GetsInput='false' InnerRadiusOpacity='0.250' Location='240,240' Name='COF_BottomRight' Opacity='0.750' ScrollExtent='25,25' Size='25,25' Thickness='10.000'/>
<Ellipse ArcBegin='0.313' ArcEnd='0.438' GetsInput='false' InnerRadiusOpacity='0.250' Location='240,240' Name='COF_BottomLeft' Opacity='0.750' ScrollExtent='25,25' Size='25,25' Thickness='10.000'/>
<Ellipse ArcBegin='0.563' ArcEnd='0.688' GetsInput='false' InnerRadiusOpacity='0.250' Location='240,240' Name='COF_TopLeft' Opacity='0.750' ScrollExtent='25,25' Size='25,25' Thickness='10.000'/>
</Page>
<Page BackgroundColor='#FFFFFF' crosshairtype='guided_missile' defaultcolor='#FFFFFF' enemycolor='#FF0000' friendlycolor='#00FF00' GetsInput='false' Location='262,134' Name='GuidedMissileCrosshair' PackLocation='Center,Center' PackLocationProp='-250/0001,-250/0001' ScrollExtent='500,500' Size='500,500' Visible='false' visualeditlock='true'>
<Image Location='214,214' Name='Reticle' Opacity='0.500' ScrollExtent='73,73' Size='73,73' SourceResource='ui_crosshair_missile_guided'/>
<Text Font='/SmallFont' LocalText='Rifle Crosshair' Location='100,112' Name='ID' Opacity='0.500' ScrollExtent='100,12' Size='100,12' Visible='false'>Rifle Crosshair</Text>
<Ellipse ArcBegin='0.790' ArcEnd='0.960' GetsInput='false' Location='240,240' Name='COF_TopRight' ScrollExtent='25,25' Size='25,25' Thickness='10.000'/>
<Ellipse ArcBegin='0.040' ArcEnd='0.210' GetsInput='false' Location='240,240' Name='COF_BottomRight' ScrollExtent='25,25' Size='25,25' Thickness='10.000'/>
<Ellipse ArcBegin='0.290' ArcEnd='0.460' GetsInput='false' Location='240,240' Name='COF_BottomLeft' ScrollExtent='25,25' Size='25,25' Thickness='10.000'/>
<Ellipse ArcBegin='0.540' ArcEnd='0.710' GetsInput='false' Location='240,240' Name='COF_TopLeft' ScrollExtent='25,25' Size='25,25' Thickness='10.000'/>
</Page>
<Page BackgroundColor='#FFFFFF' crosshairtype='pistol' defaultcolor='#FFFFFF' enemycolor='#FF0000' friendlycolor='#00FF00' GetsInput='false' Location='262,134' Name='PistolCrosshair' PackLocation='Center,Center' PackLocationProp='-250/0001,-250/0001' ScrollExtent='500,500' Size='500,500' Visible='false' visualeditlock='true'>
<Ellipse InnerRadiusOpacity='0.500' Location='240,240' MinimumSize='25,25' Name='Reticle' Opacity='0.500' ScrollExtent='25,25' Size='25,25' Thickness='3.000'/>
<Ellipse ArcBegin='0.438' ArcEnd='0.563' InnerRadiusOpacity='0.500' Location='240,240' MinimumSize='25,25' Name='ReticleLeft' Opacity='0.500' ScrollExtent='25,25' Size='25,25' Thickness='7.000'/>
<Ellipse ArcBegin='-0.063' ArcEnd='0.063' InnerRadiusOpacity='0.500' Location='240,240' MinimumSize='25,25' Name='ReticleRight' Opacity='0.500' ScrollExtent='25,25' Size='25,25' Thickness='7.000'/>
<Text Font='/SmallFont' LocalText='Rifle Crosshair' Location='100,112' Name='ID' Opacity='0.500' ScrollExtent='100,12' Size='100,12' Visible='false'>Rifle Crosshair</Text>
<Ellipse ArcBegin='0.813' ArcEnd='0.937' GetsInput='false' Location='240,240' Name='COF_TopRight' Opacity='0.900' ScrollExtent='25,25' Size='25,25' Thickness='5.000'/>
<Ellipse ArcBegin='0.063' ArcEnd='0.188' GetsInput='false' Location='240,240' Name='COF_BottomRight' Opacity='0.900' ScrollExtent='25,25' Size='25,25' Thickness='5.000'/>
<Ellipse ArcBegin='0.313' ArcEnd='0.438' GetsInput='false' Location='240,240' Name='COF_BottomLeft' Opacity='0.900' ScrollExtent='25,25' Size='25,25' Thickness='5.000'/>
<Ellipse ArcBegin='0.563' ArcEnd='0.688' GetsInput='false' Location='240,240' Name='COF_TopLeft' Opacity='0.900' ScrollExtent='25,25' Size='25,25' Thickness='5.000'/>
<Ellipse ArcEnd='1.001' InnerRadiusOpacity='0.500' Location='240,240' Name='COF' Opacity='0.750' ScrollExtent='25,25' Size='25,25' Thickness='2.500'/>
</Page>
<Page crosshairtype='pistol' defaultcolor='#FFFFFF' enemycolor='#FF0000' friendlycolor='#00FF00' GetsInput='false' Location='260,134' Name='PistolCrosshairOld' PackLocation='Center,Center' PackLocationProp='-252/0001,-250/0001' ScrollExtent='500,500' Size='500,500' Visible='false' visualeditlock='true'>
<Text Font='/SmallFont' LocalText='Pistol Crosshair' Location='100,112' Name='ID' Opacity='0.500' ScrollExtent='72,12' Size='72,12'>Pistol Crosshair</Text>
<Ellipse ArcEnd='1.001' Color='#00FF00' InnerRadiusColor='#00FF00' Location='238,238' Name='COF' Rotation='0.500' ScrollExtent='29,29' Size='29,29' Thickness='5.000'/>
<Ellipse ArcEnd='1.001' Color='#00FF00' InnerRadiusColor='#00FF00' Location='238,238' Name='Fade' Opacity='0.010' Rotation='0.500' ScrollExtent='29,29' Size='29,29' Thickness='5.000'/>
<Image Location='205,204' Name='Reticle' Opacity='0.500' ScrollExtent='95,95' Size='95,95' SourceRect='0,0,64,64' SourceResource='ui_circle_alpha_fade'/>
<Ellipse ArcEnd='1.001' Color='#00FF00' InnerRadiusColor='#00FF00' Location='211,210' Name='Outer' Rotation='0.500' ScrollExtent='85,85' Size='85,85' Thickness='2.000'/>
<Ellipse ArcBegin='0.315' ArcEnd='0.435' Color='#00FF00' InnerRadiusColor='#00FF00' Location='236,235' Name='COFa' Rotation='0.500' ScrollExtent='32,32' Size='32,32' Thickness='7.000'/>
<Ellipse ArcBegin='0.565' ArcEnd='0.685' Color='#00FF00' InnerRadiusColor='#00FF00' Location='236,235' Name='COFb' Rotation='0.500' ScrollExtent='32,32' Size='32,32' Thickness='7.000'/>
<Ellipse ArcBegin='0.815' ArcEnd='0.935' Color='#00FF00' InnerRadiusColor='#00FF00' Location='236,235' Name='COFc' Rotation='0.500' ScrollExtent='32,32' Size='32,32' Thickness='7.000'/>
<Ellipse ArcBegin='0.065' ArcEnd='0.195' Color='#00FF00' InnerRadiusColor='#00FF00' Location='236,235' Name='COFd' Rotation='0.500' ScrollExtent='32,32' Size='32,32' Thickness='7.000'/>
</Page>
<Page crosshairtype='pistol_vanu' defaultcolor='#FFFFFF' enemycolor='#FF0000' friendlycolor='#00FF00' GetsInput='false' Location='261,135' Name='PistolVanuCrosshair' PackLocation='Center,Center' PackLocationProp='-251/0001,-249/0001' ScrollExtent='500,500' Size='500,500' Visible='false' visualeditlock='true'>
<Image Location='235,235' Name='COF_TopLeft' ScrollExtent='8,8' Size='8,8' SourceResource='ui_crosshair_vanu_pistol_tick'/>
<Image Location='259,235' Name='COF_TopRight' Rotation='0.500' ScrollExtent='8,8' Size='8,8' SourceRect='0,32,32,0' SourceResource='ui_crosshair_vanu_pistol_tick'/>
<Image Location='235,258' Name='COF_BottomLeft' ScrollExtent='8,8' Size='8,8' SourceRect='0,32,32,0' SourceResource='ui_crosshair_vanu_pistol_tick'/>
<Image Location='259,258' Name='COF_BottomRight' Rotation='0.500' ScrollExtent='8,8' Size='8,8' SourceResource='ui_crosshair_vanu_pistol_tick'/>
<Image Location='219,218' Name='Reticle' Opacity='0.750' ScrollExtent='64,64' Size='64,64' SourceResource='ui_crosshair_vanu_pistol'/>
<Text Font='/SmallFont' LocalText='Rifle Crosshair' Location='100,112' Name='ID' Opacity='0.500' ScrollExtent='100,12' Size='100,12' Visible='false'>Rifle Crosshair</Text>
</Page>
<Page BackgroundColor='#FFFFFF' crosshairtype='rek' defaultcolor='#FFFFFF' enemycolor='#FF0000' friendlycolor='#00FF00' GetsInput='false' Location='262,134' Name='REKCrosshair' PackLocation='Center,Center' PackLocationProp='-250/0001,-250/0001' ScrollExtent='500,500' Size='500,500' Visible='false' visualeditlock='true'>
<Ellipse InnerRadiusOpacity='0.500' Location='240,240' MinimumSize='25,25' Name='Reticle' Opacity='0.500' ScrollExtent='25,25' Size='25,25' Thickness='4.000'/>
<Ellipse ArcBegin='0.400' ArcEnd='0.600' InnerRadiusOpacity='0.250' Location='240,240' MinimumSize='25,25' Name='ReticleLeft' Opacity='0.500' ScrollExtent='25,25' Size='25,25' Thickness='10.000'/>
<Ellipse ArcBegin='-0.100' ArcEnd='0.100' InnerRadiusOpacity='0.250' Location='240,240' MinimumSize='25,25' Name='ReticleRight' Opacity='0.500' ScrollExtent='25,25' Size='25,25' Thickness='10.000'/>
<Text Font='/SmallFont' LocalText='Rifle Crosshair' Location='100,112' Name='ID' Opacity='0.500' ScrollExtent='100,12' Size='100,12' Visible='false'>Rifle Crosshair</Text>
</Page>
<Page BackgroundColor='#FFFFFF' crosshairtype='rifle' defaultcolor='#FFFFFF' enemycolor='#FF0000' friendlycolor='#00FF00' GetsInput='false' Location='262,134' Name='RifleCrosshair' PackLocation='Center,Center' PackLocationProp='-250/0001,-250/0001' ScrollExtent='500,500' Size='500,500' Visible='false' visualeditlock='true'>
<Ellipse InnerRadiusOpacity='0.500' Location='240,240' MinimumSize='25,25' Name='Reticle' Opacity='0.500' ScrollExtent='25,25' Size='25,25' Thickness='1.000' Visible='false'/>
<Text Font='/SmallFont' LocalText='Rifle Crosshair' Location='100,112' Name='ID' Opacity='0.500' ScrollExtent='100,12' Size='100,12' Visible='false'>Rifle Crosshair</Text>
<Ellipse ArcBegin='0.813' ArcEnd='0.937' GetsInput='false' Location='240,240' Name='COF_TopRight' ScrollExtent='25,25' Size='25,25' Thickness='10.000'/>
<Ellipse ArcBegin='0.063' ArcEnd='0.188' GetsInput='false' Location='240,240' Name='COF_BottomRight' ScrollExtent='25,25' Size='25,25' Thickness='10.000'/>
<Ellipse ArcBegin='0.313' ArcEnd='0.438' GetsInput='false' Location='240,240' Name='COF_BottomLeft' ScrollExtent='25,25' Size='25,25' Thickness='10.000'/>
<Ellipse ArcBegin='0.563' ArcEnd='0.688' GetsInput='false' Location='240,240' Name='COF_TopLeft' ScrollExtent='25,25' Size='25,25' Thickness='10.000'/>
<Ellipse ArcEnd='1.001' InnerRadiusOpacity='0.500' Location='240,240' Name='COF' Opacity='0.500' ScrollExtent='25,25' Size='25,25' Thickness='3.500' Visible='false'/>
</Page>
<Page crosshairtype='rifle_vanu' defaultcolor='#FFFFFF' enemycolor='#FF0000' friendlycolor='#00FF00' GetsInput='false' Location='261,135' Name='RifleVanuCrosshair' PackLocation='Center,Center' PackLocationProp='-251/0001,-249/0001' ScrollExtent='500,500' Size='500,500' Visible='false' visualeditlock='true'>
<Image Location='235,247' Name='COF_Left' ScrollExtent='8,8' Size='8,8' SourceResource='ui_crosshair_vanu_rifle_tick'/>
<Image Location='259,247' Name='COF_Right' Rotation='0.500' ScrollExtent='8,8' Size='8,8' SourceResource='ui_crosshair_vanu_rifle_tick'/>
<Image Location='247,236' Name='COF_Top' Rotation='0.250' ScrollExtent='8,8' Size='8,8' SourceResource='ui_crosshair_vanu_rifle_tick'/>
<Image Location='247,258' Name='COF_Bottom' Rotation='0.750' ScrollExtent='8,8' Size='8,8' SourceResource='ui_crosshair_vanu_rifle_tick'/>
<Image Location='218,218' Name='Reticle' Opacity='0.500' ScrollExtent='64,64' Size='64,64' SourceResource='ui_crosshair_vanu_rifle'/>
<Text Font='/SmallFont' LocalText='Rifle Crosshair' Location='100,112' Name='ID' Opacity='0.500' ScrollExtent='100,12' Size='100,12' Visible='false'>Rifle Crosshair</Text>
</Page>
<Page defaultcolor='#FFFFFF' enemycolor='#FF0000' friendlycolor='#00FF00' GetsInput='false' Location='362,234' Name='MiniGunCrosshair' PackLocation='Center,Center' PackLocationProp='-150/0001,-150/0001' ScrollExtent='300,300' Size='300,300' Visible='false'>
<Text Font='/SmallFont' LocalText='Minigun Crosshair' Location='0,24' Name='ID' Opacity='0.500' ScrollExtent='100,12' Size='100,12' Visible='false'>Minigun Crosshair</Text>
<Ellipse Color='#00FF00' Location='133,134' Name='COF' Opacity='0.400' ScrollExtent='32,32' Size='32,32'/>
<Image LocalTooltip='0,0,32,32' Location='102,102' Name='COF_TopLeft' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='0,0,32,32' SourceResource='ui_pistol_crosshair' Stretch='false' Tooltip='0,0,32,32' TooltipStyle='ui_pistolcrosshair'/>
<Image Location='134,102' Name='COF_Top' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='34,0,66,32' SourceResource='ui_pistol_crosshair'/>
<Image Location='166,102' Name='COF_TopRight' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='68,0,100,32' SourceResource='ui_pistol_crosshair' Stretch='false'/>
<Image Location='102,134' Name='COF_Left' Opacity='0.500' ScrollExtent='32,32' Size='32,32' Style='DefaultCrosshair.COF_LeftGraphic'/>
<Image Location='134,134' Name='Reticle' Opacity='0.500' ScrollExtent='32,32' Size='32,32' Style='DefaultCrosshair.COF_ReticuleGraphic' Visible='false'/>
<Image Location='166,134' Name='COF_Right' Opacity='0.500' ScrollExtent='32,32' Size='32,32' Style='DefaultCrosshair.COF_RightGraphic'/>
<Image Location='102,165' Name='COF_BottomLeft' Opacity='0.500' ScrollExtent='32,32' Size='32,32' Style='DefaultCrosshair.COF_BottomLeftGraphic'/>
<Image Location='134,165' Name='COF_Bottom' Opacity='0.500' ScrollExtent='32,32' Size='32,32' Style='DefaultCrosshair.COF_BottomGraphic'/>
<Image Location='166,165' Name='COF_BottomRight' Opacity='0.500' ScrollExtent='32,32' Size='32,32' Style='DefaultCrosshair.COF_BottomRightGraphic'/>
</Page>
<Page defaultcolor='#FF0000' enemycolor='#00FF00' friendlycolor='#00FFFF' GetsInput='false' Location='262,134' Name='TestCrosshair' PackLocation='Center,Center' PackLocationProp='-250/0001,-250/0001' ScrollExtent='500,500' Size='500,500' Visible='false'>
<Text Font='/SmallFont' LocalText='Test Crosshair' Location='100,112' Name='ID' Opacity='0.500' ScrollExtent='100,12' Size='100,12' Visible='false'>Test Crosshair</Text>
<Ellipse Color='#FF0000' Location='233,234' Name='COF' Opacity='0.400' ScrollExtent='32,32' Size='32,32'/>
<Image Color='#FF0000' LocalTooltip='0,0,32,32' Location='202,202' Name='COF_TopLeft' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='0,0,32,32' SourceResource='ui_pistol_crosshair_test' Stretch='false' Tooltip='0,0,32,32' TooltipStyle='ui_pistolcrosshair'/>
<Image Color='#FF0000' Location='234,202' Name='COF_Top' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='34,0,66,32' SourceResource='ui_pistol_crosshair_test'/>
<Image Color='#FF0000' Location='266,202' Name='COF_TopRight' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='68,0,100,32' SourceResource='ui_pistol_crosshair_test' Stretch='false'/>
<Image Color='#FF0000' Location='202,234' Name='COF_Left' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='0,34,32,66' SourceResource='ui_pistol_crosshair_test'/>
<Image Color='#FF0000' Location='234,234' Name='Reticle' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='34,34,66,66' SourceResource='ui_pistol_crosshair_test' Visible='false'/>
<Image Color='#FF0000' Location='266,234' Name='COF_Right' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='68,34,100,66' SourceResource='ui_pistol_crosshair_test'/>
<Image Color='#FF0000' Location='202,265' Name='COF_BottomLeft' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='0,66,32,100' SourceResource='ui_pistol_crosshair_test'/>
<Image Color='#FF0000' Location='234,265' Name='COF_Bottom' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='34,66,66,100' SourceResource='ui_pistol_crosshair_test'/>
<Image Color='#FF0000' Location='266,265' Name='COF_BottomRight' Opacity='0.500' ScrollExtent='32,32' Size='32,32' SourceRect='68,66,100,100' SourceResource='ui_pistol_crosshair_test'/>
<Image Color='#FF0000' Location='232,234' Name='AutolockTracker' ScrollExtent='16,16' Size='16,16' SourceRect='0,0,16,16' SourceResource='ui_autolocktracker' Stretch='false' Visible='false'/>
<Text Color='#FFFF00' Font='/SmallFont' LocalText='0000' Location='217,110' Name='AutolockCountdownText' ScrollExtent='30,12' Size='30,12' TextAlignment='Right' Visible='false'>0000</Text>
<Image Color='#FF0000' Location='245,112' Name='AutolockArrow' ScrollExtent='8,7' Size='8,7' SourceResource='ui_autolock_arrow' Stretch='false' Visible='false'/>
<Image Color='#FF0000' Location='122,122' Name='Autolock' Opacity='0.500' ScrollExtent='256,256' Size='256,256' SourceRect='0,0,256,256' SourceResource='ui_autolock' Visible='false'/>
</Page>
<Page defaultcolor='#000000' enemycolor='#00FF00' friendlycolor='#00FFFF' GetsInput='false' Location='262,134' Name='UnarmedCrosshair' PackLocation='Center,Center' PackLocationProp='-250/0001,-250/0001' ScrollExtent='500,500' Size='500,500' Visible='false'>
<Rectangle Location='250,243' ScrollExtent='1,15' Size='1,15'/>
<Rectangle Location='243,250' ScrollExtent='15,1' Size='15,1'/>
</Page>
<Page LocalTooltip='bob' Location='552,332' movable='true' Name='Altimeter' Opacity='0.500' PackLocation='center,center' PackLocationProp='0040/0001,-052/0001' ScrollExtent='29,124' Size='29,124' Tooltip='bob' Visible='false'>
<Image AbsorbsInput='false' Location='0,6' Name='Top' PackLocation='left,top' PackLocationProp='0000/0001,0006/0001' ScrollExtent='11,6' Size='11,6' Stretch='false' Style='TopStyle'/>
<Image AbsorbsInput='false' Location='0,11' Name='Ruler0' ScrollExtent='5,21' Size='5,21' Style='RulerStyle'/>
<Image AbsorbsInput='false' Location='0,31' Name='Ruler1' ScrollExtent='5,21' Size='5,21' Style='RulerStyle'/>
<Image AbsorbsInput='false' Location='0,51' Name='Ruler2' ScrollExtent='5,21' Size='5,21' Style='RulerStyle'/>
<Image AbsorbsInput='false' Location='0,71' Name='Ruler3' ScrollExtent='5,21' Size='5,21' Style='RulerStyle'/>
<Image AbsorbsInput='false' Location='0,91' Name='Ruler4' ScrollExtent='5,21' Size='5,21' Style='RulerStyle'/>
<Image AbsorbsInput='false' Location='0,112' Name='Bottom' ScrollExtent='10,5' Size='10,5' Stretch='false' Style='BottomStyle'/>
<Image AbsorbsInput='false' Location='13,108' Name='Marker' ScrollExtent='15,16' Size='15,16' Stretch='false' Style='MarkerStyle'/>
<ImageStyle Name='MarkerStyle'>
<ImageFrame Source='ui_HUD_altimeter_00' SourceRect='12,0,26,15'/>
</ImageStyle>
<ImageStyle Name='TopStyle'>
<ImageFrame Source='ui_HUD_altimeter_00' SourceRect='0,0,11,5'/>
</ImageStyle>
<ImageStyle Name='BottomStyle'>
<ImageFrame Source='ui_HUD_altimeter_00' SourceRect='0,27,11,32'/>
</ImageStyle>
<ImageStyle Name='RulerStyle'>
<ImageFrame Source='ui_HUD_altimeter_00' SourceRect='0,6,5,26'/>
</ImageStyle>
</Page>
<Page Name='Label Layer' PackSize='Proportional,Proportional' PackSizeProp='1024/1024,0768/0768' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Text Font='/SmallFont' Name='PlayerLabel'></Text>
</Page>
<Progressbar BackgroundColor='#425063' BackgroundOpacity='1.000' BarBackgroundColor='#0099C5' Color='#777777' Location='260,287' Name='Hack' PackLocation='Center,Center' PackLocationProp='-252/0001,-097/0001' Progress='0.500' ScrollExtent='504,30' Size='504,30' Style='/ProgressBars.HUD.Style' TooltipStyle='/Fonts.DefaultFont' Visible='false'/>
<Page AbsorbsInput='false' Location='259,251' Name='VehicleOxygen' PackLocation='Center,Center' PackLocationProp='-253/0001,-133/0001' ScrollExtent='506,100' Size='506,100' Visible='false'>
<Text AbsorbsInput='false' Color='#0000FF' Font='/Fonts.HudFont3' LocalText='Information about progress' Location='29,25' Name='VehicleOxygenText' ScrollExtent='400,21' Size='400,21'>Information about progress</Text>
<Progressbar AbsorbsInput='false' BarBackgroundColor='#0000FF' Color='#777777' Location='29,54' Name='VehicleOxygenBar' Progress='0.330' ScrollExtent='447,13' Size='447,13' Style='/ProgressBars.Oxygen.style' TooltipStyle='/Fonts.DefaultFont'/>
</Page>
<Page AbsorbsInput='false' Location='259,251' Name='AvatarOxygen' PackLocation='Center,Center' PackLocationProp='-253/0001,-133/0001' ScrollExtent='506,100' Size='506,100' Visible='false'>
<Text AbsorbsInput='false' Color='#FF0000' Font='/Fonts.HudFont3' LocalText='Information about progress' Location='76,25' Name='AvatarOxygenText' ScrollExtent='400,21' Size='400,21' TextAlignment='Right'>Information about progress</Text>
<Progressbar AbsorbsInput='false' BarBackgroundColor='#FF0000' Color='#777777' Location='29,54' Name='AvatarOxygenBar' Progress='0.700' ScrollExtent='447,13' Size='447,13' Style='/ProgressBars.Oxygen.style' TooltipStyle='/Fonts.DefaultFont'/>
</Page>
<Page AbsorbsInput='false' Location='259,251' Name='OxygenBackground' PackLocation='Center,Center' PackLocationProp='-253/0001,-133/0001' ScrollExtent='506,100' Size='506,100' Visible='false'>
<Progressbar AbsorbsInput='false' BarBackgroundColor='#000000' Color='#777777' Location='29,54' Name='VehicleOxygenBar' ScrollExtent='447,13' Size='447,13' Style='/ProgressBars.Health.style' TooltipStyle='/Fonts.DefaultFont'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='style' ScrollExtent='506,100' Size='506,100' Stretch='false'/>
</Page>
<Page Location='0,716' movable='true' Name='ActiveItems' PackLocation='Left,Bottom' PackLocationProp='0000/0001,-052/0001' PackSize='1,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,50' Size='1024,50'>
<Page BackgroundColor='#11FFFF' Location='3,4' Name='ControlMap' PackLocation='left,top' PackLocationProp='0003/0001,0004/0001' ScrollExtent='39,42' Size='39,42'>
<Button BackgroundColor='#FFFFFF' LocalText=')' LocalTooltip='[@MaximizeRadarTooltip]' Name='Radar' RStyleDefault=' ' ScrollExtent='39,20' Size='39,20' Style='/Buttons.IconButton.style' Tooltip='@MaximizeRadarTooltip'>)</Button>
<Button BackgroundColor='#FFFFFF' LocalText='t' LocalTooltip='[@MaximizeChatTooltip]' Location='0,22' Name='Chat' RStyleDefault=' ' ScrollExtent='39,20' Size='39,20' Style='/Buttons.IconButton.style' Tooltip='@MaximizeChatTooltip'>t</Button>
</Page>
<Page Location='265,4' MaximumSize='113,34' MinimumSize='63,34' Name='VehicleStatus' Opacity='0.800' ScrollExtent='113,34' Size='113,34' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/SmallFont' LocalText='[@VehicleStatus]' Location='6,18' Name='StatusLabel' PackSize='absolute,fixed' PackSizeProp='0013/0001,0002/0003' ScrollExtent='100,12' Size='100,12' TextAlignment='Center'>@VehicleStatus</Text>
<Progressbar AbsorbsInput='false' BackgroundColor='#858585' BarBackgroundColor='#FF0000' LocalTooltip='[@HeavyTimerTooltip]' Location='6,5' Name='Status' Progress='1.000' ScrollExtent='100,13' Size='100,13' Style='/ProgressBars.Health.style' Tooltip='@HeavyTimerTooltip'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Border' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.ActiveItem.style' ScrollExtent='113,34' Size='113,34'/>
</Page>
<Page Location='16,6' MaximumSize='171,40' MinimumSize='71,40' Name='Vehicle' ScrollExtent='171,40' Size='171,40' Visible='false'>
<Page MaximumSize='100,60' MinimumSize='50,40' Name='StatusPage' PackSize='absolute,fixed' PackSizeProp='0071/0001,0002/0003' ScrollExtent='100,40' Size='100,40'>
<Text AbsorbsInput='false' Enabled='false' Font='/SmallFont' LocalText='[@VehicleStatus]' Location='0,6' Name='StatusLabel' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='100,12' Size='100,12' TextAlignment='Center'>@VehicleStatus</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/SmallFont' LocalText='[@ResourceStatus]' Location='0,22' Name='ResourceLabel' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='100,12' Size='100,12' TextAlignment='Center'>@ResourceStatus</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/SmallFont' LocalText='[@AfterburnerStatus]' Location='0,22' Name='AfterburnerLabel' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='100,12' Size='100,12' TextAlignment='Center'>@AfterburnerStatus</Text>
<Progressbar AbsorbsInput='false' BackgroundColor='#858585' BarBackgroundColor='#FF0000' LocalTooltip='[@ActiveWeaponVehicleStatusTooltip]' Location='0,6' Name='Status' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' Progress='1.000' ScrollExtent='100,12' Size='100,12' Style='/ProgressBars.Health.style' Tooltip='@ActiveWeaponVehicleStatusTooltip'/>
<Progressbar AbsorbsInput='false' BackgroundColor='#858585' LocalTooltip='[@ActiveWeaponVehicleResourceTooltip]' Location='0,22' Name='Resource' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' Progress='0.500' ScrollExtent='100,12' Size='100,12' Style='/ProgressBars.Health.style' Tooltip='@ActiveWeaponVehicleResourceTooltip'/>
<Progressbar AbsorbsInput='false' BackgroundColor='#858585' BarBackgroundColor='#00F2C9' LocalTooltip='[@ActiveWeaponAfterburnerTooltip]' Location='0,22' Name='AfterburnerBar' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' Progress='1.000' ScrollExtent='100,12' Size='100,12' Style='/ProgressBars.Health.style' Tooltip='@ActiveWeaponAfterburnerTooltip'/>
</Page>
<Page LocalTooltip='Bob' Location='103,0' movable='true' Name='Speedometer' PackLocation='right,top' PackLocationProp='-068/0001,0000/0001' ScrollExtent='67,40' Size='67,40' Tooltip='Bob'>
<Text AbsorbsInput='false' Color='#F2F2F2' Font='/Fonts.HudFont3' LocalText='90%' LocalTooltip='[@ActiveWeaponSpeedometerTooltip]' Location='0,21' Name='Speed' ScrollExtent='65,20' Size='65,20' TextAlignment='Center' Tooltip='@ActiveWeaponSpeedometerTooltip'>90%</Text>
<Image AbsorbsInput='false' Color='#00F2C9' Name='CruiseMarker' ScrollExtent='65,16' Size='65,16' Stretch='false' Style='CruiseMarkerStyle'/>
<Image AbsorbsInput='false' Color='#00F2C9' Name='ForwardIndicator' ScrollExtent='65,16' Size='65,16' Stretch='false' Style='ForwardStyle'/>
<Image AbsorbsInput='false' Color='#DE4E4E' Name='ReverseIndicator' ScrollExtent='65,16' Size='65,16' Stretch='false' Style='ReverseStyle'/>
<ImageStyle Name='CruiseMarkerStyle'>
<ImageFrame SourceRect='0,16,65,32'>
<ImageFragment Source='ui_hud_activeitem_speedometer_00' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,0' Source='ui_hud_activeitem_speedometer_01' SourceRect='0,0,32,32'/>
<ImageFragment Offset='64,32' Source='ui_hud_activeitem_speedometer_02' SourceRect='0,0,32,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='ForwardStyle'>
<ImageFrame SourceRect='0,0,65,16'>
<ImageFragment Source='ui_hud_activeitem_speedometer_00' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,0' Source='ui_hud_activeitem_speedometer_01' SourceRect='0,0,32,32'/>
<ImageFragment Offset='64,32' Source='ui_hud_activeitem_speedometer_02' SourceRect='0,0,32,32'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='ReverseStyle'>
<ImageFrame SourceRect='0,32,65,48'>
<ImageFragment Source='ui_hud_activeitem_speedometer_00' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,0' Source='ui_hud_activeitem_speedometer_01' SourceRect='0,0,32,32'/>
<ImageFragment Offset='64,32' Source='ui_hud_activeitem_speedometer_02' SourceRect='0,0,32,32'/>
</ImageFrame>
</ImageStyle>
</Page>
</Page>
<Page Location='265,4' Name='HeavyPage' Opacity='0.800' ScrollExtent='113,34' Size='113,34' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/SmallFont' LocalText='[@MaxCapacitor]' Location='6,18' Name='StatusLabel' PackSize='absolute,fixed' PackSizeProp='0013/0001,0002/0003' ScrollExtent='100,12' Size='100,12' TextAlignment='Center'>@MaxCapacitor</Text>
<Progressbar AbsorbsInput='false' BackgroundColor='#858585' BarBackgroundColor='#00F2C9' LocalTooltip='[@HeavyTimerTooltip]' Location='6,5' Name='Armor' Progress='1.000' ScrollExtent='100,13' Size='100,13' Style='/ProgressBars.Health.style' Tooltip='@HeavyTimerTooltip'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Border' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.ActiveItem.style' ScrollExtent='113,34' Size='113,34'/>
</Page>
<Page Location='43,6' MaximumSize='109,40' MinimumSize='59,40' movable='false' Name='SoldierStatus' PackLocation='right,top' PackLocationProp='-981/0001,0006/0001' ScrollExtent='109,40' Size='109,40'>
<Text AbsorbsInput='false' Enabled='false' Font='/SmallFont' LocalText='100/100' Location='38,0' Name='HealthText' PackLocation='center,center' PackLocationProp='-016/0001,-020/0001' ScrollExtent='39,12' Size='39,12' TextAlignment='Center'>100/100</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/SmallFont' LocalText='100/100' Location='38,15' Name='StaminaText' PackLocation='center,center' PackLocationProp='-016/0001,-005/0001' ScrollExtent='39,12' Size='39,12' TextAlignment='Center'>100/100</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/SmallFont' LocalText='100/100' Location='38,30' Name='ArmorText' PackLocation='center,center' PackLocationProp='-016/0001,0010/0001' ScrollExtent='39,12' Size='39,12' TextAlignment='Center'>100/100</Text>
<Image AbsorbsInput='false' Color='#FF0000' Location='0,-1' Name='HealthIcon' ScrollExtent='12,12' Size='12,12' Stretch='false' Style='/Icons.HUD.Health'/>
<Image AbsorbsInput='false' Color='#00F2C9' Location='0,14' Name='StaminaIcon' ScrollExtent='12,12' Size='12,12' Stretch='false' Style='/Icons.HUD.Stamina'/>
<Image AbsorbsInput='false' Color='#0099C5' Location='0,29' Name='ArmorIcon' ScrollExtent='12,12' Size='12,12' Stretch='false' Style='/Icons.HUD.Armor'/>
<Progressbar BackgroundColor='#858585' BarBackgroundColor='#FF0000' LocalTooltip='[@HeatlhTooltip]' Location='14,-1' Name='Health' PackSize='absolute,fixed' PackSizeProp='0014/0001,0002/0003' Progress='1.000' ScrollExtent='95,12' Size='95,12' Style='/ProgressBars.Health.style' Tooltip='@HeatlhTooltip'/>
<Progressbar BackgroundColor='#858585' BarBackgroundColor='#00F2C9' LocalTooltip='[@StaminaTooltip]' Location='15,14' Name='Stamina' PackSize='absolute,fixed' PackSizeProp='0014/0001,0002/0003' Progress='0.400' ScrollExtent='95,12' Size='95,12' Style='/ProgressBars.Health.style' Tooltip='@StaminaTooltip'/>
<Progressbar BackgroundColor='#858585' BarBackgroundColor='#0099C5' LocalTooltip='[@ArmorTooltip]' Location='15,29' Name='Armor' PackSize='absolute,fixed' PackSizeProp='0014/0001,0002/0003' Progress='0.600' ScrollExtent='95,12' Size='95,12' Style='/ProgressBars.Health.style' Tooltip='@ArmorTooltip'/>
</Page>
<Page Location='235,5' movable='true' Name='StealthPage' ScrollExtent='20,40' Size='20,40'>
<Image Name='Image' ScrollExtent='20,40' Size='20,40' Style='ImageStyle'/>
<ImageStyle Name='ImageStyle'>
<ImageFrame Source='ui_stealth_indicator_00' SourceRect='15,0,35,40'/>
</ImageStyle>
<Progressbar BarBackgroundColor='#C0C0C0' LocalTooltip='[@ActiveWeaponStealthTooltip]' Location='3,3' Name='Progress' ScrollExtent='14,37' Size='14,37' Style='/ProgressBars.Stealth.style' Tooltip='@ActiveWeaponStealthTooltip'/>
</Page>
<Page Location='155,4' movable='false' Name='ShortcutPage' PackLocation='right,top' PackLocationProp='-869/0001,0004/0001' ScrollExtent='263,43' Size='263,43' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.ChatFont' GetsInput='false' LocalText='[@F1]' Location='3,25' Name='F1' ScrollExtent='32,18' ShadowStyle='/Shadows.Default' Size='32,18' TextAlignment='Center' TextAlignmentVertical='Center'>@F1</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.ChatFont' GetsInput='false' LocalText='[@F2]' Location='35,25' Name='F2' ScrollExtent='32,18' ShadowStyle='/Shadows.Default' Size='32,18' TextAlignment='Center' TextAlignmentVertical='Center'>@F2</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.ChatFont' GetsInput='false' LocalText='[@F3]' Location='67,25' Name='F3' ScrollExtent='32,18' ShadowStyle='/Shadows.Default' Size='32,18' TextAlignment='Center' TextAlignmentVertical='Center'>@F3</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.ChatFont' GetsInput='false' LocalText='[@F4]' Location='99,25' Name='F4' ScrollExtent='32,18' ShadowStyle='/Shadows.Default' Size='32,18' TextAlignment='Center' TextAlignmentVertical='Center'>@F4</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.ChatFont' GetsInput='false' LocalText='[@F5]' Location='131,25' Name='F5' ScrollExtent='32,18' ShadowStyle='/Shadows.Default' Size='32,18' TextAlignment='Center' TextAlignmentVertical='Center'>@F5</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.ChatFont' GetsInput='false' LocalText='[@F6]' Location='163,25' Name='F6' ScrollExtent='32,18' ShadowStyle='/Shadows.Default' Size='32,18' TextAlignment='Center' TextAlignmentVertical='Center'>@F6</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.ChatFont' GetsInput='false' LocalText='[@F7]' Location='195,25' Name='F7' ScrollExtent='32,18' ShadowStyle='/Shadows.Default' Size='32,18' TextAlignment='Center' TextAlignmentVertical='Center'>@F7</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.ChatFont' GetsInput='false' LocalText='[@F8]' Location='227,25' Name='F8' ScrollExtent='32,18' ShadowStyle='/Shadows.Default' Size='32,18' TextAlignment='Center' TextAlignmentVertical='Center'>@F8</Text>
<Page BackgroundColor='#00F2C9' BackgroundOpacity='0.600' Name='Highlight' ScrollExtent='32,32' Size='32,32' Visible='false'/>
<Grid CellCount='8,1' CellSize='32,32' DataSource='/DataSources.Shortcuts' DragAccepts='Item,Shortcut' Name='Shortcuts' ScrollExtent='256,32' Size='263,34' Style='/DefaultGrid.style'/>
</Page>
<Page Location='423,5' MaximumSize='404,40' MinimumSize='4,40' Name='InventoryPage' ScrollExtent='404,40' Size='404,40'>
<Page Location='300,0' Name='SlotVehicle' ScrollExtent='100,40' Size='100,40'>
<Image Activated='true' GetsInput='true' LocalTooltip='Bobble was here' Location='47,25' Name='AmmoIcon' ScrollExtent='16,16' Size='16,16' Style='/ItemIcons1GridHigh.9mmbullet_AP' Tooltip='Bobble was here'/>
<Image AbsorbsInput='false' Color='#FFDC00' Location='14,0' Name='Highlight' ScrollExtent='86,24' Size='86,24' Stretch='false' Style='/ProgressBars.Ammo.Background' Visible='false'/>
<Page Location='32,3' Name='WeaponIconPage' ScrollExtent='64,17' Size='64,17'>
<Image AbsorbsInput='false' Name='WeaponIcon' ScrollExtent='67,17' Size='67,17' Style='/ItemIcons1GridHigh.cycler'/>
</Page>
<Text AbsorbsInput='false' Font='/Fonts.HudFont1' GetsInput='false' LocalText='1' Location='13,-3' Name='HolsterText' ScrollExtent='17,13' Size='17,13' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>1</Text>
<Text AbsorbsInput='false' Font='/Fonts.ChatFont' GetsInput='false' Location='31,1' Name='InfoText' ScrollExtent='67,20' Size='67,20' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'></Text>
<Progressbar BackgroundColor='#00F2C9' BarBackgroundColor='#00F2C9' Location='14,0' Name='AmmoProgress' Opacity='0.750' Progress='0.900' ScrollExtent='86,24' Size='86,24' Style='/ProgressBars.Ammo.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='500' Location='64,25' Name='ReserveAmmo' ScrollExtent='33,16' Size='33,16' TextAlignment='Center' TextAlignmentVertical='Center'>500</Text>
<Button BackgroundOpacity='0.000' Color='#000000' Enabled='false' LocalText='Bob' LocalTooltip='[@ActiveWeaponAmmoCountTooltip]' Location='17,25' Name='AmmoCount' ScrollExtent='27,16' Size='27,16' Style='/Buttons.ActiveItems.TextButton' TextColor='#000000' Tooltip='@ActiveWeaponAmmoCountTooltip'>Bob</Button>
<Button Color='#FF0000' Location='5,1' Name='Mode1' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='5,11' Name='Mode2' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='5,21' Name='Mode3' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='5,31' Name='Mode4' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
</Page>
<Page Name='Slot1' ScrollExtent='100,40' Size='100,40'>
<Image AbsorbsInput='false' Color='#FFDC00' Location='14,0' Name='Highlight' ScrollExtent='86,24' Size='86,24' Stretch='false' Style='/ProgressBars.Ammo.Background' Visible='false'/>
<Page Location='32,3' Name='WeaponIconPage' ScrollExtent='64,17' Size='64,17'>
<Image AbsorbsInput='false' Name='WeaponIcon' ScrollExtent='67,17' Size='67,17' Style='/ItemIcons1GridHigh.cycler'/>
</Page>
<Text AbsorbsInput='false' Font='/Fonts.HudFont1' GetsInput='false' LocalText='W' Location='13,-3' Name='HolsterText' ScrollExtent='17,13' Size='17,13' TextAlignment='Center' TextAlignmentVertical='Center'>W</Text>
<Text AbsorbsInput='false' Font='/Fonts.ChatFont' GetsInput='false' Location='31,1' Name='InfoText' ScrollExtent='67,20' Size='67,20' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'></Text>
<Progressbar BackgroundColor='#00F2C9' BarBackgroundColor='#00F2C9' Location='14,0' Name='AmmoProgress' Opacity='0.750' Progress='0.900' ScrollExtent='86,24' Size='86,24' Style='/ProgressBars.Ammo.style'/>
<Image Activated='true' GetsInput='true' LocalTooltip='Bobble was here' Location='47,25' Name='AmmoIcon' ScrollExtent='16,16' Size='16,16' Style='/ItemIcons1GridHigh.9mmbullet_AP' Tooltip='Bobble was here'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='500' Location='64,25' Name='ReserveAmmo' ScrollExtent='33,16' Size='33,16' TextAlignment='Center' TextAlignmentVertical='Center'>500</Text>
<Button BackgroundOpacity='0.000' Color='#000000' Enabled='false' LocalText='Bob' LocalTooltip='[@ActiveWeaponAmmoCountTooltip]' Location='17,25' Name='AmmoCount' ScrollExtent='27,16' Size='27,16' Style='/Buttons.ActiveItems.TextButton' TextColor='#000000' Tooltip='@ActiveWeaponAmmoCountTooltip'>Bob</Button>
<Button Color='#FF0000' LocalTooltip='Bob was not here' Location='5,1' Name='Mode1' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant' Tooltip='Bob was not here'></Button>
<Button Color='#F3E138' Location='5,11' Name='Mode2' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='5,21' Name='Mode3' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='5,31' Name='Mode4' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
</Page>
<Page Location='100,0' Name='Slot2' ScrollExtent='100,40' Size='100,40'>
<Image Activated='true' GetsInput='true' LocalTooltip='Bobble was here' Location='47,25' Name='AmmoIcon' ScrollExtent='16,16' Size='16,16' Style='/ItemIcons1GridHigh.9mmbullet_AP' Tooltip='Bobble was here'/>
<Image AbsorbsInput='false' Color='#FFDC00' Location='14,0' Name='Highlight' ScrollExtent='86,24' Size='86,24' Stretch='false' Style='/ProgressBars.Ammo.Background' Visible='false'/>
<Page Location='32,3' Name='WeaponIconPage' ScrollExtent='64,17' Size='64,17'>
<Image AbsorbsInput='false' Name='WeaponIcon' ScrollExtent='67,17' Size='67,17' Style='/ItemIcons1GridHigh.cycler'/>
</Page>
<Text AbsorbsInput='false' Font='/Fonts.HudFont1' GetsInput='false' LocalText='1' Location='13,-3' Name='HolsterText' ScrollExtent='17,13' Size='17,13' TextAlignment='Center' TextAlignmentVertical='Center'>1</Text>
<Text AbsorbsInput='false' Font='/Fonts.ChatFont' GetsInput='false' Location='31,1' Name='InfoText' ScrollExtent='67,20' Size='67,20' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'></Text>
<Progressbar BackgroundColor='#00F2C9' BarBackgroundColor='#00F2C9' Location='14,0' Name='AmmoProgress' Opacity='0.750' Progress='0.900' ScrollExtent='86,24' Size='86,24' Style='/ProgressBars.Ammo.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='500' Location='64,25' Name='ReserveAmmo' ScrollExtent='33,16' Size='33,16' TextAlignment='Center' TextAlignmentVertical='Center'>500</Text>
<Button BackgroundOpacity='0.000' Color='#000000' Enabled='false' LocalText='Bob' LocalTooltip='[@ActiveWeaponAmmoCountTooltip]' Location='17,25' Name='AmmoCount' ScrollExtent='27,16' Size='27,16' Style='/Buttons.ActiveItems.TextButton' TextColor='#000000' Tooltip='@ActiveWeaponAmmoCountTooltip'>Bob</Button>
<Button Color='#FF0000' Location='5,1' Name='Mode1' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='5,11' Name='Mode2' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='5,21' Name='Mode3' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='5,31' Name='Mode4' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
</Page>
<Page Location='200,0' Name='Slot3' ScrollExtent='100,40' Size='100,40'>
<Image Activated='true' GetsInput='true' LocalTooltip='Bobble was here' Location='47,25' Name='AmmoIcon' ScrollExtent='16,16' Size='16,16' Style='/ItemIcons1GridHigh.9mmbullet_AP' Tooltip='Bobble was here'/>
<Image AbsorbsInput='false' Color='#FFDC00' Location='14,0' Name='Highlight' ScrollExtent='86,24' Size='86,24' Stretch='false' Style='/ProgressBars.Ammo.Background' Visible='false'/>
<Page Location='32,3' Name='WeaponIconPage' ScrollExtent='64,17' Size='64,17'>
<Image AbsorbsInput='false' Name='WeaponIcon' ScrollExtent='67,17' Size='67,17' Style='/ItemIcons1GridHigh.cycler'/>
</Page>
<Text AbsorbsInput='false' Font='/Fonts.HudFont1' GetsInput='false' LocalText='1' Location='13,-3' Name='HolsterText' ScrollExtent='17,13' Size='17,13' TextAlignment='Center' TextAlignmentVertical='Center'>1</Text>
<Text AbsorbsInput='false' Font='/Fonts.ChatFont' GetsInput='false' Location='31,1' Name='InfoText' ScrollExtent='67,20' Size='67,20' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'></Text>
<Progressbar BackgroundColor='#00F2C9' BarBackgroundColor='#00F2C9' Location='14,0' Name='AmmoProgress' Opacity='0.750' Progress='0.900' ScrollExtent='86,24' Size='86,24' Style='/ProgressBars.Ammo.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='500' Location='64,25' Name='ReserveAmmo' ScrollExtent='33,16' Size='33,16' TextAlignment='Center' TextAlignmentVertical='Center'>500</Text>
<Button BackgroundOpacity='0.000' Color='#000000' Enabled='false' LocalText='Bob' LocalTooltip='[@ActiveWeaponAmmoCountTooltip]' Location='17,25' Name='AmmoCount' ScrollExtent='27,16' Size='27,16' Style='/Buttons.ActiveItems.TextButton' TextColor='#000000' Tooltip='@ActiveWeaponAmmoCountTooltip'>Bob</Button>
<Button Color='#FF0000' Location='5,1' Name='Mode1' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='5,11' Name='Mode2' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='5,21' Name='Mode3' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='5,31' Name='Mode4' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
</Page>
<Page Location='300,0' Name='Slot4' ScrollExtent='100,40' Size='100,40'>
<Image Activated='true' GetsInput='true' LocalTooltip='Bobble was here' Location='47,25' Name='AmmoIcon' ScrollExtent='16,16' Size='16,16' Style='/ItemIcons1GridHigh.9mmbullet_AP' Tooltip='Bobble was here'/>
<Image AbsorbsInput='false' Color='#FFDC00' Location='14,0' Name='Highlight' ScrollExtent='86,24' Size='86,24' Stretch='false' Style='/ProgressBars.Ammo.Background' Visible='false'/>
<Page Location='32,3' Name='WeaponIconPage' ScrollExtent='64,17' Size='64,17'>
<Image AbsorbsInput='false' Name='WeaponIcon' ScrollExtent='67,17' Size='67,17' Style='/ItemIcons1GridHigh.cycler'/>
</Page>
<Text AbsorbsInput='false' Font='/Fonts.HudFont1' GetsInput='false' LocalText='1' Location='13,-3' Name='HolsterText' ScrollExtent='17,13' Size='17,13' TextAlignment='Center' TextAlignmentVertical='Center'>1</Text>
<Text AbsorbsInput='false' Font='/Fonts.ChatFont' GetsInput='false' Location='31,1' Name='InfoText' ScrollExtent='67,20' Size='67,20' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'></Text>
<Progressbar BackgroundColor='#00F2C9' BarBackgroundColor='#00F2C9' Location='14,0' Name='AmmoProgress' Opacity='0.750' Progress='0.900' ScrollExtent='86,24' Size='86,24' Style='/ProgressBars.Ammo.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='500' Location='64,25' Name='ReserveAmmo' ScrollExtent='33,16' Size='33,16' TextAlignment='Center' TextAlignmentVertical='Center'>500</Text>
<Button BackgroundOpacity='0.000' Color='#000000' Enabled='false' LocalText='Bob' LocalTooltip='[@ActiveWeaponAmmoCountTooltip]' Location='17,25' Name='AmmoCount' ScrollExtent='27,16' Size='27,16' Style='/Buttons.ActiveItems.TextButton' TextColor='#000000' Tooltip='@ActiveWeaponAmmoCountTooltip'>Bob</Button>
<Button Color='#FF0000' Location='5,1' Name='Mode1' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='5,11' Name='Mode2' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='5,21' Name='Mode3' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
<Button Color='#F3E138' Location='5,31' Name='Mode4' ScrollExtent='8,8' Size='8,8' stretch='false' Style='Occupant'></Button>
</Page>
<ImageStyle Name='OccupantStyle'>
<ImageFrame Source='ui_hud_vehicle_occupant_00' SourceRect='0,0,8,8'/>
</ImageStyle>
<ButtonStyle Name='Occupant' RStyleDefault='ROccupant'/>
<RectangleStyle Center='OccupantStyle' Name='ROccupant'/>
<ImageStyle Name='ClipIconStyle'>
<ImageFrame Source='ui_hud_weapon_ammoicons_00' SourceRect='0,0,15,15'/>
</ImageStyle>
<ImageStyle Name='WeaponStyle'>
<ImageFrame Source='ui_hud_weapon_ammoicons_00' SourceRect='0,0,15,15'/>
</ImageStyle>
<ImageStyle Name='PackIconStyle'>
<ImageFrame Source='ui_hud_weapon_ammoicons_00' SourceRect='15,0,30,15'/>
</ImageStyle>
<ImageStyle Name='TrunkIconStyle'>
<ImageFrame Source='ui_hud_weapon_ammoicons_00' SourceRect='0,15,19,27'/>
</ImageStyle>
</Page>
<Page BackgroundColor='#11FFFF' Location='982,15' Name='Control' PackLocation='right,bottom' PackLocationProp='-042/0001,-035/0001' ScrollExtent='39,20' Size='39,20'>
<Button BackgroundColor='#FFFFFF' LocalText='n' LocalTooltip='[@MaximizeManagementTooltip]' Name='Management' RStyleDefault=' ' ScrollExtent='39,20' Size='39,20' Style='/Buttons.IconButton.style' Tooltip='@MaximizeManagementTooltip'>n</Button>
</Page>
<Page MinimumSize='45,36' Name='Main' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,50' Size='1024,50'>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@ActiveWeaponShowVehicleTooltip]' Location='3,8' Name='ToggleVehicleIcon' ScrollExtent='9,20' Size='9,20' Style='/Buttons.ActiveItems.checkstyle' Tooltip='@ActiveWeaponShowVehicleTooltip'>V</Checkbox>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Border' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.ActiveItem.style' ScrollExtent='1024,50' Size='1024,50'/>
<Image BackgroundOpacity='1.000' Location='-16,-16' Name='Background' Opacity='0.250' PackSize='absolute,absolute' PackSizeProp='-038/0001,-049/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='1062,99' Size='1062,99' Stretch='false'/>
</Page>
<Page Location='10,20' Name='Old' ScrollExtent='320,240' Size='320,240' Visible='false'>
<Page Location='206,19' movable='true' Name='SmallStealthPage' ScrollExtent='200,25' Size='200,25'>
<ImageStyle Name='GlowStyle'>
<ImageFrame SourceRect='24,0,48,21'>
<ImageFragment Source='ui_hud_activeitem_stealth_sm_00' SourceRect='0,0,32,32'/>
<ImageFragment Offset='32,0' Source='ui_hud_activeitem_stealth_sm_01' SourceRect='0,0,32,32'/>
</ImageFrame>
</ImageStyle>
<Image AbsorbsInput='false' Location='-1,3' Name='Glow' ScrollExtent='24,21' Size='24,21' Style='ImageStyle'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='-1,3' Name='Image' ScrollExtent='24,21' Size='24,21' Style='GlowStyle'/>
<ImageStyle Name='ImageStyle'>
<ImageFrame SourceRect='0,0,24,21'>
<ImageFragment Source='ui_hud_activeitem_stealth_sm_00' SourceRect='0,0,32,32'/>
<ImageFragment Offset='32,0' Source='ui_hud_activeitem_stealth_sm_01' SourceRect='0,0,32,32'/>
</ImageFrame>
</ImageStyle>
<Progressbar AbsorbsInput='false' BarBackgroundColor='#C0C0C0' LocalTooltip='[@ActiveWeaponStealthTooltip]' Location='113,7' Name='Progress' Progress='1.000' ScrollExtent='50,14' Size='50,14' Style='/ProgressBars.Health.style' Tooltip='@ActiveWeaponStealthTooltip'/>
</Page>
<Page Location='186,103' Name='SmallAmmoPage' ScrollExtent='190,24' Size='190,24' Visible='false'>
<Button BackgroundOpacity='0.000' Color='#000000' LocalText='Bob' LocalTooltip='[@ActiveWeaponAmmoCountTooltip]' Location='35,3' Name='AmmoCount' ScrollExtent='40,20' Size='40,20' Style='/Buttons.ActiveItems.TextButton' TextColor='#000000' Tooltip='@ActiveWeaponAmmoCountTooltip'>Bob</Button>
<Button BackgroundOpacity='0.000' Color='#000000' LocalText='Bob' LocalTooltip='[@ActiveWeaponAmmoFiremodeTooltip]' Location='138,5' Name='AmmoFireMode' ScrollExtent='21,15' Size='21,15' Style='/Buttons.ActiveItems.TextButton' TextColor='#000000' Tooltip='@ActiveWeaponAmmoFiremodeTooltip'>Bob</Button>
<Button BackgroundOpacity='0.000' Color='#000000' LocalText='Bob' LocalTooltip='[@ActiveWeaponAmmoTypeTooltip]' Location='163,5' Name='AmmoType' ScrollExtent='20,16' Size='20,16' Style='/Buttons.ActiveItems.TextButton' TextColor='#000000' Tooltip='@ActiveWeaponAmmoTypeTooltip'>Bob</Button>
<Button LocalTooltip='[@ActiveWeaponToggleAmmoTooltip]' Location='4,4' Name='ToggleSize' ScrollExtent='9,20' Size='9,20' Style='/Buttons.ActiveItems.style' Tooltip='@ActiveWeaponToggleAmmoTooltip'></Button>
<Image AbsorbsInput='false' Location='18,4' Name='ClipIcon' ScrollExtent='24,18' Size='24,18' Stretch='false' Style='ClipIconStyle'/>
<Image AbsorbsInput='false' Location='80,4' Name='ReserveIcon' ScrollExtent='24,19' Size='24,19' Stretch='false' Style='PackIconStyle'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='Bob' Location='93,3' Name='ReserveAmmo' ScrollExtent='41,18' Size='41,18' TextAlignment='Center' TextAlignmentVertical='Center'>Bob</Text>
<ImageStyle Name='ClipIconStyle'>
<ImageFrame Source='ui_hud_weapon_ammoicons_00' SourceRect='0,0,15,15'/>
</ImageStyle>
<ImageStyle Name='PackIconStyle'>
<ImageFrame Source='ui_hud_weapon_ammoicons_00' SourceRect='15,0,30,15'/>
</ImageStyle>
<ImageStyle Name='TrunkIconStyle'>
<ImageFrame Source='ui_hud_weapon_ammoicons_00' SourceRect='0,15,19,27'/>
</ImageStyle>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Border' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.ActiveItem.style' ScrollExtent='190,24' Size='190,24'/>
</Page>
<Page Location='195,170' Name='AmmoPage' ScrollExtent='190,63' Size='190,63' Visible='false'>
<Button BackgroundOpacity='0.000' Color='#000000' LocalText='Bob' LocalTooltip='[@ActiveWeaponAmmoCountTooltip]' Location='37,23' Name='AmmoCount' ScrollExtent='60,17' Size='60,17' Style='/Buttons.ActiveItems.TextButton' TextColor='#000000' Tooltip='@ActiveWeaponAmmoCountTooltip'>Bob</Button>
<Button BackgroundOpacity='0.000' Color='#000000' LocalText='Bob' LocalTooltip='[@ActiveWeaponAmmoFiremodeTooltip]' Location='21,44' Name='AmmoFireMode' ScrollExtent='157,16' Size='157,16' Style='/Buttons.ActiveItems.TextButton' TextColor='#000000' Tooltip='@ActiveWeaponAmmoFiremodeTooltip'>Bob</Button>
<Button BackgroundOpacity='0.000' Color='#000000' LocalText='Bob' LocalTooltip='[@ActiveWeaponAmmoTypeTooltip]' Location='21,3' Name='AmmoType' ScrollExtent='156,16' Size='156,16' Style='/Buttons.ActiveItems.TextButton' TextColor='#000000' Tooltip='@ActiveWeaponAmmoTypeTooltip'>Bob</Button>
<Button LocalTooltip='[@ActiveWeaponToggleAmmoTooltip]' Location='5,4' Name='ToggleSize' ScrollExtent='9,20' Size='9,20' Style='/Buttons.ActiveItems.styleChecked' Tooltip='@ActiveWeaponToggleAmmoTooltip'></Button>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='19,0' Name='AmmoBox' Opacity='0.750' RStyleDefault='HUDLineStyle.style' ScrollExtent='159,21' Size='159,21'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='95,20' Name='AmmoBox' Opacity='0.750' RStyleDefault='HUDLineStyle.style' ScrollExtent='83,21' Size='83,21'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='19,40' Name='AmmoBox' Opacity='0.750' RStyleDefault='HUDLineStyle.style' ScrollExtent='159,23' Size='159,23'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='19,20' Name='AmmoBox' Opacity='0.750' RStyleDefault='BackgroundLineStyle.style' ScrollExtent='77,21' Size='77,21'/>
<Image AbsorbsInput='false' Location='21,22' Name='ClipIcon' ScrollExtent='24,20' Size='24,20' Stretch='false' Style='ClipIconStyle'/>
<Image AbsorbsInput='false' Location='98,22' Name='ReserveIcon' ScrollExtent='24,18' Size='24,18' Stretch='false' Style='PackIconStyle'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='Bob' Location='115,22' Name='ReserveAmmo' ScrollExtent='61,18' Size='61,18' TextAlignment='Center' TextAlignmentVertical='Center'>Bob</Text>
<ImageStyle Name='ClipIconStyle'>
<ImageFrame Source='ui_hud_weapon_ammoicons_00' SourceRect='0,0,15,15'/>
</ImageStyle>
<ImageStyle Name='PackIconStyle'>
<ImageFrame Source='ui_hud_weapon_ammoicons_00' SourceRect='15,0,30,15'/>
</ImageStyle>
<ImageStyle Name='TrunkIconStyle'>
<ImageFrame Source='ui_hud_weapon_ammoicons_00' SourceRect='0,15,19,27'/>
</ImageStyle>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Border' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.ActiveItem.style' ScrollExtent='190,63' Size='190,63'/>
</Page>
<Page Location='195,143' Name='SmallInventoryPage' ScrollExtent='190,23' Size='190,23' Visible='false'>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@ActiveWeaponShowVehicleTooltip]' Location='30,4' Name='Slot1' ScrollExtent='27,15' Size='27,15' Style='/Buttons.SmallMiniInventory.checkstyle' Tooltip='@ActiveWeaponShowVehicleTooltip'>1</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ActiveWeaponShowVehicleTooltip]' Location='64,4' Name='Slot2' ScrollExtent='27,15' Size='27,15' Style='/Buttons.SmallMiniInventory.checkstyle' Tooltip='@ActiveWeaponShowVehicleTooltip'>2</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@ActiveWeaponShowVehicleTooltip]' Location='101,4' Name='Slot3' ScrollExtent='27,15' Size='27,15' Style='/Buttons.SmallMiniInventory.checkstyle' Tooltip='@ActiveWeaponShowVehicleTooltip'>3</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ActiveWeaponShowVehicleTooltip]' Location='140,4' Name='Slot4' ScrollExtent='27,15' Size='27,15' Style='/Buttons.SmallMiniInventory.checkstyle' Tooltip='@ActiveWeaponShowVehicleTooltip'>4</Checkbox>
<Button LocalTooltip='[@ActiveWeaponToggleInventoryTooltip]' Location='6,4' Name='ToggleSize' ScrollExtent='9,20' Size='9,20' Style='/Buttons.ActiveItems.style' Tooltip='@ActiveWeaponToggleInventoryTooltip'></Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Border' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.ActiveItem.style' ScrollExtent='190,23' Size='190,23'/>
</Page>
<Page Location='404,80' Name='InventoryPage' ScrollExtent='190,57' Size='190,57'>
<Text AbsorbsInput='false' Font='/Fonts.ChatFont' GetsInput='false' Location='27,5' Name='SlotText1' ScrollExtent='65,22' Size='65,22' TextAlignment='Center' TextAlignmentVertical='Center'></Text>
<Text AbsorbsInput='false' Font='/Fonts.ChatFont' GetsInput='false' Location='111,5' Name='SlotText2' ScrollExtent='64,22' Size='64,22' TextAlignment='Center' TextAlignmentVertical='Center'></Text>
<Text AbsorbsInput='false' Font='/Fonts.ChatFont' GetsInput='false' Location='27,31' Name='SlotText3' ScrollExtent='65,22' Size='65,22' TextAlignment='Center' TextAlignmentVertical='Center'></Text>
<Text AbsorbsInput='false' Font='/Fonts.ChatFont' GetsInput='false' Location='111,31' Name='SlotText4' ScrollExtent='64,22' Size='64,22' TextAlignment='Center' TextAlignmentVertical='Center'></Text>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ActiveWeaponShowVehicleTooltip]' Location='18,5' Name='Slot1' ScrollExtent='75,22' Size='75,22' Style='/Buttons.MiniInventory.checkstyle' Tooltip='@ActiveWeaponShowVehicleTooltip'>1</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ActiveWeaponShowVehicleTooltip]' Location='99,5' Name='Slot2' ScrollExtent='85,22' Size='85,22' Style='/Buttons.MiniInventory.checkstyle' Tooltip='@ActiveWeaponShowVehicleTooltip'>2</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ActiveWeaponShowVehicleTooltip]' Location='18,31' Name='Slot3' ScrollExtent='75,22' Size='75,22' Style='/Buttons.MiniInventory.checkstyle' Tooltip='@ActiveWeaponShowVehicleTooltip'>3</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ActiveWeaponShowVehicleTooltip]' Location='99,31' Name='Slot4' ScrollExtent='75,22' Size='75,22' Style='/Buttons.MiniInventory.checkstyle' Tooltip='@ActiveWeaponShowVehicleTooltip'>4</Checkbox>
<Button LocalTooltip='[@ActiveWeaponToggleInventoryTooltip]' Location='4,4' Name='ToggleSize' ScrollExtent='9,20' Size='9,20' Style='/Buttons.ActiveItems.styleChecked' Tooltip='@ActiveWeaponToggleInventoryTooltip'></Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Border' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.ActiveItem.style' ScrollExtent='190,57' Size='190,57'/>
</Page>
</Page>
</Page>
<Page Name='Performance' PackLocation='left,bottom' PackLocationProp='0000/0001,-768/0001' runengine='true' ScrollExtent='1024,769' Size='1024,769' Visible='false'>
<Image Color='#FFFF00' Location='700,575' Name='marker' Opacity='0.700' ScrollExtent='8,8' Size='8,8' SourceRect='0,0,8,8' SourceResource='cruise_marker'/>
<Image Color='#FFFF00' Location='600,575' Name='marker' Opacity='0.700' ScrollExtent='8,8' Size='8,8' SourceRect='0,0,8,8' SourceResource='cruise_marker'/>
<Image Color='#FFFF00' Location='500,575' Name='marker' Opacity='0.700' ScrollExtent='8,8' Size='8,8' SourceRect='0,0,8,8' SourceResource='cruise_marker'/>
<Image Color='#FFFF00' Location='400,575' Name='marker' Opacity='0.700' ScrollExtent='8,8' Size='8,8' SourceRect='0,0,8,8' SourceResource='cruise_marker'/>
<Image Color='#FFFF00' Location='300,575' Name='marker' Opacity='0.700' ScrollExtent='8,8' Size='8,8' SourceRect='0,0,8,8' SourceResource='cruise_marker'/>
<Image Color='#FFFF00' Location='200,575' Name='marker' Opacity='0.700' ScrollExtent='8,8' Size='8,8' SourceRect='0,0,8,8' SourceResource='cruise_marker'/>
<Image Color='#FFFF00' Location='100,575' Name='marker' Opacity='0.700' ScrollExtent='8,8' Size='8,8' SourceRect='0,0,8,8' SourceResource='cruise_marker'/>
<Image Color='#FFFF00' Location='0,575' Name='marker' Opacity='0.700' ScrollExtent='8,8' Size='8,8' SourceRect='0,0,8,8' SourceResource='cruise_marker'/>
<Text Font='/Fonts.DefaultFont' LocalText='70 ms' Location='700,580' Name='70 ms' Opacity='0.700' ScrollExtent='50,20' Size='50,20'>70 ms</Text>
<Text Font='/Fonts.DefaultFont' LocalText='60 ms' Location='600,580' Name='60 ms' Opacity='0.700' ScrollExtent='50,36' Size='50,20'>60 ms</Text>
<Text Font='/Fonts.DefaultFont' LocalText='50 ms' Location='500,580' Name='50 ms' Opacity='0.700' ScrollExtent='50,36' Size='50,20'>50 ms</Text>
<Text Font='/Fonts.DefaultFont' LocalText='40 ms' Location='400,580' Name='40 ms' Opacity='0.700' ScrollExtent='50,36' Size='50,20'>40 ms</Text>
<Text Font='/Fonts.DefaultFont' LocalText='30 ms' Location='300,580' Name='30 ms' Opacity='0.700' ScrollExtent='50,36' Size='50,20'>30 ms</Text>
<Text Font='/Fonts.DefaultFont' LocalText='20 ms' Location='200,580' Name='20 ms' Opacity='0.700' ScrollExtent='50,36' Size='50,20'>20 ms</Text>
<Text Font='/Fonts.DefaultFont' LocalText='10 ms' Location='100,580' Name='10 ms' Opacity='0.700' ScrollExtent='50,20' Size='50,20'>10 ms</Text>
<Text Font='/Fonts.DefaultFont' LocalText='0 ms' Location='0,580' Name='0 ms' Opacity='0.700' ScrollExtent='40,20' Size='40,20'>0 ms</Text>
<Progressbar Color='#FF0000' LocalTooltip='Engine3D' Location='3,668' Name='Engine3D' Opacity='0.500' PackLocation='left,bottom' PackLocationProp='0003/0001,-101/0001' Progress='0.500' ScrollExtent='800,16' Size='800,16' Style='/ProgressBars.Attribute.style' Tooltip='Engine3D'/>
<Progressbar Color='#00FF00' LocalTooltip='ClientManager' Location='3,691' Name='ClientManager' Opacity='0.500' PackLocation='left,bottom' PackLocationProp='0003/0001,-078/0001' Progress='0.500' ScrollExtent='800,16' Size='800,16' Style='/ProgressBars.Attribute.style' Tooltip='ClientManager'/>
<Progressbar Color='#0000FF' LocalTooltip='Physics' Location='3,713' Name='Physics' Opacity='0.500' PackLocation='left,bottom' PackLocationProp='0003/0001,-056/0001' Progress='0.500' ScrollExtent='800,16' Size='800,16' Style='/ProgressBars.Attribute.style' Tooltip='Physics'/>
</Page>
<Page BackgroundColor='#008000' BackgroundOpacity='0.475' Location='788,206' Name='EditCharacter' OnHide='parent.wantsinput = shared
parent.showcursor = false' OnShow='parent.wantsinput = true
parent.showcursor = true' PackLocation='right,center' PackLocationProp='-236/0001,-178/0001' ScrollExtent='190,300' Size='190,300' Visible='false'>
<Template Name='Row' Size='400,16'>\<text font = \'/Fonts.DefaultFont\' location = \'5,-1\' size = \'400,18\'\>
$Name$
\</text\></Template>
<DataSource Name='EmpireDS'>
<Data Name='Terran Republic' symbol='tr'/>
<Data Name='New Conglomerate' symbol='nc'/>
<Data Name='Vanu Sovereinty' symbol='vs'/>
</DataSource>
<DataSource Name='GenderDS'>
<Data Name='Male'/>
<Data Name='Female'/>
</DataSource>
<DataSource Name='ArmorDS'>
<Data Name='Light'/>
<Data Name='Medium'/>
<Data Name='Heavy'/>
<Data Name='Stealth'/>
</DataSource>
<DataSource Name='RankDS'>
<Data Name='1'/>
<Data Name='2'/>
<Data Name='3'/>
<Data Name='4'/>
<Data Name='5'/>
<Data Name='6'/>
<Data Name='7'/>
<Data Name='8'/>
<Data Name='9'/>
<Data Name='10'/>
<Data Name='11'/>
<Data Name='12'/>
<Data Name='13'/>
</DataSource>
<Text Font='/Fonts.DefaultFont' LocalText='Guid:' Location='10,10' ScrollExtent='70,20' Size='70,20'>Guid:</Text>
<Text Font='/Fonts.DefaultFont' Location='60,10' Name='Guid' ScrollExtent='120,20' Size='120,20'></Text>
<Text Font='/Fonts.DefaultFont' LocalText='Empire:' Location='10,50' ScrollExtent='70,20' Size='70,20'>Empire:</Text>
<Dropdownbox DataSource='EmpireDS' Location='10,70' Name='Empire' OnSelect='ic_setempire parent.guid.text selecteditem.symbol' RowTemplate='Row' ScrollExtent='170,20' SelectedItemIndex='1' Size='170,20' Style='/dropdown20.style'/>
<Text Font='/Fonts.DefaultFont' LocalText='Gender:' Location='10,110' ScrollExtent='70,20' Size='70,20'>Gender:</Text>
<Dropdownbox DataSource='GenderDS' Location='10,130' Name='Gender' OnSelect='ic_setgender parent.guid.text selecteditem.name' RowTemplate='Row' ScrollExtent='170,20' Size='170,20' Style='/dropdown20.style'/>
<Text Font='/Fonts.DefaultFont' LocalText='Armor:' Location='10,170' ScrollExtent='70,20' Size='70,20'>Armor:</Text>
<Dropdownbox DataSource='ArmorDS' Location='10,190' Name='Armor' OnSelect='ic_setarmortype parent.guid.text selecteditem.name' RowTemplate='Row' ScrollExtent='170,20' Size='170,20' Style='/dropdown20.style'/>
<Text Font='/Fonts.DefaultFont' LocalText='Rank:' Location='10,220' ScrollExtent='70,20' Size='70,20'>Rank:</Text>
<Dropdownbox DataSource='RankDS' Location='10,240' Name='Rank' OnSelect='ic_setrank parent.guid.text selecteditem.name' RowTemplate='Row' ScrollExtent='170,20' Size='170,20' Style='/dropdown20.style'/>
<Button LocalText='Close' Location='50,270' Name='Close' OnPress='parent.visible = false' ScrollExtent='90,24' Size='90,24' Style='/Buttons.Medium.style'>Close</Button>
</Page>
<Page Location='645,662' Name='PingInfo' PackLocation='left,bottom' PackLocationProp='0645/0001,-106/0001' ScrollExtent='302,33' Size='302,33'>
<Text Font='/SmallFont' LocalText='Ping:' Location='5,7' Name='PingLabel' ScrollExtent='30,14' Size='30,14'>Ping:</Text>
<Text Font='/SmallFont' LocalText='88888 ms' Location='30,8' Name='Ping' ScrollExtent='51,14' Size='51,14' TextAlignment='Right'>88888 ms</Text>
<Text Font='/SmallFont' LocalText='Avg:' Location='5,19' Name='AvgLabel' ScrollExtent='30,14' Size='30,14'>Avg:</Text>
<Text Font='/SmallFont' LocalText='88888 ms' Location='30,19' Name='Avg' ScrollExtent='51,14' Size='51,14' TextAlignment='Right'>88888 ms</Text>
<Text Font='/SmallFont' LocalText='Framerate:' Location='83,8' Name='FramerateLabel' ScrollExtent='54,14' Size='54,14'>Framerate:</Text>
<Text Font='/SmallFont' LocalText='XXX.X f/s' Location='136,8' Name='Framerate' ScrollExtent='43,14' Size='43,14' TextAlignment='Right'>XXX.X f/s</Text>
<Text Font='/SmallFont' LocalText='Polygons:' Location='83,19' Name='PolygonsLabel' ScrollExtent='54,14' Size='54,14'>Polygons:</Text>
<Text Font='/SmallFont' LocalText='XXXXXXX' Location='136,19' Name='Polygons' ScrollExtent='43,14' Size='43,14' TextAlignment='Right'>XXXXXXX</Text>
<Text Font='/SmallFont' LocalText='Upstream:' Location='180,8' Name='UpstreamLabel' ScrollExtent='60,14' Size='60,14'>Upstream:</Text>
<Text Font='/SmallFont' LocalText='1046 b/s' Location='240,8' Name='Upstream' ScrollExtent='47,14' Size='47,14' TextAlignment='Right'>1046 b/s</Text>
<Text Font='/SmallFont' LocalText='Downstream:' Location='180,19' Name='DownstreamLabel' ScrollExtent='60,14' Size='60,14'>Downstream:</Text>
<Text Font='/SmallFont' LocalText='1446 b/s' Location='240,19' Name='Downstream' ScrollExtent='47,14' Size='47,14' TextAlignment='Right'>1446 b/s</Text>
</Page>
<Page Location='302,105' MinimumSize='240,60' movable='false' Name='RankPopup' PackLocation='Center,Top' PackLocationProp='-210/0001,0105/0001' PackSize='Fixed,Fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='440,60' Size='440,60' Visible='false'>
<Text Activated='true' Font='/Fonts.HudFont3' GetsInput='false' Location='45,13' MaxLines='1' Name='Text' PackSize='absolute,absolute' PackSizeProp='0090/0001,0037/0001' ScrollExtent='350,23' Size='350,23' TextAlignment='Center' TextAlignmentVertical='Center'></Text>
<Image Location='18,10' Name='LeftIcon' PackLocation='Left,Top' PackLocationProp='0018/0001,0010/0001' ScrollExtent='28,31' Size='28,31' Style='/Icons.HUD.Mini_logo_VS'/>
<Image Location='394,10' Name='RightIcon' PackLocation='Right,Top' PackLocationProp='-046/0001,0010/0001' ScrollExtent='28,31' Size='28,31' Style='/Icons.HUD.Mini_logo_VS'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.800' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='440,60' Size='440,60' Stretch='false' Style=' '/>
</Page>
<Page Location='213,107' MinimumSize='240,100' movable='true' Name='OKDialog' PackLocation='Center,Bottom' PackLocationProp='-299/0001,-661/0001' ScrollExtent='284,212' Size='284,212' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' Location='25,19' Name='Text' PackSize='absolute,absolute' PackSizeProp='0047/0001,0080/0001' ScrollExtent='237,132' Size='237,132' TextAlignment='Center' TextAlignmentVertical='Center'></Text>
<Button LocalText='[@OK]' LocalTooltip='[@OKTooltip]' Location='106,168' Name='OKButton' PackLocation='Center,bottom' PackLocationProp='-036/0001,-044/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@OKTooltip'>@OK</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='16,162' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0016/0001,-050/0001' PackSize='absolute,fixed' PackSizeProp='0029/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='255,32' Size='255,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='2,0' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='284,212' Size='284,212' Stretch='false' Style=' '/>
</Page>
<Page Location='213,107' MinimumSize='240,100' movable='true' Name='OKCancelDialog' PackLocation='Center,Bottom' PackLocationProp='-299/0001,-661/0001' ScrollExtent='284,212' Size='284,212' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' Location='25,19' Name='Text' PackSize='absolute,absolute' PackSizeProp='0047/0001,0080/0001' ScrollExtent='237,132' Size='237,132' TextAlignment='Center' TextAlignmentVertical='Center'></Text>
<Button LocalText='[@OK]' Location='21,168' Name='OKButton' PackLocation='Center,bottom' PackLocationProp='-121/0001,-044/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' TooltipStyle='@OKTooltip'>@OK</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CancelTooltip]' Location='191,168' Name='CancelButton' PackLocation='Center,bottom' PackLocationProp='0049/0001,-044/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@CancelTooltip'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='16,162' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0016/0001,-050/0001' PackSize='absolute,fixed' PackSizeProp='0029/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='255,32' Size='255,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='2,0' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='284,212' Size='284,212' Stretch='false' Style=' '/>
</Page>
<Page Activated='true' Name='TrainingZone' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Page AbsorbsInput='false' Location='293,259' Name='Select' PackLocation='center,center' PackLocationProp='-219/0001,-125/0001' ScrollExtent='455,233' Size='455,233'>
<Text BackgroundColor='#00F2C9' BackgroundOpacity='0.224' Font='/Fonts.HudFont2' LocalText='[@TrainingMenu]' Location='14,17' Name='MenuTitle' PackLocation='left,top' PackLocationProp='0014/0001,0017/0001' PackSize='absolute,fixed' PackSizeProp='0028/0001,0002/0003' ScrollExtent='427,21' Size='427,21' SizeIncrement='0,0' TextAlignment='Center' TextAlignmentVertical='Center'>@TrainingMenu</Text>
<Button LocalText='[@TrainingShooting]' Location='27,56' Name='Shooting' ScrollExtent='400,17' Size='400,17' Style='/Buttons.RespawnSelection.style'>@TrainingShooting</Button>
<Button LocalText='[@TrainingDriving]' Location='27,86' Name='Driving' ScrollExtent='400,17' Size='400,17' Style='/Buttons.RespawnSelection.style'>@TrainingDriving</Button>
<Button LocalText='[@TrainingGoHome]' Location='27,116' Name='Home' ScrollExtent='400,17' Size='400,17' Style='/Buttons.RespawnSelection.style'>@TrainingGoHome</Button>
<Button LocalText='[@TrainingCancel]' Location='27,176' Name='Cancel' ScrollExtent='400,17' Size='400,17' Style='/Buttons.RespawnSelection.style'>@TrainingCancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.DialogBackground.style' ScrollExtent='455,233' Size='455,233' Stretch='false'/>
</Page>
</Page>
<Page Color='#FF0000' GetsInput='false' Location='916,674' Name='CrouchIndicator' PackLocation='right,bottom' PackLocationProp='-108/0001,-094/0001' ScrollExtent='41,40' Size='41,40' Visible='false'>
<Image AbsorbsInput='false' Name='CrouchIcon' ScrollExtent='40,40' Size='40,40' SourceRect='0,0,64,64' SourceResource='ui_hud_icon_crouch' Style=' '/>
</Page>
<Page Color='#FF0000' GetsInput='false' Location='874,674' Name='RadarIndicator' PackLocation='right,bottom' PackLocationProp='-150/0001,-094/0001' ScrollExtent='41,40' Size='41,40' UserResizable='true' Visible='false'>
<Image AbsorbsInput='false' Name='RadarIcon' ScrollExtent='40,40' Size='40,40' SourceRect='0,0,64,64' SourceResource='ui_hud_icon_radar_detected' Style=' '/>
</Page>
<Page Color='#FF0000' GetsInput='false' Location='831,675' Name='MosquitoIndicator' PackLocation='right,bottom' PackLocationProp='-193/0001,-093/0001' ScrollExtent='42,40' Size='42,40' Visible='false'>
<Image AbsorbsInput='false' Name='MosquitoIcon' ScrollExtent='40,40' Size='40,40' SourceRect='0,0,64,64' SourceResource='ui_hud_icon_mosquito_overflight' Style=' '/>
</Page>
</Page>
