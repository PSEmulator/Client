<Page Location='144,240' MaximumSize='750,16000' MinimumSize='750,320' Name='Mail' PackLocation='cfc,cfc' PackLocationProp='0007/0001,0081/0001' resizable='true' ScrollExtent='750,450' Size='750,450' UserMovable='true' Visible='false'>
<Namespace Name='Icons'>
<ImageStyle Name='Generic'>
<ImageFrame Source='ui_font_buttons_2_00' SourceRect='64,20,96,40'/>
</ImageStyle>
<ImageStyle Name='NC'>
<ImageFrame Source='ui_shell_empire_mini_nc_00' SourceRect='0,0,30,26'/>
</ImageStyle>
<ImageStyle Name='VS'>
<ImageFrame Source='ui_shell_empire_mini_vs_00' SourceRect='0,0,28,30'/>
</ImageStyle>
<ImageStyle Name='TR'>
<ImageFrame Source='ui_shell_empire_mini_tr_00' SourceRect='0,0,25,32'/>
</ImageStyle>
</Namespace>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@MailTitle]' Location='101,14' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0014/0001' PackSize='absolute,fixed' PackSizeProp='0204/0001,0002/0003' ScrollExtent='546,17' Size='546,17' TextAlignment='Center'>@MailTitle</Text>
<Button LocalText='[@Cancel]' Location='650,14' Name='CloseButton' PackLocation='right,top' PackLocationProp='-100/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='78,14' Name='HelpButton' PackLocation='left,top' PackLocationProp='0078/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Visible='false'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='51,6' Name='Title' PackLocation='left,top' PackLocationProp='0051/0001,0006/0001' PackSize='absolute,fixed' PackSizeProp='0103/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='647,32' Size='647,32'/>
<Page Location='17,45' Name='Inbox' PackSize='absolute,fixed' PackSizeProp='0034/0001,0002/0003' ScrollExtent='716,165' Size='716,165'>
<Button LocalText='[@MailFromHeading]' Location='5,5' Name='FromHeading' PackLocation='left,top' PackLocationProp='0005/0001,0005/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='200,20' Size='200,20' Style='/Buttons.ListboxHeading.style'>@MailFromHeading</Button>
<Button LocalText='[@MailSubjectHeading]' Location='209,5' Name='SubjectHeading' PackLocation='left,top' PackLocationProp='0209/0001,0005/0001' PackSize='absolute,fixed' PackSizeProp='0376/0001,0002/0003' ScrollExtent='340,20' Size='340,20' Style='/Buttons.ListboxHeading.style'>@MailSubjectHeading</Button>
<Button LocalText='[@MailReceivedHeading]' Location='553,5' Name='ReceivedHeading' PackLocation='right,top' PackLocationProp='-163/0001,0005/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='140,20' Size='140,20' Style='/Buttons.ListboxHeading.style'>@MailReceivedHeading</Button>
<Scrollbar Control='Listbox' Location='700,24' Name='Scroll' PackLocation='right,top' PackLocationProp='-016/0001,0024/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0030/0001' ScrollExtent='9,135' Size='9,135' Style='/ScrollBars.vertical.style'/>
<Listbox DataSource='/DataSources.MailInbox' Location='5,26' Name='Listbox' OnSelect='Parent.Parent.Preview.Icon.Style = SelectedItem.icon
Parent.Parent.Preview.From.Text = SelectedItem.from
Parent.Parent.Preview.Subject.Text = SelectedItem.subject
Parent.Parent.Preview.Text.Text = SelectedItem.text
' PackLocation='left,top' PackLocationProp='0005/0001,0026/0001' PackSize='absolute,absolute' PackSizeProp='0028/0001,0030/0001' RowTemplate='ListboxTemplate' ScrollExtent='688,135' Size='688,135' Style='/Listboxes.Clear.style'/>
<Template Name='ListboxTemplate' Size='688,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'0,1\' maxlines = \'1\' size = \'200,20\'\>
$from$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'204,1\' maxlines = \'1\' size = \'340,20\' textalignment = \'Left\'\>
$subject$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'548,1\' maxlines = \'1\' size = \'140,20\' textalignment = \'Left\'\>
$received$
\</text\></Template>
<Rectangle Color='#385E61' GetsInput='false' Name='Frame' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='716,165' Size='716,165' UserScrollable='false'/>
</Page>
<Page BackgroundColor='#004040' BackgroundOpacity='0.502' Location='17,230' Name='Preview' PackSize='absolute,absolute' PackSizeProp='0034/0001,0250/0001' ScrollExtent='716,200' Size='716,200'>
<Image AbsorbsInput='false' Location='6,5' Name='Icon' ScrollExtent='30,30' Size='30,30' Stretch='false' Style='SelectedItem.icon'/>
<Text AbsorbsInput='false' Color='#FFFFAA' Enabled='false' Font='/Fonts.HudFont3' Location='43,6' Name='Subject' PackLocation='left,top' PackLocationProp='0043/0001,0006/0001' PackSize='absolute,fixed' PackSizeProp='0030/0001,0002/0003' ScrollExtent='686,18' Size='686,18'></Text>
<Text AbsorbsInput='false' Color='#98A6A7' Enabled='false' Font='/Fonts.HudFont1' Location='43,24' Name='From' PackLocation='left,top' PackLocationProp='0043/0001,0024/0001' PackSize='absolute,fixed' PackSizeProp='0030/0001,0002/0003' ScrollExtent='686,14' Size='686,14'></Text>
<Rectangle Color='#385E61' Location='5,40' Name='Separator' PackLocation='left,top' PackLocationProp='0005/0001,0040/0001' PackSize='absolute, fixed' PackSizeProp='0011/0001,xxxx/xxxx' ScrollExtent='705,1' Size='705,1'/>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont2' Location='6,50' Name='Text' PackLocation='left,top' PackLocationProp='0006/0001,0050/0001' PackSize='absolute,absolute' PackSizeProp='0030/0001,0055/0001' ScrollExtent='686,145' Size='686,145'></Text>
<Scrollbar Control='Text' Location='700,50' Name='Scroll' PackLocation='right,top' PackLocationProp='-016/0001,0050/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0055/0001' ScrollExtent='9,145' Size='9,145' Style='/ScrollBars.vertical.style'/>
<Rectangle Color='#385E61' GetsInput='false' Name='Frame' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='716,200' Size='716,200' UserScrollable='false'/>
</Page>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,20' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='750,430' Size='750,430' Stretch='false'/>
</Page>
