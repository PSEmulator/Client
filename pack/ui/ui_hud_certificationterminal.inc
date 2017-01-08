<Page HideSound='interface_pane_close2.wav' Location='200,200' MaximumSize='623,16384' MinimumSize='623,416' movable='true' Name='CertificationTerminal' PackLocation='cfc,cfc' PackLocationProp='-001/0001,0056/0001' resizable='true' ScrollExtent='623,480' ShowSound='interface_pane_open.wav' Size='623,480' Visible='false'>
<Button LocalText='[@Cancel]' Location='449,7' Name='CancelButton' PackLocation='right,top' PackLocationProp='-174/0001,0007/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='161,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0161/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@CertificationTerminalTitle]' Location='182,5' Name='TitleText' PackSize='absolute,fixed' PackSizeProp='0359/0001,0002/0003' ScrollExtent='264,20' Size='264,20' TextAlignment='Center' TextAlignmentVertical='Center'>@CertificationTerminalTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='132,-1' Name='Title' PackSize='absolute,fixed' PackSizeProp='0258/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='365,32' Size='365,32'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@CertificationUnacquiredTitle]' Location='29,66' Name='UnacquiredTitle' ScrollExtent='279,20' Size='279,20' TextAlignment='Center'>@CertificationUnacquiredTitle</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='28,63' Name='AvailableTitleRect' Opacity='0.750' ScrollExtent='281,25' Size='281,25'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' GetsInput='false' Location='28,87' Name='UnacquiredRect' Opacity='0.750' PackSize='fixed,absolute' PackSizeProp='0002/0003,0161/0001' ScrollExtent='281,319' Size='281,319'/>
<Listbox DataSource='UnacquiredDataSource' Location='32,91' Name='UnacquiredListbox' PackSize='fixed,absolute' PackSizeProp='0002/0003,0171/0001' RowTemplate='ListboxTemplate' ScrollExtent='260,309' Size='260,309' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='UnacquiredListbox' Location='296,90' Name='ScrollUnacquired' PackSize='fixed,absolute' PackSizeProp='0002/0003,0168/0001' ScrollExtent='9,312' Size='9,312' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@CertificationDescriptionPane]' Location='315,66' Name='ItemInfoTitle' PackSize='absolute,fixed' PackSizeProp='0348/0001,0002/0003' ScrollExtent='275,20' Size='275,20' TextAlignment='Center'>@CertificationDescriptionPane</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='312,63' Name='InfoTitleRect' Opacity='0.750' PackSize='absolute,fixed' PackSizeProp='0343/0001,0002/0003' ScrollExtent='280,25' Size='280,25'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='312,87' Name='ItemInfoRect' Opacity='0.750' PackSize='absolute,fixed' PackSizeProp='0343/0001,0002/0003' ScrollExtent='280,136' Size='280,136'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@ItemInfo]' Location='316,90' Name='ItemInfoText' PackSize='absolute,fixed' PackSizeProp='0363/0001,0002/0003' ScrollExtent='260,130' Size='260,130'>@ItemInfo</Text>
<Scrollbar Control='ItemInfoText' Location='580,88' Name='ScrollItemInfo' PackLocation='right,top' PackLocationProp='-043/0001,0088/0001' ScrollExtent='9,131' Size='9,131' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@CertificationAcquiredTitle]' Location='313,230' Name='AcquiredTitle' PackSize='absolute,fixed' PackSizeProp='0347/0001,0002/0003' ScrollExtent='276,20' Size='276,20' TextAlignment='Center'>@CertificationAcquiredTitle</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='312,228' Name='AcquiredTitleRect' Opacity='0.750' PackSize='absolute,fixed' PackSizeProp='0343/0001,0002/0003' ScrollExtent='280,25' Size='280,25'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='312,252' Name='AcquiredRect' Opacity='0.750' PackSize='absolute,absolute' PackSizeProp='0343/0001,0326/0001' ScrollExtent='280,154' Size='280,154'/>
<Listbox DataSource='AcquiredDataSource' Location='315,255' Name='AcquiredListbox' PackSize='absolute,absolute' PackSizeProp='0363/0001,0331/0001' RowTemplate='ListboxTemplate' ScrollExtent='260,149' Size='260,149' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='AcquiredListbox' Location='579,255' Name='ScrollAcquired' PackLocation='right,top' PackLocationProp='-044/0001,0255/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0331/0001' ScrollExtent='9,149' Size='9,149' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@CertificationAvailableCredits]' Location='174,38' Name='AvailableCurrency' PackLocation='center,top' PackLocationProp='-137/0001,0038/0001' ScrollExtent='275,20' Size='275,20' TextAlignment='Center'>@CertificationAvailableCredits</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='172,35' Name='AvailableRect' Opacity='0.750' PackLocation='center,top' PackLocationProp='-139/0001,0035/0001' ScrollExtent='279,25' Size='279,25'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CertificationBeingNeutralized]' Location='112,419' MaxLines='1' Name='UnlearnTime' PackLocation='left,bottom' PackLocationProp='0112/0001,-061/0001' PackSize='absolute,fixed' PackSizeProp='0226/0001,0002/0003' ScrollExtent='397,18' Size='397,18' TextAlignment='Center' TextAlignmentVertical='Center' TruncateElipsis='false' Visible='false'>@CertificationBeingNeutralized</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='108,418' Name='UnlearnRect' Opacity='0.750' PackLocation='left,bottom' PackLocationProp='0108/0001,-062/0001' PackSize='absolute,fixed' PackSizeProp='0219/0001,0002/0003' ScrollExtent='404,20' Size='404,20' Visible='false'/>
<Button LocalText='[@CertLearn]' Location='27,418' Name='BuyButton' PackLocation='left,bottom' PackLocationProp='0027/0001,-062/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@CertLearn</Button>
<Button LocalText='[@CertForget]' Location='519,418' Name='SellButton' PackLocation='right,bottom' PackLocationProp='-104/0001,-062/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@CertForget</Button>
<Button LocalText='[@CertForgetAll]' LocalTooltip='[@CertForgetAllTooltip]' Location='473,37' Name='SellAllButton' PackLocation='right,top' PackLocationProp='-150/0001,0037/0001' ScrollExtent='120,20' Size='120,20' Style='/Buttons.TextButton.style' Tooltip='@CertForgetAllTooltip' Visible='false'>@CertForgetAll</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='21,413' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0021/0001,-067/0001' PackSize='absolute,fixed' PackSizeProp='0045/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='578,31' Size='578,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='0,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0018/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='623,462' Size='623,462' Stretch='false'/>
<DataSource Name='UnacquiredDataSource'>
<Data color='#FFFFFF' internationalize='WEAPONS' isheading='true' isnotheading='false' Name='Dummy1' price='10000'/>
<Data color='#FFFFFF' internationalize='Blah Blah Blah' isheading='false' isnotheading='true' Name='Dummy2' price='5000'/>
</DataSource>
<DataSource Name='AcquiredDataSource'>
<Data color='#FFFFFF' internationalize='WEAPONS' isheading='true' isnotheading='false' Name='Dummy1' price='-10000'/>
<Data color='#FFFFFF' internationalize='Blah Blah Blah' isheading='false' isnotheading='true' Name='Dummy2' price='-5000'/>
</DataSource>
<Template Name='ListboxTemplate' Size='260,20'>\<text color = \'$color\' font = \'/Fonts.HudFont2\' location = \'5,0\' maxlines = \'1\' size = \'200,20\' visible = \'$IsNotHeading$\'\>
$Internationalize$
\</text\>
\<text color = \'$color\' font = \'/Fonts.HudFont2\' location = \'205,0\' size = \'50,20\' textalignment = \'center\' visible = \'$IsNotHeading$\'\>
$Price$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'-18,2\' maxlines = \'1\' size = \'260,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsHeading$\'\>
$Internationalize$
\</text\>
\<Image backgroundopacity = \'1.000\' location = \'0,10\' name = \'UnderlineTemplate\' rstyledefault = \'/Listboxes.ListboxContentHeader.style\' scrollextent = \'260,8\' size = \'260,8\' visible = \'$IsHeading$\'/\></Template>
</Page>
