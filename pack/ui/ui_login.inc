<Page Name='Login' PackLocation='center,center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='1024,768' Size='1024,768' Visible='false' visualeditlock='true'>
<Page BackgroundOpacity='0.800' Name='OBSOLETE_Login_Failed' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Text Font='/Fonts.HudFont3' LocalText='[@loginconnectionfailed]' Location='333,279' PackLocation='center,center' PackLocationProp='-179/0001,-105/0001' ScrollExtent='357,169' Size='357,169' TextAlignment='Center' TextAlignmentVertical='Center'>@loginconnectionfailed</Text>
<Button IsCancelButton='true' IsDefaultButton='true' Location='487,461' Name='OK' PackLocation='center,center' PackLocationProp='-025/0001,0077/0001' ScrollExtent='51,29' Size='51,29' Style='/Buttons.OK_Text.style'></Button>
<Image BackgroundOpacity='1.000' Location='312,254' Name='background' PackLocation='left,top' PackLocationProp='0312/0001,0254/0001' PackSize='absolute,absolute' PackSizeProp='0624/0001,0488/0001' RStyleDefault='style' ScrollExtent='400,280' Size='400,280' Stretch='false' Style=' '/>
</Page>
<Page BackgroundOpacity='0.800' Name='OBSOLETE_Login_Invalid' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Text Font='/Fonts.HudFont3' LocalText='[@badusernameorpassword]' Location='333,279' Name='Error' PackLocation='center,center' PackLocationProp='-179/0001,-105/0001' ScrollExtent='357,169' Size='357,169' TextAlignment='Center' TextAlignmentVertical='Center'>@badusernameorpassword</Text>
<Button IsCancelButton='true' IsDefaultButton='true' Location='487,461' Name='OK' PackLocation='center,center' PackLocationProp='-025/0001,0077/0001' ScrollExtent='51,29' Size='51,29' Style='/Buttons.OK_Text.style'></Button>
<Image BackgroundOpacity='1.000' Location='312,254' Name='background' PackLocation='left,top' PackLocationProp='0312/0001,0254/0001' PackSize='absolute,absolute' PackSizeProp='0624/0001,0488/0001' RStyleDefault='/WindowPanes.Small.style' ScrollExtent='400,280' Size='400,280' Stretch='false' Style=' '/>
</Page>
<Page BackgroundOpacity='0.800' Name='OBSOLETE_Login_Too_Many_Fails' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Text Font='/Fonts.HudFont3' LocalText='[@toomanyfailedlogins]' Location='333,279' PackLocation='center,center' PackLocationProp='-179/0001,-105/0001' ScrollExtent='357,169' Size='357,169' TextAlignment='Center' TextAlignmentVertical='Center'>@toomanyfailedlogins</Text>
<Button IsCancelButton='true' IsDefaultButton='true' Location='487,461' Name='OK' OnPress='quit' PackLocation='center,center' PackLocationProp='-025/0001,0077/0001' ScrollExtent='51,29' Size='51,29' Style='/Buttons.OK_Text.style'></Button>
<Image BackgroundOpacity='1.000' Location='312,254' Name='background' PackLocation='left,top' PackLocationProp='0312/0001,0254/0001' PackSize='absolute,absolute' PackSizeProp='0624/0001,0488/0001' RStyleDefault='/WindowPanes.Small.style' ScrollExtent='400,280' Size='400,280' Stretch='false' Style=' '/>
</Page>
<Page BackgroundOpacity='0.800' Name='OBSOLETE_Invalid_Version' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Text Font='/Fonts.HudFont3' LocalText='[@invalidserverversion]' Location='333,279' PackLocation='center,center' PackLocationProp='-179/0001,-105/0001' ScrollExtent='357,169' Size='357,169' TextAlignment='Center' TextAlignmentVertical='Center'>@invalidserverversion</Text>
<Button IsCancelButton='true' IsDefaultButton='true' Location='487,461' Name='OK' OnPress='quit' PackLocation='center,center' PackLocationProp='-025/0001,0077/0001' ScrollExtent='51,29' Size='51,29' Style='/Buttons.OK_Text.style'></Button>
<Image BackgroundOpacity='1.000' Location='312,254' Name='background' PackLocation='left,top' PackLocationProp='0312/0001,0254/0001' PackSize='absolute,absolute' PackSizeProp='0624/0001,0488/0001' RStyleDefault='/WindowPanes.Small.style' ScrollExtent='400,280' Size='400,280' Stretch='false' Style=' '/>
</Page>
<Page BackgroundOpacity='0.800' Name='OBSOLETE_Check_Quit' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Text Font='/Fonts.HudFont3' LocalText='[@checkquit]' Location='333,279' PackLocation='center,center' PackLocationProp='-179/0001,-105/0001' ScrollExtent='357,169' Size='357,169' TextAlignment='Center' TextAlignmentVertical='Center'>@checkquit</Text>
<Button IsDefaultButton='true' LocalText='i' Location='437,465' Name='Yes' PackLocation='center,center' PackLocationProp='-075/0001,0081/0001' ScrollExtent='38,20' Size='38,20' Style='/Buttons.IconButton.style'>i</Button>
<Button IsCancelButton='true' LocalText='j' Location='541,465' Name='No' PackLocation='center,center' PackLocationProp='0029/0001,0081/0001' ScrollExtent='38,20' Size='38,20' Style='/Buttons.IconButton.style'>j</Button>
<Image BackgroundOpacity='1.000' Location='312,254' Name='background' PackLocation='left,top' PackLocationProp='0312/0001,0254/0001' PackSize='absolute,absolute' PackSizeProp='0624/0001,0488/0001' RStyleDefault='/WindowPanes.Small.style' ScrollExtent='400,280' Size='400,280' Stretch='false' Style=' '/>
</Page>
<Page BackgroundOpacity='0.475' Location='236,554' Name='Login_Progress' PackLocation='center,center' PackLocationProp='-276/0001,0170/0001' ScrollExtent='557,112' Size='557,112' Visible='false'>
<Rectangle Color='#000000' ScrollExtent='557,112' Size='557,112'/>
<Text Font='/Fonts.Agency24' LocalText='[@LoginProgress]' Location='47,15' Name='Text' ScrollExtent='462,40' Size='462,40' TextAlignment='Center'>@LoginProgress</Text>
<Text Font='/Fonts.HudFont1' LocalText='[@LoginStatus]' Location='105,58' Name='Status_Message' ScrollExtent='343,14' Size='343,14' TextAlignment='Center'>@LoginStatus</Text>
<Progressbar Location='24,74' Name='Login_Progress_Bar' Progress='1.000' ScrollExtent='504,16' Size='504,16' Style='/ProgressBars.Default.style'/>
</Page>
<Button IsDefaultButton='true' LocalTooltip='[@LoginEnterButtonTooltip]' Location='401,652' Name='EnterButton' PackLocation='center,center' PackLocationProp='-111/0001,0268/0001' ScrollExtent='222,41' Size='222,41' Style='/Buttons.Launch_Text.style' Tooltip='@LoginEnterButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button IsCancelButton='true' LocalTooltip='[@LoginExitButtonTooltip]' Location='446,702' Name='ExitButton' PackLocation='center,center' PackLocationProp='-066/0001,0318/0001' ScrollExtent='132,42' Size='132,42' Style='/Buttons.Quit_Text_2.style' Tooltip='@LoginExitButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Textbox LocalTooltip='[@LoginUsernameTooltip]' Location='524,562' MaxLength='32' Name='Username' PackLocation='center,center' PackLocationProp='0012/0001,0178/0001' ScrollExtent='293,30' Size='293,30' Style='/Textboxes.Clear' Tooltip='@LoginUsernameTooltip' TooltipStyle='/Tooltips.Default'></Textbox>
<Textbox LocalTooltip='[@LoginPasswordTooltip]' Location='524,599' MaxLength='16' Name='Password' PackLocation='center,center' PackLocationProp='0012/0001,0215/0001' Password='true' ScrollExtent='293,30' Size='293,30' Style='/Textboxes.Clear' Tooltip='@LoginPasswordTooltip'></Textbox>
<Image Location='521,557' Name='G1' PackLocation='center,center' PackLocationProp='0009/0001,0173/0001' ScrollExtent='304,30' Size='304,30' SourceRect='0,50,300,79' SourceResource='ps_login_art' Stretch='false'/>
<Image Location='521,594' Name='G2' PackLocation='center,center' PackLocationProp='0009/0001,0210/0001' ScrollExtent='304,30' Size='304,30' SourceRect='0,50,300,79' SourceResource='ps_login_art' Stretch='false'/>
<Image Location='349,559' Name='G3' PackLocation='center,center' PackLocationProp='-163/0001,0175/0001' ScrollExtent='170,26' Size='170,26' SourceRect='0,0,159,25' SourceResource='ps_login_art' Stretch='false'/>
<Image Location='209,596' Name='G4' PackLocation='center,center' PackLocationProp='-303/0001,0212/0001' ScrollExtent='310,24' Size='310,24' SourceRect='0,25,300,50' SourceResource='ps_login_art' Stretch='false'/>
<Image Name='Logo' PackLocation='proportional,proportional' PackLocationProp='0512/1024,0384/0768' ScrollExtent='1024,768' Size='1024,768' Stretch='false' Style='/Plates.CoreCombatLogo'/>
<ImageStyle Name='PopupImage'>
<ImageFrame>
<ImageFragment Source='ps_login_popups_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ps_login_popups_01' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
</Page>
