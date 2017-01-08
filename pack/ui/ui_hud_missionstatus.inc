<Page Location='792,241' MinimumSize='232,300' movable='true' Name='MissionStatus' PackLocation='Right,Top' PackLocationProp='-232/0001,0241/0001' resizable='true' ScrollExtent='232,429' Size='232,429' UserMovable='true' Visible='false'>
<Button LocalText='[@Cancel]' Location='157,8' Name='CancelButton' PackLocation='right,top' PackLocationProp='-075/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@MissionStatus]' Location='30,6' Name='TitleText' PackLocation='left,top' PackLocationProp='0030/0001,0006/0001' PackSize='absolute,fixed' PackSizeProp='0060/0001,0002/0003' ScrollExtent='172,20' Size='172,20' TextAlignment='Center' TextAlignmentVertical='Center'>@MissionStatus</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='30,-1' Name='Title' PackSize='absolute,fixed' PackSizeProp='0060/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='172,32' Size='172,32'/>
<Text AbsorbsInput='false' BackgroundColor='#00F2C9' Font='/Fonts.HudFont2' LocalText='Mission Name' Location='19,32' MaxLines='1' Name='MissionName' PackLocation='left,top' PackLocationProp='0019/0001,0032/0001' PackSize='absolute,fixed' PackSizeProp='0033/0001,0002/0003' ScrollExtent='199,25' Size='199,25' TextAlignmentVertical='Center' TextColor='#FFFFD5'>Mission Name</Text>
<Page Location='10,378' Name='ButtonPage' PackLocation='left,bottom' PackLocationProp='0010/0001,-051/0001' PackSize='absolute, fixed' PackSizeProp='0020/0001,xxxx/xxxx' ScrollExtent='212,32' Size='212,32'>
<Rectangle Color='#385E61' Location='6,5' Name='Separator' PackLocation='left,top' PackLocationProp='0006/0001,0005/0001' PackSize='absolute, fixed' PackSizeProp='0011/0001,xxxx/xxxx' ScrollExtent='201,1' Size='201,1'/>
<Button LocalText='[@ShowMissionList]' Location='41,11' Name='ShowList' PackLocation='center,bottom' PackLocationProp='-065/0001,-021/0001' ScrollExtent='130,20' Size='130,20' Style='/Buttons.TextButton.style' Visible='false'>@ShowMissionList</Button>
<Button LocalText='[@MissionStatusSkipBack]' Location='6,11' Name='SkipBack' PackLocation='left,bottom' PackLocationProp='0006/0001,-021/0001' ScrollExtent='80,20' Size='80,20' Style='/Buttons.TextButton.style'>@MissionStatusSkipBack</Button>
<Button LocalText='[@MissionStatusSkipForward]' Location='126,11' Name='SkipForward' PackLocation='right,bottom' PackLocationProp='-086/0001,-021/0001' ScrollExtent='80,20' Size='80,20' Style='/Buttons.TextButton.style'>@MissionStatusSkipForward</Button>
</Page>
<Page Location='0,10' Name='FullPane' PackSize='absolute,absolute' PackSizeProp='0000/0001,0010/0001' ScrollExtent='232,419' Size='232,419' Visible='false'>
<Rectangle Color='#385E61' Location='16,48' Name='MissionDescriptionRect' PackLocation='left,top' PackLocationProp='0016/0001,0048/0001' PackSize='absolute, fixed' PackSizeProp='0031/0001,xxxx/xxxx' ScrollExtent='201,1' Size='201,1'/>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.ChatFont' GetsInput='false' LocalText='This is the current mission message.  Ain\'t it cool?' Location='21,56' Name='MessageText' PackLocation='left,top' PackLocationProp='0021/0001,0056/0001' PackSize='absolute,absolute' PackSizeProp='0051/0001,0230/0001' ScrollExtent='181,189' Size='181,189'>This is the current mission message.  Ain\'t it cool?</Text>
<Scrollbar Control='MessageText' Location='205,56' Name='MessageScroll' PackLocation='right,top' PackLocationProp='-027/0001,0056/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0230/0001' ScrollExtent='9,189' Size='9,189' Style='/ScrollBars.vertical.style'/>
<Rectangle Color='#385E61' Location='16,48' Name='MissionDescriptionRect' PackLocation='left,top' PackLocationProp='0016/0001,0048/0001' PackSize='absolute,absolute' PackSizeProp='0031/0001,0223/0001' ScrollExtent='201,196' Size='201,196' Visible='false'/>
<Text Font='/Fonts.HudFont1' LocalText='[@MissionStatusObjectives]' Location='29,256' Name='Header' PackLocation='right,bottom' PackLocationProp='-203/0001,-163/0001' ScrollExtent='175,18' Size='175,18' TextAlignment='Right'>@MissionStatusObjectives</Text>
<Image BackgroundOpacity='1.000' Location='14,266' Name='Divider' PackLocation='left,bottom' PackLocationProp='0014/0001,-153/0001' PackSize='absolute,fixed' PackSizeProp='0028/0001,0002/0003' RStyleDefault='/Listboxes.ListboxContentHeader.style' ScrollExtent='204,8' Size='204,8'/>
<Listbox DataSource='Objectives' GetsInput='false' Location='15,278' Name='ObjectivesList' PackLocation='left,bottom' PackLocationProp='0015/0001,-141/0001' PackSize='absolute,fixed' PackSizeProp='0041/0001,0002/0003' RowTemplate='ListboxTemplate' ScrollExtent='191,90' Size='191,90' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='ObjectivesList' Location='205,276' Name='ObjectivesScroll' PackLocation='right,bottom' PackLocationProp='-027/0001,-143/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='9,90' Size='9,90' Style='/ScrollBars.vertical.style'/>
</Page>
<Page Location='0,10' Name='HalfPane' PackSize='absolute,absolute' PackSizeProp='0000/0001,0010/0001' ScrollExtent='232,419' Size='232,419'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.ChatFont' GetsInput='false' LocalText='This is the current mission message.  Ain\'t it cool?' Location='21,56' Name='MessageText' PackLocation='left,top' PackLocationProp='0021/0001,0056/0001' PackSize='absolute,absolute' PackSizeProp='0051/0001,0110/0001' ScrollExtent='181,309' Size='181,309'>This is the current mission message.  Ain\'t it cool?</Text>
<Scrollbar Control='MessageText' Location='205,56' Name='MessageScroll' PackLocation='right,top' PackLocationProp='-027/0001,0056/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0109/0001' ScrollExtent='9,310' Size='9,310' Style='/ScrollBars.vertical.style'/>
<Rectangle Color='#385E61' Location='16,48' Name='MissionDescriptionRect' PackLocation='left,top' PackLocationProp='0016/0001,0048/0001' PackSize='absolute, fixed' PackSizeProp='0031/0001,xxxx/xxxx' ScrollExtent='201,1' Size='201,1'/>
</Page>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.DialogBackground.style' ScrollExtent='232,429' Size='232,429' Stretch='false'/>
<Template Name='ListboxTemplate' Size='190,32'>\<text color = \'#00FF00\' font = \'/Fonts.ButtonIcons\' location = \'1,0\' maxlines = \'1\' size = \'32,20\' textalignment = \'left\' truncateelipsis = \'false\' visible = \'$completed$\'\>
i
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'35,2\' maxlines = \'2\' size = \'$width$,32\'\>
$Internationalize$
\</text\></Template>
<DataSource Name='Objectives'>
<Data color='#909090' completed='true' internationalize='Buy some cheese.  Any cheese will do - except cheddar.' Name='foo' width='155'/>
<Data completed='false' internationalize='Cut the cheese.' Name='bar' width='155'/>
</DataSource>
</Page>
