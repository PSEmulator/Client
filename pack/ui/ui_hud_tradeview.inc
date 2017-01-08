<Page HideSound='interface_pane_close2.wav' Location='266,227' movable='true' Name='TradeView' PackLocation='cfc,cfc' PackLocationProp='-001/0001,-006/0001' ScrollExtent='491,302' ShowSound='interface_pane_open.wav' Size='491,302' Visible='false'>
<Page AbsorbsInput='false' Location='-1,-1' Name='InvitePage' ScrollExtent='228,148' Size='228,148' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@TradeInviteText]' Location='15,20' Name='Text' PackLocation='left,top' PackLocationProp='0015/0001,0020/0001' PackSize='absolute,absolute' PackSizeProp='0031/0001,0074/0001' ScrollExtent='197,74' Size='197,74' TextAlignment='Center' TextAlignmentVertical='Center'>@TradeInviteText</Text>
<Button LocalText='[@Yes]' Location='19,103' Name='Yes' PackLocation='left,bottom' PackLocationProp='0019/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@Yes</Button>
<Button IsCancelButton='true' IsDefaultButton='true' LocalText='[@No]' Location='133,103' Name='No' PackLocation='right,bottom' PackLocationProp='-095/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@No</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='14,97' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0014/0001,-051/0001' PackSize='absolute,fixed' PackSizeProp='0029/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='199,32' Size='199,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='228,148' Size='228,148' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Name='MainPage' ScrollExtent='497,300' Size='497,300'>
<ImageStyle Name='right_arrow_bold'>
<ImageFrame Source='ui_hud_trade_arrowR_00' SourceRect='0,0,25,50'/>
</ImageStyle>
<ImageStyle Name='right_arrow'>
<ImageFrame Source='ui_hud_trade_arrowR_00' SourceRect='25,0,50,50'/>
</ImageStyle>
<ImageStyle Name='left_arrow_bold'>
<ImageFrame Source='ui_hud_trade_arrowL_00' SourceRect='0,0,25,50'/>
</ImageStyle>
<ImageStyle Name='left_arrow'>
<ImageFrame Source='ui_hud_trade_arrowL_00' SourceRect='25,0,49,50'/>
</ImageStyle>
<Text BackgroundColor='#00F2C9' BackgroundOpacity='0.224' Font='/Fonts.HudFont2' LocalText='[@VoiceMacroTitle]' Location='24,72' Name='MessageText' PackLocation='left,top' PackLocationProp='0024/0001,0072/0001' PackSize='absolute,fixed' PackSizeProp='0292/0001,0002/0003' ScrollExtent='205,154' Size='205,154' SizeIncrement='0,0' TextAlignment='Center' TextAlignmentVertical='Center'>@VoiceMacroTitle</Text>
<Text AbsorbsInput='false' BackgroundColor='#00F2C9' BackgroundOpacity='0.224' Enabled='false' Font='/Fonts.HudFont2' LocalText='[@VoiceMacroTitle]' Location='266,47' Name='MyName' PackLocation='left,top' PackLocationProp='0266/0001,0047/0001' PackSize='absolute,fixed' PackSizeProp='0293/0001,0002/0003' ScrollExtent='204,21' Size='204,21' SizeIncrement='0,0' TextAlignment='Center' TextAlignmentVertical='Center'>@VoiceMacroTitle</Text>
<Text AbsorbsInput='false' BackgroundColor='#00F2C9' BackgroundOpacity='0.224' Enabled='false' Font='/Fonts.HudFont2' LocalText='[@VoiceMacroTitle]' Location='24,47' Name='OtherName' PackLocation='left,top' PackLocationProp='0024/0001,0047/0001' PackSize='absolute,fixed' PackSizeProp='0292/0001,0002/0003' ScrollExtent='205,21' Size='205,21' SizeIncrement='0,0' TextAlignment='Center' TextAlignmentVertical='Center'>@VoiceMacroTitle</Text>
<Button LocalText='[@Trade]' Location='210,237' Name='TradeButton' PackLocation='center,bottom' PackLocationProp='-038/0001,-063/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@Trade</Button>
<Button LocalText='[@Cancel]' Location='401,9' Name='CloseButton' PackLocation='right,top' PackLocationProp='-096/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='100,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0100/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@TradeTitle]' Location='179,7' Name='TitleText' PackLocation='center,top' PackLocationProp='-069/0001,0007/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='161,20' Size='161,20' TextAlignment='Center' TextAlignmentVertical='Center'>@TradeTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='68,0' Name='Title' PackSize='absolute,fixed' PackSizeProp='0115/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='382,32' Size='382,32'/>
<Grid CellCount='12,9' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='265,72' Name='MyGrid' ScrollExtent='204,153' Size='205,154' Style='/DefaultGrid.style'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' Enabled='false' GetsInput='false' Location='265,72' Name='MyRect' ScrollExtent='205,154' Size='205,154'/>
<Image AbsorbsInput='false' Location='235,82' Name='MyReadyImage' PackSize='absolute,fixed' PackSizeProp='0472/0001,0002/0003' RStyleDefault=' ' ScrollExtent='25,50' Size='25,50' Style='left_arrow_bold'/>
<Grid CellCount='12,9' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='24,72' Name='OtherGrid' ScrollExtent='204,153' Size='205,154' Style='/DefaultGrid.style'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' Enabled='false' GetsInput='false' Location='24,72' Name='OtherRect' ScrollExtent='205,154' Size='205,154'/>
<Image AbsorbsInput='false' Location='235,139' Name='OtherReadyImage' PackSize='absolute,fixed' PackSizeProp='0472/0001,0002/0003' RStyleDefault=' ' ScrollExtent='25,50' Size='25,50' Style='right_arrow_bold'/>
<Image AbsorbsInput='false' Location='235,82' Name='MyArrow' PackSize='absolute,fixed' PackSizeProp='0472/0001,0002/0003' RStyleDefault=' ' ScrollExtent='25,50' Size='25,50' Style='left_arrow'/>
<Image AbsorbsInput='false' Location='235,139' Name='OtherArrow' PackSize='absolute,fixed' PackSizeProp='0472/0001,0002/0003' RStyleDefault=' ' ScrollExtent='25,50' Size='25,50' Style='right_arrow'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='26,232' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0026/0001,-068/0001' PackSize='absolute,fixed' PackSizeProp='0055/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='442,31' Size='442,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-1,13' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='497,280' Size='497,280' Stretch='false'/>
</Page>
</Page>
