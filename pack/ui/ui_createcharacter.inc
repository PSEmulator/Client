<Page Name='CreateCharacter' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = false' PackLocation='Center,Center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CreateCharacterMaleButtonTooltip]' Location='505,59' Name='Male' PackLocation='right,top' PackLocationProp='-519/0001,0059/0001' PackSize='proportional,fixed' PackSizeProp='0220/1024,0002/0003' ScrollExtent='220,40' Size='220,40' Style='/Buttons.FrontendButton.checkstyle' TextColor='#72C9D1' Tooltip='@CreateCharacterMaleButtonTooltip' TooltipStyle='/Tooltips.Default'>@CreateCharacterMale</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CreateCharacterFemaleButtonTooltip]' Location='747,59' Name='Female' PackLocation='right,top' PackLocationProp='-277/0001,0059/0001' PackSize='proportional,fixed' PackSizeProp='0220/1024,0002/0003' ScrollExtent='220,40' Size='220,40' Style='/Buttons.FrontendButton.checkstyle' TextColor='#72C9D1' Tooltip='@CreateCharacterFemaleButtonTooltip' TooltipStyle='/Tooltips.Default'>@CreateCharacterFemale</Checkbox>
<Page Location='60,59' Name='CharacterView' PackLocation='left,cfc' PackLocationProp='0060/0001,0000/0001' PackSize='proportional,proportional' PackSizeProp='0425/1024,0650/0768' ScrollExtent='425,650' Size='425,650'>
<Textbox Activated='true' LocalTooltip='[@CreateCharacterNameTooltip]' Location='20,13' Name='Name' PackSize='absolute,fixed' PackSizeProp='0040/0001,0002/0003' ScrollExtent='385,29' Size='385,29' Style='/Textboxes.Frontend' Tooltip='@CreateCharacterNameTooltip' TooltipStyle='/Tooltips.Default'>sample</Textbox>
<Button Enabled='false' Location='10,10' Name='NameHeading' PackSize='absolute,fixed' PackSizeProp='0020/0001,0002/0003' ScrollExtent='405,30' Size='405,30' Style='/Buttons.FrontendTitleButton.style' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalText='New Button' LocalTooltip='[@CreateCharacterRotateLeftButtonTooltip]' Location='114,602' Name='RotateLeft' PackLocation='center,bottom' PackLocationProp='-098/0001,-048/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='17,12' Size='17,12' Style='/Buttons.CharacterCreateRotateLeft.style' Tooltip='@CreateCharacterRotateLeftButtonTooltip' TooltipStyle='/Tooltips.Default'>New Button</Button>
<Button LocalText='New Button' LocalTooltip='[@CreateCharacterRotateRightButtonTooltip]' Location='289,602' Name='RotateRight' PackLocation='center,bottom' PackLocationProp='0077/0001,-048/0001' ScrollExtent='17,12' Size='17,12' Style='/Buttons.CharacterCreateRotateRight.style' Tooltip='@CreateCharacterRotateRightButtonTooltip' TooltipStyle='/Tooltips.Default'>New Button</Button>
<Button LocalText='New Button' LocalTooltip='[@CreateCharacterZoomInButtonTooltip]' Location='190,601' Name='ZoomIn' PackLocation='center,bottom' PackLocationProp='-022/0001,-049/0001' ScrollExtent='15,15' Size='15,15' Style='/Buttons.CharacterCreateZoomIn.style' Tooltip='@CreateCharacterZoomInButtonTooltip' TooltipStyle='/Tooltips.Default'>New Button</Button>
<Button LocalText='New Button' LocalTooltip='[@CreateCharacterZoomOutButtonTooltip]' Location='219,605' Name='ZoomOut' PackLocation='center,bottom' PackLocationProp='0007/0001,-045/0001' ScrollExtent='16,6' Size='16,6' Style='/Buttons.CharacterCreateZoomOut.style' Tooltip='@CreateCharacterZoomOutButtonTooltip' TooltipStyle='/Tooltips.Default'>New Button</Button>
<GameObjectView Location='10,10' Name='3DCharacterView' PackSize='absolute,absolute' PackSizeProp='0020/0001,0020/0001' ScrollExtent='405,630' Size='405,630'/>
<Image Location='-11,34' Name='VSBackground' Opacity='0.300' PackSize='absolute,absolute' PackSizeProp='-026/0001,0049/0001' ScrollExtent='451,601' Size='451,601' Style='/Plates.ShellVSBackground' Visible='false'/>
<Image Location='-8,10' Name='TRBackground' Opacity='0.300' PackSize='absolute,absolute' PackSizeProp='-026/0001,-026/0001' ScrollExtent='451,676' Size='451,676' Style='/Plates.ShellTRBackground'/>
<Image Location='-11,60' Name='NCBackground' Opacity='0.300' PackSize='absolute,absolute' PackSizeProp='-026/0001,0111/0001' ScrollExtent='451,539' Size='451,539' Style='/Plates.ShellNCBackground' Visible='false'/>
<Image BackgroundOpacity='1.000' Name='Box' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/Frontend.Box.style' ScrollExtent='425,650' Size='425,650' Stretch='false' Style=' '/>
</Page>
<Page Location='505,119' MaximumSize='460,10000' Name='Heads' PackLocation='fff,top' PackLocationProp='-059/0001,0119/0001' PackSize='proportional,absolute' PackSizeProp='0460/1024,0352/0001' ScrollExtent='460,416' Size='460,416'>
<Grid CellCount='5,11' CellSize='85,130' DataSource='/DataSources.MaleHeads' Location='10,10' Name='HeadGrid' PackSize='absolute,absolute' PackSizeProp='0030/0001,0020/0001' ScrollExtent='425,1430' Size='430,396' Style='/Grids.FrontendGrid.style'/>
<Scrollbar Control='HeadGrid' Location='441,10' Name='HeadScrollbar' PackLocation='right,top' PackLocationProp='-019/0001,0010/0001' ScrollExtent='10,396' Size='10,396' Style='/ScrollBars.frontend_vertical.style'/>
<ImageStyle Name='HeadSelectionStyle'>
<ImageFrame SourceRect='0,0,66,98'>
<ImageFragment Source='ui_shell_charcreate_headpick_rollover_00' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,64' Source='ui_shell_charcreate_headpick_rollover_01' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,0' Source='ui_shell_charcreate_headpick_rollover_02' SourceRect='0,0,32,32'/>
<ImageFragment Offset='64,32' Source='ui_shell_charcreate_headpick_rollover_03' SourceRect='0,0,32,32'/>
<ImageFragment Offset='64,64' Source='ui_shell_charcreate_headpick_rollover_04' SourceRect='0,0,32,32'/>
<ImageFragment Offset='64,96' Source='ui_shell_charcreate_headpick_rollover_05' SourceRect='0,0,32,32'/>
</ImageFrame>
</ImageStyle>
<Image BackgroundOpacity='1.000' Name='HeadBox' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/Frontend.Box.style' ScrollExtent='460,416' Size='460,416' Stretch='false' Style=' '/>
</Page>
<Page Location='505,555' MaximumSize='460,154' Name='SoundPage' PackLocation='fff,bottom' PackLocationProp='-059/0001,-213/0001' PackSize='proportional,fixed' PackSizeProp='0460/1024,0002/0003' ScrollExtent='460,154' Size='460,154'>
<Button LocalText='ROUGHNECK' LocalTooltip='[@CreateCharacterVoiceButtonTooltip]' Location='176,15' Name='Voice0Text' PackLocation='cfc,top' PackLocationProp='0021/0001,0015/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,30' Size='150,30' Style='/Buttons.FrontendButton.selected' Tooltip='@CreateCharacterVoiceButtonTooltip'>ROUGHNECK</Button>
<Button LocalText='ROUGHNECK' LocalTooltip='[@CreateCharacterVoiceButtonTooltip]' Location='52,60' Name='Voice1Text' PackLocation='left,top' PackLocationProp='0052/0001,0060/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,30' Size='150,30' Style='/Buttons.FrontendButton.style' Tooltip='@CreateCharacterVoiceButtonTooltip'>ROUGHNECK</Button>
<Button LocalText='[@MaleVoice3]' LocalTooltip='[@CreateCharacterVoiceButtonTooltip]' Location='52,110' Name='Voice2Text' PackLocation='left,top' PackLocationProp='0052/0001,0110/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,30' Size='150,30' Style='/Buttons.FrontendButton.style' Tooltip='@CreateCharacterVoiceButtonTooltip'>@MaleVoice3</Button>
<Button LocalText='[@MaleVoice4]' LocalTooltip='[@CreateCharacterVoiceButtonTooltip]' Location='298,60' Name='Voice3Text' PackLocation='right,top' PackLocationProp='-162/0001,0060/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,30' Size='150,30' Style='/Buttons.FrontendButton.style' Tooltip='@CreateCharacterVoiceButtonTooltip'>@MaleVoice4</Button>
<Button LocalText='[@MaleVoice5]' LocalTooltip='[@CreateCharacterVoiceButtonTooltip]' Location='298,110' Name='Voice4Text' PackLocation='right,top' PackLocationProp='-162/0001,0110/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,30' Size='150,30' Style='/Buttons.FrontendButton.style' Tooltip='@CreateCharacterVoiceButtonTooltip'>@MaleVoice5</Button>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@CreateCharacterVoiceButtonTooltip]' Location='134,10' Name='Voice0' PackLocation='cfc,top' PackLocationProp='-075/0001,0010/0001' ScrollExtent='42,42' Size='42,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterVoiceButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice0</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@CreateCharacterVoiceButtonTooltip]' Location='10,55' Name='Voice1' PackLocation='left,top' PackLocationProp='0010/0001,0055/0001' ScrollExtent='42,42' Size='42,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterVoiceButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice1</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CreateCharacterVoiceButtonTooltip]' Location='10,105' Name='Voice2' PackLocation='left,top' PackLocationProp='0010/0001,0105/0001' ScrollExtent='42,42' Size='42,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterVoiceButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice2</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@CreateCharacterVoiceButtonTooltip]' Location='256,55' Name='Voice3' PackLocation='right,top' PackLocationProp='-204/0001,0055/0001' ScrollExtent='42,42' Size='42,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterVoiceButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice3</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CreateCharacterVoiceButtonTooltip]' Location='256,105' Name='Voice4' PackLocation='right,top' PackLocationProp='-204/0001,0105/0001' ScrollExtent='42,42' Size='42,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterVoiceButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice4</Checkbox>
<Image BackgroundOpacity='1.000' Name='SoundBox' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/Frontend.Box.style' ScrollExtent='460,154' Size='460,154' Stretch='false' Style=' '/>
</Page>
<Page Name='FrontendBasic' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768'>
<Image BackgroundOpacity='1.000' Location='949,10' Name='ThickTopSide' PackLocation='left,top' PackLocationProp='0949/0001,0010/0001' PackSize='absolute,fixed' PackSizeProp='1004/0001,0002/0003' RStyleDefault='/Frontend.Thick.style' ScrollExtent='20,4' Size='20,4' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='949,25' Name='ThinTopSide' PackLocation='left,top' PackLocationProp='0949/0001,0025/0001' PackSize='absolute,fixed' PackSizeProp='1004/0001,0002/0003' RStyleDefault='/Frontend.Thin.style' ScrollExtent='20,22' Size='20,22' Stretch='false' Style=' '/>
<Button LocalText='[@FrontendBackButton]' LocalTooltip='[@CreateCharacterAbortButtonTooltip]' Location='5,723' Name='BackButton' PackLocation='left,bottom' PackLocationProp='0005/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,40' Size='75,40' Style='/Buttons.FrontendButton.style' Tooltip='@CreateCharacterAbortButtonTooltip'>@FrontendBackButton</Button>
<Button IsDefaultButton='true' LocalText='[@FrontendNextButton]' LocalTooltip='[@CreateCharacterSaveButtonTooltip]' Location='944,723' Name='NextButton' PackLocation='right,bottom' PackLocationProp='-080/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,40' Size='75,40' Style='/Buttons.FrontendButton.style' Tooltip='@CreateCharacterSaveButtonTooltip'>@FrontendNextButton</Button>
<Button LocalText='?' LocalTooltip='[@HelpTooltip]' Location='5,5' Name='HelpButton' PackLocation='left,top' PackLocationProp='0005/0001,0005/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='50,40' Size='50,40' Style='/Buttons.FrontendButton.iconstyle' Tooltip='@HelpTooltip'>?</Button>
<Button LocalText='[@FrontendOptionButton]' LocalTooltip='[@FrontendOptionTooltip]' Location='849,5' Name='OptionsButton' PackLocation='right,top' PackLocationProp='-175/0001,0005/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='100,40' Size='100,40' Style='/Buttons.FrontendButton.style' Tooltip='@FrontendOptionTooltip'>@FrontendOptionButton</Button>
<Button IsCancelButton='true' LocalText='X' LocalTooltip='[@FrontendCloseTooltip]' Location='969,5' Name='CloseButton' PackLocation='right,top' PackLocationProp='-055/0001,0005/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='50,40' Size='50,40' Style='/Buttons.FrontendButton.iconstyle' Tooltip='@FrontendCloseTooltip'>X</Button>
<Image BackgroundOpacity='1.000' Location='55,10' Name='ThickTop' PackLocation='left,top' PackLocationProp='0055/0001,0010/0001' PackSize='absolute,fixed' PackSizeProp='0230/0001,0002/0003' RStyleDefault='/Frontend.Thick.style' ScrollExtent='794,4' Size='794,4' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='80,754' Name='ThickBottom' PackLocation='left,bottom' PackLocationProp='0080/0001,-014/0001' PackSize='absolute,fixed' PackSizeProp='0160/0001,0002/0003' RStyleDefault='/Frontend.Thick.style' ScrollExtent='864,4' Size='864,4' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='11,44' Name='ThickLeft' PackLocation='left,top' PackLocationProp='0011/0001,0044/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0090/0001' RStyleDefault='/Frontend.Thick.style' ScrollExtent='4,678' Size='4,678' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='1010,45' Name='ThickRight' PackLocation='right,top' PackLocationProp='-014/0001,0045/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0090/0001' RStyleDefault='/Frontend.Thick.style' ScrollExtent='4,678' Size='4,678' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='979,45' Name='EastBorder' PackLocation='right,top' PackLocationProp='-045/0001,0045/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0090/0001' RStyleDefault='/Frontend.EastBorder.style' ScrollExtent='21,678' Size='21,678' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='24,45' Name='WestBorder' PackLocation='left,top' PackLocationProp='0024/0001,0045/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0090/0001' RStyleDefault='/Frontend.WestBorder.style' ScrollExtent='21,678' Size='21,678' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='80,722' Name='SouthBorder' PackLocation='left,bottom' PackLocationProp='0080/0001,-046/0001' PackSize='absolute,fixed' PackSizeProp='0160/0001,0002/0003' RStyleDefault='/Frontend.SouthBorder.style' ScrollExtent='864,22' Size='864,22' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='55,24' Name='NorthBorder' PackLocation='left,top' PackLocationProp='0055/0001,0024/0001' PackSize='absolute,fixed' PackSizeProp='0230/0001,0002/0003' RStyleDefault='/Frontend.NorthBorder.style' ScrollExtent='794,22' Size='794,22' Stretch='false' Style=' '/>
<Image Name='Planet' ScrollExtent='1024,768' Size='1024,768' Stretch='false' Style='/Plates.PlanetBackground'/>
</Page>
<Namespace Name='Faces'>
<ImageStyle Name='Male01a'>
<ImageFrame SourceRect='0,0,81,130'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male01b'>
<ImageFrame SourceRect='81,0,162,130'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male01c'>
<ImageFrame SourceRect='162,0,243,130'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male01d'>
<ImageFrame SourceRect='243,0,324,130'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male01e'>
<ImageFrame SourceRect='324,0,405,130'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02a'>
<ImageFrame SourceRect='0,130,81,260'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02b'>
<ImageFrame SourceRect='81,130,162,260'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02c'>
<ImageFrame SourceRect='162,130,243,260'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02d'>
<ImageFrame SourceRect='243,130,324,260'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02e'>
<ImageFrame SourceRect='324,130,405,260'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03a'>
<ImageFrame SourceRect='0,260,81,390'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03b'>
<ImageFrame SourceRect='81,260,162,390'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03c'>
<ImageFrame SourceRect='162,260,243,390'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03d'>
<ImageFrame SourceRect='243,260,324,390'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03e'>
<ImageFrame SourceRect='324,260,405,390'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04a'>
<ImageFrame SourceRect='0,390,81,520'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04b'>
<ImageFrame SourceRect='81,390,162,520'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04c'>
<ImageFrame SourceRect='162,390,243,520'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04d'>
<ImageFrame SourceRect='243,390,324,520'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04e'>
<ImageFrame SourceRect='324,390,405,520'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05a'>
<ImageFrame SourceRect='0,0,81,130'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05b'>
<ImageFrame SourceRect='81,0,162,130'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05c'>
<ImageFrame SourceRect='162,0,243,130'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05d'>
<ImageFrame SourceRect='243,0,324,130'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05e'>
<ImageFrame SourceRect='324,0,405,130'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06a'>
<ImageFrame SourceRect='0,130,81,260'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06b'>
<ImageFrame SourceRect='81,130,162,260'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06c'>
<ImageFrame SourceRect='162,130,243,260'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06d'>
<ImageFrame SourceRect='243,130,324,260'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06e'>
<ImageFrame SourceRect='324,130,405,260'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07a'>
<ImageFrame SourceRect='0,260,81,390'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07b'>
<ImageFrame SourceRect='81,260,162,390'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07c'>
<ImageFrame SourceRect='162,260,243,390'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07d'>
<ImageFrame SourceRect='243,260,324,390'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07e'>
<ImageFrame SourceRect='324,260,405,390'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male08a'>
<ImageFrame SourceRect='0,390,81,520'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male08b'>
<ImageFrame SourceRect='81,390,162,520'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male08c'>
<ImageFrame SourceRect='162,390,243,520'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male08d'>
<ImageFrame SourceRect='243,390,324,520'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male08e'>
<ImageFrame SourceRect='324,390,405,520'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male09a'>
<ImageFrame SourceRect='0,0,81,130'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male09b'>
<ImageFrame SourceRect='81,0,162,130'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male09c'>
<ImageFrame SourceRect='162,0,243,130'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male09d'>
<ImageFrame SourceRect='243,0,324,130'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male09e'>
<ImageFrame SourceRect='324,0,405,130'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male10a'>
<ImageFrame SourceRect='0,130,81,260'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male10b'>
<ImageFrame SourceRect='81,130,162,260'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male10c'>
<ImageFrame SourceRect='162,130,243,260'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male10d'>
<ImageFrame SourceRect='243,130,324,260'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male10e'>
<ImageFrame SourceRect='324,130,405,260'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male11a'>
<ImageFrame SourceRect='0,260,81,390'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male11b'>
<ImageFrame SourceRect='81,260,162,390'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male11c'>
<ImageFrame SourceRect='162,260,243,390'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male11d'>
<ImageFrame SourceRect='243,260,324,390'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male11e'>
<ImageFrame SourceRect='324,260,405,390'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female01a'>
<ImageFrame SourceRect='0,0,81,130'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female01b'>
<ImageFrame SourceRect='81,0,162,128'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female01c'>
<ImageFrame SourceRect='162,0,243,130'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female01d'>
<ImageFrame SourceRect='243,0,324,130'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female01e'>
<ImageFrame SourceRect='324,0,405,130'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female02a'>
<ImageFrame SourceRect='0,130,81,260'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female02b'>
<ImageFrame SourceRect='81,128,162,256'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female02c'>
<ImageFrame SourceRect='162,130,243,260'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female02d'>
<ImageFrame SourceRect='243,130,324,260'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female02e'>
<ImageFrame SourceRect='324,130,405,260'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female03a'>
<ImageFrame SourceRect='0,260,81,390'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female03b'>
<ImageFrame SourceRect='81,256,162,384'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female03c'>
<ImageFrame SourceRect='162,260,243,390'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female03d'>
<ImageFrame SourceRect='243,260,324,390'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female03e'>
<ImageFrame SourceRect='324,260,405,390'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female04a'>
<ImageFrame SourceRect='0,390,81,520'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female04b'>
<ImageFrame SourceRect='81,384,162,512'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female04c'>
<ImageFrame SourceRect='162,390,243,520'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female04d'>
<ImageFrame SourceRect='243,390,324,520'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female04e'>
<ImageFrame SourceRect='324,390,405,520'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female05a'>
<ImageFrame SourceRect='0,0,81,130'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female05b'>
<ImageFrame SourceRect='81,0,162,128'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female05c'>
<ImageFrame SourceRect='162,0,243,130'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female05d'>
<ImageFrame SourceRect='243,0,324,130'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female05e'>
<ImageFrame SourceRect='324,0,405,130'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female06a'>
<ImageFrame SourceRect='0,130,81,260'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female06b'>
<ImageFrame SourceRect='81,128,162,256'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female06c'>
<ImageFrame SourceRect='162,130,243,260'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female06d'>
<ImageFrame SourceRect='243,130,324,260'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female06e'>
<ImageFrame SourceRect='324,130,405,260'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female07a'>
<ImageFrame SourceRect='0,260,81,390'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female07b'>
<ImageFrame SourceRect='81,256,162,384'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female07c'>
<ImageFrame SourceRect='162,260,243,390'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female07d'>
<ImageFrame SourceRect='243,260,324,390'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female07e'>
<ImageFrame SourceRect='324,260,405,390'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female08a'>
<ImageFrame SourceRect='0,390,81,520'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female08b'>
<ImageFrame SourceRect='81,384,162,512'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female08c'>
<ImageFrame SourceRect='162,390,243,520'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female08d'>
<ImageFrame SourceRect='243,390,324,520'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female08e'>
<ImageFrame SourceRect='324,390,405,520'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female09a'>
<ImageFrame SourceRect='0,0,81,130'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female09b'>
<ImageFrame SourceRect='81,0,162,128'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female09c'>
<ImageFrame SourceRect='162,0,243,130'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female09d'>
<ImageFrame SourceRect='243,0,324,130'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female09e'>
<ImageFrame SourceRect='324,0,405,130'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female10a'>
<ImageFrame SourceRect='0,130,81,260'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female10b'>
<ImageFrame SourceRect='81,128,162,256'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female10c'>
<ImageFrame SourceRect='162,130,243,260'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female10d'>
<ImageFrame SourceRect='243,130,324,260'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female10e'>
<ImageFrame SourceRect='324,130,405,260'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
</Namespace>
<Template Name='GridElement' Size='85,130'>\<image e = \'$e$\' location = \'2,0\' name = \'$name$\' size = \'85,130\' stretch = \'false\' style = \'/CreateCharacter.Faces.$name$\'\></Template>
</Page>
