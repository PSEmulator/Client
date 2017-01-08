<Page HideSound='interface_pane_close2.wav' Location='201,200' MinimumSize='623,416' movable='true' Name='ImplantTerminal' PackLocation='cfc,cfc' PackLocationProp='0000/0001,0024/0001' resizable='true' ScrollExtent='623,416' ShowSound='interface_pane_open.wav' Size='623,416' Visible='false'>
<Button LocalText='[@Cancel]' Location='447,7' Name='CancelButton' PackLocation='right,top' PackLocationProp='-176/0001,0007/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='160,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0160/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@ImplantTerminalTitle]' Location='182,5' Name='TitleText' PackLocation='left,top' PackLocationProp='0182/0001,0005/0001' PackSize='absolute,fixed' PackSizeProp='0359/0001,0002/0003' ScrollExtent='264,20' Size='264,20' TextAlignment='Center' TextAlignmentVertical='Center'>@ImplantTerminalTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='132,-1' Name='Title' PackSize='absolute,fixed' PackSizeProp='0258/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='365,32' Size='365,32'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@ImplantUnacquiredTitle]' Location='29,66' Name='UnacquiredTitle' ScrollExtent='279,20' Size='279,20' TextAlignment='Center'>@ImplantUnacquiredTitle</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='28,63' Name='AvailableTitleRect' Opacity='0.750' ScrollExtent='281,25' Size='281,25'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' GetsInput='false' Location='28,87' Name='UnacquiredRect' Opacity='0.750' PackSize='fixed,absolute' PackSizeProp='0002/0003,0162/0001' ScrollExtent='281,254' Size='281,254'/>
<Listbox DataSource='UnacquiredDataSource' Location='32,91' Name='UnacquiredListbox' PackSize='fixed,absolute' PackSizeProp='0002/0003,0171/0001' RowTemplate='ListboxTemplate' ScrollExtent='260,245' Size='260,245' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='UnacquiredListbox' Location='296,90' Name='ScrollUnacquired' PackSize='fixed,absolute' PackSizeProp='0002/0003,0168/0001' ScrollExtent='9,248' Size='9,248' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@ImplantDescriptionPane]' Location='315,66' Name='ItemInfoTitle' PackSize='absolute,fixed' PackSizeProp='0348/0001,0002/0003' ScrollExtent='275,20' Size='275,20' TextAlignment='Center'>@ImplantDescriptionPane</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='313,62' Name='InfoTitleRect' Opacity='0.750' PackSize='absolute,fixed' PackSizeProp='0343/0001,0002/0003' ScrollExtent='280,25' Size='280,25'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='313,86' Name='ItemInfoRect' Opacity='0.750' PackSize='absolute,absolute' PackSizeProp='0343/0001,0272/0001' ScrollExtent='280,144' Size='280,144'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@ItemInfo]' Location='316,89' Name='ItemInfoText' PackSize='absolute,absolute' PackSizeProp='0363/0001,0278/0001' ScrollExtent='260,138' Size='260,138'>@ItemInfo</Text>
<Scrollbar Control='ItemInfoText' Location='580,88' Name='ScrollItemInfo' PackLocation='right,top' PackLocationProp='-043/0001,0088/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0277/0001' ScrollExtent='9,139' Size='9,139' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@ImplantAcquiredTitle]' Location='314,238' Name='AcquiredTitle' PackLocation='left,bottom' PackLocationProp='0314/0001,-178/0001' PackSize='absolute,fixed' PackSizeProp='0347/0001,0002/0003' ScrollExtent='276,20' Size='276,20' TextAlignment='Center'>@ImplantAcquiredTitle</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='313,236' Name='AcquiredTitleRect' Opacity='0.750' PackLocation='left,bottom' PackLocationProp='0313/0001,-180/0001' PackSize='absolute,fixed' PackSizeProp='0343/0001,0002/0003' ScrollExtent='280,25' Size='280,25'/>
<Rectangle AbsorbsInput='false' BackgroundOpacity='1.000' Color='#00F2C9' Location='313,260' Name='AcquiredRect' Opacity='0.750' PackLocation='left,bottom' PackLocationProp='0313/0001,-156/0001' PackSize='absolute,fixed' PackSizeProp='0343/0001,0002/0003' ScrollExtent='280,82' Size='280,82'/>
<Listbox DataSource='AcquiredDataSource' Location='316,263' Name='AcquiredListbox' PackLocation='left,bottom' PackLocationProp='0316/0001,-153/0001' PackSize='absolute,fixed' PackSizeProp='0363/0001,0002/0003' RowTemplate='ListboxTemplate' ScrollExtent='260,77' Size='260,77' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='AcquiredListbox' Location='580,263' Name='ScrollAcquired' PackLocation='right,bottom' PackLocationProp='-043/0001,-153/0001' ScrollExtent='9,77' Size='9,77' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@ImplantAvailableCredits]' Location='174,37' Name='AvailableCurrency' PackLocation='center,top' PackLocationProp='-137/0001,0037/0001' ScrollExtent='275,20' Size='275,20' TextAlignment='Center'>@ImplantAvailableCredits</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='172,34' Name='AvailableRect' Opacity='0.750' PackLocation='center,top' PackLocationProp='-139/0001,0034/0001' ScrollExtent='279,25' Size='279,25'/>
<Button LocalText='[@BuyImplant]' Location='26,355' Name='BuyButton' PackLocation='left,bottom' PackLocationProp='0026/0001,-061/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' TooltipStyle=' '>@BuyImplant</Button>
<Button LocalText='[@SellImplant]' Location='518,355' Name='SellButton' PackLocation='right,bottom' PackLocationProp='-105/0001,-061/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@SellImplant</Button>
<DataSource Name='UnacquiredDataSource'>
<Data color='#FFFFFF' internationalize='WEAPONS' isheading='true' isnotheading='false' Name='Dummy1' price='10000'/>
<Data color='#FFFFFF' internationalize='Blah Blah Blah' isheading='false' isnotheading='true' Name='Dummy2' price='5000'/>
</DataSource>
<DataSource Name='AcquiredDataSource'>
<Data color='#FFFFFF' internationalize='WEAPONS' isheading='true' isnotheading='false' Name='Dummy1' price='-10000'/>
<Data color='#FFFFFF' internationalize='Blah Blah Blah' isheading='false' isnotheading='true' Name='Dummy2' price='-5000'/>
</DataSource>
<Template Name='ListboxTemplate' Size='260,20'>\<text color = \'$color\' font = \'/Fonts.HudFont2\' location = \'5,0\' maxlines = \'1\' size = \'255,20\' visible = \'$IsNotHeading$\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'-18,2\' maxlines = \'1\' size = \'260,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsHeading$\'\>
$Internationalize$
\</text\>
\<Image backgroundopacity = \'1.000\' location = \'0,10\' name = \'UnderlineTemplate\' rstyledefault = \'/Listboxes.ListboxContentHeader.style\' scrollextent = \'260,8\' size = \'260,8\' visible = \'$IsHeading$\'/\></Template>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='21,349' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0021/0001,-067/0001' PackSize='absolute,fixed' PackSizeProp='0045/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='578,31' Size='578,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='0,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0018/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='623,398' Size='623,398' Stretch='false'/>
</Page>
