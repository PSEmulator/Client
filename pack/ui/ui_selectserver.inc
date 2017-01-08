<Page Name='SelectServer' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<RotationEffector Name='StarRotator' Period='5.000'/>
<Page Location='240,10' Name='ScrollingTextPage' PackLocation='left,top' PackLocationProp='0240/0001,0010/0001' PackSize='absolute,fixed' PackSizeProp='0480/0001,0002/0003' ScrollExtent='544,26' Size='544,26'>
<Button BackgroundOpacity='0.000' Name='NewsButton' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='544,26' Size='544,26' Style='invisible_button'></Button>
<ButtonStyle Name='invisible_button'/>
<Text Color='#72C9D1' Font='/Fonts.Agency18' LocalText='[@BannerMessage]' Location='2,0' MaxLines='1' Name='Text' PackSize='absolute,absolute' PackSizeProp='0004/0001,0002/0001' ScrollExtent='540,24' Size='540,24' TextAlignmentVertical='Bottom' TruncateElipsis='false'>@BannerMessage</Text>
<Image BackgroundOpacity='1.000' Name='Box' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/Frontend.Box.style' ScrollExtent='544,26' Size='544,26' Stretch='false' Style=' '/>
</Page>
<Page BackgroundColor='#0000FF' Location='436,81' Name='_StarPage' OnShowEffector='StarRotator' PackLocation='cfc,top' PackLocationProp='0007/0001,0081/0001' ScrollExtent='167,167' Size='167,167' Visible='false'>
<Image Activated='true' Location='11,32' Name='PSStar' PackLocation='cfc,cfc' PackLocationProp='-008/0001,0013/0001' PackSize='absolute,absolute' PackSizeProp='0038/0001,0038/0001' ScrollExtent='129,129' Size='129,129' Style='/Plates.PS_Bug'/>
<Image Activated='true' Color='#000000' Location='14,35' Name='PSStarShadow1' Opacity='0.300' PackLocation='cfc,cfc' PackLocationProp='-005/0001,0016/0001' PackSize='absolute,absolute' PackSizeProp='0038/0001,0038/0001' ScrollExtent='129,129' Size='129,129' Style='/Plates.PS_Bug'/>
<Image Activated='true' Color='#000000' Location='15,36' Name='PSStarShadow2' Opacity='0.300' PackLocation='cfc,cfc' PackLocationProp='-004/0001,0017/0001' PackSize='absolute,absolute' PackSizeProp='0038/0001,0038/0001' ScrollExtent='129,129' Size='129,129' Style='/Plates.PS_Bug'/>
</Page>
<Image Location='62,60' Name='PSLogo' PackLocation='center,center' PackLocationProp='-450/0001,-324/0001' ScrollExtent='900,450' Size='900,450' Style='/Plates.PSLogoFreeplay'/>
<Image Color='#000000' Location='67,65' Name='PSLogoShadow' Opacity='0.300' PackLocation='center,center' PackLocationProp='-445/0001,-319/0001' ScrollExtent='900,450' Size='900,450' Style='/Plates.PSLogoFreeplay'/>
<Image Color='#000000' Location='68,66' Name='PSLogoShadow2' Opacity='0.300' PackLocation='center,center' PackLocationProp='-444/0001,-318/0001' ScrollExtent='900,450' Size='900,450' Style='/Plates.PSLogoFreeplay'/>
<Text Color='#72C9D1' Font='/Fonts.Agency20' LocalText='[@ServerSelectInstructions]' Location='58,494' Name='Instructions' OnShowEffector='InstructionsEffector' PackSize='right,bottom' ScrollExtent='918,32' ShadowStyle='/Shadows.Default' Size='918,32' TextAlignment='Center' TextAlignmentVertical='Center' TooltipStyle='/Tooltips.Default'>@ServerSelectInstructions</Text>
<Page Location='57,537' Name='ServerListPage' PackLocation='left,top' PackLocationProp='0057/0001,0537/0001' PackSize='absolute,absolute' PackSizeProp='0106/0001,0628/0001' ScrollExtent='918,140' Size='918,140'>
<ImageStyle Name='OccupantStyle'>
<ImageFrame Source='ui_hud_vehicle_occupant_00' SourceRect='0,0,8,8'/>
</ImageStyle>
<Button LocalText='[@ServerNameHeading]' Location='14,10' Name='ServerNameHeading' ScrollExtent='200,30' Size='200,30' Style='/Buttons.FrontendTitleButton.style' TooltipStyle='/Tooltips.Default'>@ServerNameHeading</Button>
<Button LocalText='[@ServerLocationHeading]' Location='224,10' Name='ServerLocationHeading' ScrollExtent='115,30' Size='115,30' Style='/Buttons.FrontendTitleButton.style' TooltipStyle='/Tooltips.Default'>@ServerLocationHeading</Button>
<Button LocalText='[@ServerStatus]' Location='349,10' Name='ServerStatusHeading' ScrollExtent='115,30' Size='115,30' Style='/Buttons.FrontendTitleButton.style' TooltipStyle='/Tooltips.Default'>@ServerStatus</Button>
<Button LocalText='[@ServerType]' Location='474,10' Name='ServerTypeHeading' ScrollExtent='115,30' Size='115,30' Style='/Buttons.FrontendTitleButton.style' TooltipStyle='/Tooltips.Default'>@ServerType</Button>
<Button LocalText='[@ServerPing]' Location='599,10' Name='ServerPingHeading' ScrollExtent='115,30' Size='115,30' Style='/Buttons.FrontendTitleButton.style' TooltipStyle='/Tooltips.Default'>@ServerPing</Button>
<Button LocalText='[@ServerNeed]' Location='724,10' Name='ServerNeedHeading' ScrollExtent='170,30' Size='170,30' Style='/Buttons.FrontendTitleButton.style' TooltipStyle='/Tooltips.Default'>@ServerNeed</Button>
<Listbox DataSource='/DataSources.ServerList' Location='14,45' Name='ServerList' PackSize='absolute,absolute' PackSizeProp='0038/0001,0050/0001' RowTemplate='ServerListTemplate' ScrollExtent='883,90' Size='880,90' Style='/Listboxes.Frontend.style' TooltipStyle='/Tooltips.Default'/>
<Scrollbar Control='ServerList' Location='898,45' Name='Scrollbar' PackLocation='right,top' PackLocationProp='-020/0001,0045/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0050/0001' ScrollExtent='10,90' Size='10,90' Style='/ScrollBars.frontend_vertical.style'/>
<Template Name='ServerListTemplate' Size='883,30'>\<text color = \'#72C9D1\' font = \'/Fonts.Agency24\' location = \'10,0\' size = \'190,28\' textalignment = \'left\'\>
$ServerName$
\</text\>
\<text color = \'#72C9D1\' font = \'/Fonts.Agency20\' location = \'210,2\' size = \'115,24\' textalignment = \'center\'\>
$Location$
\</text\>
\<text color = \'$statuscolor$\' font = \'/Fonts.Agency20\' location = \'335,2\' size = \'115,24\' textalignment = \'center\'\>
$Status$
\</text\>
\<text color = \'#72C9D1\' font = \'/Fonts.Agency20\' location = \'460,2\' size = \'115,24\' textalignment = \'center\'\>
$Type$
\</text\>
\<text color = \'#72C9D1\' font = \'/Fonts.Agency20\' location = \'585,2\' size = \'115,24\' textalignment = \'center\'\>
$Ping$
\</text\>
\<Image backgroundopacity = \'0.000\' enabled = \'false\' location = \'726,3\' scrollextent = \'25,22\' size = \'25,22\' stretch = \'false\' style = \'/Frontend.NCLogoSolid\' visible = \'$NeedNC$\'/\>
\<Image backgroundopacity = \'0.000\' enabled = \'false\' location = \'773,3\' scrollextent = \'17,22\' size = \'23,22\' stretch = \'false\' style = \'/Frontend.VSLogoSolid\' visible = \'$NeedVS$\'/\>
\<Image backgroundopacity = \'0.000\' enabled = \'false\' location = \'812,3\' scrollextent = \'23,22\' size = \'17,22\' stretch = \'false\' style = \'/Frontend.TRLogoSolid\' visible = \'$NeedTR$\'/\></Template>
<Image BackgroundOpacity='1.000' Name='Box' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/Frontend.Box.style' ScrollExtent='918,140' Size='918,140' Stretch='false' Style=' '/>
</Page>
<Page Name='FrontendBasic' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768'>
<Button LocalText='[@FrontendCreditsButton]' Location='362,733' Name='CreditsButton' PackLocation='cfc,bottom' PackLocationProp='-100/0001,-035/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='100,30' Size='100,30' Style='/Buttons.FrontendButton.style_small'>@FrontendCreditsButton</Button>
<Button LocalText='[@FrontendBackButton]' Location='5,723' Name='BackButton' PackLocation='left,bottom' PackLocationProp='0005/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,40' Size='75,40' Style='/Buttons.FrontendButton.style' Visible='false'>@FrontendBackButton</Button>
<Button IsDefaultButton='true' LocalText='[@FrontendPlayButton]' Location='899,723' Name='NextButton' PackLocation='right,bottom' PackLocationProp='-125/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='120,40' Size='120,40' Style='/Buttons.FrontendButton.style'>@FrontendPlayButton</Button>
<Button LocalText='?' Location='487,728' Name='HelpButton' PackLocation='left,top' PackLocationProp='0487/0001,0728/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='50,35' Size='50,35' Style='/Buttons.FrontendButton.iconstyle' Visible='false'>?</Button>
<Button LocalText='[@FrontendOptionButton]' Location='562,733' Name='OptionsButton' PackLocation='cfc,bottom' PackLocationProp='0100/0001,-035/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='100,30' Size='100,30' Style='/Buttons.FrontendButton.style_small'>@FrontendOptionButton</Button>
<Button LocalText='[@FrontendCloseButton]' Location='5,723' Name='CloseButton' PackLocation='left,bottom' PackLocationProp='0005/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='120,40' Size='120,40' Style='/Buttons.FrontendButton.style'>@FrontendCloseButton</Button>
<Image BackgroundOpacity='1.000' Location='15,10' Name='ThickTop' PackLocation='left,top' PackLocationProp='0015/0001,0010/0001' PackSize='absolute,fixed' PackSizeProp='0029/0001,0002/0003' RStyleDefault='/Frontend.Thick.style' ScrollExtent='995,4' Size='995,4' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='125,754' Name='ThickBottom' PackLocation='left,bottom' PackLocationProp='0125/0001,-014/0001' PackSize='absolute,fixed' PackSizeProp='0787/0001,0002/0003' RStyleDefault='/Frontend.Thick.style' ScrollExtent='237,4' Size='237,4' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='462,754' Name='ThickBottom2' PackLocation='left,bottom' PackLocationProp='0462/0001,-014/0001' PackSize='absolute,fixed' PackSizeProp='0944/0001,0002/0003' RStyleDefault='/Frontend.Thick.style' ScrollExtent='80,4' Size='80,4' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='537,754' Name='ThickBottom3' PackLocation='left,bottom' PackLocationProp='0537/0001,-014/0001' PackSize='absolute,fixed' PackSizeProp='0999/0001,0002/0003' RStyleDefault='/Frontend.Thick.style' ScrollExtent='25,4' Size='25,4' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='662,754' Name='ThickBottom4' PackLocation='left,bottom' PackLocationProp='0662/0001,-014/0001' PackSize='absolute,fixed' PackSizeProp='0787/0001,0002/0003' RStyleDefault='/Frontend.Thick.style' ScrollExtent='237,4' Size='237,4' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='11,10' Name='ThickLeft' PackLocation='left,top' PackLocationProp='0011/0001,0010/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0056/0001' RStyleDefault='/Frontend.Thick.style' ScrollExtent='4,712' Size='4,712' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='1010,10' Name='ThickRight' PackLocation='right,top' PackLocationProp='-014/0001,0010/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0056/0001' RStyleDefault='/Frontend.Thick.style' ScrollExtent='4,712' Size='4,712' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='979,37' Name='EastBorder' PackLocation='right,top' PackLocationProp='-045/0001,0037/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0083/0001' RStyleDefault='/Frontend.EastBorder.style' ScrollExtent='21,685' Size='21,685' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='24,28' Name='WestBorder' PackLocation='left,top' PackLocationProp='0024/0001,0028/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0073/0001' RStyleDefault='/Frontend.WestBorder.style' ScrollExtent='21,695' Size='21,695' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='125,722' Name='SouthBorder' PackLocation='left,bottom' PackLocationProp='0125/0001,-046/0001' PackSize='absolute,fixed' PackSizeProp='0250/0001,0002/0003' RStyleDefault='/Frontend.SouthBorder.style' ScrollExtent='774,22' Size='774,22' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='24,24' Name='NorthBorder' PackLocation='left,top' PackLocationProp='0024/0001,0024/0001' PackSize='absolute,fixed' PackSizeProp='0057/0001,0002/0003' RStyleDefault='/Frontend.NorthBorder.style' ScrollExtent='967,22' Size='967,22' Stretch='false' Style=' '/>
<Image Color='#E9DAC0' Name='Planet' ScrollExtent='1024,768' Size='1024,768' Stretch='false' Style='/Plates.PlanetBackground'/>
</Page>
</Page>
