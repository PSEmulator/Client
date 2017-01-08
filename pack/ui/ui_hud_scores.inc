<Page Location='348,220' MinimumSize='320,300' movable='true' Name='Scores' PackLocation='cfc,cfc' PackLocationProp='-004/0001,-014/0001' resizable='true' ScrollExtent='320,300' Size='320,300' Visible='false'>
<Button LocalText='[@Cancel]' Location='61,14' Name='HelpButton' PackLocation='left,top' PackLocationProp='0061/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='242,14' Name='CloseButton' PackLocation='right,top' PackLocationProp='-078/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='SCORE TITLE' Location='81,14' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0081/0001,0014/0001' PackSize='absolute,fixed' PackSizeProp='0162/0001,0002/0003' ScrollExtent='158,17' Size='158,17' TextAlignment='Center'>SCORE TITLE</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='31,6' Name='Title' PackLocation='left,top' PackLocationProp='0031/0001,0006/0001' PackSize='absolute,fixed' PackSizeProp='0062/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='258,32' Size='258,32'/>
<Page Location='12,37' Name='TimePane' PackLocation='center,top' PackLocationProp='-148/0001,0037/0001' ScrollExtent='296,25' Size='296,25'>
<Text Font='/Fonts.HudFont2' LocalText='[@ScoreGameTime]' Location='5,5' MaxLines='1' Name='TimeLabel' ScrollExtent='141,16' Size='141,16' TextAlignment='Right' TextAlignmentVertical='Center' TextColor='#00F2C9' TruncateElipsis='false'>@ScoreGameTime</Text>
<Text Font='/Fonts.HudFont3' LocalText='03:45:46' Location='150,1' MaxLines='1' Name='TimeText' ScrollExtent='142,24' Size='142,24' TextAlignmentVertical='Center'>03:45:46</Text>
</Page>
<Page Location='12,61' Name='PlayerScorePane' PackSize='absolute,absolute' PackSizeProp='0024/0001,0076/0001' ScrollExtent='296,224' Size='296,224'>
<Listbox DataSource='ScoreData' Location='8,5' Name='ScoreList' PackSize='absolute,absolute' PackSizeProp='0027/0001,0012/0001' RowTemplate='ListboxTemplate' ScrollExtent='275,212' Size='269,212' Style='/Listboxes.Generic.style'/>
<Scrollbar Control='ScoreList' Location='280,4' Name='ScoreListScroll' PackLocation='right,top' PackLocationProp='-016/0001,0004/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0010/0001' ScrollExtent='9,214' Size='9,214' Style='/ScrollBars.vertical.style'/>
<Rectangle Color='#00F2C9' Location='5,2' Name='Rect' Opacity='0.500' PackSize='absolute,absolute' PackSizeProp='0009/0001,0005/0001' ScrollExtent='287,219' Size='287,219'/>
</Page>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,20' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0018/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='320,282' Size='320,282' Stretch='false'/>
<Template Name='ListboxTemplate' Size='275,22'>\<text color = \'$color$\' font = \'/Fonts.HudFont3\' location = \'5,2\' maxlines = \'1\' size = \'$width$,20\' textalignment = \'left\' truncateelipsis = \'true\' visible = \'true\'\>
$PlayerName$
\</text\>
\<text color = \'#00F2C9\' font = \'/Fonts.HudFont3\' location = \'45,2\' maxlines = \'1\' size = \'$width$,20\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'true\'\>
$score$
\</text\></Template>
<DataSource Name='ScoreData'>
<Data color='#FF3030' Name='data0' playername='TheBiggestLoser' score='666' width='219'/>
<Data color='#3030FF' Name='data1' playername='AssPirate' score='147' width='219'/>
<Data color='#FF00FF' Name='data2' playername='ChucklesTheClown' score='23' width='219'/>
<Data color='#3030FF' Name='data3' playername='Toolio' score='7' width='219'/>
</DataSource>
</Page>
