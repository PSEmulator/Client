<Page Location='0,193' MinimumSize='145,58' movable='true' Name='PlayerInterfaceMenu' PackLocation='left,top' PackLocationProp='0000/0001,0193/0001' ScrollExtent='189,130' Size='189,130' Visible='false'>
<Page Name='MenuPage' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='189,130' Size='189,130'>
<Text AbsorbsInput='false' BackgroundColor='#00F2C9' BackgroundOpacity='0.224' Enabled='false' Font='/Fonts.DefaultFont' LocalText='[@PlayerMenu]' Location='12,18' Name='MenuTitle' PackLocation='left,top' PackLocationProp='0012/0001,0018/0001' PackSize='absolute,fixed' PackSizeProp='0024/0001,0002/0003' ScrollExtent='165,21' Size='165,21' SizeIncrement='0,0' TextAlignment='Center'>@PlayerMenu</Text>
<PopupMenu DataSource='SquadLeaderInviteData' Location='16,42' MaximumSize='156,68' MinimumSize='156,68' Name='Menu' PackLocation='left,top' PackLocationProp='0016/0001,0042/0001' PackSize='proportional,fixed' PackSizeProp='0156/0189,0002/0003' ScrollExtent='156,68' Size='156,68' Style='PopupMenuStyle'>
</PopupMenu>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.DialogBackground.style' ScrollExtent='189,130' Size='189,130' Stretch='false'/>
</Page>
<DataSource Name='SquadMemberData'>
<Data localtext='[@PlayerMenuCancel]' menuindex='5' Name='Cancel' text='@PlayerMenuCancel'/>
<Data localtext='[@PlayerMenuFriends]' menuindex='3' Name='AddToFriends' text='@PlayerMenuFriends'/>
<Data localtext='[@PlayerMenuTrade]' menuindex='0' Name='Trade' text='@PlayerMenuTrade'/>
</DataSource>
<DataSource Name='SquadLeaderInviteData'>
<Data localtext='[@PlayerMenuInvite]' menuindex='1' Name='Invite' text='@PlayerMenuInvite'/>
<Data localtext='[@PlayerMenuFriends]' menuindex='3' Name='AddToFriends' text='@PlayerMenuFriends'/>
<Data localtext='[@PlayerMenuTrade]' menuindex='0' Name='Trade' text='@PlayerMenuTrade'/>
<Data localtext='[@PlayerMenuCancel]' menuindex='5' Name='Cancel' text='@PlayerMenuCancel'/>
</DataSource>
<DataSource Name='SquadLeaderKickData'>
<Data localtext='[@PlayerMenuKick]' menuindex='2' Name='Kick' text='@PlayerMenuKick'/>
<Data localtext='[@PlayerMenuFriends]' menuindex='3' Name='AddToFriends' text='@PlayerMenuFriends'/>
<Data localtext='[@PlayerMenuTrade]' menuindex='0' Name='Trade' text='@PlayerMenuTrade'/>
<Data localtext='[@PlayerMenuCancel]' menuindex='5' Name='Cancel' text='@PlayerMenuCancel'/>
</DataSource>
<PopupMenuStyle ButtonStyle='/Buttons.HUD_VoiceMacro.style' ItemHeight='17' Name='PopupMenuStyle'/>
</Page>
