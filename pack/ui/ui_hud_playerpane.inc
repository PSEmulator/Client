<Page Location='215,200' MinimumSize='594,458' minsize='575,340' movable='true' Name='PlayerPane' PackLocation='cfc,cfc' PackLocationProp='0000/0001,0045/0001' resizable='true' ScrollExtent='594,458' Size='594,458' Visible='false'>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Color='#385E61' Location='570,71' Name='TabBorderTop5' PackLocation='left,top' PackLocationProp='0570/0001,0071/0001' PackSize='absolute,fixed' PackSizeProp='0592/0001,0002/0003' ScrollExtent='2,2' Size='2,2' Style='TabBorderTopStyle'/>
<Button LocalText='[@Cancel]' Location='494,14' Name='CloseButton' PackLocation='right,top' PackLocationProp='-100/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='81,14' Name='HelpButton' PackLocation='left,top' PackLocationProp='0081/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@PlayerPane]' Location='101,14' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0014/0001' PackSize='absolute,fixed' PackSizeProp='0204/0001,0002/0003' ScrollExtent='390,17' Size='390,17' TextAlignment='Center'>@PlayerPane</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='51,6' Name='Title' PackLocation='left,top' PackLocationProp='0051/0001,0006/0001' PackSize='absolute,fixed' PackSizeProp='0103/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='491,32' Size='491,32'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='20,49' Name='SquadTab' ScrollExtent='90,24' Size='90,24' Style='/Buttons.WindowIconTab.style'>@PlayerSquad</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='110,49' Name='ManageTab' ScrollExtent='90,24' Size='90,24' Style='/Buttons.WindowIconTab.style'>@PlayerSquadManage</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='110,49' Name='RolesTab' ScrollExtent='90,24' Size='90,24' Style='/Buttons.WindowIconTab.style'>@PlayerSquadRoles</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='200,49' Name='FriendTab' ScrollExtent='90,24' Size='90,24' Style='/Buttons.WindowIconTab.style'>@PlayerFriend</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='290,49' Name='IgnoreTab' ScrollExtent='90,24' Size='90,24' Style='/Buttons.WindowIconTab.style'>@PlayerIgnore</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='380,49' Name='FindTab' ScrollExtent='100,24' Size='100,24' Style='/Buttons.WindowIconTab.style'>@PlayerFind</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='480,49' Name='FavoritesTab' ScrollExtent='90,24' Size='90,24' Style='/Buttons.WindowIconTab.style'>@FavoritesTab</Checkbox>
<Text Font='/Fonts.HudFont1' LocalText='[@HomeBaseHeader]' LocalTooltip='[@HomeBaseTooltip]' Location='417,47' Name='HomeBaseHeader' ScrollExtent='55,26' Size='55,26' Tooltip='@HomeBaseTooltip' Visible='false'>@HomeBaseHeader</Text>
<Text Font='/Fonts.HudFont1' LocalText='[@BoundHeader]' LocalTooltip='[@BoundHeaderTooltip]' Location='470,47' Name='BoundHeader' ScrollExtent='46,26' Size='46,26' Tooltip='@BoundHeaderTooltip' Visible='false'>@BoundHeader</Text>
<Page Location='18,70' Name='SquadInfoPage' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='558,368' Size='558,368' Visible='false'>
<Button LocalText='[@SquadFavorites]' Location='397,305' Name='FavoritesButton' PackLocation='center,bottom' PackLocationProp='0118/0001,-063/0001' ScrollExtent='120,20' Size='120,20' Style='/Buttons.TextButton.style' Visible='false'>@SquadFavorites</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Color='#385E61' Location='2,2' Name='TabBorder' PackLocation='left,top' PackLocationProp='0002/0001,0002/0001' PackSize='absolute,absolute' PackSizeProp='0004/0001,0074/0001' RStyleDefault='/WindowPanes.TabBorder.style' ScrollExtent='554,294' Size='554,294'/>
<Button LocalText='[@SquadDefine]' Location='37,305' Name='DefineButton' PackLocation='center,bottom' PackLocationProp='-242/0001,-063/0001' ScrollExtent='120,20' Size='120,20' Style='/Buttons.TextButton.style' Visible='false'>@SquadDefine</Button>
<Button LocalText='[@SquadManage]' Location='44,305' Name='ManageButton' PackLocation='center,bottom' PackLocationProp='-235/0001,-063/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@SquadManage</Button>
<Button LocalText='[@SquadRoles]' Location='44,305' Name='RolesButton' PackLocation='center,bottom' PackLocationProp='-235/0001,-063/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@SquadRoles</Button>
<Scrollbar Control='SquadListbox' Location='544,5' Name='ItemInfoScrollbar' PackLocation='right,top' PackLocationProp='-014/0001,0005/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0080/0001' ScrollExtent='9,288' Size='9,288' Style='/ScrollBars.vertical.style'/>
<Listbox DataSource='/DataSources.SquadList' Location='4,4' Name='SquadListbox' PackLocation='left,top' PackLocationProp='0004/0001,0004/0001' PackSize='absolute,absolute' PackSizeProp='0024/0001,0078/0001' RowTemplate='ListboxTemplate' ScrollExtent='540,290' Size='534,290' Style='/Listboxes.Clear.style'/>
<Image BackgroundOpacity='1.000' Location='1,300' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0001/0001,-068/0001' PackSize='absolute,fixed' PackSizeProp='0004/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='554,31' Size='554,31'/>
<Button LocalText='[@PlatoonKick]' Location='202,305' Name='PlatoonKickButton' PackLocation='center,bottom' PackLocationProp='-077/0001,-063/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Visible='false'>@PlatoonKick</Button>
<Button LocalText='[@SquadPromote]' Location='123,305' Name='PromoteButton' PackLocation='center,bottom' PackLocationProp='-156/0001,-063/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@SquadPromote</Button>
<Button LocalText='[@SquadKick]' Location='202,305' Name='KickButton' PackLocation='center,bottom' PackLocationProp='-077/0001,-063/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@SquadKick</Button>
<Button LocalText='[@SquadLeave]' Location='281,305' Name='LeaveButton' PackLocation='center,bottom' PackLocationProp='0002/0001,-063/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@SquadLeave</Button>
<Button LocalText='[@SquadOpen]' Location='439,305' Name='MiniButton' PackLocation='center,bottom' PackLocationProp='0160/0001,-063/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@SquadOpen</Button>
<Button LocalText='[@PlatoonLeave]' Location='360,305' Name='PlatoonLeaveButton' PackLocation='center,bottom' PackLocationProp='0081/0001,-063/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Visible='false'>@PlatoonLeave</Button>
<Button LocalText='[@SquadProximityForm]' Location='217,305' Name='ProximityFormButton' PackLocation='center,bottom' PackLocationProp='-062/0001,-063/0001' ScrollExtent='120,20' Size='120,20' Style='/Buttons.TextButton.style' Visible='false'>@SquadProximityForm</Button>
<Image BackgroundOpacity='1.000' Location='1,334' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0001/0001,-034/0001' PackSize='absolute,fixed' PackSizeProp='0004/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='554,31' Size='554,31'/>
<Button Enabled='false' LocalText='[@SquadVoiceHostStart]' Location='111,339' Name='VoiceHostStartButton' PackLocation='center,bottom' PackLocationProp='-168/0001,-029/0001' ScrollExtent='150,20' Size='150,20' Style='/Buttons.TextButton.style'>@SquadVoiceHostStart</Button>
<Button Enabled='false' LocalText='[@SquadVoiceHostStop]' Location='111,339' Name='VoiceHostStopButton' PackLocation='center,bottom' PackLocationProp='-168/0001,-029/0001' ScrollExtent='150,20' Size='150,20' Style='/Buttons.TextButton.style' Visible='false'>@SquadVoiceHostStop</Button>
<Button Enabled='false' LocalText='[@SquadVoiceJoinStart]' Location='295,339' Name='VoiceJoinStartButton' PackLocation='center,bottom' PackLocationProp='0016/0001,-029/0001' ScrollExtent='150,20' Size='150,20' Style='/Buttons.TextButton.style'>@SquadVoiceJoinStart</Button>
<Button Enabled='false' LocalText='[@SquadVoiceJoinStop]' Location='295,339' Name='VoiceJoinStopButton' PackLocation='center,bottom' PackLocationProp='0016/0001,-029/0001' ScrollExtent='150,20' Size='150,20' Style='/Buttons.TextButton.style' Visible='false'>@SquadVoiceJoinStop</Button>
<Template Name='ListboxTemplate' Size='540,24'>\<text color = \'$VoiceStatusColor$\' font = \'/Fonts.MiscIcons\' location = \'5,0\' maxlines = \'1\' size = \'20,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$VoiceStatus$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'30,4\' maxlines = \'1\' size = \'20,18\' textalignment = \'right\' truncateelipsis = \'false\'\>
$MemberID$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'60,4\' maxlines = \'1\' size = \'311,18\' visible = \'$IsItem$\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'60,3\' maxlines = \'1\' size = \'280,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsHeading$\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'60,3\' maxlines = \'1\' size = \'305,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsPlatoonLeader$\'\>
@PlatoonLeader
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'60,3\' maxlines = \'1\' size = \'305,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsSquadLeader$\'\>
@SquadLeader
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'135,3\' maxlines = \'1\' size = \'305,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$HomeBase$\'\>
$HomeBase$
\</text\>
\<text color = \'#00FF00\' font = \'/Fonts.ButtonIcons\' location = \'460,3\' maxlines = \'1\' size = \'32,20\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$BoundHomeBase$\'\>
i
\</text\>
\<text color = \'$ExpColor$\' font = \'/Fonts.MiscIcons\' location = \'495,0\' maxlines = \'1\' size = \'34,24\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$ExpVisible$\'\>
$Exp$
\</text\>
\<Image backgroundopacity = \'1.000\' location = \'5,10\' name = \'UnderlineTemplate\' rstyledefault = \'/Listboxes.ListboxContentHeader.style\' scrollextent = \'510,8\' size = \'510,8\' visible = \'$IsHeading$\'/\></Template>
</Page>
<include>ui_hud_squaddefinition_edit.inc</include>
<include>ui_hud_squaddefinition_view.inc</include>
<Page Location='18,70' Name='FriendsPage' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='558,368' Size='558,368' Visible='false'>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Color='#385E61' Location='2,2' Name='TabBorder' PackLocation='left,top' PackLocationProp='0002/0001,0002/0001' PackSize='absolute,absolute' PackSizeProp='0004/0001,0044/0001' RStyleDefault='/WindowPanes.TabBorder.style' ScrollExtent='554,324' Size='554,324'/>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@NoFriends]' Location='129,155' MaxLines='1' Name='NoFriendsText' PackLocation='center,center' PackLocationProp='-150/0001,-029/0001' ScrollExtent='291,17' Size='291,17' TextAlignment='Center'>@NoFriends</Text>
<Listbox DataSource='/DataSources.FriendsList' Location='4,4' Name='FriendListbox' PackLocation='left,top' PackLocationProp='0004/0001,0004/0001' PackSize='absolute,absolute' PackSizeProp='0020/0001,0048/0001' RowTemplate='ListboxTemplate' ScrollExtent='538,320' Size='538,320' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='FriendListbox' Location='545,4' Name='ScrollFriendList' PackLocation='right,top' PackLocationProp='-013/0001,0004/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0048/0001' ScrollExtent='9,320' Size='9,320' Style='/ScrollBars.vertical.style'/>
<Image BackgroundOpacity='1.000' Location='1,334' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0001/0001,-034/0001' PackSize='absolute,fixed' PackSizeProp='0003/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='555,31' Size='555,31'/>
<Button LocalText='[@AddFriend]' Location='83,339' Name='AddFriendButton' PackLocation='center,bottom' PackLocationProp='-196/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@AddFriend</Button>
<Button LocalText='[@DeleteFriend]' Location='241,339' Name='DeleteFriendButton' PackLocation='center,bottom' PackLocationProp='-038/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DeleteFriend</Button>
<Button LocalText='[@MonitorFriends]' Location='399,339' Name='MonitorFriendsButton' PackLocation='center,bottom' PackLocationProp='0120/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@MonitorFriends</Button>
<Checkbox BackgroundOpacity='1.000' Location='332,342' Name='HideOn' PackLocation='center,bottom' PackLocationProp='0053/0001,-026/0001' ScrollExtent='57,22' Size='57,22' Style='/Buttons.LargeRadiobox.style' Visible='false'>@H</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='400,342' Name='HideOff' PackLocation='center,bottom' PackLocationProp='0121/0001,-026/0001' ScrollExtent='57,22' Size='57,22' Style='/Buttons.LargeRadiobox.style' Visible='false'>@NH</Checkbox>
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
<Page Location='18,70' Name='IgnorePage' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='558,368' Size='558,368' Visible='false'>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Color='#385E61' Location='2,2' Name='TabBorder' PackLocation='left,top' PackLocationProp='0002/0001,0002/0001' PackSize='absolute,absolute' PackSizeProp='0004/0001,0044/0001' RStyleDefault='/WindowPanes.TabBorder.style' ScrollExtent='554,324' Size='554,324'/>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@NoIgnores]' Location='129,155' MaxLines='1' Name='NoIgnoreText' PackLocation='center,center' PackLocationProp='-150/0001,-029/0001' ScrollExtent='291,17' Size='291,17' TextAlignment='Center'>@NoIgnores</Text>
<Listbox DataSource='/DataSources.IgnoreList' Location='4,4' Name='IgnoreListbox' PackLocation='left,top' PackLocationProp='0004/0001,0004/0001' PackSize='absolute,absolute' PackSizeProp='0020/0001,0048/0001' RowTemplate='ListboxTemplate' ScrollExtent='538,320' Size='538,320' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='IgnoreListbox' Location='545,4' Name='ScrollIgnoreList' PackLocation='right,top' PackLocationProp='-013/0001,0004/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0048/0001' ScrollExtent='9,320' Size='9,320' Style='/ScrollBars.vertical.style'/>
<Image BackgroundOpacity='1.000' Location='1,334' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0001/0001,-034/0001' PackSize='absolute,fixed' PackSizeProp='0003/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='555,31' Size='555,31'/>
<Button LocalText='[@AddFriend]' Location='83,339' Name='AddIgnoreButton' PackLocation='center,bottom' PackLocationProp='-196/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@AddFriend</Button>
<Button LocalText='[@DeleteFriend]' Location='399,339' Name='DeleteIgnoreButton' PackLocation='center,bottom' PackLocationProp='0120/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DeleteFriend</Button>
<Checkbox BackgroundOpacity='1.000' Location='332,342' Name='HideOn' PackLocation='center,bottom' PackLocationProp='0053/0001,-026/0001' ScrollExtent='57,22' Size='57,22' Style='/Buttons.LargeRadiobox.style' Visible='false'>@H</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='400,342' Name='HideOff' PackLocation='center,bottom' PackLocationProp='0121/0001,-026/0001' ScrollExtent='57,22' Size='57,22' Style='/Buttons.LargeRadiobox.style' Visible='false'>@NH</Checkbox>
<Template Name='ListboxTemplate' Size='384,20'>\<text color = \'#FFFF00\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'$width$,18\' textalignment = \'left\' truncateelipsis = \'true\' visible = \'$IsOnline$\'\>
$Internationalize$
\</text\>
\<text color = \'#AAAAAA\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'$width$,18\' textalignment = \'left\' truncateelipsis = \'true\' visible = \'$IsNotOnline$\'\>
$Internationalize$
\</text\></Template>
</Page>
<include>ui_hud_squaddefinition_find.inc</include>
<Page Location='18,70' Name='FindPage' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='558,368' Size='558,368' Visible='false'>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Color='#385E61' Location='2,2' Name='TabBorder' PackLocation='left,top' PackLocationProp='0002/0001,0002/0001' PackSize='absolute,absolute' PackSizeProp='0004/0001,0044/0001' RStyleDefault='/WindowPanes.TabBorder.style' ScrollExtent='554,324' Size='554,324'/>
<Listbox DataSource='FindList' Location='4,4' Name='FindListbox' PackLocation='left,top' PackLocationProp='0004/0001,0004/0001' PackSize='absolute,absolute' PackSizeProp='0020/0001,0048/0001' RowTemplate='ListboxTemplate' ScrollExtent='538,320' Size='538,320' Style='/Listboxes.Clear.style' Visible='false'/>
<Scrollbar Control='FindListbox' Location='545,4' Name='ScrollFindList' PackLocation='right,top' PackLocationProp='-013/0001,0004/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0048/0001' ScrollExtent='9,320' Size='9,320' Style='/ScrollBars.vertical.style'/>
<Image BackgroundOpacity='1.000' Location='1,334' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0001/0001,-034/0001' PackSize='absolute,fixed' PackSizeProp='0003/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='555,31' Size='555,31'/>
<Button LocalText='[@FindSearch]' Location='83,339' Name='SearchButton' PackLocation='center,bottom' PackLocationProp='-196/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@FindSearch</Button>
<Button LocalText='[@FindMessage]' Location='160,339' Name='MessageButton' PackLocation='center,bottom' PackLocationProp='-119/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@FindMessage</Button>
<Button LocalText='[@FindInfo]' Location='237,339' Name='InfoButton' PackLocation='center,bottom' PackLocationProp='-042/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@FindInfo</Button>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@FindLookingOnTooltip]' Location='332,338' Name='LookingOn' PackLocation='center,bottom' PackLocationProp='0053/0001,-030/0001' ScrollExtent='57,22' Size='57,22' Style='/Buttons.LargeRadiobox.style' Tooltip='@FindLookingOnTooltip'>@L</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@FindLookingOffTooltip]' Location='400,338' Name='LookingOff' PackLocation='center,bottom' PackLocationProp='0121/0001,-030/0001' ScrollExtent='57,22' Size='57,22' Style='/Buttons.LargeRadiobox.style' Tooltip='@FindLookingOffTooltip'>@NL</Checkbox>
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
<include>ui_hud_squaddefinition_favorites.inc</include>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,20' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='594,438' Size='594,438' Stretch='false'/>
</Page>
