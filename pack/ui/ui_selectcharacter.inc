<Page Name='WorldCharacterManagement' PackLocation='Center,Center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Page Location='81,519' Name='EmpireDisabled' ScrollExtent='406,40' Size='406,40'>
<Text Color='#72C9D1' Font='/Fonts.Agency24' LocalText='[@EmpirePlayDisabled]' Location='44,4' Name='Message' ScrollExtent='273,32' Size='273,32' TextAlignment='Right' TextAlignmentVertical='Center'>@EmpirePlayDisabled</Text>
<Text Color='#FF0000' Font='/Fonts.Agency24' LocalText='00:00:00' Location='322,4' Name='Timer' ScrollExtent='78,32' Size='78,32' TextAlignmentVertical='Center'>00:00:00</Text>
<Image AbsorbsInput='false' Location='10,4' Name='EmpireIcon' PackLocation='left,top' PackLocationProp='0010/0001,0004/0001' ScrollExtent='32,32' Size='32,32' Style='/Frontend.MiniVS'/>
<Image BackgroundOpacity='1.000' Name='Box' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/Frontend.Box.style' ScrollExtent='406,40' Size='406,40' Stretch='false' Style=' '/>
</Page>
<Button LocalText='[@WorldCharacterCreateButton]' Location='81,419' Name='Create' PackLocation='fff,fpf' PackLocationProp='-537/0001,-309/0768' PackSize='p,f' PackSizeProp='0406/1024,0002/0003' ScrollExtent='406,40' Size='406,40' Style='/Buttons.FrontendButton.style' TooltipStyle='/Tooltips.Default'>@WorldCharacterCreateButton</Button>
<Button LocalText='[@WorldCharacterDeleteButton]' Location='81,469' Name='Delete' PackLocation='fff,fpf' PackLocationProp='-537/0001,-259/0768' PackSize='p,f' PackSizeProp='0406/1024,0002/0003' ScrollExtent='406,40' Size='406,40' Style='/Buttons.FrontendButton.style' TooltipStyle='/Tooltips.Default'>@WorldCharacterDeleteButton</Button>
<Page Location='81,54' Name='CharacterSelect' PackLocation='cpc,top' PackLocationProp='-228/1024,0054/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='406,355' Size='406,355'>
<Scrollbar Control='CharacterList' Location='392,49' Name='Scroll' PackLocation='right,top' PackLocationProp='-014/0001,0049/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0057/0001' ScrollExtent='9,298' Size='9,298' SizeIncrement='1,15' Style='/ScrollBars.frontend_vertical.style'/>
<Text Color='#72C9D1' Font='/Fonts.Agency24' LocalText='[@CR]' Location='305,10' Name='CR' ScrollExtent='50,30' Size='50,30' TextAlignment='Center' TextAlignmentVertical='Center' TooltipStyle='/Tooltips.Default'>@CR</Text>
<Text Color='#72C9D1' Font='/Fonts.Agency24' LocalText='[@BR]' Location='253,10' Name='BR' ScrollExtent='50,30' Size='50,30' TextAlignment='Center' TextAlignmentVertical='Center' TooltipStyle='/Tooltips.Default'>@BR</Text>
<ListboxStyle Name='CharacterListboxStyle'/>
<DataSource Name='Characters'>
<Data br='4' cr='1' empire='NC' Name='Character8' selected='false' textcolor='#72C9D1'/>
<Data br='4' cr='1' empire='vs' Name='Character7' selected='false' textcolor='#72C9D1'/>
<Data br='4' cr='1' empire='NC' Name='Character6' selected='false' textcolor='#909090'/>
<Data br='4' cr='5' empire='NC' Name='Character5' selected='false' textcolor='#909090'/>
<Data br='4' cr='1' empire='vs' Name='Character4' selected='false' textcolor='#72C9D1'/>
<Data br='20' cr='1' empire='tr' Name='Character3' selected='true' textcolor='#72C9D1'/>
<Data br='4' cr='1' empire='tr' Name='Namewithdanglythingamajigsp' selected='false' textcolor='#72C9D1'/>
<Data br='4' cr='1' empire='NC' Name='Character1' selected='false' textcolor='#72C9D1'/>
</DataSource>
<Template Name='CharacterTemplate' Size='388,36'>\<text color = \'$textcolor$\' font = \'/Fonts.Agency20\' location = \'4,4\' size = \'270,30\'\>
$CharacterName$
\</text\>
\<text color = \'$textcolor$\' font = \'/Fonts.Agency20\' location = \'262,4\' size = \'20,30\' textalignment = \'Center\'\>
$BR$
\</text\>
\<text color = \'$textcolor$\' font = \'/Fonts.Agency20\' location = \'315,4\' size = \'20,30\' textalignment = \'Center\'\>
$CR$
\</text\>
\<image location = \'350,2\' size = \'28,28\' style = \'/Frontend.Mini$Empire$\'/\>
\<Image backgroundopacity = \'1.000\' rstyledefault = \'/Frontend.Box.style\' size = \'378,32\' stretch = \'false\' style = \' \' visible = \'$selected$\'/\></Template>
<Text Color='#72C9D1' Font='/Fonts.Agency24' LocalText='[@Name]' Location='15,10' Name='Name' ScrollExtent='192,30' Size='192,30' TextAlignmentVertical='Center' TooltipStyle='/Tooltips.Default'>@Name</Text>
<Listbox DataSource='Characters' Location='7,52' Name='CharacterList' RowTemplate='CharacterTemplate' ScrollExtent='388,295' SelectedItemIndex='2' Size='382,295' Style='CharacterListboxStyle'/>
<Button Enabled='false' Location='9,10' Name='NewsTopicHeading' PackLocation='left,top' PackLocationProp='0009/0001,0010/0001' PackSize='absolute,fixed' PackSizeProp='0018/0001,0002/0003' ScrollExtent='388,30' Size='388,30' Style='/Buttons.FrontendTitleButton.style' TooltipStyle='/Tooltips.Default'></Button>
<Image BackgroundOpacity='1.000' Name='Box' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/Frontend.Box.style' ScrollExtent='406,355' Size='406,355' Stretch='false' Style=' '/>
</Page>
<Page Location='537,54' Name='CharacterView' PackLocation='fff,top' PackLocationProp='-062/0001,0054/0001' PackSize='proportional,proportional' PackSizeProp='0425/1024,0653/0768' ScrollExtent='425,653' Size='425,653'>
<Button LocalText='New Button' Location='114,605' Name='RotateLeft' PackLocation='center,bottom' PackLocationProp='-098/0001,-048/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='17,12' Size='17,12' Style='/Buttons.CharacterCreateRotateLeft.style' TooltipStyle='/Tooltips.Default'>New Button</Button>
<Button LocalText='New Button' Location='289,605' Name='RotateRight' PackLocation='center,bottom' PackLocationProp='0077/0001,-048/0001' ScrollExtent='17,12' Size='17,12' Style='/Buttons.CharacterCreateRotateRight.style' TooltipStyle='/Tooltips.Default'>New Button</Button>
<Button LocalText='New Button' Location='190,604' Name='ZoomIn' PackLocation='center,bottom' PackLocationProp='-022/0001,-049/0001' ScrollExtent='15,15' Size='15,15' Style='/Buttons.CharacterCreateZoomIn.style' TooltipStyle='/Tooltips.Default'>New Button</Button>
<Button LocalText='New Button' Location='219,608' Name='ZoomOut' PackLocation='center,bottom' PackLocationProp='0007/0001,-045/0001' ScrollExtent='16,6' Size='16,6' Style='/Buttons.CharacterCreateZoomOut.style' TooltipStyle='/Tooltips.Default'>New Button</Button>
<GameObjectView Location='10,10' Name='3DCharacterView' PackSize='absolute,absolute' PackSizeProp='0020/0001,0020/0001' ScrollExtent='405,633' Size='405,633'/>
<Image Location='-11,34' Name='VSBackground' Opacity='0.300' PackSize='absolute,absolute' PackSizeProp='-026/0001,0049/0001' ScrollExtent='451,604' Size='451,604' Style='/Plates.ShellVSBackground' Visible='false'/>
<Image Location='-8,10' Name='TRBackground' Opacity='0.300' PackSize='absolute,absolute' PackSizeProp='-026/0001,-026/0001' ScrollExtent='451,679' Size='451,679' Style='/Plates.ShellTRBackground' Visible='false'/>
<Image Location='-11,60' Name='NCBackground' Opacity='0.300' PackSize='absolute,absolute' PackSizeProp='-026/0001,0111/0001' ScrollExtent='451,542' Size='451,542' Style='/Plates.ShellNCBackground' Visible='false'/>
<Image Location='-3,52' Name='MapImage' ScrollExtent='432,528' Size='432,528' Style='/Frontend.ZoneImages.Map01Style'/>
<Image BackgroundOpacity='1.000' Name='Box' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/Frontend.Box.style' ScrollExtent='425,653' Size='425,653' Stretch='false' Style=' '/>
</Page>
<Page Location='81,567' Name='EmpireIncentives' PackLocation='cpc,bottom' PackLocationProp='-228/1024,-201/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='406,140' Size='406,140'>
<Button BackgroundOpacity='0.000' Name='Tooltip' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='406,140' Size='406,140'></Button>
<Text Color='#72C9D1' Font='/Fonts.HudFont3' LocalText='[@EmpireCounts_FrontEndTitle]' Location='45,7' Name='Title' PackLocation='left,top' PackLocationProp='0045/0001,0007/0001' PackSize='absolute,fixed' PackSizeProp='0241/0001,0002/0003' ScrollExtent='165,34' Size='165,24' TextAlignment='Center' TextAlignmentVertical='Center'>@EmpireCounts_FrontEndTitle</Text>
<Text Color='#72C9D1' Font='/Fonts.HudFont3' LocalText='[@EmpireIncentives_FrontEndTitle]' Location='217,7' Name='Title' PackLocation='right,top' PackLocationProp='-189/0001,0007/0001' PackSize='absolute,fixed' PackSizeProp='0220/0001,0002/0003' ScrollExtent='186,34' Size='186,24' TextAlignment='Center' TextAlignmentVertical='Center'>@EmpireIncentives_FrontEndTitle</Text>
<Button Enabled='false' LocalText='Planetside' Location='227,33' Name='TRIncentive' PackLocation='right,top' PackLocationProp='-179/0001,0033/0001' PackSize='absolute,fixed' PackSizeProp='0239/0001,0002/0003' ScrollExtent='167,30' Size='167,30' Style='/Buttons.FrontendTitleButton.style' TooltipStyle='/Tooltips.Default'>Planetside</Button>
<Button Enabled='false' LocalText='Planetside' Location='226,68' Name='NCIncentive' PackLocation='right,top' PackLocationProp='-180/0001,0068/0001' PackSize='absolute,fixed' PackSizeProp='0239/0001,0002/0003' ScrollExtent='167,30' Size='167,30' Style='/Buttons.FrontendTitleButton.style' TooltipStyle='/Tooltips.Default'>Planetside</Button>
<Button Enabled='false' LocalText='Planetside' Location='226,103' Name='VSIncentive' PackLocation='right,top' PackLocationProp='-180/0001,0103/0001' PackSize='absolute,fixed' PackSizeProp='0239/0001,0002/0003' ScrollExtent='167,30' Size='167,30' Style='/Buttons.FrontendTitleButton.style' TooltipStyle='/Tooltips.Default'>Planetside</Button>
<Progressbar BackgroundColor='#858585' BarBackgroundColor='#DE4E4E' Location='95,42' Name='TRProgress' PackLocation='left,top' PackLocationProp='0095/0001,0042/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' Progress='0.800' ScrollExtent='100,12' Size='100,12' Style='/ProgressBars.Health.style'/>
<Progressbar BackgroundColor='#858585' BarBackgroundColor='#6572D6' Location='95,77' Name='NCProgress' PackLocation='left,top' PackLocationProp='0095/0001,0077/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' Progress='0.800' ScrollExtent='100,12' Size='100,12' Style='/ProgressBars.Health.style'/>
<Progressbar BackgroundColor='#858585' BarBackgroundColor='#92579E' Location='95,112' Name='VSProgress' PackLocation='left,top' PackLocationProp='0095/0001,0112/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' Progress='0.800' ScrollExtent='100,12' Size='100,12' Style='/ProgressBars.Health.style'/>
<Image AbsorbsInput='false' Location='10,33' Name='TR' PackLocation='left,top' PackLocationProp='0010/0001,0033/0001' ScrollExtent='32,32' Size='32,32' Style='/Frontend.MiniTR'/>
<Image AbsorbsInput='false' Location='10,67' Name='NC' PackLocation='left,top' PackLocationProp='0010/0001,0067/0001' ScrollExtent='32,32' Size='32,32' Style='/Frontend.MiniNC'/>
<Image AbsorbsInput='false' Location='10,101' Name='VS' PackLocation='left,top' PackLocationProp='0010/0001,0101/0001' ScrollExtent='32,32' Size='32,32' Style='/Frontend.MiniVS'/>
<Text Color='#72C9D1' Font='/Fonts.Agency20' LocalText='-99%' Location='44,36' Name='XP_TR' PackLocation='left,top' PackLocationProp='0044/0001,0036/0001' ScrollExtent='48,24' Size='48,22' TextAlignment='Center'>-99%</Text>
<Text Color='#72C9D1' Font='/Fonts.Agency20' LocalText='-99%' Location='44,72' Name='XP_NC' PackLocation='left,top' PackLocationProp='0044/0001,0072/0001' ScrollExtent='48,24' Size='48,22' TextAlignment='Center'>-99%</Text>
<Text Color='#72C9D1' Font='/Fonts.Agency20' LocalText='-99%' Location='44,106' Name='XP_VS' PackLocation='left,top' PackLocationProp='0044/0001,0106/0001' ScrollExtent='48,24' Size='48,22' TextAlignment='Center'>-99%</Text>
<Image BackgroundOpacity='1.000' Name='Box' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/Frontend.Box.style' ScrollExtent='406,140' Size='406,140' Stretch='false' Style=' '/>
</Page>
<Page Name='FrontendBasic' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768'>
<Button LocalText='[@FrontendBackButton]' Location='5,723' Name='BackButton' PackLocation='left,bottom' PackLocationProp='0005/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='120,40' Size='120,40' Style='/Buttons.FrontendButton.style'>@FrontendBackButton</Button>
<Button IsDefaultButton='true' LocalText='[@FrontendPlayButton]' Location='899,723' Name='NextButton' PackLocation='right,bottom' PackLocationProp='-125/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='120,40' Size='120,40' Style='/Buttons.FrontendButton.style'>@FrontendPlayButton</Button>
<Button LocalText='?' Location='487,728' Name='HelpButton' PackLocation='left,top' PackLocationProp='0487/0001,0728/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='50,35' Size='50,35' Style='/Buttons.FrontendButton.iconstyle' Visible='false'>?</Button>
<Button LocalText='[@FrontendOptionButton]' Location='562,728' Name='OptionsButton' PackLocation='cfc,bottom' PackLocationProp='0100/0001,-040/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='100,35' Size='100,35' Style='/Buttons.FrontendButton.style' Visible='false'>@FrontendOptionButton</Button>
<Button LocalText='EXIT' Location='5,723' Name='CloseButton' PackLocation='left,bottom' PackLocationProp='0005/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='120,40' Size='120,40' Style='/Buttons.FrontendButton.style' Visible='false'>EXIT</Button>
<Image BackgroundOpacity='1.000' Location='15,10' Name='ThickTop' PackLocation='left,top' PackLocationProp='0015/0001,0010/0001' PackSize='absolute,fixed' PackSizeProp='0029/0001,0002/0003' RStyleDefault='/Frontend.Thick.style' ScrollExtent='995,4' Size='995,4' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='125,754' Name='ThickBottom' PackLocation='left,bottom' PackLocationProp='0125/0001,-014/0001' PackSize='absolute,fixed' PackSizeProp='0612/0001,0002/0003' RStyleDefault='/Frontend.Thick.style' ScrollExtent='412,4' Size='412,4' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='537,754' Name='ThickBottom2' PackLocation='left,bottom' PackLocationProp='0537/0001,-014/0001' PackSize='absolute,fixed' PackSizeProp='0662/0001,0002/0003' RStyleDefault='/Frontend.Thick.style' ScrollExtent='362,4' Size='362,4' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='11,10' Name='ThickLeft' PackLocation='left,top' PackLocationProp='0011/0001,0010/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0056/0001' RStyleDefault='/Frontend.Thick.style' ScrollExtent='4,712' Size='4,712' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='1010,10' Name='ThickRight' PackLocation='right,top' PackLocationProp='-014/0001,0010/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0056/0001' RStyleDefault='/Frontend.Thick.style' ScrollExtent='4,712' Size='4,712' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='979,37' Name='EastBorder' PackLocation='right,top' PackLocationProp='-045/0001,0037/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0083/0001' RStyleDefault='/Frontend.EastBorder.style' ScrollExtent='21,685' Size='21,685' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='24,28' Name='WestBorder' PackLocation='left,top' PackLocationProp='0024/0001,0028/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0073/0001' RStyleDefault='/Frontend.WestBorder.style' ScrollExtent='21,695' Size='21,695' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='125,722' Name='SouthBorder' PackLocation='left,bottom' PackLocationProp='0125/0001,-046/0001' PackSize='absolute,fixed' PackSizeProp='0250/0001,0002/0003' RStyleDefault='/Frontend.SouthBorder.style' ScrollExtent='774,22' Size='774,22' Stretch='false' Style=' '/>
<Image BackgroundOpacity='1.000' Location='24,24' Name='NorthBorder' PackLocation='left,top' PackLocationProp='0024/0001,0024/0001' PackSize='absolute,fixed' PackSizeProp='0057/0001,0002/0003' RStyleDefault='/Frontend.NorthBorder.style' ScrollExtent='967,22' Size='967,22' Stretch='false' Style=' '/>
<Image Color='#E9DAC0' Name='Planet' ScrollExtent='1024,768' Size='1024,768' Stretch='false' Style='/Plates.PlanetBackground'/>
</Page>
</Page>
