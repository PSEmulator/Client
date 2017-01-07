<Page Name='Certifications' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = false' PackLocation='Center,Center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='1024,768' Size='1024,768'>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='375,188' Name='AvailableCurrencyRect' Opacity='0.750' ScrollExtent='279,25' Size='279,25'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@CertificationAvailableCredits]' Location='378,191' Name='AvailableCurrency' ScrollExtent='274,20' Size='274,20' TextAlignment='Center'>@CertificationAvailableCredits</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='230,216' Name='UnacquiredTitleRect' Opacity='0.750' ScrollExtent='281,25' Size='281,25'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@CertificationUnacquiredTitle]' Location='231,219' Name='UnacquiredTitle' ScrollExtent='279,20' Size='279,20' TextAlignment='Center'>@CertificationUnacquiredTitle</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' GetsInput='false' Location='230,240' Name='UnacquiredRect' Opacity='0.750' ScrollExtent='281,254' Size='281,254'/>
<Listbox DataSource='UnacquiredDataSource' Location='234,244' Name='UnacquiredListbox' RowTemplate='ListboxTemplate' ScrollExtent='260,245' Size='260,245' Style='/Listboxes.Generic.style'/>
<Scrollbar Control='UnacquiredListbox' Location='498,243' Name='ScrollUnacquired' ScrollExtent='9,248' Size='9,248' Style='/ScrollBars.vertical.style'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='515,215' Name='ItemInfoTitleRect' Opacity='0.750' ScrollExtent='280,25' Size='280,25'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@CertificationDescriptionPane]' Location='517,219' Name='ItemInfoTitle' ScrollExtent='275,20' Size='275,20' TextAlignment='Center'>@CertificationDescriptionPane</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='515,239' Name='ItemInfoTextRect' Opacity='0.750' ScrollExtent='280,136' Size='280,136'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@ItemInfo]' Location='518,242' Name='ItemInfoText' ScrollExtent='260,130' Size='260,130'>@ItemInfo</Text>
<Scrollbar Control='ItemInfoText' Location='782,241' Name='ScrollItemInfo' ScrollExtent='9,131' Size='9,131' Style='/ScrollBars.vertical.style'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='514,381' Name='AcquiredTitleRect' Opacity='0.750' ScrollExtent='280,25' Size='280,25'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@CertificationAcquiredTitle]' Location='515,383' Name='AcquiredTitle' ScrollExtent='276,20' Size='276,20' TextAlignment='Center'>@CertificationAcquiredTitle</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='514,405' Name='AcquiredRect' Opacity='0.750' ScrollExtent='280,90' Size='280,90'/>
<Listbox DataSource='AcquiredDataSource' Location='517,408' Name='AcquiredListbox' RowTemplate='ListboxTemplate' ScrollExtent='260,85' Size='260,85' Style='/Listboxes.Generic.style'/>
<Scrollbar Control='AcquiredListbox' Location='781,408' Name='ScrollAcquired' ScrollExtent='9,85' Size='9,85' Style='/ScrollBars.vertical.style'/>
<Button LocalText='k' Location='467,508' Name='BuyButton' ScrollExtent='39,20' Size='39,20' Style='/Buttons.IconButton.style'>k</Button>
<Button LocalText='l' Location='525,508' Name='SellButton' ScrollExtent='39,20' Size='39,20' Style='/Buttons.IconButton.style'>l</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='223,502' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='578,31' Size='578,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='202,165' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0370/0001' RStyleDefault='/WindowPanes.Big.style' ScrollExtent='623,398' Size='623,398' Stretch='false'/>
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
<Button IsDefaultButton='true' LocalTooltip='[@CreateCharacterSaveButtonTooltip]' Location='955,729' Name='Save' ScrollExtent='48,22' Size='48,22' Style='/Buttons.ShellForward.style' Tooltip='@CreateCharacterSaveButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@CreateCharacterAbortButtonTooltip]' Location='875,729' Name='Abort' ScrollExtent='49,22' Size='49,22' Style='/Buttons.ShellBack.style' Tooltip='@CreateCharacterAbortButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@CreateCharacterOptionsButtonTooltip]' Location='811,725' Name='Options' ScrollExtent='31,31' Size='31,31' Style='/Buttons.ShellOptions.style' Tooltip='@CreateCharacterOptionsButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@CreateCharacterQuitButtonTooltip]' Location='968,11' Name='Quit' ScrollExtent='23,23' Size='23,23' Style='/Buttons.ShellClose.style' Tooltip='@CreateCharacterQuitButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalText='[@Cancel]' Location='17,7' Name='HelpButton' PackLocation='right,top' PackLocationProp='-1007/0001,0007/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Image Name='LoginShellBackground' ScrollExtent='1024,768' Size='1024,768' Stretch='false' Style='/Plates.ShellOptionsBackground'/>
</Page>
