<Page movable='true' Name='VideoOptions' navbar.visible='false' PackLocation='Center,Center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='800,600' Size='800,600' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@OptionsTitle]' Location='91,7' Name='TitleText' ScrollExtent='607,20' Size='607,20' TextAlignment='Center' TextAlignmentVertical='Center'>@OptionsTitle</Text>
<Page Location='22,69' Name='SoundOptionsPage' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = true' PackLocation='Center,Center' PackLocationProp='-378/0001,-231/0001' ScrollExtent='758,468' Size='758,468' Visible='false'>
<Text Font='/Fonts.HudFont3' LocalText='[@VoiceInVolume]' Location='395,98' Name='SoundVoiceInText' ScrollExtent='158,25' Size='158,25' TextAlignment='Right' TextAlignmentVertical='Center'>@VoiceInVolume</Text>
<Sliderbar LocalTooltip='[@VoiceInVolumeTooltip]' Location='566,98' Name='SoundVoiceIn' ScrollExtent='126,25' Size='126,25' Style='/Sliderbars.Options.Style' Tooltip='@VoiceInVolumeTooltip' UpperLimit='300' Value='25' ValueUpdateContinuous='false'/>
<Text Font='/Fonts.HudFont3' LocalText='[@VoiceOutVolume]' Location='381,66' Name='SoundVoiceOutText' ScrollExtent='175,25' Size='175,25' TextAlignment='Right' TextAlignmentVertical='Center'>@VoiceOutVolume</Text>
<Sliderbar LocalTooltip='[@VoiceOutVolumeTooltip]' Location='565,66' Name='SoundVoiceOut' ScrollExtent='126,25' Size='126,25' Style='/Sliderbars.Options.Style' Tooltip='@VoiceOutVolumeTooltip' UpperLimit='300' Value='100' ValueUpdateContinuous='false'/>
<Textbox BackgroundColor='#DDDDDD' BackgroundOpacity='0.475' Location='701,64' MaxLength='2' Name='VoiceOutInput' NumericInteger='true' PackLocation='left,bottom' PackLocationProp='0701/0001,-404/0001' PackSize='absolute,fixed' PackSizeProp='0718/0001,0002/0003' ScrollExtent='40,28' Size='40,28' Style='/ConsoleTextbox.Style'>2</Textbox>
<Textbox BackgroundColor='#DDDDDD' BackgroundOpacity='0.475' Location='701,96' MaxLength='2' Name='VoiceInInput' NumericInteger='true' PackLocation='left,bottom' PackLocationProp='0701/0001,-372/0001' PackSize='absolute,fixed' PackSizeProp='0718/0001,0002/0003' ScrollExtent='40,28' Size='40,28' Style='/ConsoleTextbox.Style'>2</Textbox>
<Textbox BackgroundColor='#DDDDDD' BackgroundOpacity='0.475' Location='357,64' MaxLength='2' Name='Volume2dInput' NumericInteger='true' PackLocation='left,bottom' PackLocationProp='0357/0001,-404/0001' PackSize='absolute,fixed' PackSizeProp='0718/0001,0002/0003' ScrollExtent='40,28' Size='40,28' Style='/ConsoleTextbox.Style'>2</Textbox>
<Textbox BackgroundColor='#DDDDDD' BackgroundOpacity='0.475' Location='357,96' MaxLength='2' Name='Volume3DInput' NumericInteger='true' PackLocation='left,bottom' PackLocationProp='0357/0001,-372/0001' PackSize='absolute,fixed' PackSizeProp='0718/0001,0002/0003' ScrollExtent='40,28' Size='40,28' Style='/ConsoleTextbox.Style'>2</Textbox>
<Textbox BackgroundColor='#DDDDDD' BackgroundOpacity='0.475' Location='357,128' MaxLength='2' Name='MusicInput' NumericInteger='true' PackLocation='left,bottom' PackLocationProp='0357/0001,-340/0001' PackSize='absolute,fixed' PackSizeProp='0718/0001,0002/0003' ScrollExtent='40,28' Size='40,28' Style='/ConsoleTextbox.Style'>2</Textbox>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='14,173' Name='TrackRect' Opacity='0.750' ScrollExtent='725,288' Size='725,288'/>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@SoundAllTooltip]' Location='327,184' Name='SoundAll' ScrollExtent='307,25' Size='307,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundAllTooltip'>@SoundAll</Checkbox>
<Text Font='/Fonts.HudFont3' LocalText='[@SoundTracks]' Location='35,184' Name='Tracks' ScrollExtent='280,25' Size='280,25' TextAlignment='Right' TextAlignmentVertical='Center'>@SoundTracks</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundSanctuaryTooltip]' Location='23,218' Name='SoundSanctuary' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundSanctuaryTooltip'>@SoundSanctuary</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundShuttleTooltip]' Location='23,248' Name='SoundShuttle' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundShuttleTooltip'>@SoundShuttle</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundSOITooltip]' Location='23,278' Name='SoundSOI' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundSOITooltip'>@SoundSOI</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundSOIWarningTooltip]' Location='23,308' Name='SoundSOIWarning' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundSOIWarningTooltip'>@SoundSOIWarning</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundSOICombatTooltip]' Location='23,338' Name='SoundSOICombat' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundSOICombatTooltip'>@SoundSOICombat</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundVictoryTooltip]' Location='22,368' Name='SoundVictory' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundVictoryTooltip'>@SoundVictory</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundLossTooltip]' Location='23,398' Name='SoundLoss' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundLossTooltip'>@SoundLoss</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundPromotionTooltip]' Location='23,428' Name='SoundPromotion' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundPromotionTooltip'>@SoundPromotion</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundTemperateTooltip]' Location='260,218' Name='SoundTemperate' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundTemperateTooltip'>@SoundTemperate</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundDesertTooltip]' Location='260,248' Name='SoundDesert' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundDesertTooltip'>@SoundDesert</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundArcticTooltip]' Location='260,278' Name='SoundArctic' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundArcticTooltip'>@SoundArctic</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundVolcanicTooltip]' Location='260,308' Name='SoundVolcanic' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundVolcanicTooltip'>@SoundVolcanic</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundTemperateCombatTooltip]' Location='260,338' Name='SoundTemperateCombat' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundTemperateCombatTooltip'>@SoundTemperateCombat</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundDesertCombatTooltip]' Location='260,368' Name='SoundDesertCombat' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundDesertCombatTooltip'>@SoundDesertCombat</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundArcticCombatTooltip]' Location='260,398' Name='SoundArcticCombat' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundArcticCombatTooltip'>@SoundArcticCombat</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundVolcanicCombatTooltip]' Location='260,428' Name='SoundVolcanicCombat' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundVolcanicCombatTooltip'>@SoundVolcanicCombat</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundCavernGeneralTooltip]' Location='500,218' Name='SoundCavernGeneral' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundCavernGeneralTooltip'>@SoundCavernGeneral</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundCavernCombatTooltip]' Location='500,248' Name='SoundCavernCombat' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundCavernCombatTooltip'>@SoundCavernCombat</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundCavernModuleTooltip]' Location='500,278' Name='SoundCavernModule' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundCavernModuleTooltip'>@SoundCavernModule</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundVolcanicTooltip]' Location='500,308' Name='SoundNotUsed1' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundVolcanicTooltip' Visible='false'>@SoundVolcanic</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundTemperateCombatTooltip]' Location='500,338' Name='SoundNotUsed2' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundTemperateCombatTooltip' Visible='false'>@SoundTemperateCombat</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundDesertCombatTooltip]' Location='500,368' Name='SoundNotUsed3' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundDesertCombatTooltip' Visible='false'>@SoundDesertCombat</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundArcticCombatTooltip]' Location='500,398' Name='SoundNotUsed4' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundArcticCombatTooltip' Visible='false'>@SoundArcticCombat</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SoundVolcanicCombatTooltip]' Location='500,428' Name='SoundNotUsed5' ScrollExtent='232,25' Size='232,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundVolcanicCombatTooltip' Visible='false'>@SoundVolcanicCombat</Checkbox>
<Text Font='/Fonts.HudFont3' LocalText='[@SoundVolume]' Location='-1,66' Name='SoundVolume2dText' ScrollExtent='211,25' Size='211,25' TextAlignment='Right' TextAlignmentVertical='Center'>@SoundVolume</Text>
<Sliderbar LocalTooltip='[@SoundVolumeTooltip]' Location='221,66' Name='SoundVolume2d' ScrollExtent='126,25' Size='126,25' Style='/Sliderbars.Options.Style' Tooltip='@SoundVolumeTooltip' UpperLimit='100' Value='100' ValueUpdateContinuous='false'/>
<Text Font='/Fonts.HudFont3' LocalText='[@SoundVolume3d]' Location='-1,98' Name='SoundVolume3dText' ScrollExtent='211,25' Size='211,25' TextAlignment='Right' TextAlignmentVertical='Center'>@SoundVolume3d</Text>
<Sliderbar LocalTooltip='[@SoundVolume3dTooltip]' Location='221,98' Name='SoundVolume3d' ScrollExtent='126,25' Size='126,25' Style='/Sliderbars.Options.Style' Tooltip='@SoundVolume3dTooltip' UpperLimit='100' ValueUpdateContinuous='false'/>
<Text Font='/Fonts.HudFont3' LocalText='[@MusicVolume]' Location='51,130' Name='SoundMusicText' ScrollExtent='158,25' Size='158,25' TextAlignment='Right' TextAlignmentVertical='Center'>@MusicVolume</Text>
<Sliderbar LocalTooltip='[@SoundMusicTooltip]' Location='222,130' Name='SoundMusic' ScrollExtent='126,25' Size='126,25' Style='/Sliderbars.Options.Style' Tooltip='@SoundMusicTooltip' UpperLimit='100' Value='25' ValueUpdateContinuous='false'/>
<Template Name='Row Template' Size='400,20'>\<text font = \'/Fonts.HUDFont2\' location = \'5,3\' size = \'400,20\'\>
$Name$
\</text\></Template>
<Text Font='/Fonts.HudFont3' LocalText='[@SoundMode]' Location='11,20' Name='SoundModeText' ScrollExtent='162,25' Size='162,25' TextAlignment='Right' TextAlignmentVertical='Center'>@SoundMode</Text>
<Dropdownbox BackgroundColor='#FFFFFF' BackgroundOpacity='0.659' BackgroundTint='#000000' DataSource='/DataSources.SoundOptionsDataSource' LocalTooltip='[@SoundModeTooltip]' Location='185,21' Name='SoundMode' RowTemplate='Row Template' ScrollExtent='400,32' SelectedItemIndex='3' Size='400,32' Style='/Dropdowns.HudPane.style' Tooltip='@SoundModeTooltip'/>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@SoundReverseStereoTooltip]' Location='248,133' Name='ReverseStereo' ScrollExtent='291,25' Size='291,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SoundReverseStereoTooltip' Visible='false'>@SoundReverseStereo</Checkbox>
</Page>
<Page ContextCapable='true' ContextToParent='true' Location='22,69' Name='KeymapOptionsPage' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = true' PackLocation='Center,Center' PackLocationProp='-378/0001,-231/0001' ScrollExtent='758,468' Size='758,468' Visible='false'>
<Image BackgroundOpacity='1.000' Location='7,41' Name='DescriptionBorder' PackLocation='left,bottom' PackLocationProp='0007/0001,-427/0001' PackSize='absolute,fixed' PackSizeProp='0350/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='408,58' Size='408,58'/>
<Textbox BackgroundColor='#DDDDDD' BackgroundOpacity='0.475' LocalTooltip='[@OptionsNameTooltip]' Location='696,479' MaxLength='15' Name='CaptureInput' PackLocation='right,bottom' PackLocationProp='-062/0001,0011/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='52,20' Size='52,20' Style='/ConsoleTextbox.ShortStyle' Tooltip='@OptionsNameTooltip'></Textbox>
<Text Font='/Fonts.HudFont1' LocalText='[@KeymapCommandTitle]' Location='13,94' Name='CommandTitle' ScrollExtent='141,25' Size='141,25' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapCommandTitle</Text>
<Text Font='/Fonts.HudFont1' LocalText='[@KeymapList1Title]' Location='159,94' Name='List1Title' ScrollExtent='121,25' Size='121,25' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapList1Title</Text>
<Text Font='/Fonts.HudFont1' LocalText='[@KeymapList2Title]' Location='282,94' Name='List2Title' ScrollExtent='119,25' Size='119,25' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapList2Title</Text>
<Template Name='CommandListTemplate' Size='145,25'>\<text font = \'/Fonts.HUDFont2\' location = \'5,0\' size = \'145,25\' textalignment = \'left\' textalignmentvertical = \'center\'\>
$localactionname$
\</text\></Template>
<Template Name='KeyList2Template' Size='119,25'>\<text font = \'/Fonts.HUDFont2\' location = \'0,2\' size = \'120,23\' textalignment = \'center\' textalignmentvertical = \'center\' textcolor = \'$color2$\'\>
$key2$
\</text\></Template>
<Template Name='KeyList1Template' Size='119,25'>\<text font = \'/Fonts.HUDFont2\' location = \'0,2\' size = \'120,23\' textalignment = \'center\' textalignmentvertical = \'center\' textcolor = \'$color1$\'\>
$key1$
\</text\></Template>
<Text Color='#CCCCCC' Font='/Fonts.HudFont1' LocalText='Status' Location='594,434' Name='StatusMessage' ScrollExtent='147,25' Size='147,25' TextAlignmentVertical='Center'>Status</Text>
<Button LocalText='[@KeymapChangeBinding]' LocalTooltip='[@KeymapChangeBindingTooltip]' Location='431,434' Name='ChangeBinding' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@KeymapChangeBindingTooltip'>@KeymapChangeBinding</Button>
<Button LocalText='[@KeymapDeleteBinding]' LocalTooltip='[@KeymapDeleteBindingTooltip]' Location='512,434' Name='DeleteBinding' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@KeymapDeleteBindingTooltip'>@KeymapDeleteBinding</Button>
<Image BackgroundOpacity='1.000' Location='424,429' Name='StatusBorder' PackLocation='left,bottom' PackLocationProp='0424/0001,-039/0001' PackSize='absolute,fixed' PackSizeProp='0440/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='318,31' Size='318,31'/>
<Checkbox Activated='true' BackgroundColor='#FFFFFF' BackgroundOpacity='1.000' Checked='true' Cursor='s' LocalTooltip='[@OptionKeyboardTooltip]' Location='422,42' Name='KeyboardCheckbox' ScrollExtent='64,64' Size='64,64' Style='/Buttons.OptionKeyboard.checkstyle' Tooltip='@OptionKeyboardTooltip'></Checkbox>
<Checkbox BackgroundColor='#FFFFFF' BackgroundOpacity='1.000' Cursor='s' LocalTooltip='[@OptionMouseTooltip]' Location='485,42' Name='MouseCheckbox' ScrollExtent='64,64' Size='64,64' Style='/Buttons.OptionMouse.checkstyle' Tooltip='@OptionMouseTooltip'></Checkbox>
<Checkbox BackgroundColor='#FFFFFF' BackgroundOpacity='1.000' Cursor='s' LocalTooltip='[@OptionJoystickTooltip]' Location='548,42' Name='Joy1Checkbox' ScrollExtent='64,64' Size='64,64' Style='/Buttons.OptionJoystick.checkstyle' Tooltip='@OptionJoystickTooltip'></Checkbox>
<Checkbox BackgroundColor='#FFFFFF' BackgroundOpacity='1.000' Cursor='s' Enabled='false' LocalTooltip='[@OptionJoystickTooltip]' Location='615,42' Name='Joy2Checkbox' ScrollExtent='64,64' Size='64,64' Style='/Buttons.OptionJoystick.checkstyle' Tooltip='@OptionJoystickTooltip'></Checkbox>
<Checkbox BackgroundColor='#FFFFFF' BackgroundOpacity='1.000' Cursor='s' Enabled='false' LocalTooltip='[@OptionJoystickTooltip]' Location='682,42' Name='Joy3Checkbox' ScrollExtent='64,64' Size='64,64' Style='/Buttons.OptionJoystick.checkstyle' Tooltip='@OptionJoystickTooltip'></Checkbox>
<Page Location='426,113' Name='MousePage' ScrollExtent='315,314' Size='315,314' Visible='false'>
<Text Font='/SmallFont' LocalText='[@MouseSensitivity]' LocalTooltip='[@MouseSensitivityTooltip]' Location='6,32' Name='MouseSensitivityText' ScrollExtent='125,20' Size='125,20' TextAlignment='Right' Tooltip='@MouseSensitivityTooltip'>@MouseSensitivity</Text>
<Sliderbar LocalTooltip='[@MouseSensitivityTooltip]' Location='138,23' Name='MouseSensitivitySlider' ScrollExtent='174,30' Size='174,30' Style='/Sliderbars.Options.Style' Tooltip='@MouseSensitivityTooltip' UpperLimit='1000' Value='571'/>
<Text Font='/SmallFont' LocalText='[@MouseSteerSensitivity]' LocalTooltip='[@MouseSteerSensitivityTooltip]' Location='6,68' Name='MouseSteerSensitivityText' ScrollExtent='125,20' Size='125,20' TextAlignment='Right' Tooltip='@MouseSteerSensitivityTooltip'>@MouseSteerSensitivity</Text>
<Sliderbar LocalTooltip='[@MouseSteerSensitivityTooltip]' Location='138,57' Name='MouseSteerSensitivitySlider' ScrollExtent='174,30' Size='174,30' Style='/Sliderbars.Options.Style' Tooltip='@MouseSteerSensitivityTooltip' UpperLimit='1000' Value='744'/>
<Text Font='/SmallFont' LocalText='[@MouseAutoCenter]' LocalTooltip='[@MouseAutoCenterTooltip]' Location='6,99' Name='MouseAuoCenterText' ScrollExtent='125,20' Size='125,20' TextAlignment='Right' Tooltip='@MouseAutoCenterTooltip'>@MouseAutoCenter</Text>
<Sliderbar LocalTooltip='[@MouseAutoCenterTooltip]' Location='138,89' Name='MouseAutoCenterSlider' ScrollExtent='174,30' Size='174,30' Style='/Sliderbars.Options.Style' Tooltip='@MouseAutoCenterTooltip' UpperLimit='1000' Value='744'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@SmoothMouseTooltip]' Location='0,128' Name='SmoothingCheck' ScrollExtent='158,25' Size='158,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@SmoothMouseTooltip'>@SmoothMouse</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@InvertMouseTooltip]' Location='160,128' Name='InvertMouseCheck' ScrollExtent='157,25' Size='157,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@InvertMouseTooltip'>@InvertMouse</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@MouseSteerTooltip]' Location='0,158' Name='SteerCheck' ScrollExtent='159,25' Size='159,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@MouseSteerTooltip'>@MouseSteer</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@MouseFreelookTooltip]' Location='160,158' Name='FreelookCheck' ScrollExtent='154,25' Size='154,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@MouseFreelookTooltip'>@MouseFreelook</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@MouseReversePilotTooltip]' Location='0,188' Name='ReversePilotCheck' ScrollExtent='206,25' Size='206,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@MouseReversePilotTooltip'>@MouseReversePilot</Checkbox>
<Text Font='/Fonts.HudFont3' LocalText='[@Mouse]' Location='11,5' Name='Name' ScrollExtent='196,20' Size='196,20'>@Mouse</Text>
<Checkbox BackgroundOpacity='1.000' Location='0,228' Name='M1' ScrollExtent='75,22' Size='75,22' Style='/Buttons.KeymapButton.joystyle' value='Left Mouse Button'>MOUSE 1</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='77,228' Name='M2' ScrollExtent='75,22' Size='75,22' Style='/Buttons.KeymapButton.joystyle' value='Mouse Button 2'>MOUSE 2</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='154,228' Name='M3' ScrollExtent='75,22' Size='75,22' Style='/Buttons.KeymapButton.joystyle' value='Mouse Button 3'>MOUSE 3</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='231,228' Name='M4' ScrollExtent='75,22' Size='75,22' Style='/Buttons.KeymapButton.joystyle' value='Mouse Button 4'>MOUSE 4</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='1,255' Name='M5' ScrollExtent='75,22' Size='75,22' Style='/Buttons.KeymapButton.joystyle' value='Mouse Button 5'>MOUSE 5</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='78,255' Name='M6' ScrollExtent='75,22' Size='75,22' Style='/Buttons.KeymapButton.joystyle' value='Mouse Button 6'>MOUSE 6</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='155,255' Name='M7' ScrollExtent='75,22' Size='75,22' Style='/Buttons.KeymapButton.joystyle' value='Mouse Button 7'>MOUSE 7</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='232,255' Name='M8' ScrollExtent='75,22' Size='75,22' Style='/Buttons.KeymapButton.joystyle' value='Mouse Button 8'>MOUSE 8</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='1,282' Name='MDown' ScrollExtent='75,22' Size='75,22' Style='/Buttons.KeymapButton.joystyle' value='Mouse Wheel Down'>WHEEL DN</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='79,282' Name='MUp' ScrollExtent='75,22' Size='75,22' Style='/Buttons.KeymapButton.joystyle' value='Mouse Wheel Up'>WHEEL UP</Checkbox>
</Page>
<Page Location='422,107' Name='KeyboardPage' ScrollExtent='325,319' Size='325,319'>
<Page Location='134,-2' Name='Mode' ScrollExtent='184,36' Size='184,36' UserMovable='true' UserResizable='true'>
<Text Font='/Fonts.HudFont1' LocalText='[@KeyboardModifier]' Location='-3,1' Name='Modifier' ScrollExtent='196,15' Size='196,15' TextAlignment='Center'>@KeyboardModifier</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorShift]' Location='0,16' Name='J1Text' ScrollExtent='60,24' Size='60,15' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorShift</Text>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@KeyboardShift]' Location='0,16' Name='Shift' ScrollExtent='60,15' Size='60,15' Style='/Buttons.KeymapButton.joystyle' Tooltip='@KeyboardShift' TooltipStyle='/Tooltips.Default' value='Left Shift'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorCtrl]' Location='64,16' Name='J8Text' ScrollExtent='60,24' Size='60,15' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorCtrl</Text>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@KeyboardCtrl]' Location='62,16' Name='Ctrl' ScrollExtent='60,15' Size='60,15' Style='/Buttons.KeymapButton.joystyle' Tooltip='@KeyboardCtrl' TooltipStyle='/Tooltips.Default' value='Left Ctrl'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorAlt]' Location='127,17' Name='J10Text' ScrollExtent='60,24' Size='60,15' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorAlt</Text>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@KeyboardAlt]' Location='125,16' Name='Alt' ScrollExtent='60,15' Size='60,15' Style='/Buttons.KeymapButton.joystyle' Tooltip='@KeyboardAlt' TooltipStyle='/Tooltips.Default' value='Left Alt'></Checkbox>
</Page>
<Text Font='/Fonts.HudFont3' LocalText='[@Keyboard]' Location='11,5' Name='Name' ScrollExtent='196,20' Size='196,20'>@Keyboard</Text>
<Page Location='12,38' Name='Row1' ScrollExtent='300,28' Size='300,28'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorF1]' Location='0,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorF1</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='0,3' Name='K1' Opacity='0.800' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='F1'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorF2]' Location='25,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorF2</Text>
<Checkbox BackgroundOpacity='1.000' Location='25,3' Name='K2' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='F2'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorF3]' Location='50,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorF3</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='50,3' Name='K3' Opacity='0.750' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='F3'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorF4]' Location='75,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorF4</Text>
<Checkbox BackgroundOpacity='1.000' Location='75,3' Name='K4' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='F4'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorF5]' Location='100,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorF5</Text>
<Checkbox BackgroundOpacity='1.000' Location='100,3' Name='K5' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='F5'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorF6]' Location='125,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorF6</Text>
<Checkbox BackgroundOpacity='1.000' Location='125,3' Name='K6' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='F6'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorF7]' Location='150,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorF7</Text>
<Checkbox BackgroundOpacity='1.000' Location='150,3' Name='K7' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='F7'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorF8]' Location='175,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorF8</Text>
<Checkbox BackgroundOpacity='1.000' Location='175,3' Name='K8' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='F8'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorF9]' Location='200,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorF9</Text>
<Checkbox BackgroundOpacity='1.000' Location='200,3' Name='K9' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='F9'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorF10]' Location='225,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorF10</Text>
<Checkbox BackgroundOpacity='1.000' Location='225,3' Name='K10' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='F10'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorF11]' Location='250,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorF11</Text>
<Checkbox BackgroundOpacity='1.000' Location='250,3' Name='K11' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='F11'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorF12]' Location='275,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorF12</Text>
<Checkbox BackgroundOpacity='1.000' Location='275,3' Name='K12' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='F12'></Checkbox>
</Page>
<Page Location='12,149' Name='Row2' ScrollExtent='300,50' Size='300,50'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorDelete]' Location='0,3' Name='K1Text' ScrollExtent='43,36' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorDelete</Text>
<Checkbox BackgroundOpacity='1.000' Location='0,3' Name='K1' ScrollExtent='43,20' Size='43,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Delete'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorEnd]' Location='50,3' Name='K1Text' ScrollExtent='43,36' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorEnd</Text>
<Checkbox BackgroundOpacity='1.000' Location='50,3' Name='K2' ScrollExtent='43,20' Size='43,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='End'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorHome]' Location='100,3' Name='K1Text' ScrollExtent='43,36' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorHome</Text>
<Checkbox BackgroundOpacity='1.000' Location='100,3' Name='K3' ScrollExtent='43,20' Size='43,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Home'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorInsert]' Location='150,3' Name='K1Text' ScrollExtent='43,36' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorInsert</Text>
<Checkbox BackgroundOpacity='1.000' Location='150,3' Name='K4' ScrollExtent='43,20' Size='43,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Insert'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorPageDown]' Location='200,3' Name='K1Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorPageDown</Text>
<Checkbox BackgroundOpacity='1.000' Location='200,3' Name='K5' Opacity='0.600' ScrollExtent='43,20' Size='43,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Page Down'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorPageUp]' Location='250,3' Name='K1Text' ScrollExtent='43,36' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorPageUp</Text>
<Checkbox BackgroundOpacity='1.000' Location='250,3' Name='K6' ScrollExtent='43,20' Size='43,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Page Up'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorUp]' Location='0,25' Name='K1Text' ScrollExtent='43,36' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorUp</Text>
<Checkbox BackgroundOpacity='1.000' Location='0,25' Name='K7' ScrollExtent='43,20' Size='43,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Up Arrow'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorDown]' Location='50,25' Name='K1Text' ScrollExtent='43,36' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorDown</Text>
<Checkbox BackgroundOpacity='1.000' Location='50,25' Name='K8' ScrollExtent='43,20' Size='43,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Down Arrow'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorLeft]' Location='100,25' Name='K1Text' ScrollExtent='43,36' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorLeft</Text>
<Checkbox BackgroundOpacity='1.000' Location='100,25' Name='K9' ScrollExtent='43,20' Size='43,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Left Arrow'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorRight]' Location='150,25' Name='K1Text' ScrollExtent='43,36' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorRight</Text>
<Checkbox BackgroundOpacity='1.000' Location='150,25' Name='K10' ScrollExtent='43,20' Size='43,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Right Arrow'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorTab]' Location='199,25' Name='K1Text' ScrollExtent='43,36' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorTab</Text>
<Checkbox BackgroundOpacity='1.000' Location='199,25' Name='K11' ScrollExtent='45,20' Size='45,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Tab'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorSpace]' Location='251,25' Name='K12Text' ScrollExtent='43,36' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorSpace</Text>
<Checkbox BackgroundOpacity='1.000' Location='249,25' Name='K12' ScrollExtent='45,20' Size='45,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Space'></Checkbox>
</Page>
<Page Location='12,60' Name='Row3' ScrollExtent='300,28' Size='300,28'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorA]' Location='0,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorA</Text>
<Checkbox BackgroundOpacity='1.000' Location='0,3' Name='K1' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='A'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorB]' Location='25,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorB</Text>
<Checkbox BackgroundOpacity='1.000' Location='25,3' Name='K2' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='B'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorC]' Location='50,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorC</Text>
<Checkbox BackgroundOpacity='1.000' Location='50,3' Name='K3' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='C'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorD]' Location='75,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorD</Text>
<Checkbox BackgroundOpacity='1.000' Location='75,3' Name='K4' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='D'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorE]' Location='100,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorE</Text>
<Checkbox BackgroundOpacity='1.000' Location='100,3' Name='K5' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='E'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorF]' Location='125,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorF</Text>
<Checkbox BackgroundOpacity='1.000' Location='125,3' Name='K6' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='F'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorG]' Location='150,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorG</Text>
<Checkbox BackgroundOpacity='1.000' Location='150,3' Name='K7' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='G'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorH]' Location='175,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorH</Text>
<Checkbox BackgroundOpacity='1.000' Location='175,3' Name='K8' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='H'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorI]' Location='200,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorI</Text>
<Checkbox BackgroundOpacity='1.000' Location='200,3' Name='K9' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='I'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorJ]' Location='225,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorJ</Text>
<Checkbox BackgroundOpacity='1.000' Location='225,3' Name='K10' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='J'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorK]' Location='250,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorK</Text>
<Checkbox BackgroundOpacity='1.000' Location='250,3' Name='K11' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='K'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorL]' Location='275,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorL</Text>
<Checkbox BackgroundOpacity='1.000' Location='275,3' Name='K12' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='L'></Checkbox>
</Page>
<Page Location='12,82' Name='Row4' ScrollExtent='300,28' Size='300,28'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorM]' Location='0,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorM</Text>
<Checkbox BackgroundOpacity='1.000' Location='0,3' Name='K1' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='M'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorN]' Location='25,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorN</Text>
<Checkbox BackgroundOpacity='1.000' Location='25,3' Name='K2' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='N'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorO]' Location='50,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorO</Text>
<Checkbox BackgroundOpacity='1.000' Location='50,3' Name='K3' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='O'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorP]' Location='75,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorP</Text>
<Checkbox BackgroundOpacity='1.000' Location='75,3' Name='K4' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='P'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorQ]' Location='100,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorQ</Text>
<Checkbox BackgroundOpacity='1.000' Location='100,3' Name='K5' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Q'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorR]' Location='125,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorR</Text>
<Checkbox BackgroundOpacity='1.000' Location='125,3' Name='K6' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='R'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorS]' Location='150,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorS</Text>
<Checkbox BackgroundOpacity='1.000' Location='150,3' Name='K7' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='S'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorT]' Location='175,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorT</Text>
<Checkbox BackgroundOpacity='1.000' Location='175,3' Name='K8' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='T'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorU]' Location='200,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorU</Text>
<Checkbox BackgroundOpacity='1.000' Location='200,3' Name='K9' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='U'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorV]' Location='225,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorV</Text>
<Checkbox BackgroundOpacity='1.000' Location='225,3' Name='K10' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='V'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorW]' Location='250,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorW</Text>
<Checkbox BackgroundOpacity='1.000' Location='250,3' Name='K11' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='W'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorX]' Location='275,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorX</Text>
<Checkbox BackgroundOpacity='1.000' Location='275,3' Name='K12' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='X'></Checkbox>
</Page>
<Page Location='12,105' Name='Row5' ScrollExtent='300,28' Size='300,28'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorY]' Location='0,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorY</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='0,3' Name='K1' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Y'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorZ]' Location='25,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorZ</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='25,3' Name='K2' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Z'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditor1]' Location='50,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditor1</Text>
<Checkbox BackgroundOpacity='1.000' Location='50,3' Name='K3' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='1'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditor2]' Location='75,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditor2</Text>
<Checkbox BackgroundOpacity='1.000' Location='75,3' Name='K4' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='2'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditor3]' Location='100,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditor3</Text>
<Checkbox BackgroundOpacity='1.000' Location='100,3' Name='K5' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='3'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditor4]' Location='125,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditor4</Text>
<Checkbox BackgroundOpacity='1.000' Location='125,3' Name='K6' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='4'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditor5]' Location='150,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditor5</Text>
<Checkbox BackgroundOpacity='1.000' Location='150,3' Name='K7' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='5'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditor6]' Location='175,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditor6</Text>
<Checkbox BackgroundOpacity='1.000' Location='175,3' Name='K8' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='6'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditor7]' Location='200,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditor7</Text>
<Checkbox BackgroundOpacity='1.000' Location='200,3' Name='K9' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='7'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditor8]' Location='225,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditor8</Text>
<Checkbox BackgroundOpacity='1.000' Location='225,3' Name='K10' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='8'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditor9]' Location='250,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditor9</Text>
<Checkbox BackgroundOpacity='1.000' Location='250,3' Name='K11' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='9'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditor0]' Location='275,3' Name='K1Text' ScrollExtent='20,60' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditor0</Text>
<Checkbox BackgroundOpacity='1.000' Location='275,3' Name='K12' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='0'></Checkbox>
</Page>
<Page Location='12,127' Name='Row6' ScrollExtent='300,28' Size='300,28'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorApostrophe]' Location='0,3' Name='K1Text' ScrollExtent='20,96' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorApostrophe</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='0,3' Name='K1' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='`'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorMinus]' Location='25,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorMinus</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='25,3' Name='K2' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='-'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorEqual]' Location='50,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorEqual</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='50,3' Name='K3' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='='></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorRBracket]' Location='75,3' Name='K1Text' ScrollExtent='20,84' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorRBracket</Text>
<Checkbox BackgroundOpacity='1.000' Location='75,3' Name='K4' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='['></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorLBracket]' Location='100,3' Name='K1Text' ScrollExtent='20,84' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorLBracket</Text>
<Checkbox BackgroundOpacity='1.000' Location='100,3' Name='K5' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value=']'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorSlash]' Location='125,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorSlash</Text>
<Checkbox BackgroundOpacity='1.000' Location='125,3' Name='K6' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='Backslash'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorSemicolon]' Location='150,3' Name='K1Text' ScrollExtent='20,96' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorSemicolon</Text>
<Checkbox BackgroundOpacity='1.000' Location='150,3' Name='K7' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value=':'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorComma]' Location='175,3' Name='K1Text' ScrollExtent='20,84' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorComma</Text>
<Checkbox BackgroundOpacity='1.000' Location='175,3' Name='K8' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value=','></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorPeriod]' Location='200,3' Name='K1Text' ScrollExtent='20,84' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorPeriod</Text>
<Checkbox BackgroundOpacity='1.000' Location='200,3' Name='K9' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='.'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorGrave]' Location='225,3' Name='K1Text' ScrollExtent='20,72' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorGrave</Text>
<Checkbox BackgroundOpacity='1.000' Location='225,3' Name='K10' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorBackslash]' Location='250,3' Name='K1Text' ScrollExtent='20,84' Size='20,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorBackslash</Text>
<Checkbox BackgroundOpacity='1.000' Location='250,3' Name='K11' ScrollExtent='20,20' Size='20,20' Style='/Buttons.KeymapButton.keystyle' TooltipStyle='/Tooltips.Default' value='/'></Checkbox>
</Page>
<Page Location='-1,193' Name='Large' ScrollExtent='325,129' Size='325,129' UserMovable='true' UserResizable='true'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorBackspace]' Location='4,3' Name='J1Text' ScrollExtent='74,24' Size='74,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorBackspace</Text>
<Checkbox BackgroundOpacity='1.000' Location='4,3' Name='J1' ScrollExtent='75,22' Size='75,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Backspace'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorCapsLock]' Location='84,3' Name='J2Text' ScrollExtent='74,24' Size='74,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorCapsLock</Text>
<Checkbox BackgroundOpacity='1.000' Location='84,3' Name='J2' ScrollExtent='75,22' Size='75,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Caps Lock'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumEnter]' Location='164,3' Name='J3Text' ScrollExtent='74,24' Size='74,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumEnter</Text>
<Checkbox BackgroundOpacity='1.000' Location='164,3' Name='J3' ScrollExtent='75,22' Size='75,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad Enter'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorApplication]' Location='244,3' Name='J4Text' ScrollExtent='74,24' Size='74,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorApplication</Text>
<Checkbox BackgroundOpacity='1.000' Location='244,3' Name='J4' ScrollExtent='75,22' Size='75,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Application'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorPrint]' Location='1,28' Name='J5Text' ScrollExtent='63,24' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorPrint</Text>
<Checkbox BackgroundOpacity='1.000' Location='1,28' Name='J5' ScrollExtent='63,22' Size='63,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Print Screen'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorScroll]' Location='66,28' Name='J6Text' ScrollExtent='63,24' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorScroll</Text>
<Checkbox BackgroundOpacity='1.000' Location='66,28' Name='J6' ScrollExtent='63,22' Size='63,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Scroll Lock'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorPause]' Location='131,28' Name='J7Text' ScrollExtent='63,24' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorPause</Text>
<Checkbox BackgroundOpacity='1.000' Location='131,28' Name='J7' ScrollExtent='63,22' Size='63,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Pause'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorEnter]' Location='196,28' Name='J23Text' ScrollExtent='63,24' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorEnter</Text>
<Checkbox BackgroundOpacity='1.000' Location='196,28' Name='J23' ScrollExtent='63,22' Size='63,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Enter'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumLock]' Location='261,28' Name='J27Text' ScrollExtent='63,36' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumLock</Text>
<Checkbox BackgroundOpacity='1.000' Location='261,28' Name='J27' ScrollExtent='63,22' Size='63,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Lock'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorShift]' Location='15,53' Name='J24Text' ScrollExtent='43,36' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorShift</Text>
<Checkbox BackgroundOpacity='1.000' Location='15,53' Name='J24' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='SHIFT'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPad1]' Location='65,53' Name='J8Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPad1</Text>
<Checkbox BackgroundOpacity='1.000' Location='65,53' Name='J8' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad 1'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPad2]' Location='115,53' Name='J9Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPad2</Text>
<Checkbox BackgroundOpacity='1.000' Location='115,53' Name='J9' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad 2'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPad3]' Location='165,53' Name='J10Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPad3</Text>
<Checkbox BackgroundOpacity='1.000' Location='165,53' Name='J10' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad 3'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPad4]' Location='215,53' Name='J11Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPad4</Text>
<Checkbox BackgroundOpacity='1.000' Location='215,53' Name='J11' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad 4'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPad5]' Location='265,53' Name='J12Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPad5</Text>
<Checkbox BackgroundOpacity='1.000' Location='265,53' Name='J12' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad 5'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorCtrl]' Location='15,78' Name='J25Text' ScrollExtent='43,36' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorCtrl</Text>
<Checkbox BackgroundOpacity='1.000' Location='15,78' Name='J25' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='CTRL'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPad6]' Location='65,78' Name='J13Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPad6</Text>
<Checkbox BackgroundOpacity='1.000' Location='65,78' Name='J13' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad 6'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPad7]' Location='115,78' Name='J14Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPad7</Text>
<Checkbox BackgroundOpacity='1.000' Location='115,78' Name='J14' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad 7'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPad8]' Location='165,78' Name='J15Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPad8</Text>
<Checkbox BackgroundOpacity='1.000' Location='165,78' Name='J15' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad 8'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPad9]' Location='215,78' Name='J16Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPad9</Text>
<Checkbox BackgroundOpacity='1.000' Location='215,78' Name='J16' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad 9'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPad0]' Location='265,78' Name='J17Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPad0</Text>
<Checkbox BackgroundOpacity='1.000' Location='265,78' Name='J17' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad 0'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorAlt]' Location='15,103' Name='J26Text' ScrollExtent='43,36' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorAlt</Text>
<Checkbox BackgroundOpacity='1.000' Location='15,103' Name='J26' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='ALT'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPadDiv]' Location='65,103' Name='J18Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPadDiv</Text>
<Checkbox BackgroundOpacity='1.000' Location='65,103' Name='J18' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad /'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPadMul]' Location='115,103' Name='J19Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPadMul</Text>
<Checkbox BackgroundOpacity='1.000' Location='115,103' Name='J19' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad *'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPadSub]' Location='165,103' Name='J20Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPadSub</Text>
<Checkbox BackgroundOpacity='1.000' Location='165,103' Name='J20' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad -'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPadAdd]' Location='215,103' Name='J21Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPadAdd</Text>
<Checkbox BackgroundOpacity='1.000' Location='215,103' Name='J21' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad +'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@KeymapEditorNumPadDot]' Location='265,103' Name='J22Text' ScrollExtent='43,48' Size='43,20' TextAlignment='Center' TextAlignmentVertical='Center'>@KeymapEditorNumPadDot</Text>
<Checkbox BackgroundOpacity='1.000' Location='265,103' Name='J22' ScrollExtent='43,22' Size='43,22' Style='/Buttons.KeymapButton.joystyle' TooltipStyle='/Tooltips.Default' value='Num Pad .'></Checkbox>
</Page>
</Page>
<Page Location='420,106' Name='JoystickPage' ScrollExtent='328,320' Size='328,320' Visible='false'>
<Page Location='-3,3' Name='JoyLayout' ScrollExtent='331,319' Size='331,319'>
<Text Font='/Fonts.HudFont3' LocalText='Name (local)' Location='11,5' Name='Name' ScrollExtent='196,20' Size='196,20'>Name (local)</Text>
<Page Location='3,88' Name='Normal' ScrollExtent='330,107' Size='330,107'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Bobble' Location='0,-1' Name='J1Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Bobble</Text>
<Checkbox BackgroundOpacity='1.000' Location='0,-1' Name='J1' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='65,-1' Name='J2Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='65,-1' Name='J2' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='130,-1' Name='J3Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='130,-1' Name='J3' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='195,-1' Name='J4Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='195,-1' Name='J4' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='260,-1' Name='J5Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='260,-1' Name='J5' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='0,26' Name='J6Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='0,26' Name='J6' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='65,26' Name='J7Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='65,26' Name='J7' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='130,26' Name='J8Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='130,26' Name='J8' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='195,26' Name='J9Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='195,26' Name='J9' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='260,26' Name='J10Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='260,26' Name='J10' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='0,53' Name='J11Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='0,53' Name='J11' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='65,53' Name='J12Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='65,53' Name='J12' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='130,53' Name='J13Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='130,53' Name='J13' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='195,53' Name='J14Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='195,53' Name='J14' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='260,53' Name='J15Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='260,53' Name='J15' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='0,80' Name='J16Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='0,80' Name='J16' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='65,80' Name='J17Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='65,80' Name='J17' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='130,80' Name='J18Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='130,80' Name='J18' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='195,80' Name='J19Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='195,80' Name='J19' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='260,80' Name='J20Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='260,80' Name='J20' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
</Page>
<Page Location='2,245' Name='Shifted' ScrollExtent='330,68' Size='330,68'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Bobble' Location='0,15' Name='J1Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Bobble</Text>
<Checkbox BackgroundOpacity='1.000' Location='0,15' Name='J1' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='65,15' Name='J2Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='65,15' Name='J2' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='130,15' Name='J3Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='130,15' Name='J3' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='195,15' Name='J4Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='195,15' Name='J4' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='260,15' Name='J5Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='260,15' Name='J5' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='0,42' Name='J6Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='0,42' Name='J6' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='65,42' Name='J7Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='65,42' Name='J7' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='130,42' Name='J8Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='130,42' Name='J8' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='195,42' Name='J9Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='195,42' Name='J9' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Joy 1' Location='260,42' Name='J10Text' ScrollExtent='63,20' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>Joy 1</Text>
<Checkbox BackgroundOpacity='1.000' Location='260,42' Name='J10' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text Font='/Fonts.HudFont1' LocalText='[@JoystickShift]' Location='11,-2' Name='Name' ScrollExtent='196,15' Size='196,15'>@JoystickShift</Text>
</Page>
<Page Location='2,199' Name='POV' ScrollExtent='320,43' Size='320,43'>
<Text Font='/Fonts.HudFont1' LocalText='[@JoystickPOV]' Location='11,0' Name='Name' ScrollExtent='196,15' Size='196,15'>@JoystickPOV</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@JoyPOVUp]' Location='0,17' Name='J1Text' ScrollExtent='63,24' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>@JoyPOVUp</Text>
<Checkbox BackgroundOpacity='1.000' Location='0,17' Name='J1' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@JoyPOVDown]' Location='65,17' Name='J2Text' ScrollExtent='63,24' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>@JoyPOVDown</Text>
<Checkbox BackgroundOpacity='1.000' Location='65,17' Name='J2' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@JoyPOVRight]' Location='130,17' Name='J3Text' ScrollExtent='63,24' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>@JoyPOVRight</Text>
<Checkbox BackgroundOpacity='1.000' Location='130,17' Name='J3' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@JoyPOVLeft]' Location='195,17' Name='J4Text' ScrollExtent='63,24' Size='63,20' TextAlignment='Center' TextAlignmentVertical='Center'>@JoyPOVLeft</Text>
<Checkbox BackgroundOpacity='1.000' Location='195,17' Name='J4' ScrollExtent='64,22' Size='64,22' Style='/Buttons.KeymapButton.joystyle'></Checkbox>
</Page>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@JoystickReversePilotTooltip]' Location='137,25' Name='ReversePilotChecked' ScrollExtent='285,25' Size='285,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@JoystickReversePilotTooltip'>@JoystickReversePilot</Checkbox>
<Text Font='/SmallFont' LocalText='[@JoystickSensitivity]' LocalTooltip='[@JoystickSensitivityTooltip]' Location='6,62' Name='JoystickSensitivityText' ScrollExtent='125,16' Size='125,16' TextAlignment='Right' Tooltip='@JoystickSensitivityTooltip'>@JoystickSensitivity</Text>
<Sliderbar LocalTooltip='[@JoystickSensitivityTooltip]' Location='138,53' Name='JoystickSensitivitySlider' ScrollExtent='180,30' Size='180,30' Style='/Sliderbars.Options.Style' Tooltip='@JoystickSensitivityTooltip' UpperLimit='1000' Value='463'/>
</Page>
</Page>
<ImageStyle Name='TabBorderTopStyle'>
<ImageFrame Source='ui_window_map_tab_border_00' SourceRect='8,0,24,2'/>
</ImageStyle>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@KeymapGlobalTooltip]' Location='5,6' Name='GlobalTab' OnDisableEffector='DisableEffector' PackLocation='left,top' PackLocationProp='0005/0001,0006/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='106,31' Size='106,31' Style='/Buttons.OptionTab.style' Tooltip='@KeymapGlobalTooltip'>@KeymapGlobal</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@KeymapOverheadTooltip]' Location='111,6' Name='OverheadTab' PackLocation='left,top' PackLocationProp='0111/0001,0006/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='106,31' Size='106,31' Style='/Buttons.OptionTab.style' Tooltip='@KeymapOverheadTooltip'>@KeymapOverhead</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@KeymapGeneralTooltip]' Location='217,6' Name='HUDTab' PackLocation='left,top' PackLocationProp='0217/0001,0006/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='106,31' Size='106,31' Style='/Buttons.OptionTab.style' Tooltip='@KeymapGeneralTooltip'>@KeymapGeneral</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@KeymapSoldierTooltip]' Location='323,6' Name='SoldierTab' PackLocation='left,top' PackLocationProp='0323/0001,0006/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='106,31' Size='106,31' Style='/Buttons.OptionTab.style' Tooltip='@KeymapSoldierTooltip'>@KeymapSoldier</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@KeymapVehicleTooltip]' Location='429,6' Name='VehicleTab' PackLocation='left,top' PackLocationProp='0429/0001,0006/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='106,31' Size='106,31' Style='/Buttons.OptionTab.style' Tooltip='@KeymapVehicleTooltip'>@KeymapVehicle</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@KeymapGroundTooltip]' Location='535,6' Name='GroundTab' PackLocation='left,top' PackLocationProp='0535/0001,0006/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='106,31' Size='106,31' Style='/Buttons.OptionTab.style' Tooltip='@KeymapGroundTooltip'>@KeymapGround</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@KeymapAirTooltip]' Location='641,6' Name='AirTab' PackLocation='left,top' PackLocationProp='0641/0001,0006/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='106,31' Size='106,31' Style='/Buttons.OptionTab.style' Tooltip='@KeymapAirTooltip'>@KeymapAir</Checkbox>
<Image BackgroundOpacity='1.000' Location='3,35' Name='TabBorder' PackLocation='left,top' PackLocationProp='0003/0001,0035/0001' PackSize='absolute,absolute' PackSizeProp='0012/0001,0038/0001' RStyleDefault='/WindowPanes.BigTabBorder.style' ScrollExtent='746,430' Size='746,430'/>
<Page BackgroundColor='#0000FF' Location='4,37' Name='GlobalModePage' ScrollExtent='418,426' Size='418,426'>
<Text Font='/Fonts.HudFont1' LocalText='[@KeyMapGlobalDescription]' Location='8,7' Name='Description' ScrollExtent='399,50' Size='399,50' TextAlignment='Center' TextAlignmentVertical='Center'>@KeyMapGlobalDescription</Text>
<Scrollbar Control='CommandList' Location='402,78' Name='Scroll' ScrollExtent='9,345' Size='9,345' Style='/ScrollBars.vertical.style'/>
<DataSource Name='PageData'>
<Data actionname='@GA_Screenshot' color='#ffffff' key1='=' Localactionname='[@GA_Screenshot]' Name='Screenshot'/>
<Data actionname='@GA_ClearHUD' color='#ffffff' key1='ESC' Localactionname='[@GA_EscapeClear]' Name='Clear HUD'/>
<Data actionname='@GA_ToggleOverheadMap' color='#ffffff' key1='M' Localactionname='[@GA_ToggleOverheadMap]' Name='Toggle Overhead Map'/>
<Data actionname='@GA_OpenChat' color='#ffffff' key1='Enter' Localactionname='[@GA_OpenChat]' Name='Open Chat'/>
<Data actionname='@GA_OpenChatSlash' color='#ffffff' key1='/' key2='Num Pad /' Localactionname='[@GA_OpenChatSlash]' Name='Open Chat Slash'/>
<Data actionname='@GA_OpenChatReply' color='#ffffff' key1='Backspace' Localactionname='[@GA_OpenChatReply]' Name='Open Chat Reply'/>
<Data actionname='@GA_ChatWindowPgUp' color='#ffffff' key1='PGUP' Localactionname='[@GA_ChatWindowPgUp]' Name='Chat PGUP'/>
<Data actionname='@GA_ChatWindowPgDn' color='#ffffff' key1='PGDN' Localactionname='[@GA_ChatWindowPgDn]' Name='Chat PGDN'/>
<Data actionname='@GA_StatusWindowPgUp' color='#ffffff' key1='Shift + PGUP' Localactionname='[@GA_StatusWindowPgUp]' Name='Status PGUP'/>
<Data actionname='@GA_StatusWindowPgDn' color='#ffffff' key1='Shift + PGDN' Localactionname='[@GA_StatusWindowPgDn]' Name='Status PGDN'/>
<Data actionname='@GA_ToggleHelpPage' color='#ffffff' key1='Shift + P' Localactionname='[@GA_Help]' Name='Toggle Help Page'/>
<Data actionname='@GA_TogglePerformance' color='#ffffff' key1='SHIFT+.' Localactionname='[@GA_TogglePerformance]' Name='Toggle Performance'/>
<Data actionname='@GA_ToggleSquadList' color='#ffffff' key1='Alt' Localactionname='[@GA_ToggleSquadList]' Name='Toggle Squad List'/>
<Data actionname='@GA_SquadMsg1' color='#ffffff' key1='Alt + 1' Localactionname='[@GA_Squad_1]' Name='Squad Msg 1'/>
<Data actionname='@GA_SquadMsg2' color='#ffffff' key1='Alt + 2' Localactionname='[@GA_Squad_2]' Name='Squad Msg 2'/>
<Data actionname='@GA_SquadMsg3' color='#ffffff' key1='Alt + 3' Localactionname='[@GA_Squad_3]' Name='Squad Msg 3'/>
<Data actionname='@GA_SquadMsg4' color='#ffffff' key1='Alt + 4' Localactionname='[@GA_Squad_4]' Name='Squad Msg 4'/>
<Data actionname='@GA_SquadMsg5' color='#ffffff' key1='Alt + 5' Localactionname='[@GA_Squad_5]' Name='Squad Msg 5'/>
<Data actionname='@GA_SquadMsg6' color='#ffffff' key1='Alt + 6' Localactionname='[@GA_Squad_6]' Name='Squad Msg 6'/>
<Data actionname='@GA_SquadMsg7' color='#ffffff' key1='Alt + 7' Localactionname='[@GA_Squad_7]' Name='Squad Msg 7'/>
<Data actionname='@GA_SquadMsg8' color='#ffffff' key1='Alt + 8' Localactionname='[@GA_Squad_8]' Name='Squad Msg 8'/>
<Data actionname='@GA_SquadMsg9' color='#ffffff' key1='Alt + 9' Localactionname='[@GA_Squad_9]' Name='Squad Msg 9'/>
<Data actionname='@GA_SquadMsg10' color='#ffffff' key1='Alt + 0' Localactionname='[@GA_Squad_0]' Name='Squad Msg 10'/>
<Data actionname='@GA_OpenVoiceMacros' color='#ffffff' key1='V' Localactionname='[@GA_VoiceMacro]' Name='Voice Macro'/>
<Data actionname='@GA_VoiceTransmit' color='#ffffff' key1='Y' Localactionname='[@GA_VoiceTransmit]' Name='Voice Transmit'/>
</DataSource>
<Listbox DataSource='PageData' Location='1,79' Name='CommandList' RowTemplate='CommandListTemplate' ScrollExtent='146,625' SelectedItemIndex='6' Size='146,345' Style='/Listboxes.Clear.style'/>
<Listbox DataSource='PageData' Location='155,79' Name='KeyList1' RowTemplate='KeyList1Template' ScrollExtent='120,625' SelectedItemIndex='6' Size='120,345' Style='/Listboxes.Keymap.style'/>
<Listbox DataSource='PageData' Location='280,79' Name='Keylist2' RowTemplate='KeyList2Template' ScrollExtent='120,625' SelectedItemIndex='7' Size='120,345' Style='/Listboxes.Keymap.style'/>
</Page>
<Page BackgroundColor='#0000FF' Location='4,37' Name='OverheadModePage' ScrollExtent='418,426' Size='418,426' Visible='false'>
<Text Font='/Fonts.HudFont1' LocalText='[@KeyMapOverheadDescription]' Location='8,7' Name='Description' ScrollExtent='399,50' Size='399,50' TextAlignment='Center' TextAlignmentVertical='Center'>@KeyMapOverheadDescription</Text>
<Scrollbar Control='CommandList' Location='402,78' Name='Scroll' ScrollExtent='9,345' Size='9,345' Style='/ScrollBars.vertical.style'/>
<DataSource Name='PageData'>
<Data actionname='@GA_ZoomIn' color='#ffffff' key1='Z' key2='Num Pad +' key3='Shift + =' Localactionname='[@GA_ZoomIn]' Name='Zoom In'/>
<Data actionname='@GA_ZoomOut' color='#ffffff' key1='X' key2='Num Pad -' key3='Shift + -' Localactionname='[@GA_ZoomOut]' Name='Zoom Out'/>
<Data actionname='@GA_PanMapUp' color='#ffffff' key1='UpArrow' Localactionname='[@GA_PanMapUp]' Name='Pan Up'/>
<Data actionname='@GA_PanMapDown' color='#ffffff' key1='DownArrow' Localactionname='[@GA_PanMapDown]' Name='Pan Down'/>
<Data actionname='@GA_PanMapLeft' color='#ffffff' key1='LeftArrow' Localactionname='[@GA_PanMapLeft]' Name='Pan Left'/>
<Data actionname='@GA_PanMapRight' color='#ffffff' key1='RightArrow' Localactionname='[@GA_PanMapRight]' Name='Pan Right'/>
<Data actionname='@GA_CenterOnPlayer' color='#ffffff' key1='C' Localactionname='[@GA_CenterOnPlayer]' Name='Center On Player'/>
<Data actionname='@GA_GlobalView' color='#ffffff' key1='G' Localactionname='[@GA_GlobalView]' Name='Global View'/>
<Data actionname='@GA_ChangeMapView' color='#ffffff' key1='P' Localactionname='[@GA_ChangeMapView]' Name='Change Map View'/>
<Data actionname='@GA_ToggleBattleplans' color='#ffffff' key1='B' Localactionname='[@GA_ToggleBattleplans]' Name='Toggle Battleplans'/>
<Data actionname='@GA_ToggleFacilityWarnings' color='#ffffff' key1='F' Localactionname='[@GA_ToggleBuildingState]' Name='Toggle Building State'/>
<Data actionname='@GA_ToggleEquipment' color='#ffffff' key1='E' Localactionname='[@GA_ToggleEquipment]' Name='Toggle Equipment'/>
<Data actionname='@GA_ToggleHotSpots' color='#ffffff' key1='O' Localactionname='[@GA_ToggleHotSpots]' Name='Toggle Hot Spots'/>
<Data actionname='@GA_ToggleRsrcFacilityInfo' color='#ffffff' key1='R' Localactionname='[@GA_ToggleRsrcFacilityInfo]' Name='Toggle Rsrc Facility Info'/>
<Data actionname='@GA_ToggleSOI' color='#ffffff' key1='S' Localactionname='[@GA_ToggleSOI]' Name='Toggle SOI'/>
<Data actionname='@GA_ToggleSquad' color='#ffffff' key1='Q' Localactionname='[@GA_ToggleSquad]' Name='Toggle Squad'/>
<Data actionname='@GA_ToggleText' color='#ffffff' key1='T' Localactionname='[@GA_ToggleText]' Name='Toggle Text'/>
<Data actionname='@GA_ToggleWeather' color='#ffffff' key1='T' Localactionname='[@GA_ToggleWeather]' Name='Toggle Weather'/>
<Data actionname='@GA_ToggleCeilingBuildings' color='#ffffff' key1=',' Localactionname='[@GA_ToggleCeilingBuildings]' Name='Toggle Ceiling Buildings'/>
<Data actionname='@GA_ToggleGroundBuildings' color='#ffffff' key1='.' Localactionname='[@GA_ToggleGroundBuildings]' Name='Toggle Ground Buildings'/>
<Data actionname='@GA_ToggleZiplines' color='#ffffff' key1='L' Localactionname='[@GA_ToggleZiplines]' Name='Toggle Ziplines'/>
</DataSource>
<Listbox DataSource='PageData' Location='1,79' Name='CommandList' RowTemplate='CommandListTemplate' ScrollExtent='146,525' Size='146,345' Style='/Listboxes.Clear.style'/>
<Listbox DataSource='PageData' Location='155,79' Name='KeyList1' RowTemplate='KeyList1Template' ScrollExtent='120,525' Size='120,345' Style='/Listboxes.Keymap.style'/>
<Listbox DataSource='PageData' Location='280,79' Name='Keylist2' RowTemplate='KeyList2Template' ScrollExtent='120,525' Size='120,345' Style='/Listboxes.Keymap.style'/>
</Page>
<Page Location='4,37' Name='HUDModePage' ScrollExtent='418,426' Size='418,426' Visible='false'>
<Text Font='/Fonts.HudFont1' LocalText='[@KeyMapHUDDescription]' Location='8,7' Name='Description' ScrollExtent='399,50' Size='399,50' TextAlignment='Center' TextAlignmentVertical='Center'>@KeyMapHUDDescription</Text>
<DataSource Name='PageData'>
<Data actionname='@GA_Autorun' color='#ffffff' key1='Q' Localactionname='[@GA_Autorun]' Name='Autorun'/>
<Data actionname='@GA_WeaponFire' color='#ffffff' key1='Left Mouse Button' Localactionname='[@WeaponFire]' Name='Weapon Fire' opacity1='1'/>
<Data actionname='@GA_ChangeFireMode' color='#ffffff' key1='Right Mouse Button' Localactionname='[@ChangeFireMode]' Name='Change Fire Mode'/>
<Data actionname='@GA_ChangeAmmunition' color='#ffffff' key1='X' Localactionname='[@GA_ChangeAmmunition]' Name='Change Ammunition'/>
<Data actionname='@GA_Reload' color='#ffffff' key1='R' Localactionname='[@Reload]' Name='Reload'/>
<Data actionname='@GA_UseItem' color='#ffffff' key1='G' Localactionname='[@GA_UseObject]' Name='Use Item'/>
<Data actionname='@GA_ToggleThirdPersonCamera' color='#ffffff' key1='X' Localactionname='[@GA_ToggleThirdPersonCamera]' Name='Toggle Third Person Camera'/>
<Data actionname='@GA_ToggleInventory' color='#ffffff' key1='I' Localactionname='[@ToggleInventory]' Name='Toggle Inventory'/>
<Data actionname='@GA_Zoom' color='#ffffff' key1='Z' Localactionname='[@Zoom]' Name='Zoom'/>
<Data actionname='@GA_SmoothZoom' color='#ffffff' key1='O' Localactionname='[@SmoothZoom]' Name='Smooth Zoom'/>
<Data actionname='@GA_RadarIncrease' color='#ffffff' key1='M' Localactionname='[@GA_RadarIncrease]' Name='Radar Increase'/>
<Data actionname='@GA_RadarDecrease' color='#ffffff' key1='M' Localactionname='[@GA_RadarDecrease]' Name='Radar Decrease'/>
<Data actionname='@GA_ToggleMouseLook' color='#ffffff' key1='TAB' Localactionname='[@GA_ToggleMouseLook]' Name='Toggle Mouse Look'/>
<Data actionname='@GA_ToggleCharacterPane' color='#ffffff' key1='O' Localactionname='[@ToggleCharacterPane]' Name='Toggle Character Pane'/>
<Data actionname='@GA_ToggleChatPane' color='#ffffff' key1='O' Localactionname='[@GA_ToggleChatPane]' Name='Toggle Chat Pane'/>
<Data actionname='@GA_ToggleManagementPane' color='#ffffff' key1='O' Localactionname='[@GA_ToggleManagementPane]' Name='Toggle Management Pane'/>
<Data actionname='@GA_ToggleOutfitPane' color='#ffffff' key1='O' Localactionname='[@GA_ToggleOutfitPane]' Name='Toggle Outfit Pane'/>
<Data actionname='@GA_TogglePlayerPane' color='#ffffff' key1='P' Localactionname='[@TogglePlayerPane]' Name='Toggle Player Pane'/>
<Data actionname='@GA_ToggleProximityMap' color='#ffffff' key1='O' Localactionname='[@GA_ToggleProximityMap]' Name='Toggle Proximity Map'/>
<Data actionname='@GA_ToggleVehiclePane' color='#ffffff' key1='O' Localactionname='[@GA_ToggleVehiclePane]' Name='Toggle Vehicle Pane'/>
<Data actionname='@GA_ToggleHelp' color='#ffffff' key1='H' Localactionname='[@GA_ToggleHelp]' Name='Toggle Help'/>
<Data actionname='@GA_CycleCharacterNames' color='#ffffff' key1='N' Localactionname='[@GA_Cycle_Character_Names]' Name='Cycle Character Name'/>
<Data actionname='@GA_ToggleStealthSuit' color='#ffffff' key1='K' Localactionname='[@GA_StealthSuit]' Name='Toggle Stealth'/>
<Data actionname='@GA_UseQuickslot1' color='#ffffff' key1='F1' Localactionname='[@GA_UseQuickslot1]' Name='Use Quickslot 1'/>
<Data actionname='@GA_UseQuickslot2' color='#ffffff' key1='F2' Localactionname='[@GA_UseQuickslot2]' Name='Use Quickslot 2'/>
<Data actionname='@GA_UseQuickslot3' color='#ffffff' key1='F3' Localactionname='[@GA_UseQuickslot3]' Name='Use Quickslot 3'/>
<Data actionname='@GA_UseQuickslot4' color='#ffffff' key1='F4' Localactionname='[@GA_UseQuickslot4]' Name='Use Quickslot 4'/>
<Data actionname='@GA_UseQuickslot5' color='#ffffff' key1='F5' Localactionname='[@GA_UseQuickslot5]' Name='Use Quickslot 5'/>
<Data actionname='@GA_UseQuickslot6' color='#ffffff' key1='F6' Localactionname='[@GA_UseQuickslot6]' Name='Use Quickslot 6'/>
<Data actionname='@GA_UseQuickslot7' color='#ffffff' key1='F7' Localactionname='[@GA_UseQuickslot7]' Name='Use Quickslot 7'/>
<Data actionname='@GA_UseQuickslot8' color='#ffffff' key1='F8' Localactionname='[@GA_UseQuickslot8]' Name='Use Quickslot 8'/>
<Data actionname='@GA_MoveCameraIn' color='#ffffff' key1='Num Pad +' Localactionname='[@MoveCameraIn]' Name='Move Camera In'/>
<Data actionname='@GA_MoveCameraOut' color='#ffffff' key1='Num Pad -' Localactionname='[@MoveCameraOut]' Name='Move Camera Out'/>
</DataSource>
<Listbox DataSource='PageData' Location='1,79' Name='CommandList' RowTemplate='CommandListTemplate' ScrollExtent='146,825' SelectedItemIndex='12' Size='146,345' Style='/Listboxes.Clear.style'/>
<Listbox DataSource='PageData' Location='155,79' Name='KeyList1' RowTemplate='KeyList1Template' ScrollExtent='120,825' SelectedItemIndex='25' Size='120,345' Style='/Listboxes.Keymap.style'/>
<Listbox DataSource='PageData' Location='280,79' Name='Keylist2' RowTemplate='KeyList2Template' ScrollExtent='120,825' SelectedItemIndex='0' Size='120,345' Style='/Listboxes.Keymap.style'/>
<Scrollbar Control='CommandList' Location='402,78' Name='Scroll' ScrollExtent='9,345' Size='9,345' Style='/ScrollBars.vertical.style'/>
</Page>
<Page Location='4,37' Name='SoldierModePage' ScrollExtent='418,426' Size='418,426' Visible='false'>
<Text Font='/Fonts.HudFont1' LocalText='[@KeyMapSoldierDescription]' Location='8,7' Name='Description' ScrollExtent='399,50' Size='399,50' TextAlignment='Center' TextAlignmentVertical='Center'>@KeyMapSoldierDescription</Text>
<DataSource Name='PageData'>
<Data actionname='@GA_Forward' color='#ffffff' key1='W' key2='Up Arrow' key3='Num Pad 8' Localactionname='[@GA_Forward]' Name='Forward'/>
<Data actionname='@GA_Backward' color='#ffffff' key1='S' key2='Down Arrow' key3='Num Pad 2' Localactionname='[@GA_Backward]' Name='Backward'/>
<Data actionname='@GA_StrafeLeft' color='#ffffff' key1='A' Localactionname='[@GA_StrafeLeft]' Name='Strafe Left'/>
<Data actionname='@GA_StrafeRight' color='#ffffff' key1='D' Localactionname='[@GA_StrafeRight]' Name='Strafe Right'/>
<Data actionname='@GA_Walk/Run' color='#ffffff' key1='Shift' Localactionname='[@GA_Walk/Run]' Name='Run Modifier'/>
<Data actionname='@GA_TurnLeft' color='#ffffff' key1='Left Arrow' Localactionname='[@GA_TurnLeft]' Name='Turn Left'/>
<Data actionname='@GA_TurnRight' color='#ffffff' key1='Right Arrow' Localactionname='[@GA_TurnRight]' Name='Turn Right'/>
<Data actionname='@GA_Crouch' color='#ffffff' key1='C' key2='Ctrl' Localactionname='[@GA_Crouch]' Name='Crouch'/>
<Data actionname='@GA_ToggleCrouch' color='#ffffff' Localactionname='[@GA_ToggleCrouch]' Name='Toggle Crouch'/>
<Data actionname='@GA_Jump' color='#ffffff' key1='Space' Localactionname='[@GA_Jump]' Name='Jump'/>
<Data actionname='@GA_UseRightBackHolster' color='#ffffff' key1='1' Localactionname='[@GA_UseRightBackHolster]' Name='Use Right Back Holster'/>
<Data actionname='@GA_UseRightHipHolster' color='#ffffff' key1='2' Localactionname='[@GA_UseRightHipHolster]' Name='Use Right Hip Holster'/>
<Data actionname='@GA_UseLeftBackHolster' color='#ffffff' key1='3' Localactionname='[@GA_UseLeftBackHolster]' Name='Use Left Back Holster'/>
<Data actionname='@GA_UseLeftHipHolster' color='#ffffff' key1='4' Localactionname='[@GA_UseLeftHipHolster]' Name='Use Left Hip Holster'/>
<Data actionname='@GA_UseKnifeHolster' color='#ffffff' key1='5' Localactionname='[@GA_UseKnifeHolster]' Name='Use Knife Holster'/>
<Data actionname='@GA_DropSpecialItem' color='#ffffff' key1='Shift + G' Localactionname='[@GA_DropSpecialItem]' Name='Drop Special Item'/>
</DataSource>
<Listbox DataSource='PageData' Location='1,79' Name='CommandList' RowTemplate='CommandListTemplate' ScrollExtent='146,400' Size='146,345' Style='/Listboxes.Clear.style'/>
<Listbox DataSource='PageData' Location='155,79' Name='KeyList1' RowTemplate='KeyList1Template' ScrollExtent='120,400' Size='120,345' Style='/Listboxes.Keymap.style'/>
<Listbox DataSource='PageData' Location='280,79' Name='Keylist2' RowTemplate='KeyList2Template' ScrollExtent='120,400' Size='120,345' Style='/Listboxes.Keymap.style'/>
<Scrollbar Control='CommandList' Location='402,78' Name='Scroll' ScrollExtent='9,345' Size='9,345' Style='/ScrollBars.vertical.style'/>
</Page>
<Page Location='4,37' Name='VehicleModePage' ScrollExtent='418,426' Size='418,426' Visible='false'>
<Text Font='/Fonts.HudFont1' LocalText='[@KeyMapVehicleDescription]' Location='8,7' Name='Description' ScrollExtent='399,50' Size='399,50' TextAlignment='Center' TextAlignmentVertical='Center'>@KeyMapVehicleDescription</Text>
<Listbox DataSource='PageData' Location='1,79' Name='CommandList' RowTemplate='CommandListTemplate' ScrollExtent='146,400' Size='146,345' Style='/Listboxes.Clear.style'/>
<Listbox DataSource='PageData' Location='155,79' Name='KeyList1' RowTemplate='KeyList1Template' ScrollExtent='120,400' Size='120,345' Style='/Listboxes.Keymap.style'/>
<Listbox DataSource='PageData' Location='280,79' Name='Keylist2' RowTemplate='KeyList2Template' ScrollExtent='120,400' Size='120,345' Style='/Listboxes.Keymap.style'/>
<Scrollbar Control='CommandList' Location='402,78' Name='Scroll' ScrollExtent='9,345' Size='9,345' Style='/ScrollBars.vertical.style'/>
<DataSource Name='PageData'>
<Data actionname='@GA_Cruise0PercentPower' color='#ffffff' key1='1' key2='Num Pad 1' Localactionname='[@GA_0PercentPower]' Name='Cruise 0 Percent Power'/>
<Data actionname='@GA_Cruise10PercentPower' color='#ffffff' key1='1' key2='Num Pad 1' Localactionname='[@GA_10PercentPower]' Name='Cruise 10 Percent Power'/>
<Data actionname='@GA_Cruise20PercentPower' color='#ffffff' key1='2' key2='Num Pad 2' Localactionname='[@GA_20PercentPower]' Name='Cruise 20 Percent Power'/>
<Data actionname='@GA_Cruise30PercentPower' color='#ffffff' key1='3' key2='Num Pad 3' Localactionname='[@GA_30PercentPower]' Name='Cruise 30 Percent Power'/>
<Data actionname='@GA_Cruise40PercentPower' color='#ffffff' key1='4' key2='Num Pad 4' Localactionname='[@GA_40PercentPower]' Name='Cruise 40 Percent Power'/>
<Data actionname='@GA_Cruise50PercentPower' color='#ffffff' key1='5' key2='Num Pad 5' Localactionname='[@GA_50PercentPower]' Name='Cruise 50 Percent Power'/>
<Data actionname='@GA_Cruise60PercentPower' color='#ffffff' key1='6' key2='Num Pad 6' Localactionname='[@GA_60PercentPower]' Name='Cruise 60 Percent Power'/>
<Data actionname='@GA_Cruise70PercentPower' color='#ffffff' key1='7' key2='Num Pad 7' Localactionname='[@GA_70PercentPower]' Name='Cruise 70 Percent Power'/>
<Data actionname='@GA_Cruise80PercentPower' color='#ffffff' key1='8' key2='Num Pad 8' Localactionname='[@GA_80PercentPower]' Name='Cruise 80 Percent Power'/>
<Data actionname='@GA_Cruise90PercentPower' color='#ffffff' key1='9' key2='Num Pad 9' Localactionname='[@GA_90PercentPower]' Name='Cruise 90 Percent Power'/>
<Data actionname='@GA_Cruise100PercentPower' color='#ffffff' key1='0' key2='Num Pad 0' Localactionname='[@GA_100PercentPower]' Name='Cruise 100 Percent Power'/>
<Data actionname='@GA_CruiseIncrementPower' color='#ffffff' key1='.' Localactionname='[@GA_IncrementPower]' Name='Cruise Increase Power'/>
<Data actionname='@GA_CruiseDecrementPower' color='#ffffff' key1=',' Localactionname='[@GA_DecrementPower]' Name='Cruise Decrease Power'/>
<Data actionname='@GA_BailVehicle' color='#ffffff' key1='Alt+G' Localactionname='[@GA_BailVehicle]' Name='Bail Vehicle'/>
<Data actionname='@GA_ResetControls' color='#ffffff' key1='R' Localactionname='[@GA_ResetControls]' Name='Reset Controls'/>
<Data actionname='@GA_VehicleSpecial' color='#ffffff' key1='J' Localactionname='[@GA_VehicleSpecial]' Name='Vehicle Special Action'/>
</DataSource>
</Page>
<Page Location='4,37' Name='GroundModePage' ScrollExtent='418,426' Size='418,426' Visible='false'>
<Text Font='/Fonts.HudFont1' LocalText='[@KeyMapGroundDescription]' Location='8,7' Name='Description' ScrollExtent='399,50' Size='399,50' TextAlignment='Center' TextAlignmentVertical='Center'>@KeyMapGroundDescription</Text>
<Listbox DataSource='PageData' Location='1,79' Name='CommandList' RowTemplate='CommandListTemplate' ScrollExtent='146,345' Size='146,345' Style='/Listboxes.Clear.style'/>
<Listbox DataSource='PageData' Location='155,79' Name='KeyList1' RowTemplate='KeyList1Template' ScrollExtent='120,345' Size='120,345' Style='/Listboxes.Keymap.style'/>
<Listbox DataSource='PageData' Location='280,79' Name='Keylist2' RowTemplate='KeyList2Template' ScrollExtent='120,345' Size='120,345' Style='/Listboxes.Keymap.style'/>
<Scrollbar Control='CommandList' Location='402,78' Name='Scroll' ScrollExtent='9,345' Size='9,345' Style='/ScrollBars.vertical.style'/>
<DataSource Name='PageData'>
<Data actionname='@GA_Forward' color='#ffffff' key1='W' Localactionname='[@GA_Forward]' Name='Forward'/>
<Data actionname='@GA_Backward' color='#ffffff' key1='S' Localactionname='[@GA_Backward]' Name='Backward'/>
<Data actionname='@GA_TurnLeft' color='#ffffff' key1='A' key2='Left Arrow' Localactionname='[@GA_TurnLeft]' Name='Turn Left'/>
<Data actionname='@GA_TurnRight' color='#ffffff' key1='D' key2='Right Arrow' Localactionname='[@GA_TurnRight]' Name='Turn Right'/>
<Data actionname='@GA_Brake' color='#ffffff' key1='Space' Localactionname='[@GA_Brake]' Name='Brake'/>
</DataSource>
</Page>
<Page Location='4,37' Name='AirModePage' ScrollExtent='418,426' Size='418,426' Visible='false'>
<Text Font='/Fonts.HudFont1' LocalText='[@KeyMapAirVehicleDescription]' Location='8,7' Name='Description' ScrollExtent='399,50' Size='399,50' TextAlignment='Center' TextAlignmentVertical='Center'>@KeyMapAirVehicleDescription</Text>
<Listbox DataSource='PageData' Location='1,79' Name='CommandList' RowTemplate='CommandListTemplate' ScrollExtent='146,345' Size='146,345' Style='/Listboxes.Clear.style'/>
<Listbox DataSource='PageData' Location='155,79' Name='KeyList1' RowTemplate='KeyList1Template' ScrollExtent='120,345' Size='120,345' Style='/Listboxes.Keymap.style'/>
<Listbox DataSource='PageData' Location='280,79' Name='Keylist2' RowTemplate='KeyList2Template' ScrollExtent='120,345' Size='120,345' Style='/Listboxes.Keymap.style'/>
<Scrollbar Control='CommandList' Location='402,78' Name='Scroll' ScrollExtent='9,345' Size='9,345' Style='/ScrollBars.vertical.style'/>
<DataSource Name='PageData'>
<Data actionname='@GA_FlightElevate' color='#ffffff' key1='E' Localactionname='[@GA_FlightElevate]' Name='Flight Elevate'/>
<Data actionname='@GA_FlightLower' color='#ffffff' key1='C' Localactionname='[@GA_FlightLower]' Name='Flight Lower'/>
<Data actionname='@GA_Forward' color='#ffffff' key1='W' Localactionname='[@GA_Forward]' Name='Forward'/>
<Data actionname='@GA_Backward' color='#ffffff' key1='S' Localactionname='[@GA_Backward]' Name='Backward'/>
<Data actionname='@GA_StrafeLeft' color='#ffffff' key1='A' key2='Left Arrow' Localactionname='[@GA_StrafeLeft]' Name='Strafe Left'/>
<Data actionname='@GA_StrafeRight' color='#ffffff' key1='D' key2='Right Arrow' Localactionname='[@GA_StrafeRight]' Name='Strafe Right'/>
<Data actionname='@GA_FlightAfterburners' color='#ffffff' key1='Space Bar' Localactionname='[@GA_FlightAfterburners]' Name='Flight Afterburners'/>
</DataSource>
</Page>
</Page>
<Page Location='22,69' Name='VideoOptionsPage' navbar.visible='false' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = true' PackLocation='Center,Center' PackLocationProp='-378/0001,-231/0001' ScrollExtent='758,468' Size='758,468' Visible='false'>
<Text Font='/Fonts.DefaultFont' GetsInput='false' LocalText='[@VideoWarning]' Location='6,435' Name='WarningText' ScrollExtent='737,25' Size='737,25' TextAlignment='Center'>@VideoWarning</Text>
<Page Location='6,39' Name='GeneralVideo' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = true' PackLocation='Center,Center' PackLocationProp='-373/0001,-195/0001' ScrollExtent='739,423' Size='739,423' Visible='false'>
<Template Name='Row Template' Size='250,20'>\<text font = \'/Fonts.DefaultFont\' location = \'5,-1\' size = \'250,20\'\>
$Name$
\</text\></Template>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@VideoGammaFullScreen]' Location='549,7' Name='VideoGammaNotice' ScrollExtent='174,73' Size='174,73' TextAlignment='Center' TextAlignmentVertical='Center'>@VideoGammaFullScreen</Text>
<Text Font='/Fonts.HudFont1' LocalText='[@VideoGammaContrast]' LocalTooltip='[@VideoGammaContrastTooltip]' Location='379,50' Name='VideoGammaContrastText' ScrollExtent='162,25' Size='162,25' TextAlignment='Right' TextAlignmentVertical='Center' Tooltip='@VideoGammaContrastTooltip'>@VideoGammaContrast</Text>
<Sliderbar LocalTooltip='[@VideoGammaContrastTooltip]' Location='549,47' Name='VideoGammaContrast' ScrollExtent='173,25' Size='173,25' Style='/Sliderbars.Options.Style' Tooltip='@VideoGammaContrastTooltip' UpperLimit='1000' Value='1000'/>
<Text Font='/Fonts.HudFont1' LocalText='[@VideoGammaBrightness]' LocalTooltip='[@VideoGammaBrightness]' Location='376,13' Name='VideoGammaBrightnessText' ScrollExtent='162,25' Size='162,25' TextAlignment='Right' TextAlignmentVertical='Center' Tooltip='@VideoGammaBrightness'>@VideoGammaBrightness</Text>
<Sliderbar LocalTooltip='[@VideoGammaBrightnessTooltip]' Location='549,10' Name='VideoGammaBrightness' ScrollExtent='173,25' Size='173,25' Style='/Sliderbars.Options.Style' Tooltip='@VideoGammaBrightnessTooltip' UpperLimit='1000' Value='428'/>
<Text Font='/Fonts.HudFont1' LocalText='[@VideoScreenResolutionText]' LocalTooltip='[@VideoScreenResolutionTooltip]' Location='2,51' Name='VideolResolutionText' ScrollExtent='114,25' Size='114,25' TextAlignment='Right' TextAlignmentVertical='Center' Tooltip='@VideoScreenResolutionTooltip'>@VideoScreenResolutionText</Text>
<Dropdownbox DataSource='/DataSources.VideoResolutionDataSource' LocalTooltip='[@VideoScreenResolutionTooltip]' Location='119,48' Name='VideoResolution' RowTemplate='Row Template' ScrollExtent='248,29' SelectedItemIndex='2' Size='248,29' Style='/Dropdowns.HudPane.style' Tooltip='@VideoScreenResolutionTooltip'/>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@VideoFullScreenTooltip]' Location='119,15' Name='FullScreen' ScrollExtent='248,25' Size='248,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoFullScreenTooltip'>@VideoFullScreen</Checkbox>
<Text Font='/Fonts.HudFont1' LocalText='[@VideoQuality]' LocalTooltip='[@VideoQualityTooltip]' Location='144,110' Name='VideoQualityText' ScrollExtent='162,25' Size='162,25' TextAlignment='Right' TextAlignmentVertical='Center' Tooltip='@VideoQualityTooltip'>@VideoQuality</Text>
<Dropdownbox DataSource='/DataSources.VideoQualityDataSource' LocalTooltip='[@VideoQualityTooltip]' Location='313,108' Name='VideoQuality' RowTemplate='Row Template' ScrollExtent='250,29' Size='250,29' Style='/Dropdowns.HudPane.style' Tooltip='@VideoQualityTooltip'/>
<Text Font='/Fonts.HudFont1' LocalText='[@VideoColorText]' LocalTooltip='[@VideoColorTooltip]' Location='-4,191' Name='VideoColorText' ScrollExtent='117,25' Size='117,25' TextAlignment='Right' TextAlignmentVertical='Center' Tooltip='@VideoColorTooltip'>@VideoColorText</Text>
<Dropdownbox DataSource='/DataSources.VideoColorDataSource' LocalTooltip='[@VideoColorTooltip]' Location='121,188' Name='VideoColor' RowTemplate='Row Template' ScrollExtent='250,29' Size='250,29' Style='/Dropdowns.HudPane.style' Tooltip='@VideoColorTooltip'/>
<Text Font='/Fonts.HudFont1' LocalText='[@VideoParticleText]' LocalTooltip='[@VideoParticleTooltip]' Location='323,191' Name='VideoParticleText' ScrollExtent='145,25' Size='145,25' TextAlignment='Right' TextAlignmentVertical='Center' Tooltip='@VideoParticleTooltip'>@VideoParticleText</Text>
<Dropdownbox DataSource='/DataSources.VideoParticleDataSource' LocalTooltip='[@VideoParticleTooltip]' Location='474,191' Name='VideoParticle' RowTemplate='Row Template' ScrollExtent='250,29' Size='250,29' Style='/Dropdowns.HudPane.style' Tooltip='@VideoParticleTooltip'/>
<Text Font='/Fonts.HudFont1' LocalText='[@VideoTextureText]' LocalTooltip='[@VideoTextureTooltip]' Location='-4,233' Name='VideoTextureQualityText' ScrollExtent='117,25' Size='117,25' TextAlignment='Right' TextAlignmentVertical='Center' Tooltip='@VideoTextureTooltip'>@VideoTextureText</Text>
<Dropdownbox DataSource='/DataSources.VideoTextureDataSource' LocalTooltip='[@VideoTextureTooltip]' Location='121,230' Name='VideoTextureQuality' RowTemplate='Row Template' ScrollExtent='250,29' SelectedItemIndex='2' Size='250,29' Style='/Dropdowns.HudPane.style' Tooltip='@VideoTextureTooltip'/>
<Text Font='/Fonts.HudFont1' LocalText='[@VideoFloraText]' LocalTooltip='[@VideoFloraTooltip]' Location='323,233' Name='VideoFloraText' ScrollExtent='145,25' Size='145,25' TextAlignment='Right' TextAlignmentVertical='Center' Tooltip='@VideoFloraTooltip'>@VideoFloraText</Text>
<Dropdownbox DataSource='/DataSources.VideoFloraDataSource' LocalTooltip='[@VideoFloraTooltip]' Location='474,230' Name='VideoFlora' RowTemplate='Row Template' ScrollExtent='250,29' SelectedItemIndex='2' Size='250,29' Style='/Dropdowns.HudPane.style' Tooltip='@VideoFloraTooltip'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoLODTooltip]' Location='122,275' Name='VideoLODCheck' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoLODTooltip'>@VideoLOD</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoDetailWebTooltip]' Location='121,305' Name='VideoDetailWebCheck' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoDetailWebTooltip'>@VideoDetailWeb</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoWarpgateTooltip]' Location='121,335' Name='VideoWarpgateCheck' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoWarpgateTooltip'>@VideoWarpgateCheck</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoDecalTooltip]' Location='122,365' Name='VideoDecalCheck' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoDecalTooltip'>@VideoDecalCheck</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoShadowTooltip]' Location='474,275' Name='VideoShadowCheck' ScrollExtent='249,25' Size='249,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoShadowTooltip'>@VideoShadow</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoWeatherTooltip]' Location='474,305' Name='VideoWeatherCheck' ScrollExtent='249,25' Size='249,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoWeatherTooltip'>@VideoWeatherCheck</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoSKyTooltip]' Location='474,335' Name='VideoSkyCheck' ScrollExtent='249,25' Size='249,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoSKyTooltip'>@VideoSkyCheck</Checkbox>
<Sliderbar LocalTooltip='[@VideoGammaTooltip]' Location='315,151' Name='VideoYon' ScrollExtent='173,25' Size='173,25' Style='/Sliderbars.Options.Style' Tooltip='@VideoGammaTooltip' UpperLimit='1000' Value='428'/>
<Text Font='/Fonts.HudFont1' LocalText='[@VideoYon]' LocalTooltip='[@VideoYonTooltip]' Location='145,154' Name='VideoYonText' ScrollExtent='162,25' Size='162,25' TextAlignment='Right' TextAlignmentVertical='Center' Tooltip='@VideoYonTooltip'>@VideoYon</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='6,144' Name='QualityRect' Opacity='0.750' ScrollExtent='728,249' Size='728,249'/>
</Page>
<Page Location='6,39' Name='AdvancedVideo' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = true' PackLocation='Center,Center' PackLocationProp='-373/0001,-195/0001' ScrollExtent='739,423' Size='739,423'>
<Text Font='/Fonts.HudFont3' LocalText='[@VideoReservedTextureMemory]' Location='306,65' Name='VideoReservedTextureMemoryText' ScrollExtent='162,34' Size='162,20' TextAlignment='Right'>@VideoReservedTextureMemory</Text>
<Dropdownbox DataSource='/DataSources.VideoReservedTextureMemoryDataSource' LocalTooltip='[@VideoReservedTextureMemoryTooltip]' Location='475,59' Name='VideoReservedTextureMemory' RowTemplate='Row Template' ScrollExtent='250,29' Size='250,29' Style='/Dropdowns.HudPane.style' Tooltip='@VideoReservedTextureMemoryTooltip'/>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@VideoGammaFullScreen]' Location='74,38' Name='VideoGammaNotice' ScrollExtent='174,23' Size='174,23' TextAlignment='Center' TextAlignmentVertical='Center'>@VideoGammaFullScreen</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoSyncTooltip]' Location='74,64' Name='VideoSyncCheck' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoSyncTooltip'>@VideoSync</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTripleBufferTooltip]' Location='74,95' Name='VideoTripleCheck' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTripleBufferTooltip'>@VideoTripleBuffer</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureTypeTooltip]' Location='74,13' Name='VideoTextureTypeCheck' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureTypeTooltip'>@VideoTextureType</Checkbox>
<Text Font='/Fonts.HudFont1' LocalText='[@VideoPreload]' Location='306,7' Name='VideoTexturePreloadText' ScrollExtent='162,52' Size='162,52' TextAlignment='Right'>@VideoPreload</Text>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@VideoAlternateVehiclesTooltip]' Location='476,95' Name='VideoAlternateVehiclesCheck' ScrollExtent='249,25' Size='249,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoAlternateVehiclesTooltip'>@VideoAlternateVehicles</Checkbox>
<Dropdownbox DataSource='/DataSources.VideoPreloadDataSource' LocalTooltip='[@VideoPreloadTooltip]' Location='475,10' Name='VideoTexturePreload' RowTemplate='Row Template' ScrollExtent='250,29' Size='250,29' Style='/Dropdowns.HudPane.style' Tooltip='@VideoPreloadTooltip'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='6,134' Name='TextureRect' Opacity='0.750' ScrollExtent='728,258' Size='728,258'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureAllTooltip]' Location='324,139' Name='TextureAll' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureAllTooltip'>@VideoTextureAll</Checkbox>
<Text Font='/Fonts.HudFont3' LocalText='[@VideoTextureText]' Location='44,141' Name='TextureText' ScrollExtent='262,25' Size='262,25' TextAlignment='Right' TextAlignmentVertical='Center'>@VideoTextureText</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureWeaponTooltip]' Location='76,176' Name='TextureWeapon' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureWeaponTooltip'>@VideoTextureWeapon</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureVehicleTooltip]' Location='76,206' Name='TextureVehicle' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureVehicleTooltip'>@VideoTextureVehicle</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureObjectTooltip]' Location='76,236' Name='TextureObject' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureObjectTooltip'>@VideoTextureObject</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureSoldierTooltip]' Location='76,266' Name='TextureSoldier' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureSoldierTooltip'>@VideoTextureSoldier</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureBuildingTooltip]' Location='76,296' Name='TextureBuilding' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureBuildingTooltip'>@VideoTextureBuilding</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureBuildingLightmapTooltip]' Location='76,326' Name='TextureBuildingLightmap' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureBuildingLightmapTooltip'>@VideoTextureBuildingLightmap</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureFloraTooltip]' Location='412,176' Name='TextureFlora' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureFloraTooltip'>@VideoTextureFlora</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureRockTooltip]' Location='412,206' Name='TextureRock' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureRockTooltip'>@VideoTextureRock</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureEffectTooltip]' Location='412,236' Name='TextureEffect' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureEffectTooltip'>@VideoTextureEffect</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureSampleTooltip]' Location='412,266' Name='TextureSample' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureSampleTooltip'>@VideoTextureSample</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureLooseTooltip]' Location='412,296' Name='TextureLoose' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureLooseTooltip'>@VideoTextureLoose</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureBridgeTooltip]' Location='412,326' Name='TextureBridge' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureBridgeTooltip'>@VideoTextureBridge</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoTextureMapTooltip]' Location='412,356' Name='TextureMap' ScrollExtent='269,25' Size='269,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VideoTextureMapTooltip'>@VideoTextureMap</Checkbox>
<Template Name='Row Template' Size='250,20'>\<text font = \'/Fonts.DefaultFont\' location = \'5,-1\' size = \'250,20\'\>
$Name$
\</text\></Template>
</Page>
<Image BackgroundOpacity='1.000' Location='292,34' Name='TabBorderTop2' PackLocation='left,top' PackLocationProp='0292/0001,0034/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='455,2' Size='455,2' Style='TabBorderTopStyle'/>
<Image BackgroundOpacity='1.000' Location='141,34' Name='TabBorderTop1' PackLocation='left,top' PackLocationProp='0141/0001,0034/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='14,2' Size='14,2' Style='TabBorderTopStyle'/>
<ImageStyle Name='TabBorderTopStyle'>
<ImageFrame Source='ui_window_map_tab_border_00' SourceRect='8,0,24,2'/>
</ImageStyle>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@VideoGeneralTooltip]' Location='2,5' Name='GeneralTab' OnDisableEffector='DisableEffector' PackLocation='left,top' PackLocationProp='0002/0001,0005/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='140,31' Size='140,31' Style='/Buttons.OptionTab.style' Tooltip='@VideoGeneralTooltip'>@VideoGeneral</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VideoAdvancedTooltip]' Location='152,5' Name='AdvancedTab' PackLocation='left,top' PackLocationProp='0152/0001,0005/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='140,31' Size='140,31' Style='/Buttons.OptionTab.style' Tooltip='@VideoAdvancedTooltip'>@VideoAdvanced</Checkbox>
<Image BackgroundOpacity='1.000' Location='3,35' Name='TabBorder' PackLocation='left,top' PackLocationProp='0003/0001,0035/0001' PackSize='absolute,absolute' PackSizeProp='0012/0001,0038/0001' RStyleDefault='/WindowPanes.BigTabBorder.style' ScrollExtent='746,430' Size='746,430'/>
</Page>
<Page Location='22,69' Name='GeneralOptionsPage' ScrollExtent='758,468' Size='758,468' Visible='false'>
<Text Font='/Fonts.HudFont1' LocalText='[@OptionsCullWatermark]' LocalTooltip='[@OptionsCullWatermarkTooltip]' Location='301,91' Name='CullWatermarkText' ScrollExtent='162,25' Size='162,25' TextAlignment='Right' TextAlignmentVertical='Center' Tooltip='@OptionsCullWatermarkTooltip'>@OptionsCullWatermark</Text>
<Dropdownbox DataSource='/DataSources.OptionsCullWatermarkDataSource' LocalTooltip='[@OptionsCullWatermarkTooltip]' Location='473,88' Name='CullWatermark' RowTemplate='Row Template' ScrollExtent='250,29' SelectedItemIndex='2' Size='250,29' Style='/Dropdowns.HudPane.style' Tooltip='@OptionsCullWatermarkTooltip'/>
<Page Location='-2,151' Name='Voice' ScrollExtent='757,297' Size='757,297'>
<Text Font='/Fonts.HudFont3' LocalText='[@VoiceText]' Location='491,24' Name='VoiceText' ScrollExtent='240,25' Size='240,25' TextAlignment='Right' TextAlignmentVertical='Center'>@VoiceText</Text>
<Text Font='/Fonts.HudFont3' LocalText='[@VoiceDevice]' LocalTooltip='[@VoiceDeviceTooltip]' Location='28,38' Name='VoiceDeviceText' ScrollExtent='162,25' Size='162,25' TextAlignment='Right' TextAlignmentVertical='Center' Tooltip='@VoiceDeviceTooltip'>@VoiceDevice</Text>
<Dropdownbox DataSource='/DataSources.VoiceDeviceDataSource' LocalTooltip='[@VoiceDeviceTooltip]' Location='209,35' Name='VoiceDevice' RowTemplate='Row Template' ScrollExtent='250,29' Size='250,29' Style='/Dropdowns.HudPane.style' Tooltip='@VoiceDeviceTooltip'/>
<Text Font='/Fonts.HudFont3' LocalText='[@VoiceMic]' Location='38,83' Name='VoiceMicText' ScrollExtent='158,25' Size='158,25' TextAlignment='Right' TextAlignmentVertical='Center'>@VoiceMic</Text>
<Sliderbar LocalTooltip='[@VoiceMicTooltip]' Location='209,83' Name='VoiceMic' ScrollExtent='126,25' Size='126,25' Style='/Sliderbars.Options.Style' Tooltip='@VoiceMicTooltip' UpperLimit='100' Value='25' ValueUpdateContinuous='false'/>
<Textbox BackgroundColor='#DDDDDD' BackgroundOpacity='0.475' Location='344,81' MaxLength='2' Name='VoiceMicInput' NumericInteger='true' PackLocation='left,bottom' PackLocationProp='0344/0001,-216/0001' PackSize='absolute,fixed' PackSizeProp='0717/0001,0002/0003' ScrollExtent='40,28' Size='40,28' Style='/ConsoleTextbox.Style'>2</Textbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VoiceMicBoostTooltip]' Location='208,127' Name='VoiceMicBoost' ScrollExtent='307,25' Size='307,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VoiceMicBoostTooltip'>@VoiceMicBoost</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VoiceActivationTooltip]' Location='208,160' Name='VoiceActivation' ScrollExtent='307,25' Size='307,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VoiceActivationTooltip'>@VoiceActivation</Checkbox>
<Textbox BackgroundColor='#DDDDDD' BackgroundOpacity='0.475' Location='344,194' MaxLength='3' Name='VoiceActivationLevelInput' NumericInteger='true' PackLocation='left,bottom' PackLocationProp='0344/0001,-103/0001' PackSize='absolute,fixed' PackSizeProp='0717/0001,0002/0003' ScrollExtent='40,28' Size='40,28' Style='/ConsoleTextbox.Style'>100</Textbox>
<Sliderbar LocalTooltip='[@VoiceActivationLevelTooltip]' Location='209,196' Name='VoiceActivationLevel' ScrollExtent='126,25' Size='126,25' Style='/Sliderbars.Options.Style' Tooltip='@VoiceActivationLevelTooltip' UpperLimit='300' Value='25' ValueUpdateContinuous='false'/>
<Text Font='/Fonts.HudFont3' LocalText='[@VoiceActivationLevel]' Location='38,196' Name='VoiceActivationLevelText' ScrollExtent='158,34' Size='158,25' TextAlignment='Right' TextAlignmentVertical='Center'>@VoiceActivationLevel</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@VoiceLoopbackTooltip]' Location='208,240' Name='VoiceLoopback' ScrollExtent='307,25' Size='307,25' Style='/Buttons.OptionsCheckbox.style' Tooltip='@VoiceLoopbackTooltip'>@VoiceLoopback</Checkbox>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='14,17' Name='VoiceRect' Opacity='0.750' ScrollExtent='728,262' Size='728,262'/>
</Page>
<Template Name='Row Template' Size='250,20'>\<text font = \'/Fonts.DefaultFont\' location = \'5,-1\' size = \'250,20\'\>
$Name$
\</text\></Template>
<Dropdownbox DataSource='/DataSources.OptionsNameDataSource' LocalTooltip='[@OptionsRenderNameTooltip]' Location='473,18' Name='RenderNames' RowTemplate='Row Template' ScrollExtent='250,29' SelectedItemIndex='2' Size='250,29' Style='/Dropdowns.HudPane.style' Tooltip='@OptionsRenderNameTooltip'/>
<Text Font='/Fonts.HudFont1' LocalText='[@OptionsRenderNames]' LocalTooltip='[@OptionsRenderNamesTooltip]' Location='301,21' Name='RenderNamesText' ScrollExtent='162,25' Size='162,25' TextAlignment='Right' TextAlignmentVertical='Center' Tooltip='@OptionsRenderNamesTooltip'>@OptionsRenderNames</Text>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@AlwaysRunTooltip]' Location='46,21' Name='AlwaysRunCheck' ScrollExtent='320,23' Size='320,23' Style='/Buttons.OptionsCheckbox.style' Tooltip='@AlwaysRunTooltip'>@AlwaysRun</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@ExclamationHelpTooltip]' Location='46,58' Name='ExclamationHelp' ScrollExtent='320,23' Size='320,23' Style='/Buttons.OptionsCheckbox.style' Tooltip='@ExclamationHelpTooltip'>@ExclamationHelp</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@HeadBobEnabledTooltip]' Location='46,51' Name='HeadBobEnabledCheck' ScrollExtent='320,23' Size='320,23' Style='/Buttons.OptionsCheckbox.style' Tooltip='@HeadBobEnabledTooltip' Visible='false'>@HeadBobEnabled</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@ShowEjectedCasingsTooltip]' Location='46,84' Name='ShowEjectedCasingsCheck' ScrollExtent='320,23' Size='320,23' Style='/Buttons.OptionsCheckbox.style' Tooltip='@ShowEjectedCasingsTooltip' Visible='false'>@ShowEjectedCasings</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@RadarAutoTooltip]' Location='46,95' Name='RadarAutoCheck' ScrollExtent='320,23' Size='320,23' Style='/Buttons.OptionsCheckbox.style' Tooltip='@RadarAutoTooltip'>@RadarAuto</Checkbox>
</Page>
<Page ContextCapable='true' ContextToParent='true' Location='22,69' Name='ColorOptionsPage' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = true' PackLocation='Center,Center' PackLocationProp='-378/0001,-231/0001' ScrollExtent='758,468' Size='758,468'>
<DataSource Name='PageData'>
<Data actionname='@ColorChatDefault' color='#ffffff' index='0' Localactionname='[@ColorChatDefault]' Name='ChatDefault'/>
<Data actionname='@ColorChatOpen' color='#ff0000' index='1' Localactionname='[@ColorChatOpen]' Name='ChatOpen'/>
<Data actionname='@ColorChatBroadcast' color='#ffffff' index='2' Localactionname='[@ColorChatBroadcast]' Name='ChatBroadcast'/>
<Data actionname='@ColorChatTell' color='#ffffff' index='3' Localactionname='[@ColorChatTell]' Name='ChatTell'/>
<Data actionname='@ColorChatSquad' color='#ffffff' index='4' key2='Left Arrow' Localactionname='[@ColorChatSquad]' Name='ChatSquad'/>
<Data actionname='@ColorChatOutfit' color='#ffffff' index='5' key2='Right Arrow' Localactionname='[@ColorChatOutfit]' Name='ChatOutfit'/>
<Data actionname='@ColorChatCommand' color='#ffffff' index='6' Localactionname='[@ColorChatCommand]' Name='ChatCommand'/>
<Data actionname='@ColorChatPlatoon' color='#ffffff' index='7' Localactionname='[@ColorChatPlatoon]' Name='ChatPlatoon'/>
<Data actionname='@ColorChatPlatoonLeader' color='#ffffff' index='8' Localactionname='[@ColorChatPlatoonLeader]' Name='ChatPlatoonLeader'/>
</DataSource>
<Page Location='391,81' Name='PalettePage' ScrollExtent='292,195' Size='292,195'>
<Page BackgroundColor='#0000FF' BackgroundOpacity='1.000' Location='194,95' Name='ColorOutput' ScrollExtent='90,90' Size='90,90'/>
<Textbox BackgroundColor='#FF0000' BackgroundOpacity='0.475' Location='143,95' MaxLength='2' Name='RedInput' NumericInteger='true' ScrollExtent='43,28' ScrollLocation='-1,0' Size='43,28' Style='/ConsoleTextbox.Style'>2</Textbox>
<Sliderbar BackgroundColor='#FF0000' LocalTooltip='[@ColorRedTooltip]' Location='7,98' Name='RedSlider' ScrollExtent='126,25' Size='126,25' Style='/Sliderbars.Options.Style' Tooltip='@ColorRedTooltip' UpperLimit='255' ValueUpdateContinuous='false'/>
<Textbox BackgroundColor='#00FF00' BackgroundOpacity='0.475' Location='143,127' MaxLength='2' Name='GreenInput' NumericInteger='true' ScrollExtent='43,28' ScrollLocation='-1,0' Size='43,28' Style='/ConsoleTextbox.Style'>2</Textbox>
<Sliderbar LocalTooltip='[@ColorGreenTooltip]' Location='7,129' Name='GreenSlider' ScrollExtent='126,25' Size='126,25' Style='/Sliderbars.Options.Style' Tooltip='@ColorGreenTooltip' UpperLimit='255' Value='100' ValueUpdateContinuous='false'/>
<Textbox BackgroundColor='#0000FF' BackgroundOpacity='0.475' Location='143,159' MaxLength='2' Name='BlueInput' NumericInteger='true' ScrollExtent='43,28' ScrollLocation='-1,0' Size='43,28' Style='/ConsoleTextbox.Style'>2</Textbox>
<Sliderbar LocalTooltip='[@ColorBlueTooltip]' Location='7,161' Name='BlueSlider' ScrollExtent='126,25' Size='126,25' Style='/Sliderbars.Options.Style' Tooltip='@ColorBlueTooltip' UpperLimit='255' ValueUpdateContinuous='false'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Color='#FFFF00' LocalTooltip='[@ColorTooltip]' Location='9,2' Name='Color0Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@ColorTooltip]' Location='77,2' Name='Color1Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ColorTooltip]' Location='9,24' Name='Color2Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ColorTooltip]' Location='77,24' Name='Color3Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ColorTooltip]' Location='9,46' Name='Color4Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ColorTooltip]' Location='77,46' Name='Color5Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ColorTooltip]' Location='9,68' Name='Color6Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ColorTooltip]' Location='77,68' Name='Color7Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ColorTooltip]' Location='145,2' Name='Color8Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ColorTooltip]' Location='213,2' Name='Color9Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ColorTooltip]' Location='145,24' Name='Color10Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ColorTooltip]' Location='213,24' Name='Color11Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ColorTooltip]' Location='145,46' Name='Color12Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ColorTooltip]' Location='213,46' Name='Color13Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ColorTooltip]' Location='145,68' Name='Color14Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ColorTooltip]' Location='213,68' Name='Color15Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ColorTooltip'></Checkbox>
</Page>
<Text Font='/Fonts.HudFont1' LocalText='[@ColorNameTitle]' Location='13,8' Name='ColorNameTitle' ScrollExtent='141,25' Size='141,25' TextAlignment='Center' TextAlignmentVertical='Center'>@ColorNameTitle</Text>
<Text Font='/Fonts.HudFont1' LocalText='[@ColorTitle]' Location='159,8' Name='ColorTitle' ScrollExtent='121,25' Size='121,25' TextAlignment='Center' TextAlignmentVertical='Center'>@ColorTitle</Text>
<Listbox DataSource='PageData' Location='1,31' Name='ColorNameList' RowTemplate='ColorNameTemplate' ScrollExtent='146,433' SelectedItemIndex='0' Size='146,433' Style='/Listboxes.Clear.style'/>
<Listbox DataSource='PageData' Location='155,31' Name='ColorList' RowTemplate='ColorTemplate' ScrollExtent='120,433' SelectedItemIndex='0' Size='120,433' Style='/Listboxes.Keymap.style'/>
<Scrollbar Control='ColorNameList' Location='281,30' Name='Scroll' ScrollExtent='9,433' Size='9,433' Style='/ScrollBars.vertical.style'/>
<Template Name='ColorNameTemplate' Size='145,25'>\<text font = \'/Fonts.HUDFont2\' location = \'5,0\' size = \'145,25\' textalignment = \'left\' textalignmentvertical = \'center\'\>
$actionname$
\</text\></Template>
<Template Name='ColorTemplate' Size='119,25'>\<text font = \'/Fonts.HUDFont2\' location = \'0,2\' size = \'120,23\' textalignment = \'center\' textalignmentvertical = \'center\' textcolor = \'$color$\'\>
$actionname$
\</text\></Template>
<Button LocalText='[@ColorAccept]' LocalTooltip='[@ColorAcceptTooltip]' Location='393,434' Name='AcceptColor' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@ColorAcceptTooltip'>@ColorAccept</Button>
<Button LocalText='[@ColorCancel]' LocalTooltip='[@ColorCancelTooltip]' Location='576,434' Name='CancelColor' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@ColorCancelTooltip'>@ColorCancel</Button>
<Image BackgroundOpacity='1.000' Location='303,429' Name='StatusBorder' PackLocation='left,bottom' PackLocationProp='0303/0001,-039/0001' PackSize='absolute,fixed' PackSizeProp='0319/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='439,31' Size='439,31'/>
</Page>
<Page Location='19,539' Name='LoadSave' ScrollExtent='759,37' Size='759,37'>
<Button LocalText='[@Default]' LocalTooltip='[@KeymapDefaultTooltip]' Location='264,9' Name='DefaultButton' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@KeymapDefaultTooltip'>@Default</Button>
<Button LocalText='[@Delete]' LocalTooltip='[@KeymapDeleteTooltip]' Location='178,9' Name='DeleteButton' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@KeymapDeleteTooltip'>@Delete</Button>
<Button LocalText='[@Load]' LocalTooltip='[@KeymapLoadTooltip]' Location='94,9' Name='LoadButton' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@KeymapLoadTooltip'>@Load</Button>
<Button LocalText='[@Save]' LocalTooltip='[@KeymapSaveTooltip]' Location='12,9' Name='SaveButton' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@KeymapSaveTooltip'>@Save</Button>
<Textbox BackgroundColor='#DDDDDD' BackgroundOpacity='0.475' LocalTooltip='[@OptionsNameTooltip]' Location='538,6' MaxLength='15' Name='ConfigurationName' PackLocation='right,bottom' PackLocationProp='-221/0001,-031/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='215,25' Size='215,25' Style='/ConsoleTextbox.ShortStyle' Tooltip='@OptionsNameTooltip'></Textbox>
<Text Font='/Fonts.HudFont1' LocalText='[@KeymapConfiguration]' Location='392,7' Name='ConfigurationText' ScrollExtent='143,25' Size='143,25' TextAlignment='Right' TextAlignmentVertical='Center'>@KeymapConfiguration</Text>
<Image BackgroundOpacity='1.000' Name='ButtonBorder' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='759,37' Size='759,37'/>
</Page>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='20,69' Name='AcquiredRect' Opacity='0.750' ScrollExtent='758,468' Size='758,468'/>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='69,9' Name='HelpButton' PackLocation='right,top' PackLocationProp='-731/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Cursor='s' LocalTooltip='[@VideoOptionTooltip]' Location='106,41' Name='VideoCheckbox' Radio='true' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.checkstyle' Tooltip='@VideoOptionTooltip'>@VideoOptionTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' Cursor='s' LocalTooltip='[@KeymapOptionTooltip]' Location='25,41' Name='KeymapCheckbox' Radio='true' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.checkstyle' Tooltip='@KeymapOptionTooltip'>@KeymapOptionTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' Cursor='s' LocalTooltip='[@SoundOptionTooltip]' Location='185,41' Name='SoundCheckbox' Radio='true' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.checkstyle' Tooltip='@SoundOptionTooltip'>@SoundOptionTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' Cursor='s' LocalTooltip='[@OtherOptionTooltip]' Location='266,41' Name='OptionsCheckbox' Radio='true' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.checkstyle' Tooltip='@OtherOptionTooltip'>@GameOptionTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' Cursor='s' LocalTooltip='[@ColorOptionTooltip]' Location='346,41' Name='ColorCheckbox' Radio='true' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.checkstyle' Tooltip='@ColorOptionTooltip'>@ColorOptionTab</Checkbox>
<CheckboxStyle CheckboxSize='100,100' Name='checkstyle' NormalTextStyle='/Fonts.HudFont1'/>
<Image Name='Border' ScrollExtent='1035,771' Size='1035,771' Stretch='false' Style='ShellOptionsBackground' Visible='false'/>
<Button IsCancelButton='true' LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='708,9' Name='CancelButton' PackLocation='right,top' PackLocationProp='-092/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='40,0' Name='Title' PackSize='absolute,fixed' PackSizeProp='0083/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='717,32' Size='717,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,15' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0011/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='800,589' Size='800,589' Stretch='false' Visible='false'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='9,17' Name='FrontendBackground' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/Frontend.OpaqueBox.style' ScrollExtent='782,566' Size='782,566' Stretch='false'/>
</Page>
