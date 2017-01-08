<Page Name='Credits' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Image BackgroundTint='#000000' Color='#000000' Location='335,690' Name='AlphaBottom' PackLocation='left,top' PackLocationProp='0335/0001,0690/0001' PackSize='absolute,absolute' PackSizeProp='0678/0001,0748/0001' ScrollExtent='346,20' Size='346,20' Style='/Frontend.Alpha' Visible='false'/>
<Image BackgroundTint='#000000' Color='#000000' Location='55,94' Name='AlphaTop' PackLocation='left,top' PackLocationProp='0055/0001,0094/0001' PackSize='absolute,absolute' PackSizeProp='0114/0001,0744/0001' Rotation='0.500' ScrollExtent='910,24' Size='910,24' Style='/Frontend.Alpha' Visible='false'/>
<Button Enabled='false' LocalText='[@CreditsTitle]' Location='335,67' Name='Title' PackLocation='cfc,top' PackLocationProp='-004/0001,0067/0001' PackSize='p,fixed' PackSizeProp='0346/1024,0002/0003' ScrollExtent='346,30' Size='346,30' Style='/Buttons.FrontendTitleButton.style'>@CreditsTitle</Button>
<Listbox AbsorbsInput='false' BackgroundColor='#0000FF' DataSource='/DataSources.Credits' Enabled='false' GetsInput='false' Location='335,108' Name='List' PackLocation='cfc,top' PackLocationProp='-004/0001,0108/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0174/0001' RowTemplate='ListTemplate' ScrollExtent='346,594' Size='346,594' Style='/Listboxes.EmbeddedListbox16.style' TooltipStyle=' '/>
<Page Location='70,58' Name='ImageLeft' ScrollExtent='368,652' Size='368,652'>
<Image Location='0,126' Name='Image' PackLocation='left,cfc' PackLocationProp='0000/0001,0000/0001' ScrollExtent='292,400' Size='292,400' Stretch='false' Style='Images.Image9'/>
</Page>
<Page Location='485,58' Name='ImageRight' ScrollExtent='464,653' Size='464,653'>
<Image Location='0,80' Name='Image' PackLocation='fff,cfc' PackLocationProp='0000/0001,0001/0001' ScrollExtent='464,494' Size='464,494' Stretch='false' Style='Images.Image1'/>
</Page>
<Image BackgroundOpacity='1.000' Location='53,55' Name='CreditsBox' PackLocation='left,top' PackLocationProp='0053/0001,0055/0001' PackSize='absolute,absolute' PackSizeProp='0108/0001,0110/0001' RStyleDefault='/Frontend.Box.style' ScrollExtent='916,658' Size='916,658' Stretch='false' Style=' '/>
<Page Name='FrontendBasic' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768'>
<Button IsDefaultButton='true' LocalText='[@FrontendCloseCreditsButton]' Location='452,723' Name='NextButton' PackLocation='cfc,bottom' PackLocationProp='0000/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='120,40' Size='120,40' Style='/Buttons.FrontendButton.style'>@FrontendCloseCreditsButton</Button>
<Image BackgroundOpacity='1.000' Location='15,10' Name='ThickTop' PackLocation='left,top' PackLocationProp='0015/0001,0010/0001' PackSize='absolute,fixed' PackSizeProp='0029/0001,0002/0003' RStyleDefault='/Frontend.Thick.style' ScrollExtent='995,4' Size='995,4' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='11,754' Name='ThickBottom' PackLocation='left,bottom' PackLocationProp='0011/0001,-014/0001' PackSize='absolute,fixed' PackSizeProp='0583/0001,0002/0003' RStyleDefault='/Frontend.Thick.style' ScrollExtent='441,4' Size='441,4' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='572,754' Name='ThickBottom2' PackLocation='left,bottom' PackLocationProp='0572/0001,-014/0001' PackSize='absolute,fixed' PackSizeProp='0582/0001,0002/0003' RStyleDefault='/Frontend.Thick.style' ScrollExtent='442,4' Size='442,4' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='11,10' Name='ThickLeft' PackLocation='left,top' PackLocationProp='0011/0001,0010/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0024/0001' RStyleDefault='/Frontend.Thick.style' ScrollExtent='4,744' Size='4,744' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='1010,10' Name='ThickRight' PackLocation='right,top' PackLocationProp='-014/0001,0010/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0023/0001' RStyleDefault='/Frontend.Thick.style' ScrollExtent='4,745' Size='4,745' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='979,37' Name='EastBorder' PackLocation='right,top' PackLocationProp='-045/0001,0037/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0065/0001' RStyleDefault='/Frontend.EastBorder.style' ScrollExtent='21,703' Size='21,703' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='24,28' Name='WestBorder' PackLocation='left,top' PackLocationProp='0024/0001,0028/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0065/0001' RStyleDefault='/Frontend.WestBorder.style' ScrollExtent='21,703' Size='21,703' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='33,722' Name='SouthBorder' PackLocation='left,bottom' PackLocationProp='0033/0001,-046/0001' PackSize='absolute,fixed' PackSizeProp='0057/0001,0002/0003' RStyleDefault='/Frontend.SouthBorder.style' ScrollExtent='967,22' Size='967,22' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='24,24' Name='NorthBorder' PackLocation='left,top' PackLocationProp='0024/0001,0024/0001' PackSize='absolute,fixed' PackSizeProp='0057/0001,0002/0003' RStyleDefault='/Frontend.NorthBorder.style' ScrollExtent='967,22' Size='967,22' Stretch='false' Style=' '/>
<Image Color='#E9DAC0' Name='Planet' ScrollExtent='1024,768' Size='1024,768' Stretch='false' Style='/Plates.PlanetBackground'/>
</Page>
<Template Name='ListTemplate' Size='346,30'>\<text color = \'#72C9D1\' font = \'/Fonts.Agency18\' location = \'0,2\' size = \'346,30\' textalignment = \'center\' visible = \'$IsTitle$\'\>
$Credit$
\</text\>
\<text color = \'#72C9D1\' font = \'/Fonts.Agency24\' location = \'0,2\' size = \'346,30\' textalignment = \'center\' visible = \'$IsName$\'\>
$Credit$
\</text\>
\<Button enabled = \'false\' location = \'0,0\' size = \'346,30\' style = \'/Buttons.FrontendTitleButton.style\' visible = \'$IsHeading$\'\>
$Credit$
\</Button\></Template>
<Namespace Name='Images'>
<ImageStyle Name='Image1'>
<ImageFrame>
<ImageFragment Source='ui_shell_credits_image1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_credits_image1_01' SourceRect='0,0,96,128'/>
<ImageFragment Offset='256,128' Source='ui_shell_credits_image1_02' SourceRect='0,0,96,128'/>
<ImageFragment Offset='0,256' Source='ui_shell_credits_image1_03' SourceRect='0,0,128,48'/>
<ImageFragment Offset='128,256' Source='ui_shell_credits_image1_04' SourceRect='0,0,128,48'/>
<ImageFragment Offset='256,256' Source='ui_shell_credits_image1_05' SourceRect='0,0,96,48'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Image2'>
<ImageFrame SourceRect='0,0,352,576'>
<ImageFragment Source='ui_shell_credits_image2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_credits_image2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_credits_image2_02' SourceRect='0,0,96,128'/>
<ImageFragment Offset='256,128' Source='ui_shell_credits_image2_03' SourceRect='0,0,96,128'/>
<ImageFragment Offset='256,256' Source='ui_shell_credits_image2_04' SourceRect='0,0,96,128'/>
<ImageFragment Offset='256,384' Source='ui_shell_credits_image2_05' SourceRect='0,0,96,128'/>
<ImageFragment Offset='0,512' Source='ui_shell_credits_image2_06' SourceRect='0,0,128,64'/>
<ImageFragment Offset='128,512' Source='ui_shell_credits_image2_07' SourceRect='0,0,128,64'/>
<ImageFragment Offset='256,512' Source='ui_shell_credits_image2_08' SourceRect='0,0,96,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Image3'>
<ImageFrame>
<ImageFragment Source='ui_shell_credits_image3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_credits_image3_01' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_shell_credits_image3_02' SourceRect='0,0,16,128'/>
<ImageFragment Offset='256,128' Source='ui_shell_credits_image3_03' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_shell_credits_image3_04' SourceRect='0,0,16,128'/>
<ImageFragment Offset='0,256' Source='ui_shell_credits_image3_05' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_shell_credits_image3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_shell_credits_image3_07' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_shell_credits_image3_08' SourceRect='0,0,16,128'/>
<ImageFragment Offset='0,384' Source='ui_shell_credits_image3_09' SourceRect='0,0,128,112'/>
<ImageFragment Offset='128,384' Source='ui_shell_credits_image3_10' SourceRect='0,0,128,112'/>
<ImageFragment Offset='256,384' Source='ui_shell_credits_image3_11' SourceRect='0,0,128,112'/>
<ImageFragment Offset='384,384' Source='ui_shell_credits_image3_12' SourceRect='0,0,16,112'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Image4'>
<ImageFrame>
<ImageFragment Source='ui_shell_credits_image4_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_credits_image4_01' SourceRect='0,0,64,128'/>
<ImageFragment Offset='256,128' Source='ui_shell_credits_image4_02' SourceRect='0,0,64,128'/>
<ImageFragment Offset='0,256' Source='ui_shell_credits_image4_03' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_shell_credits_image4_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_shell_credits_image4_05' SourceRect='0,0,64,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Image5'>
<ImageFrame>
<ImageFragment Source='ui_shell_credits_image5_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_credits_image5_01' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_shell_credits_image5_02' SourceRect='0,0,80,128'/>
<ImageFragment Offset='256,128' Source='ui_shell_credits_image5_03' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_shell_credits_image5_04' SourceRect='0,0,80,128'/>
<ImageFragment Offset='0,256' Source='ui_shell_credits_image5_05' SourceRect='0,0,128,64'/>
<ImageFragment Offset='128,256' Source='ui_shell_credits_image5_06' SourceRect='0,0,128,64'/>
<ImageFragment Offset='256,256' Source='ui_shell_credits_image5_07' SourceRect='0,0,128,64'/>
<ImageFragment Offset='384,256' Source='ui_shell_credits_image5_08' SourceRect='0,0,80,64'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Image6'>
<ImageFrame>
<ImageFragment Source='ui_shell_credits_image6_00' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,0' Source='ui_shell_credits_image6_01' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,0' Source='ui_shell_credits_image6_02' SourceRect='0,0,66,128'/>
<ImageFragment Offset='0,128' Source='ui_shell_credits_image6_03' SourceRect='0,0,128,47'/>
<ImageFragment Offset='128,128' Source='ui_shell_credits_image6_04' SourceRect='0,0,128,47'/>
<ImageFragment Offset='256,128' Source='ui_shell_credits_image6_05' SourceRect='0,0,66,47'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Image7'>
<ImageFrame>
<ImageFragment Source='ui_shell_credits_image7_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_credits_image7_01' SourceRect='0,0,112,128'/>
<ImageFragment Offset='256,128' Source='ui_shell_credits_image7_02' SourceRect='0,0,112,128'/>
<ImageFragment Offset='0,256' Source='ui_shell_credits_image7_03' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_shell_credits_image7_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_shell_credits_image7_05' SourceRect='0,0,112,128'/>
<ImageFragment Offset='0,384' Source='ui_shell_credits_image7_06' SourceRect='0,0,128,48'/>
<ImageFragment Offset='128,384' Source='ui_shell_credits_image7_07' SourceRect='0,0,128,48'/>
<ImageFragment Offset='256,384' Source='ui_shell_credits_image7_08' SourceRect='0,0,112,48'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Image8'>
<ImageFrame>
<ImageFragment Source='ui_shell_credits_image8_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_credits_image8_01' SourceRect='0,0,96,128'/>
<ImageFragment Offset='256,128' Source='ui_shell_credits_image8_02' SourceRect='0,0,96,128'/>
<ImageFragment Offset='0,256' Source='ui_shell_credits_image8_03' SourceRect='0,0,128,112'/>
<ImageFragment Offset='128,256' Source='ui_shell_credits_image8_04' SourceRect='0,0,128,112'/>
<ImageFragment Offset='256,256' Source='ui_shell_credits_image8_05' SourceRect='0,0,96,112'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Image9'>
<ImageFrame>
<ImageFragment Source='ui_shell_credits_image9_00' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,0' Source='ui_shell_credits_image9_01' SourceRect='0,0,58,128'/>
<ImageFragment Offset='0,128' Source='ui_shell_credits_image9_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,128' Source='ui_shell_credits_image9_03' SourceRect='0,0,58,128'/>
<ImageFragment Offset='0,256' Source='ui_shell_credits_image9_04' SourceRect='0,0,128,76'/>
<ImageFragment Offset='128,256' Source='ui_shell_credits_image9_05' SourceRect='0,0,58,76'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Image10'>
<ImageFrame>
<ImageFragment Source='ui_shell_credits_image10_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_credits_image10_01' SourceRect='0,0,112,128'/>
<ImageFragment Offset='256,128' Source='ui_shell_credits_image10_02' SourceRect='0,0,112,128'/>
<ImageFragment Offset='0,256' Source='ui_shell_credits_image10_03' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_shell_credits_image10_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_shell_credits_image10_05' SourceRect='0,0,112,128'/>
<ImageFragment Offset='0,384' Source='ui_shell_credits_image10_06' SourceRect='0,0,128,48'/>
<ImageFragment Offset='128,384' Source='ui_shell_credits_image10_07' SourceRect='0,0,128,48'/>
<ImageFragment Offset='256,384' Source='ui_shell_credits_image10_08' SourceRect='0,0,112,48'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Image11'>
<ImageFrame SourceRect='0,0,176,496'>
<ImageFragment Source='ui_shell_credits_image11_00' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,0' Source='ui_shell_credits_image11_01' SourceRect='0,0,48,128'/>
<ImageFragment Offset='0,128' Source='ui_shell_credits_image11_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,128' Source='ui_shell_credits_image11_03' SourceRect='0,0,48,128'/>
<ImageFragment Offset='0,256' Source='ui_shell_credits_image11_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_shell_credits_image11_05' SourceRect='0,0,48,128'/>
<ImageFragment Offset='0,384' Source='ui_shell_credits_image11_06' SourceRect='0,0,128,112'/>
<ImageFragment Offset='128,384' Source='ui_shell_credits_image11_07' SourceRect='0,0,48,112'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Image12'>
<ImageFrame>
<ImageFragment Source='ui_shell_credits_image12_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_credits_image12_01' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_shell_credits_image12_02' SourceRect='0,0,32,128'/>
<ImageFragment Offset='0,256' Source='ui_shell_credits_image12_03' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,256' Source='ui_shell_credits_image12_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='256,256' Source='ui_shell_credits_image12_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='0,384' Source='ui_shell_credits_image12_06' SourceRect='0,0,128,64'/>
<ImageFragment Offset='128,384' Source='ui_shell_credits_image12_07' SourceRect='0,0,128,64'/>
<ImageFragment Offset='256,384' Source='ui_shell_credits_image12_08' SourceRect='0,0,32,64'/>
</ImageFrame>
</ImageStyle>
</Namespace>
</Page>
