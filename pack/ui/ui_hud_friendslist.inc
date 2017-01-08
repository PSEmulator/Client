<Page Location='0,370' MinimumSize='160,85' movable='true' Name='FriendsList' PackLocation='Left,Bottom' PackLocationProp='0000/0001,-398/0001' PackSize='Fixed,Fixed' PackSizeProp='0002/0003,0002/0003' resizable='true' ScrollExtent='180,160' Size='180,160' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@NoFriends]' Location='17,12' MaxLines='1' Name='NoFriendsText' PackLocation='left,top' PackLocationProp='0017/0001,0012/0001' PackSize='absolute,absolute' PackSizeProp='0050/0001,0032/0001' ScrollExtent='130,128' Size='130,128' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>@NoFriends</Text>
<Listbox DataSource='/DataSources.FriendsList' GetsInput='false' Location='17,12' Name='FriendsListbox' PackLocation='left,top' PackLocationProp='0017/0001,0012/0001' PackSize='absolute,absolute' PackSizeProp='0050/0001,0032/0001' RowTemplate='ListboxTemplate' ScrollExtent='142,128' Size='130,128' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='FriendsListbox' Location='151,30' Name='ScrollFriendsList' PackLocation='right,top' PackLocationProp='-029/0001,0030/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0049/0001' ScrollExtent='9,111' Size='9,111' Style='/ScrollBars.vertical.style'/>
<Button LocalText='[@Cancel]' Location='147,9' Name='CancelButton' PackLocation='right,top' PackLocationProp='-033/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='58,9' Name='HelpButton' PackLocation='left,top' PackLocationProp='0058/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Visible='false'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='29,0' Name='Title' PackSize='absolute,fixed' PackSizeProp='0056/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='124,32' Size='124,32' Visible='false'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0000/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='180,160' Size='180,160' Stretch='false'/>
<Template Name='ListboxTemplate' Size='142,18'>\<text color = \'#FFFF00\' font = \'/Fonts.HudFont1\' location = \'5,1\' maxlines = \'1\' size = \'132,16\' visible = \'$IsOnline$\'\>
$Internationalize$
\</text\>
\<text color = \'#AAAAAA\' font = \'/Fonts.HudFont1\' location = \'5,1\' maxlines = \'1\' size = \'132,16\' visible = \'$IsNotOnline$\'\>
$Internationalize$
\</text\></Template>
</Page>
