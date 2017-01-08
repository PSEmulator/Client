<Page Location='406,260' MinimumSize='145,58' movable='false' Name='EscapeMenu' PackLocation='cfc,cfc' PackLocationProp='0000/0001,0000/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='213,248' Size='213,248' Visible='false'>
<Page Name='MenuPage' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='213,248' Size='213,248'>
<Text AbsorbsInput='false' BackgroundColor='#00F2C9' BackgroundOpacity='0.224' Enabled='false' Font='/Fonts.DefaultFont' LocalText='[@OptionMenu]' Location='12,18' Name='MenuTitle' PackLocation='left,top' PackLocationProp='0012/0001,0018/0001' PackSize='absolute,fixed' PackSizeProp='0024/0001,0002/0003' ScrollExtent='189,21' Size='189,21' SizeIncrement='0,0' TextAlignment='Center'>@OptionMenu</Text>
<PopupMenu DataSource='EscapeData' Location='16,42' MaximumSize='161,187' MinimumSize='161,187' Name='Menu' PackLocation='left,top' PackLocationProp='0016/0001,0042/0001' PackSize='absolute,fixed' PackSizeProp='0052/0001,0002/0003' ScrollExtent='161,187' Size='161,187' Style='PopupMenuStyle'>
</PopupMenu>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.DialogBackground.style' ScrollExtent='213,248' Size='213,248' Stretch='false'/>
</Page>
<DataSource Name='EscapeData'>
<Data localtext='[@EscapeRecall]' menuindex='0' Name='Recall' text='@EscapeRecall'/>
<Data localtext='[@EscapeOutfitRecall]' menuindex='1' Name='OutfitRecall' text='@EscapeOutfitRecall'/>
<Data localtext='[@EscapeInstantAction]' menuindex='2' Name='InstantAction' text='@EscapeInstantAction'/>
<Data localtext='[@EscapeVideo]' menuindex='3' Name='VideoOptions' text='@EscapeVideo'/>
<Data localtext='[@EscapeSound]' menuindex='4' Name='SoundOptions' text='@EscapeSound'/>
<Data localtext='[@EscapeGame]' menuindex='5' Name='GameOptions' text='@EscapeGame'/>
<Data localtext='[@EscapeColor]' menuindex='6' Name='ColorOptions' text='@EscapeColor'/>
<Data localtext='[@EscapeKeymapping]' menuindex='7' Name='Keymapping' text='@EscapeKeymapping'/>
<Data localtext='[@EscapeHelp]' menuindex='8' Name='Help' text='@EscapeHelp'/>
<Data localtext='[@EscapeQuit]' menuindex='9' Name='Quit' text='@EscapeQuit'/>
<Data localtext='[@EscapeCancel]' menuindex='10' Name='Cancel' text='@EscapeCancel'/>
</DataSource>
<PopupMenuStyle ButtonStyle='/Buttons.HUD_VoiceMacro.style' ItemHeight='17' Name='PopupMenuStyle'/>
</Page>
