<Page Location='212,209' MinimumSize='521,200' movable='true' Name='Help' PackLocation='cfc,cfc' PackLocationProp='0000/0001,0065/0001' resizable='true' ScrollExtent='600,480' Size='600,480' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@HelpTitle]' Location='96,5' Name='TitleText' ScrollExtent='393,22' Size='393,22' TextAlignment='Center' TextAlignmentVertical='Center'>@HelpTitle</Text>
<Button LocalText='[@Cancel]' Location='511,8' Name='CancelButton' PackLocation='right,top' PackLocationProp='-089/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='31,0' Name='Title' PackSize='absolute,fixed' PackSizeProp='0071/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='529,32' Size='529,32'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='25,35' Name='FieldManualTab' ScrollExtent='235,24' Size='235,24' Style='/Buttons.WindowIconTab.style'>@FieldManualTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='260,35' Name='GeneralHelpTab' ScrollExtent='235,24' Size='235,24' Style='/Buttons.WindowIconTab.style'>@GeneralHelpTab</Checkbox>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Color='#385E61' Location='495,57' Name='TabTop' PackLocation='left,top' PackLocationProp='0495/0001,0057/0001' PackSize='absolute,fixed' PackSizeProp='0521/0001,0002/0003' ScrollExtent='79,2' Size='79,2' Style='/HUD.TabBorderTopStyle'/>
<Page BackgroundColor='#00FF00' Location='30,65' Name='FieldManual' PackSize='absolute,absolute' PackSizeProp='0060/0001,0102/0001' ScrollExtent='540,378' Size='540,378'>
<Text AbsorbsInput='false' BackgroundColor='#00FF00' Enabled='false' Font='/Fonts.ChatFont' LocalText='Test' Location='10,10' Name='TextTemplate' PackSize='absolute,fixed' PackSizeProp='0025/0001,0002/0003' ScrollExtent='515,25' Size='515,25' Visible='false'>Test</Text>
<Page BackgroundColor='#00FF00' Location='10,10' Name='TextPage' PackSize='absolute,absolute' PackSizeProp='0025/0001,0020/0001' ScrollExtent='515,358' Size='515,358'/>
<Scrollbar Control='TextPage' Location='531,10' Name='Scroll' PackLocation='right,top' PackLocationProp='-009/0001,0010/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0020/0001' ScrollExtent='9,358' Size='9,358' SizeIncrement='1,15' Style='/ScrollBars.vertical.style'/>
<DataSource Name='Data'>
<Data localname='[@FAQHowToGetToBattle]' Name='@FAQHowToGetToBattle'/>
<Data localname='[@FAQHowToUseWeapons]' Name='@FAQHowToUseWeapons'/>
<Data localname='[@FAQHowToGetVehicles]' Name='@FAQHowToGetVehicles'/>
<Data localname='[@FAQHowToGetMoreGear]' Name='@FAQHowToGetMoreGear'/>
<Data localname='[@FAQWhatIsVirtualTraining]' Name='@FAQWhatIsVirtualTraining'/>
<Data localname='[@FAQHowToCaptureEnemyTowers]' Name='@FAQHowToCaptureEnemyTowers'/>
<Data localname='[@FAQHowToCaptureEnemyFacilities]' Name='@FAQHowToCaptureEnemyFacilities'/>
<Data localname='[@FAQHowToResecure]' Name='@FAQHowToResecure'/>
<Data localname='[@FAQHowToGetImplants]' Name='@FAQHowToGetImplants'/>
<Data localname='[@FAQHowToEarnCR]' Name='@FAQHowToEarnCR'/>
<Data localname='[@FAQHowToSquad]' Name='@FAQHowToSquad'/>
<Data localname='[@FAQWhatIsLFS]' Name='@FAQWhatIsLFS'/>
</DataSource>
</Page>
<Page BackgroundColor='#00FF00' Location='30,65' Name='GeneralHelp' PackSize='absolute,absolute' PackSizeProp='0060/0001,0102/0001' ScrollExtent='540,378' Size='540,378' Visible='false'>
<Listbox DataSource='HelpData' Location='0,5' Name='TopicsList' PackSize='fixed,absolute' PackSizeProp='0002/0003,0005/0001' RowTemplate='HelpListTemplate' ScrollExtent='229,373' Size='229,373' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='TopicsList' Location='232,5' Name='TopicsListScroll' PackSize='fixed,absolute' PackSizeProp='0002/0003,0005/0001' ScrollExtent='9,373' Size='9,373' Style='/ScrollBars.vertical.style'/>
<Template Name='HelpListTemplate' Size='229,25'>\<text color = \'$color\' font = \'/Fonts.HudFont2\' location = \'4,2\' maxlines = \'1\' size = \'225,20\' truncateelipsis = \'true\' visible = \'$IsItem1$\'\>
$Internationalize$ 
\</text\>
\<text color = \'$color\' font = \'/Fonts.HudFont2\' location = \'24,2\' maxlines = \'1\' size = \'225,20\' truncateelipsis = \'true\' visible = \'$IsItem2$\'\>
$Internationalize$ 
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'0,2\' maxlines = \'1\' size = \'210,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsHeading$\'\>
$Internationalize$
\</text\>
\<Image backgroundopacity = \'1.000\' location = \'0,10\' name = \'UnderlineTemplate\' rstyledefault = \'/Listboxes.ListboxContentHeader.style\' scrollextent = \'225,8\' size = \'225,8\' visible = \'$IsHeading$\'/\></Template>
<DataSourceContainer Name='HelpContainer'>
<DataSource Name='HelpHeading'>
<Data internationalize='@HelpHelp' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpHelp]' Name='Help'/>
</DataSource>
<DataSource Name='Help'>
<Data internationalize='@HelpHelpItem' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHelpItem]' Name='HelpItem'/>
<Data internationalize='@HelpHelpContext' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHelpContext]' Name='HelpContext'/>
</DataSource>
<DataSource Name='FrontendHeading'>
<Data internationalize='@HelpFrontend' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpFrontend]' Name='Frontend'/>
</DataSource>
<DataSource Name='Frontend'>
<Data internationalize='@HelpFrontendServer' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpFrontendServer]' Name='FrontendServer'/>
<Data internationalize='@HelpFrontendEmpire' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpFrontendEmpire]' Name='FrontendEmpire'/>
<Data internationalize='@HelpFrontendCharacter' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpFrontendCharacter]' Name='FrontendCharacter'/>
<Data internationalize='@HelpFrontendCreate' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpFrontendCreate]' Name='FrontendCreate'/>
</DataSource>
<DataSource Name='OptionsHeading'>
<Data internationalize='@HelpOptions' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpGameOptions]' Name='Options'/>
</DataSource>
<DataSource Name='Options'>
<Data internationalize='@HelpOptionColor' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpOptionColor]' Name='OptionsColor'/>
<Data internationalize='@HelpOptionKeymap' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHelpContext]' Name='OptionsKeymap'/>
<Data internationalize='@HelpOptionOther' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='OptionsOther'/>
</DataSource>
<DataSource Name='OptionsSoundParent'>
<Data internationalize='@HelpOptionSound' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='OptionsSound'/>
</DataSource>
<DataSource Name='OptionsSoundChildren'>
<Data internationalize='@HelpOptionSoundSound' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionSoundSound]' Name='OptionsSoundSound'/>
<Data internationalize='@HelpOptionSoundMusic' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionSoundMusic]' Name='OptionsSoundMusic'/>
<Data internationalize='@HelpOptionSoundVoice' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionSoundVoice]' Name='OptionsSoundVoice'/>
</DataSource>
<DataSource Name='OptionsVideoParent'>
<Data internationalize='@HelpOptionVideo' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='OptionsVideo'/>
</DataSource>
<DataSource Name='OptionsVideoChildren'>
<Data internationalize='@HelpOptionVideoAdvanced' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoAdvanced]' Name='OptionsVideoAdvanced'/>
<Data internationalize='@HelpOptionVideoGeneral' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoGeneral]' Name='OptionsVideoGeneral'/>
</DataSource>
<DataSource Name='HUDHeading'>
<Data internationalize='@HelpHUDView' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpHUDView]' Name='HUDView'/>
</DataSource>
<DataSource Name='HUDView'>
<Data internationalize='@HelpHUDWindow' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='HUDWindow'/>
</DataSource>
<DataSource Name='HUDCharacterPaneParent'>
<Data internationalize='@HelpHUDCharacterPane' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDCharacterPane]' Name='HUDCharacterPane'/>
</DataSource>
<DataSource Name='HUDCharacterPaneChildren'>
<Data internationalize='@HelpHUDCharacterPaneInfo' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDCharacterPaneInfo]' Name='HelpHUDCharacterPaneInfo'/>
<Data internationalize='@HelpHUDAwardProgress' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDAwardProgress]' Name='HUDAwardProgress'/>
<Data internationalize='@HelpHUDCharacterPaneTraining' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDCharacterPaneTraining]' Name='HelpHUDCharacterPaneTraining'/>
<Data internationalize='@HelpHUDCharacterPaneTrainingMissions' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDCharacterPaneTrainingMissions]' Name='HelpHUDCharacterPaneTrainingMissions'/>
</DataSource>
<DataSource Name='HUDHUDItemsParent'>
<Data internationalize='@HelpHUDHUDItems' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='HUDHUDItems'/>
</DataSource>
<DataSource Name='HUDHUDItemsChildren'>
<Data internationalize='@HelpHUDDamage' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@Help]' Name='HUDDamageIndicator'/>
<Data internationalize='@HelpHUDCorpse' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDCorpse]' Name='HUDCorpse'/>
<Data internationalize='@HelpHUDActiveItems' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@Help]' Name='HUDActiveItems'/>
<Data internationalize='@HelpHUDRadar' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@Help]' Name='HUDRadar'/>
<Data internationalize='@HelpHUDReticle' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@Help]' Name='HUDReticle'/>
<Data internationalize='@HelpHUDShortcuts' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@Help]' Name='HUDShortcuts'/>
<Data internationalize='@HelpHUDStatus' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@Help]' Name='HUDStatus'/>
<Data internationalize='@HelpHUDSquad' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDSquad]' Name='HUDSquad'/>
<Data internationalize='@HelpHUDSessionStats' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDSessionStats]' Name='HUDSessionStatsPane'/>
</DataSource>
<DataSource Name='HUDInventoryParent'>
<Data internationalize='@HelpHUDInventory' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='HUDInventory'/>
</DataSource>
<DataSource Name='HUDInventoryChildren'>
<Data internationalize='@HelpHUDLocker' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDLocker]' Name='HUDLocker'/>
<Data internationalize='@HelpHUDTrunk' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDTrunk]' Name='HUDTrunk'/>
</DataSource>
<DataSource Name='HUDMiscParent'>
<Data internationalize='@HelpHUDMisc' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDMisc]' Name='HUDMisc'/>
</DataSource>
<DataSource Name='HUDMiscChildren'>
<Data internationalize='@HelpHUDAlarm' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDAlarm]' Name='HUDAlarm'/>
<Data internationalize='@HelpHUDChatOptions' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDChatOptions]' Name='HUDChatOptions'/>
<Data internationalize='@HelpHUDExclamation' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDExclamation]' Name='HUDExclamation'/>
<Data internationalize='@HelpHUDVoiceHost' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDVoiceHost]' Name='HUDVoiceHost'/>
<Data internationalize='@HelpHUDMissionStatus' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDMissionStatus]' Name='HUDMissionStatus'/>
</DataSource>
<DataSource Name='HUDOutfitParent'>
<Data internationalize='@HelpHUDOutfit' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDOutfit]' Name='HUDOutfitPane'/>
</DataSource>
<DataSource Name='HUDOutfitChildren'>
<Data internationalize='@HelpHUDOutfitList' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDOutfitList]' Name='HUDOutfitListPane'/>
</DataSource>
<DataSource Name='HUDOrganizationalInfoParent'>
<Data internationalize='@HelpHUDPlayerPane' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDPlayerPane]' Name='HUDPlayerPane'/>
</DataSource>
<DataSource Name='HUDOrganizationalInfoChildren'>
<Data internationalize='@HelpHUDFriends' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDFriends]' Name='HUDFriends'/>
</DataSource>
<DataSource Name='HUDStatisticsParent'>
<Data internationalize='@HelpHUDStatistics' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDStatistics]' Name='HUDStatisticsPane'/>
</DataSource>
<DataSource Name='HUDStatisticsChildren'>
<Data internationalize='@HelpHUDStatisticsKills' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDStatisticsKills]' Name='HelpHUDStatisticsKills'/>
<Data internationalize='@HelpHUDStatisticsAssists' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDStatisticsAssists]' Name='HelpHUDStatisticsAssists'/>
<Data internationalize='@HelpHUDStatisticsBases' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDStatisticsBases]' Name='HelpHUDStatisticsBases'/>
<Data internationalize='@HelpHUDStatisticsSupport' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDStatisticsSupport]' Name='HelpHUDStatisticsSupport'/>
</DataSource>
<DataSource Name='HUDTerminalsParent'>
<Data internationalize='@HelpHUDTerminals' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDTerminals]' Name='HUDTerminals'/>
</DataSource>
<DataSource Name='HUDTerminalsChildren'>
<Data internationalize='@HelpHUDBFRTerminal' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpHUDBFRTerminal]' Name='HUDBFRTerminal'/>
<Data internationalize='@HelpHUDEquipment' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@Help]' Name='HUDEquipment'/>
<Data internationalize='@HelpHUDImplant' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@Help]' Name='HUDImplant'/>
<Data internationalize='@HelpHUDVehicle' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@Help]' Name='HUDVehicle'/>
<Data internationalize='@HelpHUDCertTerminal' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@Help]' Name='HUDCertTerminal'/>
</DataSource>
<DataSource Name='HUDVehicleAccessParent'>
<Data internationalize='@HelpHUDVehicleAccess' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDVehicleAccess]' Name='HUDVehicleAccess'/>
</DataSource>
<DataSource Name='MapHeading'>
<Data internationalize='@HelpMapView' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpMapView]' Name='MapView'/>
</DataSource>
<DataSource Name='Map'>
<Data internationalize='@HelpMapGlobal' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='MapGlobal'/>
<Data internationalize='@HelpMapContinent' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='MapContinent'/>
<Data internationalize='@HelpMapDroppod' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='MapDroppod'/>
</DataSource>
<DataSource Name='ChatHeading'>
<Data internationalize='@HelpChat' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpChat]' Name='Chat'/>
</DataSource>
<DataSource Name='Chat'>
<Data internationalize='@HelpChatChannels' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpChatChannels]' Name='ChatChannels'/>
<Data internationalize='@HelpChatFilters' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='ChatFilters'/>
<Data internationalize='@HelpChatMacros' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpChatMacros]' Name='ChatMacros'/>
</DataSource>
<DataSource Name='ChatCommandsHeading'>
<Data internationalize='@HelpChatCommands' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpChatCommands]' Name='ChatCommands'/>
</DataSource>
<DataSource Name='ChatCommandsWhoHeading'>
<Data internationalize='@HelpWho' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpWho]' Name='ChatCommandsWho'/>
</DataSource>
<DataSource Name='ChatCommandsWho'>
<Data command='true' internationalize='@CMT_WHO' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_WHO]' Name='CMT_WHO'/>
<Data command='true' internationalize='@CMT_WHO_PLATOONLEADERS' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_WHO_PLATOONLEADERS]' Name='CMT_WHO_PLATOONLEADERS'/>
<Data command='true' internationalize='@CMT_WHO_SQUADLEADERS' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_WHO_SQUADLEADERS]' Name='CMT_WHO_SQUADLEADERS'/>
<Data command='true' internationalize='@CMT_WHO_TEAMS' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_WHO_TEAMS]' Name='CMT_WHO_TEAMS'/>
<Data command='true' internationalize='@CMT_WHO_CR' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_WHO_CR]' Name='CMT_WHO_CR'/>
</DataSource>
<DataSource Name='ChatCommandsChatHeading'>
<Data internationalize='@HelpChatCommandsChat' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpChatCommandsChat]' Name='ChatCommandsChat'/>
</DataSource>
<DataSource Name='ChatCommandsChat'>
<Data command='true' internationalize='@CMT_BROADCAST' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_BROADCAST]' Name='CMT_BROADCAST'/>
<Data command='true' internationalize='@CMT_COMMAND' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND]' Name='CMT_COMMAND'/>
<Data command='true' internationalize='@CMT_COMMAND_ALLZONES' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_ALLZONES]' Name='CMT_COMMAND_ALLZONES'/>
<Data command='true' internationalize='@CMT_COMMAND_REPORT' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_REPORT]' Name='CMT_COMMAND_REPORT'/>
<Data command='true' internationalize='@CMT_COMMAND_SANCTUARY' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_SANCTUARY]' Name='CMT_COMMAND_SANCTUARY'/>
<Data command='true' internationalize='@CMT_COMMAND_CAVERN1' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_CAVERN1]' Name='CMT_COMMAND_CAVERN1'/>
<Data command='true' internationalize='@CMT_COMMAND_CAVERN2' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_CAVERN2]' Name='CMT_COMMAND_CAVERN2'/>
<Data command='true' internationalize='@CMT_COMMAND_CAVERN3' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_CAVERN3'/>
<Data command='true' internationalize='@CMT_COMMAND_CAVERN4' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_CAVERN4]' Name='CMT_COMMAND_CAVERN4'/>
<Data command='true' internationalize='@CMT_COMMAND_CAVERN5' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_CAVERN5]' Name='CMT_COMMAND_CAVERN5'/>
<Data command='true' internationalize='@CMT_COMMAND_CAVERN6' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_CAVERN6]' Name='CMT_COMMAND_CAVERN6'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE1' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_ZONE1]' Name='CMT_COMMAND_ZONE1'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE2' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_ZONE2]' Name='CMT_COMMAND_ZONE2'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE3' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_ZONE3]' Name='CMT_COMMAND_ZONE3'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE4' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_ZONE4]' Name='CMT_COMMAND_ZONE4'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE5' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_ZONE5]' Name='CMT_COMMAND_ZONE5'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE6' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_ZONE6]' Name='CMT_COMMAND_ZONE6'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE7' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_ZONE7]' Name='CMT_COMMAND_ZONE7'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE8' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_ZONE8]' Name='CMT_COMMAND_ZONE8'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE9' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_ZONE9]' Name='CMT_COMMAND_ZONE9'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE10' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_COMMAND_ZONE10]' Name='CMT_COMMAND_ZONE10'/>
<Data command='true' internationalize='@CMT_OPEN' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_OPEN]' Name='CMT_OPEN'/>
<Data command='true' internationalize='@CMT_OUTFIT' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_OUTFIT]' Name='CMT_OUTFIT'/>
<Data command='true' internationalize='@CMT_PLATOON' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_PLATOON]' Name='CMT_PLATOON'/>
<Data command='true' internationalize='@CMT_PLATOONLEADER' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_PLATOONLEADER]' Name='CMT_PLATOONLEADER'/>
<Data command='true' internationalize='@CMT_SQUAD' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_SQUAD]' Name='CMT_SQUAD'/>
<Data command='true' internationalize='@CMT_SQUADLEADER' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_SQUADLEADER]' Name='CMT_SQUADLEADER'/>
<Data command='true' internationalize='@CMT_TELL' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_TELL]' Name='CMT_TELL'/>
<Data command='true' internationalize='@CMT_REPLY' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_REPLY]' Name='CMT_REPLY'/>
</DataSource>
<DataSource Name='ChatCommandsGeneralHeading'>
<Data internationalize='@HelpChatCommandsGeneral' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpChatCommandsGeneral]' Name='ChatCommandsGeneral'/>
</DataSource>
<DataSource Name='ChatCommandsGeneral'>
<Data command='true' internationalize='@CMT_ALARM' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_ALARM]' Name='CMT_ALARM'/>
<Data command='true' internationalize='@CMT_APPEAL' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_APPEAL]' Name='CMT_APPEAL'/>
<Data command='true' internationalize='@CMT_BUGREPORT' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_BUGREPORT]' Name='CMT_BUGREPORT'/>
<Data command='true' internationalize='@CMT_CHATLOG' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_CHATLOG]' Name='CMT_CHATLOG'/>
<Data command='true' internationalize='@CMT_CREATE_MACRO' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_CREATE_MACRO]' Name='CMT_CREATE_MACRO'/>
<Data command='true' internationalize='@CMT_FILTER' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_FILTER]' Name='CMT_FILTER'/>
<Data command='true' internationalize='@CMT_FRIENDS' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_FRIENDS]' Name='CMT_FRIENDS'/>
<Data command='true' internationalize='@CMT_HELP' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_HELP'/>
<Data command='true' internationalize='@CMT_IGNORE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_IGNORE]' Name='CMT_IGNORE'/>
<Data command='true' internationalize='@CMT_INSTANTACTION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_INSTANTACTION]' Name='CMT_INSTANTACTION'/>
<Data command='true' internationalize='@CMT_LOC' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_LOC]' Name='CMT_LOC'/>
<Data command='true' internationalize='@CMT_QUIT' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_QUIT]' Name='CMT_QUIT'/>
<Data command='true' internationalize='@CMT_RECALL' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_RECALL]' Name='CMT_RECALL'/>
<Data command='true' internationalize='@CMT_REPORTUSER' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_REPORTUSER]' Name='CMT_REPORTUSER'/>
<Data command='true' internationalize='@CMT_TIME' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_TIME]' Name='CMT_TIME'/>
<Data command='true' internationalize='@CMT_TOGGLE_STATS' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_TOGGLE_STATS]' Name='CMT_TOGGLE_STATS'/>
</DataSource>
<DataSource Name='ChatCommandsSquadHeading'>
<Data internationalize='@HelpChatCommandsSquad' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpChatCommandsSquad]' Name='ChatCommandsSquad'/>
</DataSource>
<DataSource Name='ChatCommandsSquad'>
<Data command='true' internationalize='@CMT_SQUADINVITE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_SQUADINVITE]' Name='CMT_SQUADINVITE'/>
<Data command='true' internationalize='@CMT_SQUADKICK' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_SQUADKICK]' Name='CMT_SQUADKICK'/>
<Data command='true' internationalize='@CMT_SQUADACCEPTINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_SQUADACCEPTINVITATION]' Name='CMT_SQUADACCEPT'/>
<Data command='true' internationalize='@CMT_SQUADREJECTINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_SQUADREJECTINVITATION]' Name='CMT_SQUADREJECT'/>
<Data command='true' internationalize='@CMT_SQUADCANCELINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_SQUADCANCELINVITATION]' Name='CMT_SQUADCANCEL'/>
<Data command='true' internationalize='@CMT_SQUADPROMOTE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_SQUADPROMOTE]' Name='CMT_SQUADPROMOTE'/>
<Data command='true' internationalize='@CMT_SQUADDISBAND' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_SQUADDISBAND]' Name='CMT_SQUADDISBAND'/>
<Data command='true' internationalize='@CMT_SQUADLEAVE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_SQUADLEAVE]' Name='CMT_SQUADLEAVE'/>
</DataSource>
<DataSource Name='ChatCommandsPlatoonHeading'>
<Data internationalize='@HelpChatCommandsPlatoon' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpChatCommandsPlatoon]' Name='ChatCommandsPlatoon'/>
</DataSource>
<DataSource Name='ChatCommandsPlatoon'>
<Data command='true' internationalize='@CMT_PLATOONINVITE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_PLATOONINVITE]' Name='CMT_PLATOONINVITE'/>
<Data command='true' internationalize='@CMT_PLATOONKICK' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_PLATOONKICK]' Name='CMT_PLATOONKICK'/>
<Data command='true' internationalize='@CMT_PLATOONACCEPTINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_PLATOONACCEPTINVITATION]' Name='CMT_PLATOONACCEPT'/>
<Data command='true' internationalize='@CMT_PLATOONREJECTINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_PLATOONREJECTINVITATION]' Name='CMT_PLATOONREJECT'/>
<Data command='true' internationalize='@CMT_PLATOONCANCELINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_PLATOONCANCELINVITATION]' Name='CMT_PLATOONCANCEL'/>
<Data command='true' internationalize='@CMT_PLATOONDISBAND' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_PLATOONDISBAND]' Name='CMT_PLATOONDISBAND'/>
<Data command='true' internationalize='@CMT_PLATOONLEAVE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_PLATOONLEAVE]' Name='CMT_PLATOONLEAVE'/>
</DataSource>
<DataSource Name='ChatCommandsOutfitHeading'>
<Data internationalize='@HelpChatCommandsOutfit' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpChatCommandsOutfit]' Name='ChatCommandsOutfit'/>
</DataSource>
<DataSource Name='ChatCommandsOutfit'>
<Data command='true' internationalize='@CMT_OUTFITCREATE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_OUTFITCREATE]' Name='CMT_OUTFITCREATE'/>
<Data command='true' internationalize='@CMT_OUTFITCREATEFROMSQUAD' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_OUTFITCREATEFROMSQUAD]' Name='CMT_OUTFITCREATEFROMSQUAD'/>
<Data command='true' internationalize='@CMT_OUTFITINVITE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_OUTFITINVITE]' Name='CMT_OUTFITINVITE'/>
<Data command='true' internationalize='@CMT_OUTFITKICK' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_OUTFITKICK]' Name='CMT_OUTFITKICK'/>
<Data command='true' internationalize='@CMT_OUTFITACCEPTINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_OUTFITACCEPTINVITATION]' Name='CMT_OUTFITACCEPT'/>
<Data command='true' internationalize='@CMT_OUTFITREJECTINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_OUTFITREJECTINVITATION]' Name='CMT_OUTFITREJECT'/>
<Data command='true' internationalize='@CMT_OUTFITCANCELINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_OUTFITCANCELINVITATION]' Name='CMT_OUTFITCANCEL'/>
<Data command='true' internationalize='@CMT_OUTFITLEAVE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_OUTFITLEAVE]' Name='CMT_OUTFITLEAVE'/>
<Data command='true' internationalize='@CMT_OUTFIT_RECALL' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@CMT_OUTFIT_RECALL]' Name='CMT_OUTFITRECALL'/>
</DataSource>
<DataSource Name='TrainingMissionHeading'>
<Data internationalize='@HelpTrainingMission' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpTrainingMission]' Name='TrainingMission'/>
</DataSource>
<DataSource Name='TrainingMission'>
<Data internationalize='@HelpTrainingMissions' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpTrainingMissions]' Name='TrainingMissions'/>
</DataSource>
<DataSource Name='ArmorHeading'>
<Data internationalize='@HelpArmor' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpArmor]' Name='Armor'/>
</DataSource>
<DataSource Name='Armor'>
<Data internationalize='@lite_armor' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@lite_armor]' localtext='[@lite_armor_info]' Name='ArmorLight' text='@lite_armor_info'/>
<Data internationalize='@stealth_armor' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@stealth_armor]' localtext='[@stealth_armor_info]' Name='ArmorStealth' text='@stealth_armor_info'/>
<Data internationalize='@med_armor' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@med_armor]' localtext='[@med_armor_info]' Name='ArmorMedium' text='@med_armor_info'/>
<Data internationalize='@standard_issue_armor' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@standard_issue_armor]' localtext='[@standard_issue_armor_info]' Name='ArmorStandard' text='@standard_issue_armor_info'/>
</DataSource>
<DataSource Name='ArmorNCMAXHeading'>
<Data internationalize='@HelpArmorNCMAX' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpArmorNCMAX]' Name='ArmorNCMAX'/>
</DataSource>
<DataSource Name='ArmorNCMAX'>
<Data internationalize='@nchev_antivehicular' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@nchev_antivehicular]' localtext='[@nchev_antivehicular_info]' Name='ArmorNCAntiVeh' text='@nchev_antivehicular_info'/>
<Data internationalize='@nchev_antipersonnel' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@nchev_antipersonnel]' localtext='[@nchev_antipersonnel_info]' Name='ArmorNCAntiPer' text='@nchev_antipersonnel_info'/>
<Data internationalize='@nchev_antiaircraft' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@nchev_antiaircraft]' localtext='[@nchev_antiaircraft_info]' Name='ArmorNCAntiAir' text='@nchev_antiaircraft_info'/>
</DataSource>
<DataSource Name='ArmorTRMAXHeading'>
<Data internationalize='@HelpArmorTRMAX' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpArmorTRMAX]' Name='ArmorTRMAX'/>
</DataSource>
<DataSource Name='ArmorTRMAX'>
<Data internationalize='@trhev_antiaircraft' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@trhev_antiaircraft]' localtext='[@trhev_antiaircraft_info]' Name='ArmorTRAntiAir' text='@trhev_antiaircraft_info'/>
<Data internationalize='@trhev_antipersonnel' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@trhev_antipersonnel]' localtext='[@trhev_antipersonnel_info]' Name='ArmorTRAntiPer' text='@trhev_antipersonnel_info'/>
<Data internationalize='@trhev_antivehicular' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@trhev_antivehicular]' localtext='[@trhev_antivehicular_info]' Name='ArmorTRAntiVeh' text='@trhev_antivehicular_info'/>
</DataSource>
<DataSource Name='ArmorVSMAXHeading'>
<Data internationalize='@HelpArmorVSMAX' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpArmorVSMAX]' Name='ArmorVSMAX'/>
</DataSource>
<DataSource Name='ArmorVSMAX'>
<Data internationalize='@vshev_antivehicular' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@vshev_antivehicular]' localtext='[@vshev_antivehicular_info]' Name='ArmorVSAntiVeh' text='@vshev_antivehicular_info'/>
<Data internationalize='@vshev_antipersonnel' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@vshev_antipersonnel]' localtext='[@vshev_antipersonnel_info]' Name='ArmorVSAntiPer' text='@vshev_antipersonnel_info'/>
<Data internationalize='@vshev_antiaircraft' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@vshev_antiaircraft]' localtext='[@vshev_antiaircraft_info]' Name='ArmorVSAntiAir' text='@vshev_antiaircraft_info'/>
</DataSource>
<DataSource Name='ImplantHeading'>
<Data internationalize='@HelpImplants' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpImplants]' Name='Implants'/>
</DataSource>
<DataSource Name='Implant'>
<Data internationalize='@advanced_regen' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@advanced_regen]' localtext='[@Advanced_Regen_Descrip]' Name='ImplantAdvancedRegen' text='@Advanced_Regen_Descrip'/>
<Data internationalize='@targeting' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@targeting]' localtext='[@Targeting_Descrip]' Name='ImplantTargeting' text='@Targeting_Descrip'/>
<Data internationalize='@audio_amplifier' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@audio_amplifier]' localtext='[@Audio_Amplifier_Descrip]' Name='ImplantAudio' text='@Audio_Amplifier_Descrip'/>
<Data internationalize='@darklight_vision' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@darklight_vision]' localtext='[@Darklight_Vision_Descrip]' Name='ImplantDarklight' text='@Darklight_Vision_Descrip'/>
<Data internationalize='@melee_booster' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@melee_booster]' localtext='[@Melee_Booster_Descrip]' Name='ImplantMelee' text='@Melee_Booster_Descrip'/>
<Data internationalize='@personal_shield' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@personal_shield]' localtext='[@Personal_Shield_Descrip]' Name='ImplantShield' text='@Personal_Shield_Descrip'/>
<Data internationalize='@range_magnifier' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@range_magnifier]' localtext='[@Range_Magnifier_Descrip]' Name='ImplantRange' text='@Range_Magnifier_Descrip'/>
<Data internationalize='@second_wind' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@second_wind]' localtext='[@Second_Wind_Descrip]' Name='ImplantSecondWind' text='@Second_Wind_Descrip'/>
<Data internationalize='@silent_run' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@silent_run]' localtext='[@Silent_Run_Descrip]' Name='ImplantSilentRun' text='@Silent_Run_Descrip'/>
<Data internationalize='@surge' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@surge]' localtext='[@Surge_Descrip]' Name='ImplantSurge' text='@Surge_Descrip'/>
</DataSource>
<DataSource Name='EquipmentHeading'>
<Data internationalize='@HelpEquipment' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpEquipment]' Name='Equipment'/>
</DataSource>
<DataSource Name='Equipment'>
<Data internationalize='@xp_advanced_ace_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_advanced_ace_label]' localtext='[@xp_advanced_ace_message]' Name='EquipmentFDU' text='@xp_advanced_ace_message'/>
<Data internationalize='@xp_ace_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_ace_label]' localtext='[@xp_ace_message]' Name='EquipmentACE' text='@xp_ace_message'/>
<Data internationalize='@xp_bank_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_bank_label]' localtext='[@xp_bank_message]' Name='EquipmentBANK' text='@xp_bank_message'/>
<Data internationalize='@xp_telepad_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_telepad_label]' localtext='[@xp_telepad_message]' Name='EquipmentRouterTelepad' text='@xp_telepad_message'/>
<Data internationalize='@xp_laze_pointer_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_laze_pointer_label]' localtext='[@xp_laze_pointer_message]' Name='EquipmentLazePointer' text='@xp_laze_pointer_message'/>
<Data internationalize='@xp_med_app_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_med_app_label]' localtext='[@xp_med_app_message]' Name='EquipmentMedApp' text='@xp_med_app_message'/>
<Data internationalize='@xp_nano_dispenser_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_nano_dispenser_label]' localtext='[@xp_nano_dispenser_message]' Name='EquipmentNanoDispenser' text='@xp_nano_dispenser_message'/>
</DataSource>
<DataSource Name='EquipmentREK'>
<Data internationalize='@xp_rek_label' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_rek_label]' localtext='[@xp_rek_message]' Name='EquipmentREK' text='@xp_rek_message'/>
</DataSource>
<DataSource Name='EquipmentREKChildren'>
<Data internationalize='@xp_rek_colors_label' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@xp_rek_colors_label]' localtext='[@xp_rek_colors_message]' Name='EquipmentREKColors' text='@xp_rek_colors_message'/>
<Data internationalize='@xp_rek_targets_label' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@xp_rek_targets_label]' localtext='[@xp_rek_targets_message]' Name='EquipmentREKTargets' text='@xp_rek_targets_message'/>
</DataSource>
<DataSource Name='EquipmentTREK'>
<Data internationalize='@xp_trek_label' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_trek_label]' localtext='[@xp_trek_message]' Name='EquipmentTREK' text='@xp_trek_message'/>
</DataSource>
<DataSource Name='EquipmentTREKChildren'>
<Data internationalize='@xp_trek_targets_label' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@xp_trek_targets_label]' localtext='[@xp_trek_targets_message]' Name='EquipmentTREKTargets' text='@xp_trek_targets_message'/>
</DataSource>
<DataSource Name='EquipmentMedkit'>
<Data internationalize='@medkit' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@medkit]' localtext='[@medkit_info]' Name='EquipmentMedKit' text='@medkit_info'/>
</DataSource>
<DataSource Name='WeaponHeading'>
<Data internationalize='@HelpWeapons' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpWeapons]' Name='Weapons'/>
</DataSource>
<DataSource Name='Weapons'>
<Data internationalize='@xp_ilc9_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_ilc9_label]' localtext='[@xp_ilc9_message]' Name='WeaponAMP' text='@xp_ilc9_message'/>
<Data internationalize='@xp_beamer_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_beamer_label]' localtext='[@xp_beamer_message]' Name='WeaponBeamer' text='@xp_beamer_message'/>
<Data internationalize='@xp_bolt_driver_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_bolt_driver_label]' localtext='[@xp_bolt_driver_message]' Name='WeaponBoltDriver' text='@xp_bolt_driver_message'/>
<Data internationalize='@xp_chainblade_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_chainblade_label]' localtext='[@xp_chainblade_message]' Name='WeaponChainblade' text='@xp_chainblade_message'/>
<Data internationalize='@xp_cycler_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_cycler_label]' localtext='[@xp_cycler_message]' Name='WeaponCycler' text='@xp_cycler_message'/>
<Data internationalize='@xp_phoenix_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_phoenix_label]' localtext='[@xp_phoenix_message]' Name='WeaponDecimator' text='@xp_phoenix_message'/>
<Data internationalize='@xp_flamethrower_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_flamethrower_label]' localtext='[@xp_flamethrower_message]' Name='WeaponDragon' text='@xp_flamethrower_message'/>
<Data internationalize='@xp_anniversary_gunb_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_anniversary_gunb_label]' localtext='[@xp_anniversary_gunb_message]' Name='WeaponEraser' text='@xp_anniversary_gunb_message'/>
<Data internationalize='@xp_forceblade_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_forceblade_label]' localtext='[@xp_forceblade_message]' Name='WeaponForceblade' text='@xp_forceblade_message'/>
<Data internationalize='@xp_grenade_frag_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_grenade_frag_label]' localtext='[@xp_grenade_frag_message]' Name='WeaponFragGrenade' text='@xp_grenade_frag_message'/>
<Data internationalize='@xp_gauss_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_gauss_label]' localtext='[@xp_gauss_message]' Name='WeaponGauss' text='@xp_gauss_message'/>
<Data internationalize='@xp_heavy_sniper_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_heavy_sniper_label]' localtext='[@xp_heavy_sniper_message]' Name='WeaponScoutRifle' text='@xp_heavy_sniper_message'/>
<Data internationalize='@xp_hunterseeker_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_hunterseeker_label]' localtext='[@xp_hunterseeker_message]' Name='WeaponHunterseeker' text='@xp_hunterseeker_message'/>
<Data internationalize='@xp_r_shotgun_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_r_shotgun_label]' localtext='[@xp_r_shotgun_message]' Name='WeaponJackhammer' text='@xp_r_shotgun_message'/>
<Data internationalize='@xp_grenade_jammer_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_grenade_jammer_label]' localtext='[@xp_grenade_jammer_message]' Name='WeaponJammerGrenade' text='@xp_grenade_jammer_message'/>
<Data internationalize='@xp_lancer_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_lancer_label]' localtext='[@xp_lancer_message]' Name='WeaponLancer' text='@xp_lancer_message'/>
<Data internationalize='@xp_lasher_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_lasher_label]' localtext='[@xp_lasher_message]' Name='WeaponLasher' text='@xp_lasher_message'/>
<Data internationalize='@xp_maelstrom_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_maelstrom_label]' localtext='[@xp_maelstrom_message]' Name='WeaponMaelstrom' text='@xp_maelstrom_message'/>
<Data internationalize='@xp_magcutter_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_magcutter_label]' localtext='[@xp_magcutter_message]' Name='WeaponMagcutter' text='@xp_magcutter_message'/>
<Data internationalize='@xp_mini_chaingun_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_mini_chaingun_label]' localtext='[@xp_mini_chaingun_message]' Name='WeaponMiniChaingun' text='@xp_mini_chaingun_message'/>
<Data internationalize='@xp_grenade_plasma_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_grenade_plasma_label]' localtext='[@xp_grenade_plasma_message]' Name='WeaponPlasmaGrenade' text='@xp_grenade_plasma_message'/>
<Data internationalize='@xp_pulsar_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_pulsar_label]' localtext='[@xp_pulsar_message]' Name='WeaponPulsar' text='@xp_pulsar_message'/>
<Data internationalize='@xp_punisher_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_punisher_label]' localtext='[@xp_punisher_message]' Name='WeaponPunisher' text='@xp_punisher_message'/>
<Data internationalize='@xp_radiator_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_radiator_label]' localtext='[@xp_radiator_message]' Name='WeaponRadiator' text='@xp_radiator_message'/>
<Data internationalize='@xp_repeater_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_repeater_label]' localtext='[@xp_repeater_message]' Name='WeaponRepeater' text='@xp_repeater_message'/>
<Data internationalize='@xp_rocklet_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_rocklet_label]' localtext='[@xp_rocklet_message]' Name='WeaponRocklet' text='@xp_rocklet_message'/>
<Data internationalize='@xp_isp_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_isp_label]' localtext='[@xp_isp_message]' Name='WeaponScatterPistol' text='@xp_isp_message'/>
<Data internationalize='@xp_oicw_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_oicw_label]' localtext='[@xp_oicw_message]' Name='WeaponScorpion' text='@xp_oicw_message'/>
<Data internationalize='@xp_anniversary_gun_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_anniversary_gun_label]' localtext='[@xp_anniversary_gun_message]' Name='WeaponSpear' text='@xp_anniversary_gun_message'/>
<Data internationalize='@xp_spiker_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_spiker_label]' localtext='[@xp_spiker_message]' Name='WeaponSpiker' text='@xp_spiker_message'/>
<Data internationalize='@xp_anniversary_guna_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_anniversary_guna_label]' localtext='[@xp_anniversary_guna_message]' Name='WeaponStinger' text='@xp_anniversary_guna_message'/>
<Data internationalize='@xp_striker_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_striker_label]' localtext='[@xp_striker_message]' Name='WeaponStriker' text='@xp_striker_message'/>
<Data internationalize='@xp_suppressor_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_suppressor_label]' localtext='[@xp_suppressor_message]' Name='WeaponSuppressor' text='@xp_suppressor_message'/>
<Data internationalize='@xp_flechette_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_flechette_label]' localtext='[@xp_flechette_message]' Name='WeaponSweeper' text='@xp_flechette_message'/>
<Data internationalize='@xp_thumper_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_thumper_label]' localtext='[@xp_thumper_message]' Name='WeaponThumper' text='@xp_thumper_message'/>
</DataSource>
<DataSource Name='VehicleHeading'>
<Data internationalize='@HelpVehicles' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpVehicles]' Name='Vehicles'/>
</DataSource>
<DataSource Name='Vehicle'>
<Data internationalize='@xp_ams_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_ams_label]' localtext='[@xp_ams_message]' Name='VehicleAMS' text='@xp_ams_message'/>
<Data internationalize='@xp_ant_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_ant_label]' localtext='[@xp_ant_message]' Name='VehicleANT' text='@xp_ant_message'/>
<Data internationalize='@xp_aurora_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_aurora_label]' localtext='[@xp_aurora_message]' Name='VehicleAurora' text='@xp_aurora_message'/>
<Data internationalize='@xp_quadassault_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_quadassault_label]' localtext='[@xp_quadassault_message]' Name='VehicleBasilisk' text='@xp_quadassault_message'/>
<Data internationalize='@xp_mediumtransport_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_mediumtransport_label]' localtext='[@xp_mediumtransport_message]' Name='VehicleDeliverer' text='@xp_mediumtransport_message'/>
<Data internationalize='@xp_twomanheavybuggy_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_twomanheavybuggy_label]' localtext='[@xp_twomanheavybuggy_message]' Name='VehicleEnforcer' text='@xp_twomanheavybuggy_message'/>
<Data internationalize='@xp_flail_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_flail_label]' localtext='[@xp_flail_message]' Name='VehicleFlail' text='@xp_flail_message'/>
<Data internationalize='@xp_fury_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_fury_label]' localtext='[@xp_fury_message]' Name='VehicleFury' text='@xp_fury_message'/>
<Data internationalize='@xp_dropship_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_dropship_label]' localtext='[@xp_dropship_message]' Name='VehicleGalaxy' text='@xp_dropship_message'/>
<Data internationalize='@xp_galaxy_gunship_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_galaxy_gunship_label]' localtext='[@xp_galaxy_gunship_message]' Name='VehicleGunship' text='@xp_galaxy_gunship_message'/>
<Data internationalize='@xp_two_man_assault_buggy_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_two_man_assault_buggy_label]' localtext='[@xp_two_man_assault_buggy_message]' Name='VehicleHarasser' text='@xp_two_man_assault_buggy_message'/>
<Data internationalize='@xp_apc_tr_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_apc_tr_label]' localtext='[@xp_apc_tr_message]' Name='VehicleJuggernaut' text='@xp_apc_tr_message'/>
<Data internationalize='@xp_apc_vs_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_apc_vs_label]' localtext='[@xp_apc_vs_message]' Name='VehicleLeviathan' text='@xp_apc_vs_message'/>
<Data internationalize='@xp_liberator_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_liberator_label]' localtext='[@xp_liberator_message]' Name='VehicleLiberator' text='@xp_liberator_message'/>
<Data internationalize='@xp_lightning_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_lightning_label]' localtext='[@xp_lightning_message]' Name='VehicleLightning' text='@xp_lightning_message'/>
<Data internationalize='@xp_lodestar_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_lodestar_label]' localtext='[@xp_lodestar_message]' Name='VehicleLodestar' text='@xp_lodestar_message'/>
<Data internationalize='@xp_magrider_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_magrider_label]' localtext='[@xp_magrider_message]' Name='VehicleMagrider' text='@xp_magrider_message'/>
<Data internationalize='@xp_threemanheavybuggy_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_threemanheavybuggy_label]' localtext='[@xp_threemanheavybuggy_message]' Name='VehicleMarauder' text='@xp_threemanheavybuggy_message'/>
<Data internationalize='@xp_mosquito_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_mosquito_label]' localtext='[@xp_mosquito_message]' Name='VehicleMosquito' text='@xp_mosquito_message'/>
<Data internationalize='@xp_phantasm_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_phantasm_label]' localtext='[@xp_phantasm_message]' Name='VehiclePhantasm' text='@xp_phantasm_message'/>
<Data internationalize='@xp_prowler_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_prowler_label]' localtext='[@xp_prowler_message]' Name='VehicleProwler' text='@xp_prowler_message'/>
<Data internationalize='@xp_battlewagon_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_battlewagon_label]' localtext='[@xp_battlewagon_message]' Name='VehicleRaider' text='@xp_battlewagon_message'/>
<Data internationalize='@xp_lightgunship_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_lightgunship_label]' localtext='[@xp_lightgunship_message]' Name='VehicleReaver' text='@xp_lightgunship_message'/>
<Data internationalize='@xp_router_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_router_label]' localtext='[@xp_router_message]' Name='VehicleRouter' text='@xp_router_message'/>
<Data internationalize='@xp_skyguard_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_skyguard_label]' localtext='[@xp_skyguard_message]' Name='VehicleSkyguard' text='@xp_skyguard_message'/>
<Data internationalize='@xp_switchblade_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_switchblade_label]' localtext='[@xp_switchblade_message]' Name='VehicleSwitchblade' text='@xp_switchblade_message'/>
<Data internationalize='@xp_twomanhoverbuggy_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_twomanhoverbuggy_label]' localtext='[@xp_twomanhoverbuggy_message]' Name='VehicleThresher' text='@xp_twomanhoverbuggy_message'/>
<Data internationalize='@xp_thunderer_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_thunderer_label]' localtext='[@xp_thunderer_message]' Name='VehicleThunderer' text='@xp_thunderer_message'/>
<Data internationalize='@xp_vanguard_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_vanguard_label]' localtext='[@xp_vanguard_message]' Name='VehicleVanguard' text='@xp_vanguard_message'/>
<Data internationalize='@xp_apc_nc_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_apc_nc_label]' localtext='[@xp_apc_nc_message]' Name='VehicleVindicator' text='@xp_apc_nc_message'/>
<Data internationalize='@xp_vulture_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_vulture_label]' localtext='[@xp_vulture_message]' Name='VehicleVulture' text='@xp_vulture_message'/>
<Data internationalize='@xp_quadstealth_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_quadstealth_label]' localtext='[@xp_quadstealth_message]' Name='VehicleWraith' text='@xp_quadstealth_message'/>
</DataSource>
<DataSource Name='DeployableHeading'>
<Data internationalize='@HelpDeployables' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpDeployables]' Name='Deployables'/>
</DataSource>
<DataSource Name='Deployables'>
<Data internationalize='@xp_boomer_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_boomer_label]' localtext='[@xp_boomer_message]' Name='DeployableBoomer' text='@xp_boomer_message'/>
<Data internationalize='@xp_he_mine_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_he_mine_label]' localtext='[@xp_he_mine_message]' Name='DeployableHEMine' text='@xp_he_mine_message'/>
<Data internationalize='@xp_spitfire_turret_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_spitfire_turret_label]' localtext='[@xp_spitfire_turret_message]' Name='DeployableSpitfireTurret' text='@xp_spitfire_turret_message'/>
<Data internationalize='@xp_motion_sensor_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_motion_sensor_label]' localtext='[@xp_motion_sensor_message]' Name='DeployableMotionSensor' text='@xp_motion_sensor_message'/>
<Data internationalize='@xp_jammer_mine_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_jammer_mine_label]' localtext='[@xp_jammer_mine_message]' Name='DeployableDisrupterMine' text='@xp_jammer_mine_message'/>
<Data internationalize='@xp_spitfire_cloaked_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_spitfire_cloaked_label]' localtext='[@xp_spitfire_cloaked_message]' Name='DeployableShadowTurret' text='@xp_spitfire_cloaked_message'/>
<Data internationalize='@xp_spitfire_aa_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_spitfire_aa_label]' localtext='[@xp_spitfire_aa_message]' Name='DeployableCerberusTurret' text='@xp_spitfire_aa_message'/>
<Data internationalize='@xp_tank_traps_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_tank_traps_label]' localtext='[@xp_tank_traps_message]' Name='DeployableTankTrap' text='@xp_tank_traps_message'/>
<Data internationalize='@xp_portable_manned_turret_nc_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_portable_manned_turret_nc_label]' localtext='[@xp_portable_manned_turret_nc_message]' Name='DeployableOsprey' text='@xp_portable_manned_turret_nc_message'/>
<Data internationalize='@xp_portable_manned_turret_tr_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_portable_manned_turret_tr_label]' localtext='[@xp_portable_manned_turret_tr_message]' Name='DeployableAvenger' text='@xp_portable_manned_turret_tr_message'/>
<Data internationalize='@xp_portable_manned_turret_vs_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_portable_manned_turret_vs_label]' localtext='[@xp_portable_manned_turret_vs_message]' Name='DeployableOrion' text='@xp_portable_manned_turret_vs_message'/>
<Data internationalize='@xp_shield_generator_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_shield_generator_label]' localtext='[@xp_shield_generator_message]' Name='DeployableShieldGenerator' text='@xp_shield_generator_message'/>
<Data internationalize='@xp_sensor_shield_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_sensor_shield_label]' localtext='[@xp_sensor_shield_message]' Name='SensorShield' text='@xp_sensor_shield_message'/>
</DataSource>
<DataSource Name='BFRHeading'>
<Data internationalize='@HelpBFR' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpBFR]' Name='BFR'/>
</DataSource>
<DataSource Name='BFR'>
<Data internationalize='@HelpBFRConfiguration' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpBFRConfiguration]' Name='BFRConfiguration'/>
<Data internationalize='@HelpBFRImprintingAndCertification' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpBFRImprintingAndCertification]' Name='BFRImprintingAndCertification'/>
<Data internationalize='@HelpBFRVariants' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpBFRVariants]' Name='BFRVariants'/>
</DataSource>
<DataSource Name='ObjectsHeading'>
<Data internationalize='@HelpStaticObjects' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpStaticObjects]' Name='StaticObjects'/>
</DataSource>
<DataSource Name='Objects'>
<Data internationalize='@xp_adv_med_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_adv_med_terminal_message]' Name='ObjectAdvMedTerminal' text='@xp_adv_med_terminal_message'/>
<Data internationalize='@xp_galaxy_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_galaxy_terminal_label]' localtext='[@xp_galaxy_terminal_message]' Name='ObjectGalaxyTerminal' text='@xp_galaxy_terminal_message'/>
<Data internationalize='@xp_air_vehicle_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_air_vehicle_terminal_label]' localtext='[@xp_air_vehicle_message]' Name='ObjectAirVehicleTerminal' text='@xp_air_vehicle_message'/>
<Data internationalize='@xp_certification_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_certification_terminal_label]' localtext='[@xp_certification_terminal_message]' Name='ObjectCertificationTerminal' text='@xp_certification_terminal_message'/>
<Data internationalize='@xp_capture_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_capture_terminal_label]' localtext='[@xp_capture_terminal_message]' Name='ObjectCaptureTerminal' text='@xp_capture_terminal_message'/>
<Data internationalize='@xp_locker_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_locker_label]' localtext='[@xp_locker_message]' Name='ObjectLocker' text='@xp_locker_message'/>
<Data internationalize='@xp_order_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_order_terminal_label]' localtext='[@xp_order_terminal_message]' Name='ObjectOrderTerminal' text='@xp_order_terminal_message'/>
<Data internationalize='@xp_generator_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_generator_label]' localtext='[@xp_generator_message]' Name='ObjectGenerator' text='@xp_generator_message'/>
<Data internationalize='@xp_ground_vehicle_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_ground_vehicle_terminal_label]' localtext='[@xp_ground_vehicle_terminal_message]' Name='ObjectGroundVehicleTerminal' text='@xp_ground_vehicle_terminal_message'/>
<Data internationalize='@xp_secondary_capture_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_secondary_capture_label]' localtext='[@xp_secondary_capture_message]' Name='ObjectSecondaryCapture' text='@xp_secondary_capture_message'/>
<Data internationalize='@xp_implant_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_implant_terminal_label]' localtext='[@xp_implant_terminal_message]' Name='ObjectImplantTerminal' text='@xp_implant_terminal_message'/>
<Data internationalize='@xp_respawn_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_respawn_terminal_label]' localtext='[@xp_respawn_terminal_message]' Name='ObjectRespawnTerminal' text='@xp_respawn_terminal_message'/>
<Data internationalize='@xp_med_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_med_terminal_label]' localtext='[@xp_med_terminal_message]' Name='ObjectMedTerminal' text='@xp_med_terminal_message'/>
<Data internationalize='@xp_wall_turret_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_wall_turret_label]' localtext='[@xp_wall_turret_message]' Name='ObjectWallTurret' text='@xp_wall_turret_message'/>
<Data internationalize='@xp_external_door_lock_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_external_door_lock_label]' localtext='[@xp_external_door_lock_message]' Name='ObjectExternalDoorLock' text='@xp_external_door_lock_message'/>
</DataSource>
<DataSource Name='WorldObjectsHeading'>
<Data internationalize='@HelpWorldObjects' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpWorldObjects]' Name='WorldObjects'/>
</DataSource>
<DataSource Name='WorldObjects'>
<Data internationalize='@xp_warpgate_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_warpgate_label]' localtext='[@xp_warpgate_message]' Name='ObjectWarpgate' text='@xp_warpgate_message'/>
<Data internationalize='@xp_warpgate_small_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_warpgate_small_label]' localtext='[@xp_warpgate_small_message]' Name='ObjectWarpgateSmall' text='@xp_warpgate_small_message'/>
<Data internationalize='@xp_monolith_amerish_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_monolith_amerish_label]' localtext='[@xp_monolith_amerish_message]' Name='ObjectMonolithAmerish' text='@xp_monolith_amerish_message'/>
<Data internationalize='@xp_monolith_ceryshen_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_monolith_ceryshen_label]' localtext='[@xp_monolith_ceryshen_message]' Name='ObjectMonolithCeryshen' text='@xp_monolith_ceryshen_message'/>
<Data internationalize='@xp_monolith_cyssor_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_monolith_cyssor_label]' localtext='[@xp_monolith_cyssor_message]' Name='ObjectMonolithCyssor' text='@xp_monolith_cyssor_message'/>
<Data internationalize='@xp_monolith_esamir_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_monolith_esamir_label]' localtext='[@xp_monolith_esamir_message]' Name='ObjectMonolithEsamir' text='@xp_monolith_esamir_message'/>
<Data internationalize='@xp_monolith_forseral_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_monolith_forseral_label]' localtext='[@xp_monolith_forseral_message]' Name='ObjectMonolithForseral' text='@xp_monolith_forseral_message'/>
<Data internationalize='@xp_monolith_hossin_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_monolith_hossin_label]' localtext='[@xp_monolith_hossin_message]' Name='ObjectMonolithHossin' text='@xp_monolith_hossin_message'/>
<Data internationalize='@xp_monolith_ishundar_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_monolith_ishundar_label]' localtext='[@xp_monolith_ishundar_message]' Name='ObjectMonolithIshundar' text='@xp_monolith_ishundar_message'/>
<Data internationalize='@xp_monolith_searhus_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_monolith_searhus_label]' localtext='[@xp_monolith_searhus_message]' Name='ObjectMonolithSearhus' text='@xp_monolith_searhus_message'/>
<Data internationalize='@xp_monolith_solsar_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_monolith_solsar_label]' localtext='[@xp_monolith_solsar_message]' Name='ObjectMonolithSolsar' text='@xp_monolith_solsar_message'/>
<Data internationalize='@xp_vanu_module_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_vanu_module_label]' localtext='[@xp_vanu_module_message]' Name='ObjectVanuModule' text='@xp_vanu_module_message'/>
<Data internationalize='@xp_ancient_turret_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_ancient_turret_label]' localtext='[@xp_ancient_turret_message]' Name='ObjectAncientTurret' text='@xp_ancient_turret_message'/>
<Data internationalize='@xp_damage_crystal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_damage_crystal_label]' localtext='[@xp_damage_crystal_message]' Name='ObjectDamageCrystal' text='@xp_damage_crystal_message'/>
<Data internationalize='@xp_energy_crystal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_energy_crystal_label]' localtext='[@xp_energy_crystal_message]' Name='ObjectEnergyCrystal' text='@xp_energy_crystal_message'/>
<Data internationalize='@xp_health_crystal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_health_crystal_label]' localtext='[@xp_health_crystal_message]' Name='ObjectHealthCrystal' text='@xp_health_crystal_message'/>
<Data internationalize='@xp_repair_crystal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_repair_crystal_label]' localtext='[@xp_repair_crystal_message]' Name='ObjectRepairCrystal' text='@xp_repair_crystal_message'/>
<Data internationalize='@xp_vehicle_crystal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_vehicle_crystal_label]' localtext='[@xp_vehicle_crystal_message]' Name='ObjectVehicleCrystal' text='@xp_vehicle_crystal_message'/>
</DataSource>
<DataSource Name='ExperienceHeading'>
<Data internationalize='@HelpExperience' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpExperience]' Name='Experience'/>
</DataSource>
<DataSource Name='Experience'>
<Data internationalize='@HelpBattleExperience' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='BattleExperience'/>
<Data internationalize='@HelpCommandExperience' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='CommandExperience'/>
<Data internationalize='@HelpSupportExperience' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='SupportExperience'/>
</DataSource>
<DataSource Name='SquadHeading'>
<Data internationalize='@HelpSquads' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpSquads]' Name='Squads'/>
</DataSource>
<DataSource Name='Squad'>
<Data internationalize='@HelpSquadJoin' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='SquadJoin'/>
<Data internationalize='@HelpSquadCreate' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='SquadCreate'/>
<Data internationalize='@HelpSquadLeave' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='SquadLeave'/>
<Data internationalize='@HelpSquadCommands' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='SquadCommands'/>
</DataSource>
<DataSource Name='ManageSquad'>
<Data internationalize='@HelpSquadManage' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='SquadManage'/>
</DataSource>
<DataSource Name='ManageSquadItems'>
<Data internationalize='@HelpSquadDefinitionEditAccept' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditAccept]' Name='SquadDefinitionEditAccept'/>
<Data internationalize='@HelpSquadDefinitionEditApprove' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditApprove]' Name='SquadDefinitionEditApprove'/>
<Data internationalize='@HelpSquadDefinitionEditAssign' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditAssign]' Name='SquadDefinitionEditAssign'/>
<Data internationalize='@HelpSquadDefinitionEditCertifications' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditCertifications]' Name='SquadDefinitionEditCertifications'/>
<Data internationalize='@HelpSquadDefinitionEditCertificationRequirements' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditCertificationRequirements]' Name='SquadDefinitionEditCertificationRequirements'/>
<Data internationalize='@HelpSquadDefinitionEditDeny' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditDeny]' Name='SquadDefinitionEditDeny'/>
<Data internationalize='@HelpSquadDefinitionEditDetails' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditDetails]' Name='SquadDefinitionEditDetails'/>
<Data internationalize='@HelpSquadDefinitionEditFindLFS' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditFindLFS]' Name='SquadDefinitionEditFindLFS'/>
<Data internationalize='@HelpSquadDefinitionEditInvite' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditInvite]' Name='SquadDefinitionEditInvite'/>
<Data internationalize='@HelpSquadDefinitionEditLocation' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditLocation]' Name='SquadDefinitionEditLocation'/>
<Data internationalize='@HelpSquadDefinitionEditListSquad' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditListSquad]' Name='SquadDefinitionEditListSquad'/>
<Data internationalize='@HelpSquadDefinitionEditOptions' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditOptions]' Name='SquadDefinitionEditOptions'/>
<Data internationalize='@HelpSquadDefinitionEditRemove' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditRemove]' Name='SquadDefinitionEditRemove'/>
<Data internationalize='@HelpSquadDefinitionEditRole' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditRole]' Name='SquadDefinitionEditRole'/>
<Data internationalize='@HelpSquadDefinitionEditResetAll' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditResetAll]' Name='SquadDefinitionEditResetAll'/>
<Data internationalize='@HelpSquadDefinitionEditSelect' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditSelect]' Name='SquadDefinitionEditSelect'/>
<Data internationalize='@HelpSquadDefinitionEditStopListingSquad' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditStopListingSquad]' Name='SquadDefinitionEditStopListingSquad'/>
<Data internationalize='@HelpSquadDefinitionEditSubmit' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditSubmit]' Name='SquadDefinitionEditSubmit'/>
<Data internationalize='@HelpSquadDefinitionEditAddRequirement' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditAddRequirement]' Name='SquadDefinitionEditAddRequirement'/>
<Data internationalize='@HelpSquadDefinitionEditRemoveRequirement' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpSquadDefinitionEditRemoveRequirement]' Name='SquadDefinitionEditRemoveRequirement'/>
</DataSource>
<DataSource Name='FindSquad'>
<Data internationalize='@HelpFindSquad' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpFindSquad]' Name='FindSquad'/>
</DataSource>
<DataSource Name='FindSquadItems'>
<Data internationalize='@HelpFindSquadAddCertification' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpFindSquadAddCertification]'/>
<Data internationalize='@HelpFindSquadBackToSquadList' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpFindSquadBackToSquadList]'/>
<Data internationalize='@HelpFindSquadCertificationCriteria' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpFindSquadCertificationCriteria]'/>
<Data internationalize='@HelpFindSquadCertifications' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpFindSquadCertifications]'/>
<Data internationalize='@HelpFindSquadDetails' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpFindSquadDetails]'/>
<Data internationalize='@HelpFindSquadJoin' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpFindSquadJoin]'/>
<Data internationalize='@HelpFindSquadLocation' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpFindSquadLocation]'/>
<Data internationalize='@HelpFindSquadRemoveCertification' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpFindSquadRemoveCertification]'/>
<Data internationalize='@HelpFindSquadRequest' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpFindSquadRequest]'/>
<Data internationalize='@HelpFindSquadRole' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpFindSquadRole]'/>
<Data internationalize='@HelpFindSquadSearch' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpFindSquadSearch]'/>
<Data internationalize='@HelpFindSquadSpecifiedCertifications' isexpanded='false' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpFindSquadSpecifiedCertifications]'/>
</DataSource>
<DataSource Name='SquadFavorites'>
<Data internationalize='@HelpSquadFavorites' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpSquadFavorites]'/>
</DataSource>
<DataSource Name='SquadHomeBaseHeading'>
<Data internationalize='@HelpSquadHomeBase' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpSquadHomeBase]' Name='SquadHomeBase'/>
</DataSource>
<DataSource Name='SquadHomeBase'>
<Data internationalize='@HelpSquadHomeBaseSquadLeaders' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpSquadHomeBaseSquadLeaders]' Name='SquadHomeBaseSquadLeaders'/>
<Data internationalize='@HelpSquadHomeBaseSquadMembers' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpSquadHomeBaseSquadMembers]' Name='SquadHomeBaseSquadMembers'/>
<Data internationalize='@HelpSquadHomeBasePlatoonLeaders' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpSquadHomeBasePlatoonLeaders]' Name='SquadHomeBasePlatoonLeaders'/>
</DataSource>
<DataSource Name='PlatoonHeading'>
<Data internationalize='@HelpPlatoon' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpPlatoon]' Name='Platoons'/>
</DataSource>
<DataSource Name='Platoons'>
<Data internationalize='@HelpPlatoonJoin' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='PlatoonJoin'/>
<Data internationalize='@HelpPlatoonCreate' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='PlatoonCreate'/>
<Data internationalize='@HelpPlatoonLeave' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='PlatoonLeave'/>
</DataSource>
<DataSource Name='OutfitHeading'>
<Data internationalize='@HelpOutfits' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpOutfits]' Name='Outfits'/>
</DataSource>
<DataSource Name='Outfit'>
<Data internationalize='@HelpOutfitJoin' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='OutfitJoin'/>
<Data internationalize='@HelpOutfitCreate' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='OutfitCreate'/>
<Data internationalize='@HelpOutfitLeave' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='OutfitLeave'/>
</DataSource>
<DataSource Name='SupportHeading'>
<Data internationalize='@HelpSupport' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpSupport]' Name='Support'/>
</DataSource>
<DataSource Name='Support'>
<Data internationalize='@HelpHUDBugReport' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDBugReport]' Name='HUDBugReport'/>
<Data internationalize='@HelpHUDCustomerService' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDCustomerService]' Name='HUDCustomerService'/>
<Data internationalize='@HelpSupportTechnical' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpSupportTechnical]' Name='SupportTechnical'/>
<Data internationalize='@HelpSupportWeb' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpSupportWeb]' Name='SupportWeb'/>
</DataSource>
</DataSourceContainer>
<DataSource Name='HelpData'/>
<Text AbsorbsInput='false' Font='/Fonts.ChatFont' LocalText='Bob\\nTwo' Location='255,5' Name='TopicText' PackSize='absolute,absolute' PackSizeProp='0268/0001,0005/0001' ScrollExtent='272,373' Size='272,373'>Bob\\nTwo</Text>
<Scrollbar Control='TopicText' Location='531,5' Name='TopicScroll' PackLocation='right,top' PackLocationProp='-009/0001,0005/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0005/0001' ScrollExtent='9,373' Size='9,373' Style='/ScrollBars.vertical.style'/>
</Page>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Color='#385E61' Location='25,58' Name='TabBorder' PackSize='absolute,absolute' PackSizeProp='0050/0001,0090/0001' RStyleDefault='/WindowPanes.TabBorder.style' ScrollExtent='550,390' Size='550,390'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,15' Name='_Background' PackSize='1,absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='600,463' Size='600,463' Stretch='false'/>
</Page>
