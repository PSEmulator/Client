<Page BackgroundOpacity='0.502' Location='545,28' MinimumSize='250,210' Name='MassiveDebugWindow' ScrollExtent='476,269' Size='476,269' UserMovable='true' UserResizable='true' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='MASSIVE INFO' Location='18,3' MaxLines='1' Name='Title' PackLocation='left,top' PackLocationProp='0018/0001,0003/0001' PackSize='absolute,fixed' PackSizeProp='0039/0001,0002/0003' ScrollExtent='437,17' Size='437,17' TextAlignment='Center' TextAlignmentVertical='Center'>MASSIVE INFO</Text>
<Button Location='458,3' Name='Exit' OnPress='ui_popstate' PackLocation='right,top' PackLocationProp='-018/0001,0003/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'></Button>
<Rectangle Color='#385E61' Location='1,22' Name='Divider' PackSize='absolute,fixed' PackSizeProp='0002/0001,0002/0003' ScrollExtent='474,1' Size='474,1'/>
<Listbox DataSource='Messages' GetsInput='false' Location='5,26' Name='MsgList' PackLocation='left,top' PackLocationProp='0005/0001,0026/0001' PackSize='absolute,absolute' PackSizeProp='0020/0001,0051/0001' RowTemplate='ListboxTemplate' ScrollExtent='456,218' Size='456,218' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='MsgList' Location='464,25' Name='MsgListScroll' PackLocation='right,top' PackLocationProp='-012/0001,0025/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0049/0001' ScrollExtent='9,220' Size='9,220' Style='/ScrollBars.vertical.style'/>
<Rectangle Color='#385E61' Location='1,247' Name='Divider2' PackLocation='left,bottom' PackLocationProp='0001/0001,-022/0001' PackSize='absolute,fixed' PackSizeProp='0002/0001,0002/0003' ScrollExtent='474,1' Size='474,1'/>
<Text AbsorbsInput='false' Color='#00FF00' Enabled='false' Font='/Fonts.ChatFont' GetsInput='false' LocalText='Object Info' Location='4,249' MaxLines='1' Name='InspectText' PackLocation='left,bottom' PackLocationProp='0004/0001,-020/0001' PackSize='absolute,fixed' PackSizeProp='0081/0001,0002/0003' ScrollExtent='395,17' Size='395,17' TextAlignmentVertical='Center'>Object Info</Text>
<Rectangle Color='#385E61' Location='401,248' Name='ButtonBorder' PackLocation='right,bottom' PackLocationProp='-075/0001,-021/0001' ScrollExtent='1,21' Size='1,21'/>
<Button BackgroundOpacity='0.000' BackgroundTint='#000000' LocalText='GOTO NEXT' Location='402,249' Name='NextBillboard' PackLocation='right,bottom' PackLocationProp='-074/0001,-020/0001' ScrollExtent='72,18' Size='72,18' Style='/Buttons.Small.style'>GOTO NEXT</Button>
<Rectangle Color='#385E61' Name='Border' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='476,269' Size='476,269'/>
<Template Name='ListboxTemplate' Size='246,18'>\<text color = \'$color$\' font = \'/Fonts.ChatFont\' location = \'2,1\' maxlines = \'1\' size = \'$width$,16\'\>
$text$
\</text\></Template>
<DataSource Name='Messages'>
<Data color='#FFFFFF' Name='bar' text='There\'s a hole in the bucket, Dear Liza' width='246'/>
<Data color='#FFFF00' Name='buh' text='WARNING: You could get wet' width='250'/>
<Data color='#FF0000' Name='foo' text='ERROR: The boat is leaking' width='246'/>
</DataSource>
</Page>
