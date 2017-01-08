<Page Name='IME' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Page Name='HorizontalIMEPage' ScrollExtent='408,49' Size='408,49' Visible='false'>
<Text Font='/Fonts.HudFont3' Location='318,7' Name='CandidateInfo' PackSize='absolute,absolute' PackSizeProp='0344/0001,0027/0001' ScrollExtent='64,22' Size='64,22' TextAlignment='Center'></Text>
<Text Font='/Fonts.HudFont3' Location='20,7' MaxLines='1' Name='CandidateList' PackSize='absolute,absolute' PackSizeProp='0111/0001,0027/0001' ScrollExtent='297,22' Size='297,22' TextAlignment='Center'></Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='316,4' Name='ButtonBorder' PackSize='absolute,absolute' PackSizeProp='0341/0001,0021/0001' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='67,28' Size='67,28'/>
<Image BackgroundOpacity='1.000' Location='0,2' Name='background' PackLocation='left,top' PackLocationProp='0000/0001,0002/0001' PackSize='absolute,absolute' PackSizeProp='-002/0001,0017/0001' RStyleDefault='/WindowPanes.ChatInputBar.style' ScrollExtent='410,32' Size='410,32' Stretch='false' Style=' '/>
</Page>
<Page AbsorbsInput='false' movable='true' Name='VerticalIMEPage' PackLocation='center,center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='90,320' Size='90,320' Visible='false'>
<Text Font='/Fonts.HudFont3' Location='13,274' Name='CandidateInfo' PackSize='absolute,absolute' PackSizeProp='0028/0001,0297/0001' ScrollExtent='62,23' Size='62,23' TextAlignment='Center'></Text>
<Listbox DataSource='/DataSources.CandidateList' Location='10,10' Name='CandidateList' PackSize='absolute,absolute' PackSizeProp='0020/0001,0060/0001' RowTemplate='CandidateListTemplate' ScrollExtent='883,260' Size='70,260' Style='/Listboxes.Frontend.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='13,271' Name='ButtonBorder' PackSize='absolute,absolute' PackSizeProp='0027/0001,0290/0001' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='63,30' Size='63,30'/>
<Template Name='CandidateListTemplate' Size='883,30'>\<text font = \'/Fonts.ChatFont\' location = \'4,0\' size = \'20,25\'\>
$Num$
\</text\>
\<text font = \'/Fonts.ChatFont\' location = \'24,0\' size = \'199,25\'\>
$Candidate$
\</text\></Template>
<Image BackgroundOpacity='1.000' Name='background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.Small.style' ScrollExtent='90,320' Size='90,320' Stretch='false' Style=' '/>
</Page>
</Page>
