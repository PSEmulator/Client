<Page Name='SelectServer' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = false' PackLocation='Center,Center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Button Enabled='false' LocalTooltip='[@SelectServerConnectButtonTooltip]' Location='898,733' Name='BackButton' ScrollExtent='43,15' Size='43,15' Style='/Buttons.ShellBack.style' Tooltip='@SelectServerConnectButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='17,7' Name='HelpButton' PackLocation='right,top' PackLocationProp='-1007/0001,0007/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button IsDefaultButton='true' LocalTooltip='[@SelectServerConnectButtonTooltip]' Location='965,733' Name='Connect' ScrollExtent='41,15' Size='41,15' Style='/Buttons.ShellForward.style' Tooltip='@SelectServerConnectButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@SelectServerOptionsButtonTooltip]' Location='808,734' Name='Options' ScrollExtent='65,18' Size='65,18' Style='/Buttons.ShellOptions.style' Tooltip='@SelectServerOptionsButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button IsCancelButton='true' LocalTooltip='[@SelectServerQuitButtonTooltip]' Location='968,11' Name='Quit' ScrollExtent='24,23' Size='24,23' Style='/Buttons.ShellClose.style' Tooltip='@SelectServerQuitButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Page Location='55,78' Name='ScrollingTextPage' ScrollExtent='911,29' Size='911,29'>
<Text Font='/Fonts.HudFont3' LocalText='[@BannerMessage]' Location='6,0' Name='Text' ScrollExtent='898,29' Size='898,29' TextAlignmentVertical='Center'>@BannerMessage</Text>
</Page>
<Page Location='56,123' Name='ServerListPage' ScrollExtent='916,311' Size='916,311'>
<Button LocalText='[@ServerNameHeading]' LocalTooltip='[@SelectServerServerNameHeadingTooltip]' Location='6,3' Name='ServerNameHeading' ScrollExtent='200,30' Size='200,30' Style='/Buttons.ServerSelectHeading.style' Tooltip='@SelectServerServerNameHeadingTooltip' TooltipStyle='/Tooltips.Default'>@ServerNameHeading</Button>
<Button LocalText='[@PlayerCount]' LocalTooltip='[@SelectServerPlayerCountHeadingTooltip]' Location='216,3' Name='PlayerCountHeading' ScrollExtent='120,30' Size='120,30' Style='/Buttons.ServerSelectHeading.style' Tooltip='@SelectServerPlayerCountHeadingTooltip' TooltipStyle='/Tooltips.Default'>@PlayerCount</Button>
<Button LocalText='[@ServerStatus]' LocalTooltip='[@SelectServerServerStatusHeadingTooltip]' Location='346,3' Name='ServerStatusHeading' ScrollExtent='120,30' Size='120,30' Style='/Buttons.ServerSelectHeading.style' Tooltip='@SelectServerServerStatusHeadingTooltip' TooltipStyle='/Tooltips.Default'>@ServerStatus</Button>
<Button LocalText='[@ServerType]' LocalTooltip='[@SelectServerServerTypeHeadingTooltip]' Location='476,3' Name='ServerTypeHeading' ScrollExtent='120,30' Size='120,30' Style='/Buttons.ServerSelectHeading.style' Tooltip='@SelectServerServerTypeHeadingTooltip' TooltipStyle='/Tooltips.Default'>@ServerType</Button>
<Button LocalText='[@ServerPing]' LocalTooltip='[@SelectServerServerPingHeadingTooltip]' Location='606,3' Name='ServerPingHeading' ScrollExtent='120,30' Size='120,30' Style='/Buttons.ServerSelectHeading.style' Tooltip='@SelectServerServerPingHeadingTooltip' TooltipStyle='/Tooltips.Default'>@ServerPing</Button>
<Button LocalText='[@ServerNeed]' LocalTooltip='[@SelectServerNeedHeadingTooltip]' Location='736,3' Name='ServerNeedHeading' ScrollExtent='125,30' Size='125,30' Style='/Buttons.ServerSelectHeading.style' Tooltip='@SelectServerNeedHeadingTooltip' TooltipStyle='/Tooltips.Default'>@ServerNeed</Button>
<Listbox DataSource='/DataSources.ServerList' LocalTooltip='[@SelectServerServerListTooltip]' Location='7,37' Name='ServerList' RowTemplate='ServerListTemplate' ScrollExtent='882,271' Size='882,271' Style='/Listboxes.EmbeddedListbox16.style' Tooltip='@SelectServerServerListTooltip' TooltipStyle='/Tooltips.Default'/>
<Scrollbar Control='ServerList' Location='894,37' Name='Scrollbar' ScrollExtent='10,271' Size='10,271' Style='/ScrollBars.vertical.style'/>
<Template Name='ServerListTemplate' Size='882,22'>\<text font = \'/Fonts.HudFont3\' location = \'6,2\' size = \'200,18\' textalignment = \'left\'\>
$Name$
\</text\>
\<text font = \'/Fonts.HudFont3\' location = \'216,2\' size = \'120,18\' textalignment = \'left\'\>
$Num$
\</text\>
\<text font = \'/Fonts.HudFont3\' location = \'346,2\' size = \'120,18\' textalignment = \'left\'\>
$Status$
\</text\>
\<text font = \'/Fonts.HudFont3\' location = \'476,2\' size = \'120,18\' textalignment = \'left\'\>
$Type$
\</text\>
\<text font = \'/Fonts.HudFont3\' location = \'606,2\' size = \'120,18\' textalignment = \'left\'\>
$Ping$
\</text\>
\<text font = \'/Fonts.HudFont3\' location = \'736,2\' size = \'120,18\' textalignment = \'left\'\>
$Need$
\</text\></Template>
<Text Font='/Fonts.DefaultFont' GetsInput='false' LocalText='[@TotalPlayersOnlineHeading]' Location='5,0' Name='TotalPlayersOnlineHeading' ScrollExtent='420,20' Size='420,20' TextAlignment='Right' Visible='false'>@TotalPlayersOnlineHeading</Text>
<Text Font='/Fonts.DefaultFont' GetsInput='false' LocalText='8888888' LocalTooltip='[@SelectServerTotalPlayersTooltip]' Location='430,0' Name='TotalPlayersOnline' ScrollExtent='120,20' Size='120,20' Tooltip='@SelectServerTotalPlayersTooltip' TooltipStyle='/Tooltips.Default' Visible='false'>8888888</Text>
</Page>
<Page body.scrolllocation='0,0' body.text='SelectedItem.Body' Location='55,468' Name='NewsPage' ScrollExtent='911,225' Size='911,225' title.text='SelectedItem.Name'>
<Image BackgroundOpacity='1.000' Location='6,25' Name='AccessSeparator' RStyleDefault='/Listboxes.ListboxContentHeader.style' ScrollExtent='295,8' Size='295,8'/>
<Image BackgroundOpacity='1.000' Location='325,25' Name='AccessSeparator' RStyleDefault='/Listboxes.ListboxContentHeader.style' ScrollExtent='570,8' Size='570,8'/>
<Button BackgroundOpacity='0.000' LocalText='[@NewsTopic]' LocalTooltip='[@SelectServerNewsTopicHeadingTooltip]' Location='7,9' Name='NewsTopicHeading' ScrollExtent='174,22' Size='174,22' Style='/Buttons.ServerSelectNewsTopic.style' Tooltip='@SelectServerNewsTopicHeadingTooltip' TooltipStyle='/Tooltips.Default'>@NewsTopic</Button>
<Button BackgroundOpacity='0.000' LocalText='[@NewsDate]' LocalTooltip='[@SelectServerNewsDateHeadingTooltip]' Location='181,9' Name='NewsDateHeading' ScrollExtent='120,22' Size='120,22' Style='/Buttons.ServerSelectNewsDate.style' Tooltip='@SelectServerNewsDateHeadingTooltip' TooltipStyle='/Tooltips.Default'>@NewsDate</Button>
<Listbox DataSource='/DataSources.News' LocalTooltip='[@SelectServerNewsListTooltip]' Location='7,34' Name='NewsSelection' ondatasourcechanged='SelectedItemIndex = 1
Parent.Title.Text = SelectedItem.Name
Parent.Body.Text = SelectedItem.Body
Parent.Body.ScrollLocation = 0,0' OnSelect='Parent.Title.Text = SelectedItem.Name
Parent.Body.Text = SelectedItem.Body
Parent.Body.ScrollLocation = 0,0' RowTemplate='NewsTemplate' ScrollExtent='284,186' Size='284,186' Style='/Listboxes.EmbeddedListbox16.style' Tooltip='@SelectServerNewsListTooltip' TooltipStyle='/Tooltips.Default'/>
<Scrollbar Control='NewsSelection' Location='296,41' Name='NewsSelectionScrollbar' ScrollExtent='10,180' Size='10,180' Style='/ScrollBars.vertical.style'/>
<Text Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@NewsTextHeading]' LocalTooltip='[@SelectServerNewsTextHeadingTooltip]' Location='317,12' Name='NewsTextHeading' ScrollExtent='577,20' Size='577,20' TextAlignment='Center' Tooltip='@SelectServerNewsTextHeadingTooltip' TooltipStyle='/Tooltips.Default'>@NewsTextHeading</Text>
<Text Font='/Fonts.HudFont3' LocalText='Need to fill this with localized news text.' LocalTooltip='[@SelectServerNewsTextTooltip]' Location='326,37' Name='NewsText' ScrollExtent='568,184' Size='568,184' Tooltip='@SelectServerNewsTextTooltip' TooltipStyle='/Tooltips.Default'>Need to fill this with localized news text.</Text>
<Scrollbar Control='NewsText' Location='897,37' Name='NewsTextScrollbar' ScrollExtent='10,184' Size='10,184' Style='/ScrollBars.vertical.style'/>
<Template Name='NewsTemplate' Size='284,22'>\<text font = \'/Fonts.HudFont3\' location = \'2,2\' size = \'160,18\'\>
$Name$
\</text\>
\<text font = \'/Fonts.HudFont3\' location = \'175,2\' size = \'105,18\' textalignment = \'center\'\>
$Date$
\</text\></Template>
</Page>
<Image Name='LoginShellBackground' ScrollExtent='1024,768' Size='1024,768' Stretch='false' Style='/Plates.ShellServerSelectBackground' visualeditlock='true'/>
</Page>
<Page Name='SelectEmpire' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = false' PackLocation='Center,Center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='1024,768' Size='1024,768' Visible='false' visualeditlock='true'>
<Button IsCancelButton='true' LocalTooltip='[@SelectEmpireBackButtonTooltip]' Location='898,733' Name='Back' ScrollExtent='43,15' Size='43,15' Style='/Buttons.ShellBack.style' Tooltip='@SelectEmpireBackButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@SelectEmpireQuitButtonTooltip]' Location='968,11' Name='Quit' ScrollExtent='23,24' Size='23,24' Style='/Buttons.ShellClose.style' Tooltip='@SelectEmpireQuitButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@SelectEmpireOptionsButtonTooltip]' Location='808,733' Name='Options' ScrollExtent='65,18' Size='65,18' Style='/Buttons.ShellOptions.style' Tooltip='@SelectEmpireOptionsButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button IsDefaultButton='true' LocalTooltip='[@SelectEmpireEnterButtonTooltip]' Location='965,733' Name='Enter' ScrollExtent='41,15' Size='41,15' Style='/Buttons.ShellForward.style' Tooltip='@SelectEmpireEnterButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='17,7' Name='HelpButton' PackLocation='right,top' PackLocationProp='-1007/0001,0007/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<ImageStyle Name='BorderStyle'>
<ImageFrame SourceRect='0,0,561,473'>
<ImageFragment Source='ui_shell_empire_buttons_border_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_empire_buttons_border_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='512,0' Source='ui_shell_empire_buttons_border_02' SourceRect='0,0,49,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_empire_buttons_border_03' SourceRect='0,0,256,217'/>
<ImageFragment Offset='256,256' Source='ui_shell_empire_buttons_border_04' SourceRect='0,0,256,217'/>
<ImageFragment Offset='512,256' Source='ui_shell_empire_buttons_border_05' SourceRect='0,0,49,217'/>
</ImageFrame>
</ImageStyle>
<Image Location='63,136' Name='Border' ScrollExtent='561,473' Size='561,473' Stretch='false' Style='BorderStyle'/>
<OpacityEffector Name='RolloverEffector' Speed='2.000' TargetOpacity='1.000'/>
<OpacityEffector Name='RolloutEffector' Speed='1.000' TargetOpacity='0.750'/>
<ImageStyle Name='MiniTR'>
<ImageFrame Source='ui_shell_empire_mini_tr_00' SourceRect='0,0,25,32'/>
</ImageStyle>
<ImageStyle Name='MiniNC'>
<ImageFrame Source='ui_shell_empire_mini_nc_00' SourceRect='0,0,30,26'/>
</ImageStyle>
<ImageStyle Name='MiniVS'>
<ImageFrame Source='ui_shell_empire_mini_vs_00' SourceRect='0,0,28,30'/>
</ImageStyle>
<Page Location='659,70' Name='EmpireIncentives' ScrollExtent='297,190' Size='297,190'>
<Text Font='/Fonts.HudFont3' LocalText='[@EmpireIncentives_FrontEndTitle]' Location='0,-3' Name='Title' PackLocation='center,top' PackLocationProp='-148/0001,-003/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='297,58' Size='297,58' TextAlignment='Center' TextAlignmentVertical='Center'>@EmpireIncentives_FrontEndTitle</Text>
<Image AbsorbsInput='false' Location='155,65' Name='TR' PackLocation='right,top' PackLocationProp='-142/0001,0065/0001' ScrollExtent='32,32' Size='32,32' Style='MiniTR'/>
<Image AbsorbsInput='false' Location='205,65' Name='NC' PackLocation='right,top' PackLocationProp='-092/0001,0065/0001' ScrollExtent='32,32' Size='32,32' Style='MiniNC'/>
<Image AbsorbsInput='false' Location='255,65' Name='VS' PackLocation='right,top' PackLocationProp='-042/0001,0065/0001' ScrollExtent='32,32' Size='32,32' Style='MiniVS'/>
<Text Font='/Fonts.HudFont2' LocalText='[@EmpireIncentives_FrontEndXP]' Location='10,108' Name='IncentiveXP' PackSize='absolute,fixed' PackSizeProp='0157/0001,0002/0003' ScrollExtent='140,28' Size='140,19'>@EmpireIncentives_FrontEndXP</Text>
<Text Font='/Fonts.HudFont2' LocalText='-99%' Location='153,108' Name='XP_TR' PackLocation='right,top' PackLocationProp='-144/0001,0108/0001' ScrollExtent='36,19' Size='36,19' TextAlignment='Center'>-99%</Text>
<Text Font='/Fonts.HudFont2' LocalText='-99%' Location='203,108' Name='XP_NC' PackLocation='right,top' PackLocationProp='-094/0001,0108/0001' ScrollExtent='36,19' Size='36,19' TextAlignment='Center'>-99%</Text>
<Text Font='/Fonts.HudFont2' LocalText='-99%' Location='253,108' Name='XP_VS' PackLocation='right,top' PackLocationProp='-044/0001,0108/0001' ScrollExtent='36,19' Size='36,19' TextAlignment='Center'>-99%</Text>
<Text Font='/Fonts.HudFont2' LocalText='[@EmpireIncentives_FrontEndHP]' Location='10,148' Name='IncentiveHP' PackSize='absolute,fixed' PackSizeProp='0157/0001,0002/0003' ScrollExtent='140,28' Size='140,19'>@EmpireIncentives_FrontEndHP</Text>
<Text Font='/Fonts.HudFont2' LocalText='-99%' Location='153,148' Name='HP_TR' PackLocation='right,top' PackLocationProp='-144/0001,0148/0001' ScrollExtent='36,19' Size='36,19' TextAlignment='Center'>-99%</Text>
<Text Font='/Fonts.HudFont2' LocalText='-99%' Location='203,148' Name='HP_NC' PackLocation='right,top' PackLocationProp='-094/0001,0148/0001' ScrollExtent='36,19' Size='36,19' TextAlignment='Center'>-99%</Text>
<Text Font='/Fonts.HudFont2' LocalText='-99%' Location='253,148' Name='HP_VS' PackLocation='right,top' PackLocationProp='-044/0001,0148/0001' ScrollExtent='36,19' Size='36,19' TextAlignment='Center'>-99%</Text>
</Page>
<Scrollbar Control='EmpireText' Location='944,284' Name='Scrollbar' ScrollExtent='10,415' Size='10,415' Style='/ScrollBars.vertical.style'/>
<Text Font='/Fonts.HudFont2' LocalText='[@EmpireGeneralDescription]' Location='661,286' Name='EmpireText' PackLocation='center,center' PackLocationProp='0149/0001,-098/0001' ScrollExtent='278,414' Size='278,414'>@EmpireGeneralDescription</Text>
<Text Font='/Fonts.HudFont3' LocalText='[@selectempire]' Location='168,623' Name='SelectEmpireText' PackLocation='center,center' PackLocationProp='-344/0001,0239/0001' ScrollExtent='357,27' Size='357,27' TextAlignment='Center'>@selectempire</Text>
<Checkbox BackgroundOpacity='1.000' BoundaryPolygon='110.000,7.000,261.000,106.000,236.000,284.000,71.000,272.000,8.000,140.000,105.000,11.000' LocalTooltip='[@SelectEmpireE2Tooltip]' Location='64,302' Name='E1' OnHoverInEffector='RolloverEffector' OnHoverOutEffector='RolloutEffector' Opacity='0.750' ScrollExtent='276,307' Size='276,307' Style='/Buttons.ShellEmpireTR.style' Tooltip='@SelectEmpireE2Tooltip' TooltipStyle='/Tooltips.Default'></Checkbox>
<Checkbox BackgroundOpacity='1.000' BoundaryPolygon='97.000,3.000,241.000,1.000,330.000,155.000,168.000,259.000,9.000,155.000' LocalTooltip='[@SelectEmpireE1Tooltip]' Location='173,136' Name='E2' OnHoverInEffector='RolloverEffector' OnHoverOutEffector='RolloutEffector' Opacity='0.750' ScrollExtent='339,275' Size='339,275' Style='/Buttons.ShellEmpireNC.style' Tooltip='@SelectEmpireE1Tooltip' TooltipStyle='/Tooltips.Default'></Checkbox>
<Checkbox BackgroundOpacity='1.000' BoundaryPolygon='172.000,5.000,275.000,146.000,217.000,281.000,41.000,296.000,10.000,110.000' LocalTooltip='[@SelectEmpireE3Tooltip]' Location='338,297' Name='E3' OnHoverInEffector='RolloverEffector' OnHoverOutEffector='RolloutEffector' Opacity='0.750' ScrollExtent='286,311' Size='286,311' Style='/Buttons.ShellEmpireVS.style' Tooltip='@SelectEmpireE3Tooltip' TooltipStyle='/Tooltips.Default'></Checkbox>
<Image Name='LoginShellBackground' ScrollExtent='1024,768' Size='1024,768' Stretch='false' Style='/Plates.ShellEmpireSelectBackground'/>
</Page>
<Page Name='WorldCharacterManagement' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = false' PackLocation='Center,Center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Button LocalTooltip='[@WorldCharacterQuitButtonTooltip]' Location='968,11' Name='Quit' ScrollExtent='24,24' Size='24,24' Style='/Buttons.ShellClose.style' Tooltip='@WorldCharacterQuitButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button IsCancelButton='true' LocalTooltip='[@WorldCharacterBackButtonTooltip]' Location='898,733' Name='Back' ScrollExtent='43,15' Size='43,15' Style='/Buttons.ShellBack.style' Tooltip='@WorldCharacterBackButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@WorldCharacterOptionsButtonTooltip]' Location='808,733' Name='Options' ScrollExtent='65,18' Size='65,18' Style='/Buttons.ShellOptions.style' Tooltip='@WorldCharacterOptionsButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button IsDefaultButton='true' LocalTooltip='[@WorldCharacterEnterButtonTooltip]' Location='965,733' Name='Enter' ScrollExtent='41,15' Size='41,15' Style='/Buttons.ShellForward.style' Tooltip='@WorldCharacterEnterButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@WorldCharacterDeleteButtonTooltip]' Location='223,437' Name='Delete' ScrollExtent='64,64' Size='64,64' Style='/Buttons.CharacterDelete.style' Tooltip='@WorldCharacterDeleteButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='17,7' Name='HelpButton' PackLocation='right,top' PackLocationProp='-1007/0001,0007/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<ImageStyle Name='MiniNC'>
<ImageFrame Source='ui_shell_empire_mini_nc_00' SourceRect='0,0,30,26'/>
</ImageStyle>
<ImageStyle Name='MiniTR'>
<ImageFrame Source='ui_shell_empire_mini_tr_00' SourceRect='0,0,25,32'/>
</ImageStyle>
<ImageStyle Name='MiniVS'>
<ImageFrame Source='ui_shell_empire_mini_vs_00' SourceRect='0,0,28,30'/>
</ImageStyle>
<ImageStyle Name='TrainingSHStyle'>
<ImageFrame SourceRect='0,0,417,599'>
<ImageFragment Source='ui_shell_charselect_map14_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_map14_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_map14_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_map14_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_map14_04' SourceRect='0,0,256,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_map14_05' SourceRect='0,0,256,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='TrainingDRStyle'>
<ImageFrame SourceRect='0,0,417,599'>
<ImageFragment Source='ui_shell_charselect_map16_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_map16_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_map16_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_map16_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_map16_04' SourceRect='0,0,256,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_map16_05' SourceRect='0,0,256,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='TrainingCOStyle'>
<ImageFrame SourceRect='0,0,417,599'>
<ImageFragment Source='ui_shell_charselect_map15_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_map15_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_map15_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_map15_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_map15_04' SourceRect='0,0,256,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_map15_05' SourceRect='0,0,256,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map01Style'>
<ImageFrame SourceRect='0,0,417,599'>
<ImageFragment Source='ui_shell_charselect_charbg_map01_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_charbg_map01_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_charbg_map01_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_charbg_map01_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_charbg_map01_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_charbg_map01_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_charbg_map01_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_charbg_map01_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map02Style'>
<ImageFrame SourceRect='0,0,417,599'>
<ImageFragment Source='ui_shell_charselect_charbg_map02_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_charbg_map02_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_charbg_map02_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_charbg_map02_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_charbg_map02_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_charbg_map02_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_charbg_map02_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_charbg_map02_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map03Style'>
<ImageFrame SourceRect='0,0,417,599'>
<ImageFragment Source='ui_shell_charselect_charbg_map03_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_charbg_map03_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_charbg_map03_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_charbg_map03_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_charbg_map03_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_charbg_map03_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_charbg_map03_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_charbg_map03_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map04Style'>
<ImageFrame SourceRect='0,0,417,599'>
<ImageFragment Source='ui_shell_charselect_charbg_map04_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_charbg_map04_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_charbg_map04_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_charbg_map04_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_charbg_map04_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_charbg_map04_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_charbg_map04_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_charbg_map04_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map05Style'>
<ImageFrame SourceRect='0,0,417,599'>
<ImageFragment Source='ui_shell_charselect_charbg_map05_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_charbg_map05_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_charbg_map05_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_charbg_map05_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_charbg_map05_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_charbg_map05_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_charbg_map05_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_charbg_map05_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map06Style'>
<ImageFrame SourceRect='0,0,417,599'>
<ImageFragment Source='ui_shell_charselect_charbg_map06_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_charbg_map06_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_charbg_map06_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_charbg_map06_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_charbg_map06_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_charbg_map06_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_charbg_map06_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_charbg_map06_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map07Style'>
<ImageFrame>
<ImageFragment Source='ui_shell_charselect_charbg_map07_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_charbg_map07_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_charbg_map07_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_charbg_map07_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_charbg_map07_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_charbg_map07_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_charbg_map07_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_charbg_map07_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map08Style'>
<ImageFrame SourceRect='0,0,417,599'>
<ImageFragment Source='ui_shell_charselect_charbg_map08_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_charbg_map08_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_charbg_map08_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_charbg_map08_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_charbg_map08_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_charbg_map08_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_charbg_map08_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_charbg_map08_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map09Style'>
<ImageFrame SourceRect='0,0,417,599'>
<ImageFragment Source='ui_shell_charselect_charbg_map09_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_charbg_map09_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_charbg_map09_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_charbg_map09_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_charbg_map09_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_charbg_map09_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_charbg_map09_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_charbg_map09_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map10Style'>
<ImageFrame SourceRect='0,0,417,599'>
<ImageFragment Source='ui_shell_charselect_charbg_map10_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_charbg_map10_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_charbg_map10_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_charbg_map10_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_charbg_map10_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_charbg_map10_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_charbg_map10_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_charbg_map10_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map11Style'>
<ImageFrame>
<ImageFragment Source='ui_shell_charselect_map11_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_map11_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_map11_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_map11_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_map11_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_map11_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_map11_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_map11_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map12Style'>
<ImageFrame>
<ImageFragment Source='ui_shell_charselect_map12_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_map12_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_map12_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_map12_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_map12_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_map12_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_map12_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_map12_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map13Style'>
<ImageFrame>
<ImageFragment Source='ui_shell_charselect_map13_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_map13_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_map13_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_map13_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_map13_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_map13_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_map13_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_map13_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map14Style'>
<ImageFrame>
<ImageFragment Source='ui_shell_charselect_map14_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_map14_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_map14_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_map14_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_map14_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_map14_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_map14_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_map14_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map15Style'>
<ImageFrame>
<ImageFragment Source='ui_shell_charselect_map15_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_map15_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_map15_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_map15_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_map15_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_map15_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_map15_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_map15_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Map16Style'>
<ImageFrame>
<ImageFragment Source='ui_shell_charselect_map16_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_charselect_map16_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_charselect_map16_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_charselect_map16_03' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,512' Source='ui_shell_charselect_map16_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,512' Source='ui_shell_charselect_map16_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,512' Source='ui_shell_charselect_map16_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,512' Source='ui_shell_charselect_map16_07' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<Text Font='/Fonts.HudFont3' LocalText='[@CharacterBattleRank]' Location='524,646' Name='BattleRankTitle' ScrollExtent='128,40' Size='128,40' TextAlignment='Right' TextAlignmentVertical='Center'>@CharacterBattleRank</Text>
<Text Font='/Fonts.HudFont3' LocalText='[@CharacterCommandRank]' Location='749,647' Name='CommandRankTitle' ScrollExtent='128,40' Size='128,40' TextAlignment='Right' TextAlignmentVertical='Center'>@CharacterCommandRank</Text>
<Text Font='/Fonts.HudFont3' LocalText='6' Location='659,647' Name='BattleRank' ScrollExtent='48,40' Size='48,40' TextAlignment='Center' TextAlignmentVertical='Center'>6</Text>
<Text Font='/Fonts.HudFont3' LocalText='2' Location='882,646' Name='CommandRank' ScrollExtent='44,40' Size='44,40' TextAlignment='Center' TextAlignmentVertical='Center'>2</Text>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='512,93' Name='CharacterView' ScrollExtent='418,598' Size='418,598'/>
<Image Location='543,111' Name='TRBackground' ScrollExtent='359,476' Size='359,476' Style='/Plates.ShellTRBackground' Visible='false'/>
<Image Location='523,109' Name='VSBackground' ScrollExtent='389,407' Size='389,407' Style='/Plates.ShellVSBackground' Visible='false'/>
<Image Location='527,101' Name='NCBackground' ScrollExtent='393,342' Size='393,342' Style='/Plates.ShellNCBackground' Visible='false'/>
<Image Location='513,90' Name='MapImage' ScrollExtent='417,599' Size='417,599' Style='Map11Style' Visible='false'/>
<Button AbsorbsInput='false' BackgroundOpacity='0.000' LocalText='Silverfrost
Location: Not implemented' LocalTooltip='[@WorldCharacterCharacter1Button]' Location='63,89' Name='Character1' RStyleDefault='/Buttons.CharacterSelectBackground.remptychecked ' ScrollExtent='385,88' Size='385,88' Style='/Buttons.CharacterSelect.style' TextMaxLines='3' Tooltip='@WorldCharacterCharacter1Button' TooltipStyle='/Tooltips.Default'>Silverfrost
Location: Not implemented</Button>
<Button AbsorbsInput='false' BackgroundOpacity='0.000' LocalText='Silverfrost
Location: Not implemented' LocalTooltip='[@WorldCharacterCharacter2ButtonTooltip]' Location='63,177' Name='Character2' ScrollExtent='385,88' Size='385,88' Style='/Buttons.CharacterSelect.style' TextMaxLines='3' Tooltip='@WorldCharacterCharacter2ButtonTooltip' TooltipStyle='/Tooltips.Default'>Silverfrost
Location: Not implemented</Button>
<Button AbsorbsInput='false' BackgroundOpacity='0.000' LocalText='Silverfrost
Location: Not implemented' LocalTooltip='[@WorldCharacterCharacter3ButtonTooltip]' Location='63,265' Name='Character3' ScrollExtent='385,88' Size='385,88' Style='/Buttons.CharacterSelect.style' TextMaxLines='3' Tooltip='@WorldCharacterCharacter3ButtonTooltip' TooltipStyle='/Tooltips.Default'>Silverfrost
Location: Not implemented</Button>
<Button AbsorbsInput='false' BackgroundOpacity='0.000' LocalText='Silverfrost
Location: Not implemented' LocalTooltip='[@WorldCharacterCharacter4ButtonTooltip]' Location='63,353' Name='Character4' ScrollExtent='385,88' Size='385,88' Style='/Buttons.CharacterSelect.style' TextMaxLines='3' Tooltip='@WorldCharacterCharacter4ButtonTooltip' TooltipStyle='/Tooltips.Default'>Silverfrost
Location: Not implemented</Button>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='63,89' Name='Character1Highlight' ScrollExtent='385,88' Size='385,88' Style='/Buttons.CharacterSelectBackground.style'></Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='63,177' Name='Character2Highlight' ScrollExtent='385,88' Size='385,88' Style='/Buttons.CharacterSelectBackground.style'></Checkbox>
<Checkbox BackgroundOpacity='1.000' Enabled='false' Location='63,265' Name='Character3Highlight' ScrollExtent='385,88' Size='385,88' Style='/Buttons.CharacterSelectBackground.style'></Checkbox>
<Checkbox BackgroundOpacity='1.000' Enabled='false' Location='63,353' Name='Character4Highlight' ScrollExtent='385,88' Size='385,88' Style='/Buttons.CharacterSelectBackground.style'></Checkbox>
<Page Location='107,504' Name='EmpireIncentives' ScrollExtent='297,190' Size='297,190'>
<Text Font='/Fonts.HudFont3' LocalText='[@EmpireIncentives_FrontEndTitle]' Location='0,-3' Name='Title' PackLocation='center,top' PackLocationProp='-148/0001,-003/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='297,58' Size='297,58' TextAlignment='Center' TextAlignmentVertical='Center'>@EmpireIncentives_FrontEndTitle</Text>
<Image AbsorbsInput='false' Location='155,65' Name='TR' PackLocation='right,top' PackLocationProp='-142/0001,0065/0001' ScrollExtent='32,32' Size='32,32' Style='MiniTR'/>
<Image AbsorbsInput='false' Location='205,65' Name='NC' PackLocation='right,top' PackLocationProp='-092/0001,0065/0001' ScrollExtent='32,32' Size='32,32' Style='MiniNC'/>
<Image AbsorbsInput='false' Location='255,65' Name='VS' PackLocation='right,top' PackLocationProp='-042/0001,0065/0001' ScrollExtent='32,32' Size='32,32' Style='MiniVS'/>
<Text Font='/Fonts.HudFont2' LocalText='[@EmpireIncentives_FrontEndXP]' Location='10,108' Name='IncentiveXP' PackSize='absolute,fixed' PackSizeProp='0157/0001,0002/0003' ScrollExtent='140,28' Size='140,19'>@EmpireIncentives_FrontEndXP</Text>
<Text Font='/Fonts.HudFont2' LocalText='-99%' Location='153,108' Name='XP_TR' PackLocation='right,top' PackLocationProp='-144/0001,0108/0001' ScrollExtent='36,19' Size='36,19' TextAlignment='Center'>-99%</Text>
<Text Font='/Fonts.HudFont2' LocalText='-99%' Location='203,108' Name='XP_NC' PackLocation='right,top' PackLocationProp='-094/0001,0108/0001' ScrollExtent='36,19' Size='36,19' TextAlignment='Center'>-99%</Text>
<Text Font='/Fonts.HudFont2' LocalText='-99%' Location='253,108' Name='XP_VS' PackLocation='right,top' PackLocationProp='-044/0001,0108/0001' ScrollExtent='36,19' Size='36,19' TextAlignment='Center'>-99%</Text>
<Text Font='/Fonts.HudFont2' LocalText='[@EmpireIncentives_FrontEndHP]' Location='10,148' Name='IncentiveHP' PackSize='absolute,fixed' PackSizeProp='0157/0001,0002/0003' ScrollExtent='140,28' Size='140,19'>@EmpireIncentives_FrontEndHP</Text>
<Text Font='/Fonts.HudFont2' LocalText='-99%' Location='153,148' Name='HP_TR' PackLocation='right,top' PackLocationProp='-144/0001,0148/0001' ScrollExtent='36,19' Size='36,19' TextAlignment='Center'>-99%</Text>
<Text Font='/Fonts.HudFont2' LocalText='-99%' Location='203,148' Name='HP_NC' PackLocation='right,top' PackLocationProp='-094/0001,0148/0001' ScrollExtent='36,19' Size='36,19' TextAlignment='Center'>-99%</Text>
<Text Font='/Fonts.HudFont2' LocalText='-99%' Location='253,148' Name='HP_VS' PackLocation='right,top' PackLocationProp='-044/0001,0148/0001' ScrollExtent='36,19' Size='36,19' TextAlignment='Center'>-99%</Text>
</Page>
<Image Name='LoginShellBackground' ScrollExtent='1024,768' Size='1024,768' Stretch='false' Style='/Plates.ShellCharacterSelectBackground'/>
</Page>
<Page Name='InstantAction' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = false' PackLocation='Center,Center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Text Activated='true' Font='/Fonts.HudFont3' LocalText='Test' Location='513,92' Name='InstantActionInfoBox' Opacity='0.750' ScrollExtent='415,598' Size='415,598'>Test</Text>
<Button LocalTooltip='[@WorldCharacterQuitButtonTooltip]' Location='968,11' Name='Quit' ScrollExtent='24,24' Size='24,24' Style='/Buttons.ShellClose.style' Tooltip='@WorldCharacterQuitButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button IsCancelButton='true' LocalTooltip='[@WorldCharacterBackButtonTooltip]' Location='898,733' Name='Back' ScrollExtent='43,15' Size='43,15' Style='/Buttons.ShellBack.style' Tooltip='@WorldCharacterBackButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@WorldCharacterOptionsButtonTooltip]' Location='808,733' Name='Options' ScrollExtent='65,18' Size='65,18' Style='/Buttons.ShellOptions.style' Tooltip='@WorldCharacterOptionsButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button IsDefaultButton='true' LocalTooltip='[@WorldCharacterEnterButtonTooltip]' Location='965,733' Name='Enter' ScrollExtent='41,15' Size='41,15' Style='/Buttons.ShellForward.style' Tooltip='@WorldCharacterEnterButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='17,7' Name='HelpButton' PackLocation='right,top' PackLocationProp='-1007/0001,0007/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button AbsorbsInput='false' BackgroundOpacity='0.000' IsDefaultButton='true' LocalText='[@InstantActionSanctuaryButton]' LocalTooltip='[@InstantActionSanctuaryButtonToolTip]' Location='63,89' Name='SanctuaryButton' RStyleDefault='/Buttons.CharacterSelectBackground.remptychecked ' ScrollExtent='385,88' Size='385,88' Style='/Buttons.CharacterSelect.style' TextMaxLines='3' Tooltip='[@InstantActionSanctuaryButtonToolTip]' TooltipStyle='/Tooltips.Default'>@InstantActionSanctuaryButton</Button>
<Button AbsorbsInput='false' BackgroundOpacity='0.000' IsDefaultButton='true' LocalText='[@InstantActionHotSpotButton]' LocalTooltip='[@InstantActionHotSpotButtonToolTip]' Location='63,177' Name='HotSpotButton' ScrollExtent='385,88' Size='385,88' Style='/Buttons.CharacterSelect.style' TextMaxLines='3' Tooltip='[@InstantActionHotSpotButtonToolTip]' TooltipStyle='/Tooltips.Default'>@InstantActionHotSpotButton</Button>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='63,89' Name='SanctuaryButtonHighlight' ScrollExtent='385,88' Size='385,88' Style='/Buttons.CharacterSelectBackground.style'></Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='63,177' Name='HotSpotButtonHighlight' ScrollExtent='385,88' Size='385,88' Style='/Buttons.CharacterSelectBackground.style'></Checkbox>
<Image Name='LoginShellBackground' ScrollExtent='1024,768' Size='1024,768' Stretch='false' Style='/Plates.ShellCharacterSelectBackground'/>
</Page>
<Page Name='SelectEmpireOffline' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = false' PackLocation='Center,Center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='1024,768' Size='1024,768' Visible='false' visualeditlock='true'>
<Button IsCancelButton='true' LocalTooltip='[@SelectEmpireBackButtonTooltip]' Location='875,729' Name='Back' ScrollExtent='48,22' Size='48,22' Style='/Buttons.ShellBack.style' Tooltip='@SelectEmpireBackButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@SelectEmpireQuitButtonTooltip]' Location='968,11' Name='Quit' ScrollExtent='23,24' Size='23,24' Style='/Buttons.ShellClose.style' Tooltip='@SelectEmpireQuitButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@SelectEmpireOptionsButtonTooltip]' Location='811,725' Name='Options' ScrollExtent='31,31' Size='31,31' Style='/Buttons.ShellOptions.style' Tooltip='@SelectEmpireOptionsButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button IsDefaultButton='true' LocalTooltip='[@SelectEmpireEnterButtonTooltip]' Location='955,729' Name='Enter' ScrollExtent='48,22' Size='48,22' Style='/Buttons.ShellForward.style' Tooltip='@SelectEmpireEnterButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='17,7' Name='HelpButton' PackLocation='right,top' PackLocationProp='-1007/0001,0007/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<ImageStyle Name='BorderStyle'>
<ImageFrame SourceRect='0,0,561,473'>
<ImageFragment Source='ui_shell_empire_buttons_border_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_empire_buttons_border_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='512,0' Source='ui_shell_empire_buttons_border_02' SourceRect='0,0,49,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_empire_buttons_border_03' SourceRect='0,0,256,217'/>
<ImageFragment Offset='256,256' Source='ui_shell_empire_buttons_border_04' SourceRect='0,0,256,217'/>
<ImageFragment Offset='512,256' Source='ui_shell_empire_buttons_border_05' SourceRect='0,0,49,217'/>
</ImageFrame>
</ImageStyle>
<Image Location='63,136' Name='Border' ScrollExtent='561,473' Size='561,473' Stretch='false' Style='BorderStyle'/>
<OpacityEffector Name='RolloverEffector' Speed='2.000' TargetOpacity='1.000'/>
<OpacityEffector Name='RolloutEffector' Speed='1.000' TargetOpacity='0.750'/>
<ImageStyle Name='MiniTR'>
<ImageFrame Source='ui_shell_empire_mini_tr_00' SourceRect='0,0,25,32'/>
</ImageStyle>
<ImageStyle Name='MiniNC'>
<ImageFrame Source='ui_shell_empire_mini_nc_00' SourceRect='0,0,30,26'/>
</ImageStyle>
<ImageStyle Name='MiniVS'>
<ImageFrame Source='ui_shell_empire_mini_vs_00' SourceRect='0,0,28,30'/>
</ImageStyle>
<Scrollbar Control='EmpireText' Location='944,284' Name='Scrollbar' ScrollExtent='10,415' Size='10,415' Style='/ScrollBars.vertical.style'/>
<Text Font='/Fonts.HudFont2' LocalText='[@EmpireGeneralDescription]' Location='661,286' Name='EmpireText' PackLocation='center,center' PackLocationProp='0149/0001,-098/0001' ScrollExtent='278,414' Size='278,414'>@EmpireGeneralDescription</Text>
<Text Font='/Fonts.HudFont3' LocalText='[@selectempire]' Location='168,623' Name='SelectEmpireText' PackLocation='center,center' PackLocationProp='-344/0001,0239/0001' ScrollExtent='357,27' Size='357,27' TextAlignment='Center'>@selectempire</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' BoundaryPolygon='110.000,7.000,261.000,106.000,236.000,284.000,71.000,272.000,8.000,140.000,105.000,11.000' Checked='true' LocalTooltip='[@SelectEmpireE2Tooltip]' Location='64,302' Name='E1' OnHoverInEffector='RolloverEffector' OnHoverOutEffector='RolloutEffector' Opacity='0.750' ScrollExtent='276,307' Size='276,307' Style='/Buttons.ShellEmpireTR.style' Tooltip='@SelectEmpireE2Tooltip' TooltipStyle='/Tooltips.Default'></Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' BoundaryPolygon='97.000,3.000,241.000,1.000,330.000,155.000,168.000,259.000,9.000,155.000' Checked='true' LocalTooltip='[@SelectEmpireE1Tooltip]' Location='173,136' Name='E2' OnHoverInEffector='RolloverEffector' OnHoverOutEffector='RolloutEffector' Opacity='0.750' ScrollExtent='339,275' Size='339,275' Style='/Buttons.ShellEmpireNC.style' Tooltip='@SelectEmpireE1Tooltip' TooltipStyle='/Tooltips.Default'></Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' BoundaryPolygon='172.000,5.000,275.000,146.000,217.000,281.000,41.000,296.000,10.000,110.000' Checked='true' LocalTooltip='[@SelectEmpireE3Tooltip]' Location='338,297' Name='E3' OnHoverInEffector='RolloverEffector' OnHoverOutEffector='RolloutEffector' Opacity='0.750' ScrollExtent='286,311' Size='286,311' Style='/Buttons.ShellEmpireVS.style' Tooltip='@SelectEmpireE3Tooltip' TooltipStyle='/Tooltips.Default'></Checkbox>
<Image Name='LoginShellBackground' ScrollExtent='1024,768' Size='1024,768' Stretch='false' Style='/Plates.ShellEmpireSelectBackground'/>
</Page>
<Page Name='SelectMissionOffline' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = false' PackLocation='Center,Center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Text Activated='true' Font='/Fonts.HudFont3' LocalText='Test' Location='513,92' Name='SelectMissonOfflineInfo' Opacity='0.750' ScrollExtent='415,598' Size='415,598'>Test</Text>
<Button LocalTooltip='[@WorldCharacterQuitButtonTooltip]' Location='968,11' Name='Quit' ScrollExtent='24,24' Size='24,24' Style='/Buttons.ShellClose.style' Tooltip='@WorldCharacterQuitButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button IsCancelButton='true' LocalTooltip='[@WorldCharacterBackButtonTooltip]' Location='875,729' Name='Back' ScrollExtent='48,22' Size='48,22' Style='/Buttons.ShellBack.style' Tooltip='@WorldCharacterBackButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@WorldCharacterOptionsButtonTooltip]' Location='811,725' Name='Options' ScrollExtent='31,31' Size='31,31' Style='/Buttons.ShellOptions.style' Tooltip='@WorldCharacterOptionsButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button IsDefaultButton='true' LocalTooltip='[@WorldCharacterEnterButtonTooltip]' Location='955,729' Name='Enter' ScrollExtent='48,22' Size='48,22' Style='/Buttons.ShellForward.style' Tooltip='@WorldCharacterEnterButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='17,7' Name='HelpButton' PackLocation='right,top' PackLocationProp='-1007/0001,0007/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button AbsorbsInput='false' BackgroundOpacity='0.000' IsDefaultButton='true' LocalText='[@OfflineMission0]' LocalTooltip='[@OfflineMissionTip0]' Location='63,89' Name='Mission0' RStyleDefault='/Buttons.CharacterSelectBackground.remptychecked ' ScrollExtent='385,49' Size='385,49' Style='/Buttons.CharacterSelect.style' TextMaxLines='3' Tooltip='@OfflineMissionTip0' TooltipStyle='/Tooltips.Default'>@OfflineMission0</Button>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='63,89' Name='CMission0' ScrollExtent='385,48' Size='385,48' Style='/Buttons.CharacterSelectBackground.style'></Checkbox>
<Button AbsorbsInput='false' BackgroundOpacity='0.000' LocalText='[@OfflineMission1]' LocalTooltip='[@OfflineMissionTip1]' Location='63,139' Name='Mission1' RStyleDefault='/Buttons.CharacterSelectBackground.remptychecked ' ScrollExtent='385,49' Size='385,49' Style='/Buttons.CharacterSelect.style' TextMaxLines='3' Tooltip='@OfflineMissionTip1' TooltipStyle='/Tooltips.Default'>@OfflineMission1</Button>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='63,139' Name='CMission1' ScrollExtent='385,48' Size='385,48' Style='/Buttons.CharacterSelectBackground.style'></Checkbox>
<Button AbsorbsInput='false' BackgroundOpacity='0.000' LocalText='[@OfflineMission2]' LocalTooltip='[@OfflineMissionTip2]' Location='63,189' Name='Mission2' RStyleDefault='/Buttons.CharacterSelectBackground.remptychecked ' ScrollExtent='385,49' Size='385,49' Style='/Buttons.CharacterSelect.style' TextMaxLines='3' Tooltip='@OfflineMissionTip2' TooltipStyle='/Tooltips.Default'>@OfflineMission2</Button>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='63,189' Name='CMission2' ScrollExtent='385,48' Size='385,48' Style='/Buttons.CharacterSelectBackground.style'></Checkbox>
<Button AbsorbsInput='false' BackgroundOpacity='0.000' LocalText='[@OfflineMission3]' LocalTooltip='[@OfflineMissionTip3]' Location='63,239' Name='Mission3' RStyleDefault='/Buttons.CharacterSelectBackground.remptychecked ' ScrollExtent='385,49' Size='385,49' Style='/Buttons.CharacterSelect.style' TextMaxLines='3' Tooltip='@OfflineMissionTip3' TooltipStyle='/Tooltips.Default'>@OfflineMission3</Button>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='63,239' Name='CMission3' ScrollExtent='385,48' Size='385,48' Style='/Buttons.CharacterSelectBackground.style'></Checkbox>
<Button AbsorbsInput='false' BackgroundOpacity='0.000' LocalText='[@OfflineMission4]' LocalTooltip='[@OfflineMissionTip4]' Location='63,290' Name='Mission4' RStyleDefault='/Buttons.CharacterSelectBackground.remptychecked ' ScrollExtent='385,49' Size='385,49' Style='/Buttons.CharacterSelect.style' TextMaxLines='3' Tooltip='@OfflineMissionTip4' TooltipStyle='/Tooltips.Default'>@OfflineMission4</Button>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='63,289' Name='CMission4' ScrollExtent='385,48' Size='385,48' Style='/Buttons.CharacterSelectBackground.style'></Checkbox>
<Button AbsorbsInput='false' BackgroundOpacity='0.000' LocalText='[@OfflineMission5]' LocalTooltip='[@OfflineMissionTip5]' Location='63,339' Name='Mission5' RStyleDefault='/Buttons.CharacterSelectBackground.remptychecked ' ScrollExtent='385,49' Size='385,49' Style='/Buttons.CharacterSelect.style' TextMaxLines='3' Tooltip='@OfflineMissionTip5' TooltipStyle='/Tooltips.Default'>@OfflineMission5</Button>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='63,339' Name='CMission5' ScrollExtent='385,48' Size='385,48' Style='/Buttons.CharacterSelectBackground.style'></Checkbox>
<Button AbsorbsInput='false' BackgroundOpacity='0.000' LocalText='[@OfflineMission6]' LocalTooltip='[@OfflineMissionTip6]' Location='63,389' Name='Mission6' RStyleDefault='/Buttons.CharacterSelectBackground.remptychecked ' ScrollExtent='385,49' Size='385,49' Style='/Buttons.CharacterSelect.style' TextMaxLines='3' Tooltip='@OfflineMissionTip6' TooltipStyle='/Tooltips.Default'>@OfflineMission6</Button>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='63,389' Name='CMission6' ScrollExtent='385,48' Size='385,48' Style='/Buttons.CharacterSelectBackground.style'></Checkbox>
<Button AbsorbsInput='false' BackgroundOpacity='0.000' LocalText='[@OfflineMission7]' LocalTooltip='[@OfflineMissionTip7]' Location='63,439' Name='Mission7' RStyleDefault='/Buttons.CharacterSelectBackground.remptychecked ' ScrollExtent='385,49' Size='385,49' Style='/Buttons.CharacterSelect.style' TextMaxLines='3' Tooltip='@OfflineMissionTip7' TooltipStyle='/Tooltips.Default'>@OfflineMission7</Button>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='63,439' Name='CMission7' ScrollExtent='385,48' Size='385,48' Style='/Buttons.CharacterSelectBackground.style'></Checkbox>
<Image Name='LoginShellBackground' ScrollExtent='1024,768' Size='1024,768' Stretch='false' Style='/Plates.ShellCharacterSelectBackground'/>
</Page>
