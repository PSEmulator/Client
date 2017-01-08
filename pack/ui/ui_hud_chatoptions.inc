<Page Location='286,192' MinimumSize='450,265' movable='true' Name='ChatOptions' PackLocation='cfc,cfc' PackLocationProp='-001/0001,-044/0001' resizable='true' ScrollExtent='450,297' Size='450,297' Visible='false'>
<Page Location='17,34' Name='SendPage' PackLocation='left,top' PackLocationProp='0017/0001,0034/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0088/0001' ScrollExtent='205,209' Size='205,209'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@ChatSendText]' Location='4,4' Name='TitleText' ScrollExtent='195,20' Size='195,20' TextAlignmentVertical='Center'>@ChatSendText</Text>
<Scrollbar Control='SendList' getsheartbeat='true' Location='190,30' Name='ScrollChannels' PackLocation='right,top' PackLocationProp='-015/0001,0030/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0067/0001' ScrollExtent='10,142' Size='10,142' Style='/ScrollBars.vertical.style'/>
<Rectangle Color='#385E61' Location='0,26' Name='Rect' PackLocation='left,top' PackLocationProp='0000/0001,0026/0001' PackSize='1,absolute' PackSizeProp='0002/0003,0059/0001' ScrollExtent='205,150' Size='205,150'/>
<Template Name='SendTemplate' Size='200,20'>\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'190,20\'\>
$Text$
\</text\></Template>
<Listbox DataSource='/DataSources.ChatChannels' Location='5,30' Name='SendList' PackLocation='left,top' PackLocationProp='0005/0001,0030/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0067/0001' RowTemplate='SendTemplate' ScrollExtent='200,160' Size='182,142' Style='/Listboxes.Clear.style'/>
<Textbox LocalTooltip='[@ChatOptionsSendNameTooltip]' Location='3,182' MaxLength='127' Name='SendPlayerName' PackLocation='left,bottom' PackLocationProp='0003/0001,-027/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='200,25' Size='200,25' Style='TextboxStyle' Tooltip='@ChatOptionsSendNameTooltip'></Textbox>
<Rectangle Color='#385E61' Location='0,179' Name='Rect' PackLocation='left,bottom' PackLocationProp='0000/0001,-030/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='205,30' Size='205,30'/>
<TextboxStyle CaratColor='#00F2C9' CaratWidth='2' Name='TextboxStyle' NormalTextStyle='/Fonts.ChatFont' SelectionColor='#444444' TextColor='#FFFFFF' TextPadding='4,6,2,2'/>
</Page>
<Page Location='227,34' Name='ReceivePage' PackLocation='right,top' PackLocationProp='-223/0001,0034/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0088/0001' ScrollExtent='205,209' Size='205,209'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@ChatReceiveText]' Location='4,4' Name='TitleText' ScrollExtent='195,20' Size='195,20' TextAlignmentVertical='Center'>@ChatReceiveText</Text>
<Scrollbar Control='ReceiveList' getsheartbeat='true' Location='190,30' Name='ScrollChannels' PackLocation='right,top' PackLocationProp='-015/0001,0030/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0034/0001' ScrollExtent='10,175' Size='10,175' Style='/ScrollBars.vertical.style'/>
<Rectangle Color='#385E61' Location='0,26' Name='Rect' PackLocation='left,top' PackLocationProp='0000/0001,0026/0001' PackSize='1,absolute' PackSizeProp='0002/0003,0026/0001' ScrollExtent='205,183' Size='205,183'/>
<Template Name='ReceiveTemplate' Size='200,20'>\<Checkbox backgroundopacity = \'1.0\' checked = \'$in$\' getsinput = \'false\' location = \'5,0\' scrollextent = \'15,20\' size = \'15,20\' style = \'/Buttons.DefaultCheckbox.style\'\>
\</Checkbox\>
\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'25,2\' maxlines = \'1\' size = \'170,20\' textalignment = \'left\'\>
$Text$
\</text\></Template>
<Listbox DataSource='/DataSources.ChatChannels' Location='5,30' Name='ReceiveList' PackLocation='left,top' PackLocationProp='0005/0001,0030/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0034/0001' RowTemplate='ReceiveTemplate' ScrollExtent='200,175' Size='182,175' Style='/Listboxes.Clear.style'/>
</Page>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@ChatOptionsTitle]' Location='79,7' Name='TitleText' PackLocation='left,top' PackLocationProp='0079/0001,0007/0001' PackSize='absolute,fixed' PackSizeProp='0157/0001,0002/0003' ScrollExtent='293,20' Size='293,20' TextAlignment='Center' TextAlignmentVertical='Center'>@ChatOptionsTitle</Text>
<Button LocalText='[@Cancel]' Location='55,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0055/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='380,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-070/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@ChatColors]' Location='171,253' Name='ColorsButton' PackLocation='Center,bottom' PackLocationProp='-054/0001,-044/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='108,20' Size='108,20' Style='/Buttons.TextButton.style'>@ChatColors</Button>
<Button IsCancelButton='true' LocalText='[@Cancel]' Location='348,253' Name='CancelButton' PackLocation='right,bottom' PackLocationProp='-102/0001,-044/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@Cancel</Button>
<Button LocalText='[@OK]' Location='24,253' Name='OkButton' PackLocation='Center,bottom' PackLocationProp='-201/0001,-044/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@OK</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='17,248' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0017/0001,-049/0001' PackSize='absolute,fixed' PackSizeProp='0035/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='415,31' Size='415,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='25,0' Name='Title' PackLocation='left,top' PackLocationProp='0025/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0050/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='400,32' Size='400,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='0,17' Name='Background' Opacity='0.700' PackSize='1,absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='450,280' Size='450,280' Stretch='false'/>
</Page>
