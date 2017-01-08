<Page Name='OverheadMap' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' runengine='false' ScrollExtent='1024,768' Size='1024,768' Visible='false' wantsinput='Shared'>
<Page heightwithoutrole='0,193' heightwithrole='117' Location='400,300' movable='true' Name='DeployableDeconstruct' PackLocation='left,top' PackLocationProp='0400/0001,0300/0001' ScrollExtent='211,97' ShowSound='interface_feedback_rollover.wav' Size='211,97' Visible='false'>
<Text AbsorbsInput='false' Color='#00F2C9' Enabled='false' Font='/Fonts.HudFont2' LocalText='100/100' Location='21,10' Name='Text' PackLocation='left,top' PackLocationProp='0021/0001,0010/0001' PackSize='absolute,absolute' PackSizeProp='0037/0001,0062/0001' ScrollExtent='174,35' Size='174,35' TextAlignment='Center'>100/100</Text>
<Button LocalText='[@DeconstructVehicle]' Location='25,53' Name='AcceptButton' PackLocation='Center,bottom' PackLocationProp='-080/0001,-044/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DeconstructVehicle</Button>
<Button LocalText='[@Cancel]' Location='116,53' Name='DeclineButton' PackLocation='center,bottom' PackLocationProp='0011/0001,-044/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='19,47' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0019/0001,-050/0001' PackSize='absolute,fixed' PackSizeProp='0034/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='177,32' Size='177,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='2,0' Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='211,97' Size='211,97' Stretch='false' Style=' '/>
</Page>
<Page Location='381,113' movable='true' Name='ShieldGeneratorInfo' PackLocation='left,bottom' PackLocationProp='0381/0001,-655/0001' ScrollExtent='250,173' ShowSound='interface_feedback_rollover.wav' Size='250,173' Visible='false'>
<Button LocalText='[@DeconstructVehicle]' Location='89,128' Name='Deconstruct' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DeconstructVehicle</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='17,123' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='216,31' Size='216,31'/>
<Page Location='15,0' Name='Title' ScrollExtent='220,32' Size='220,32'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@ShieldGeneratorInfoTitle]' Location='70,8' Name='TitleText' PackLocation='left,top' PackLocationProp='0070/0001,0008/0001' PackSize='absolute,fixed' PackSizeProp='0139/0001,0002/0003' ScrollExtent='81,51' Size='81,20' TextAlignment='Center' TextAlignmentVertical='Center'>@ShieldGeneratorInfoTitle</Text>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='40,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0040/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='160,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-060/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Image BackgroundOpacity='1.000' Name='Title' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' RStyleDefault='/WindowPanes.TitleBarFocus.style' ScrollExtent='220,32' Size='220,32'/>
</Page>
<Image Location='30,37' Name='HealthIcon' ScrollExtent='16,16' Size='16,16' Style='/Icons.Map.Facility.ShieldGeneratorHealth_icon'/>
<Text Font='/Fonts.HudFont2' LocalText='[@ShieldGeneratorHealth]' Location='58,34' Name='HealthText' ScrollExtent='172,18' Size='172,18' TextAlignmentVertical='Center'>@ShieldGeneratorHealth</Text>
<Text Font='/Fonts.HudFont2' LocalText='100%' Location='58,34' Name='HealthStatus' ScrollExtent='172,18' Size='172,18' TextAlignment='Right' TextAlignmentVertical='Center'>100%</Text>
<Image Location='30,56' Name='ShieldIcon' ScrollExtent='16,16' Size='16,16' Style='/Icons.Map.Facility.ShieldGeneratorShield_icon'/>
<Text Font='/Fonts.HudFont2' LocalText='[@ShieldGeneratorShield]' Location='58,54' Name='ShieldText' ScrollExtent='172,18' Size='172,18' TextAlignmentVertical='Center'>@ShieldGeneratorShield</Text>
<Text Font='/Fonts.HudFont2' LocalText='50%' Location='58,54' Name='ShieldStatus' ScrollExtent='172,18' Size='172,18' TextAlignment='Right' TextAlignmentVertical='Center'>50%</Text>
<Image Location='30,74' Name='AmmoIcon' ScrollExtent='16,18' Size='16,18' Style='/Icons.Map.Facility.ShieldGeneratorAmmo_icon'/>
<Text Font='/Fonts.HudFont2' LocalText='[@ShieldGeneratorAmmo]' Location='58,74' Name='AmmoText' ScrollExtent='172,18' Size='172,18' TextAlignmentVertical='Center'>@ShieldGeneratorAmmo</Text>
<Text Font='/Fonts.HudFont2' LocalText='0%' Location='58,74' Name='AmmoStatus' ScrollExtent='172,18' Size='172,18' TextAlignment='Right' TextAlignmentVertical='Center'>0%</Text>
<Image Location='31,94' Name='RadarIcon' ScrollExtent='16,18' Size='16,18' Style='/Icons.Map.Facility.ShieldGeneratorRadar_icon'/>
<Text Font='/Fonts.HudFont2' LocalText='[@ShieldGeneratorRadar]' Location='58,94' Name='RadarText' ScrollExtent='172,18' Size='172,18' TextAlignmentVertical='Center'>@ShieldGeneratorRadar</Text>
<Text Font='/Fonts.HudFont2' LocalText='0%' Location='58,94' Name='RadarStatus' ScrollExtent='172,18' Size='172,18' TextAlignment='Right' TextAlignmentVertical='Center'>0%</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='18,34' Name='FacilityBenefitsRect' Opacity='0.750' ScrollExtent='215,84' Size='215,84'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='250,157' Size='250,157' Stretch='false' Style=' '/>
</Page>
<Text Font='/Fonts.HudFont2' LocalText='[@CommanderEditMode]' Location='10,741' Name='CommanderEditMode' PackLocation='left,top' PackLocationProp='0010/0001,0741/0001' PackSize='absolute,fixed' PackSizeProp='0724/0001,0002/0003' ScrollExtent='300,20' Size='300,20' TextAlignmentVertical='Center' Visible='false'>@CommanderEditMode</Text>
<Page Name='TitleBar' PackSize='1,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,24' Size='1024,24'>
<Button LocalText='[@OverheadMapBattleplan]' Location='413,5' Name='BattleplanButton' PackLocation='right,top' PackLocationProp='-611/0001,0005/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='115,16' Size='115,16' Style='/Buttons.TextButton.style'>@OverheadMapBattleplan</Button>
<Button LocalText='[@OverheadMapCommand]' Location='534,4' Name='CommanderButton' PackLocation='right,top' PackLocationProp='-490/0001,0004/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='115,16' Size='115,16' Style='/Buttons.TextButton.style'>@OverheadMapCommand</Button>
<Button LocalText='[@OverheadToggleToolbar]' Location='655,4' Name='TogglesButton' PackLocation='right,top' PackLocationProp='-369/0001,0004/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='115,16' Size='115,16' Style='/Buttons.TextButton.style'>@OverheadToggleToolbar</Button>
<Button LocalText='[@OverheadMapToolbar]' Location='776,4' Name='ActionsButton' PackLocation='right,top' PackLocationProp='-248/0001,0004/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='115,16' Size='115,16' Style='/Buttons.TextButton.style'>@OverheadMapToolbar</Button>
<Button LocalText='[@OverheadMapLegend]' Location='897,4' Name='LegendButton' PackLocation='right,top' PackLocationProp='-127/0001,0004/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='115,16' Size='115,16' Style='/Buttons.TextButton.style'>@OverheadMapLegend</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='10,4' Name='HelpButton' PackLocation='left,top' PackLocationProp='0010/0001,0004/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='36,4' Name='CloseButton' PackLocation='left,top' PackLocationProp='0036/0001,0004/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Text Font='/Fonts.HudFont3' LocalText='[@MapTitle]' Location='62,2' Name='TitleText' PackLocation='left,top' PackLocationProp='0062/0001,0002/0001' PackSize='absolute,fixed' PackSizeProp='0677/0001,0002/0003' ScrollExtent='347,20' Size='347,20' TextAlignmentVertical='Center'>@MapTitle</Text>
<Image BackgroundColor='#4A5C66' BackgroundOpacity='1.000' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='1024,24' Size='1024,24'/>
</Page>
<Page BackgroundOpacity='1.000' Name='InterstellarMap' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Text AbsorbsInput='false' Color='#00FFEC' Enabled='false' Font='/Fonts.DefaultFont' GetsInput='false' LocalText='Here is a bunch of text\\nI just wanted to be able to see what it looked like here' Location='172,585' minheight='24' Name='InfoText' PackLocation='proportional,proportional' PackLocationProp='0312/1024,0674/0768' PackSize='proportional,proportional' PackSizeProp='0280/1024,0179/0768' ScrollExtent='280,179' Size='280,179' TextAlignmentVertical='Bottom'>Here is a bunch of text\\nI just wanted to be able to see what it looked like here</Text>
<Page AbsorbsInput='false' Name='Stars' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='1024,768' Size='1024,768'>
<Page issanctuary='true' isstar='true' Location='509,490' Name='VS' PackLocation='proportional,proportional' PackLocationProp='0529/1024,0510/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='13' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Image Color='#5DBAC1' Location='1,1' Name='BWG' Opacity='0.900' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0002/0001,0002/0001' ScrollExtent='38,38' Size='38,38' Style='/Icons.Map.Misc.BWG'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page issanctuary='true' isstar='true' Location='673,345' Name='TR' PackLocation='proportional,proportional' PackLocationProp='0693/1024,0365/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='12' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Image Color='#5DBAC1' Location='1,1' Name='BWG' Opacity='0.900' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0002/0001,0002/0001' ScrollExtent='38,38' Size='38,38' Style='/Icons.Map.Misc.BWG'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page issanctuary='true' isstar='true' Location='309,264' Name='NC' PackLocation='proportional,proportional' PackLocationProp='0329/1024,0284/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='11' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Image Color='#5DBAC1' Location='1,1' Name='BWG' Opacity='0.900' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0002/0001,0002/0001' ScrollExtent='38,38' Size='38,38' Style='/Icons.Map.Misc.BWG'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page isstar='true' Location='615,426' Name='Solsar' PackLocation='proportional,proportional' PackLocationProp='0635/1024,0446/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='1' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Image Color='#5DBAC1' Location='1,1' Name='BWG' Opacity='0.900' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0002/0001,0002/0001' ScrollExtent='38,38' Size='38,38' Style='/Icons.Map.Misc.BWG'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page isstar='true' Location='224,416' Name='Hossin' PackLocation='proportional,proportional' PackLocationProp='0244/1024,0436/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='2' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Image Color='#5DBAC1' Location='1,1' Name='BWG' Opacity='0.900' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0002/0001,0002/0001' ScrollExtent='38,38' Size='38,38' Style='/Icons.Map.Misc.BWG'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page isstar='true' Location='763,407' Name='Cyssor' PackLocation='proportional,proportional' PackLocationProp='0783/1024,0427/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='3' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Image Color='#5DBAC1' Location='1,1' Name='BWG' Opacity='0.900' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0002/0001,0002/0001' ScrollExtent='38,38' Size='38,38' Style='/Icons.Map.Misc.BWG'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page isstar='true' Location='404,249' Name='Ishundar' PackLocation='proportional,proportional' PackLocationProp='0424/1024,0269/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='4' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Image Color='#5DBAC1' Location='1,1' Name='BWG' Opacity='0.900' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0002/0001,0002/0001' ScrollExtent='38,38' Size='38,38' Style='/Icons.Map.Misc.BWG'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page isstar='true' Location='527,306' Name='Forseral' PackLocation='proportional,proportional' PackLocationProp='0547/1024,0326/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='5' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Image Color='#5DBAC1' Location='1,1' Name='BWG' Opacity='0.900' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0002/0001,0002/0001' ScrollExtent='38,38' Size='38,38' Style='/Icons.Map.Misc.BWG'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page isstar='true' Location='693,537' Name='Ceryshen' PackLocation='proportional,proportional' PackLocationProp='0713/1024,0557/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='6' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Image Color='#5DBAC1' Location='1,1' Name='BWG' Opacity='0.900' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0002/0001,0002/0001' ScrollExtent='38,38' Size='38,38' Style='/Icons.Map.Misc.BWG'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page isstar='true' Location='650,249' Name='Esamir' PackLocation='proportional,proportional' PackLocationProp='0670/1024,0269/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='7' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Image Color='#5DBAC1' Location='1,1' Name='BWG' Opacity='0.900' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0002/0001,0002/0001' ScrollExtent='38,38' Size='38,38' Style='/Icons.Map.Misc.BWG'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page isstar='true' Location='485,388' Name='Oshur' PackLocation='proportional,proportional' PackLocationProp='0505/1024,0408/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='8' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Image Color='#5DBAC1' Location='1,1' Name='BWG' Opacity='0.900' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0002/0001,0002/0001' ScrollExtent='38,38' Size='38,38' Style='/Icons.Map.Misc.BWG'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page isstar='true' Location='349,537' Name='Searhus' PackLocation='proportional,proportional' PackLocationProp='0369/1024,0557/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='9' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Image Color='#5DBAC1' Location='1,1' Name='BWG' Opacity='0.900' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0002/0001,0002/0001' ScrollExtent='38,38' Size='38,38' Style='/Icons.Map.Misc.BWG'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page isstar='true' Location='383,427' Name='Amerish' PackLocation='proportional,proportional' PackLocationProp='0403/1024,0447/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='10' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Image Color='#5DBAC1' Location='1,1' Name='BWG' Opacity='0.900' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0002/0001,0002/0001' ScrollExtent='38,38' Size='38,38' Style='/Icons.Map.Misc.BWG'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page iscavern='true' isstar='true' Location='599,171' Name='Supai' PackLocation='proportional,proportional' PackLocationProp='0619/1024,0191/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='23' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page iscavern='true' isstar='true' Location='687,171' Name='Hunhau' PackLocation='proportional,proportional' PackLocationProp='0707/1024,0191/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='24' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page iscavern='true' isstar='true' Location='776,171' Name='Adlivun' PackLocation='proportional,proportional' PackLocationProp='0796/1024,0191/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='25' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page iscavern='true' isstar='true' Location='333,171' Name='Byblos' PackLocation='proportional,proportional' PackLocationProp='0353/1024,0191/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='26' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page iscavern='true' isstar='true' Location='421,171' Name='Annwn' PackLocation='proportional,proportional' PackLocationProp='0441/1024,0191/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='27' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
<Page iscavern='true' isstar='true' Location='506,171' Name='Drugaskan' PackLocation='proportional,proportional' PackLocationProp='0526/1024,0191/0768' PackSize='proportional,proportional' PackSizeProp='0040/1024,0040/0768' planetid='28' ScrollExtent='40,40' Size='40,40'>
<GameObjectView AbsorbsInput='false' GetsInput='false' Location='5,5' Name='3DStar' PackLocation='proportional,proportional' PackLocationProp='0020/0040,0020/0040' PackSize='absolute,absolute' PackSizeProp='0010/0001,0010/0001' ScrollExtent='30,30' Size='30,30'/>
<Rectangle Color='#4A5C66' Name='Border' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='40,40' Size='40,40' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000' Visible='false'/>
</Page>
</Page>
<Page Name='MapPanes' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='1024,768' Size='1024,768'>
<Rectangle Location='350,35' Name='CavernMarker0' PackLocation='proportional,proportional' PackLocationProp='0360/1024,0045/0768' Visible='false'/>
<Rectangle Location='475,35' Name='CavernMarker1' PackLocation='proportional,proportional' PackLocationProp='0485/1024,0045/0768' Visible='false'/>
<Rectangle Location='600,35' Name='CavernMarker2' PackLocation='proportional,proportional' PackLocationProp='0610/1024,0045/0768' Visible='false'/>
<Rectangle Location='725,35' Name='CavernMarker3' PackLocation='proportional,proportional' PackLocationProp='0735/1024,0045/0768' Visible='false'/>
<Page BackgroundColor='#4A5C66' iscavern='true' Location='350,35' Name='Supai' PackLocation='proportional,proportional' PackLocationProp='0412/1024,0090/0768' PackSize='proportional,proportional' PackSizeProp='0124/1024,0110/0768' planetid='23' ScrollExtent='124,110' Size='124,110'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@c1]' Name='PlanetName' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='124,21' ShadowStyle='/Shadows.Default' Size='124,21' TextAlignment='Center' TextAlignmentVertical='Center'>@c1</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='122,88' Size='122,88'>
<Image continentid='23' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0022/0122,0022/0088' ScrollExtent='22,22' Size='22,22' Style='/Icons.Map.Misc.Lock_icon'/>
<Text Font='/Fonts.ChatFont' LocalText='Online in 00:00:00' Location='0,45' Name='TimeUntilOnline' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0065/0088' PackSize='proportional,proportional' PackSizeProp='0122/0122,0040/0088' ScrollExtent='122,40' Size='122,40' TextAlignment='Center' TextAlignmentVertical='Center'>Online in 00:00:00</Text>
<Image Color='#F3F42E' Location='18,1' Name='EmpireLock' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_ugd01g_outline' Visible='false'/>
<Image Location='18,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_ugd01g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='23' Location='18,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' zonename='c1'/>
<Image BackgroundOpacity='1.000' Color='#000000' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='122,88' Size='122,88' Visible='false'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='124,110' Size='124,110'/>
</Page>
<Page BackgroundColor='#4A5C66' iscavern='true' Location='350,35' Name='Hunhau' PackLocation='proportional,proportional' PackLocationProp='0412/1024,0090/0768' PackSize='proportional,proportional' PackSizeProp='0124/1024,0110/0768' planetid='24' ScrollExtent='124,110' Size='124,110'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@c2]' Name='PlanetName' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='124,21' ShadowStyle='/Shadows.Default' Size='124,21' TextAlignment='Center' TextAlignmentVertical='Center'>@c2</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='122,88' Size='122,88'>
<Image continentid='24' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0022/0122,0022/0088' ScrollExtent='22,22' Size='22,22' Style='/Icons.Map.Misc.Lock_icon'/>
<Text Font='/Fonts.ChatFont' LocalText='Online in 00:00:00' Location='0,45' Name='TimeUntilOnline' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0065/0088' PackSize='proportional,proportional' PackSizeProp='0122/0122,0040/0088' ScrollExtent='122,40' Size='122,40' TextAlignment='Center' TextAlignmentVertical='Center'>Online in 00:00:00</Text>
<Image Color='#F3F42E' Location='18,1' Name='EmpireLock' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_ugd02g_outline' Visible='false'/>
<Image Location='18,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_ugd02g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='24' Location='18,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' zonename='c2'/>
<Image BackgroundOpacity='1.000' Color='#000000' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='122,88' Size='122,88' Visible='false'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='124,110' Size='124,110'/>
</Page>
<Page BackgroundColor='#4A5C66' iscavern='true' Location='350,35' Name='Adlivun' PackLocation='proportional,proportional' PackLocationProp='0412/1024,0090/0768' PackSize='proportional,proportional' PackSizeProp='0124/1024,0110/0768' planetid='25' ScrollExtent='124,110' Size='124,110'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@c3]' Name='PlanetName' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='124,21' ShadowStyle='/Shadows.Default' Size='124,21' TextAlignment='Center' TextAlignmentVertical='Center'>@c3</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='122,88' Size='122,88'>
<Image continentid='25' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0022/0122,0022/0088' ScrollExtent='22,22' Size='22,22' Style='/Icons.Map.Misc.Lock_icon'/>
<Text Font='/Fonts.ChatFont' LocalText='Online in 00:00:00' Location='0,45' Name='TimeUntilOnline' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0065/0088' PackSize='proportional,proportional' PackSizeProp='0122/0122,0040/0088' ScrollExtent='122,40' Size='122,40' TextAlignment='Center' TextAlignmentVertical='Center'>Online in 00:00:00</Text>
<Image Color='#F3F42E' Location='18,1' Name='EmpireLock' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_ugd03g_outline'/>
<Image Location='18,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_ugd03g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='25' Location='18,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' zonename='c3'/>
<Image BackgroundOpacity='1.000' Color='#000000' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='122,88' Size='122,88' Visible='false'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='124,110' Size='124,110'/>
</Page>
<Page BackgroundColor='#4A5C66' iscavern='true' Location='475,35' Name='Byblos' PackLocation='proportional,proportional' PackLocationProp='0537/1024,0090/0768' PackSize='proportional,proportional' PackSizeProp='0124/1024,0110/0768' planetid='26' ScrollExtent='124,110' Size='124,110'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@c4]' Name='PlanetName' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='124,21' ShadowStyle='/Shadows.Default' Size='124,21' TextAlignment='Center' TextAlignmentVertical='Center'>@c4</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='122,88' Size='122,88'>
<Image continentid='26' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0022/0122,0022/0088' ScrollExtent='22,22' Size='22,22' Style='/Icons.Map.Misc.Lock_icon'/>
<Text Font='/Fonts.ChatFont' LocalText='Online in 00:00:00' Location='0,45' Name='TimeUntilOnline' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0065/0088' PackSize='proportional,proportional' PackSizeProp='0122/0122,0040/0088' ScrollExtent='122,40' Size='122,40' TextAlignment='Center' TextAlignmentVertical='Center'>Online in 00:00:00</Text>
<Image Color='#F3F42E' Location='18,1' Name='EmpireLock' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_ugd04g_outline' Visible='false'/>
<Image Location='18,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_ugd04g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='26' Location='18,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' zonename='c4'/>
<Image BackgroundOpacity='1.000' Color='#000000' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='122,88' Size='122,88' Visible='false'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='124,110' Size='124,110'/>
</Page>
<Page BackgroundColor='#4A5C66' iscavern='true' Location='725,35' Name='Annwn' OnShow='v' PackLocation='proportional,proportional' PackLocationProp='0787/1024,0090/0768' PackSize='proportional,proportional' PackSizeProp='0124/1024,0110/0768' planetid='27' ScrollExtent='124,110' Size='124,110'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@c5]' Name='PlanetName' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='124,21' ShadowStyle='/Shadows.Default' Size='124,21' TextAlignment='Center' TextAlignmentVertical='Center'>@c5</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='122,88' Size='122,88'>
<Image continentid='27' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0022/0122,0022/0088' ScrollExtent='22,22' Size='22,22' Style='/Icons.Map.Misc.Lock_icon'/>
<Text Font='/Fonts.ChatFont' LocalText='Online in 00:00:00' Location='0,45' Name='TimeUntilOnline' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0065/0088' PackSize='proportional,proportional' PackSizeProp='0122/0122,0040/0088' ScrollExtent='122,40' Size='122,40' TextAlignment='Center' TextAlignmentVertical='Center'>Online in 00:00:00</Text>
<Image Color='#F3F42E' Location='18,1' Name='EmpireLock' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_ugd05g_outline' Visible='false'/>
<Image Location='18,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_ugd05g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='27' Location='18,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' zonename='c5'/>
<Image BackgroundOpacity='1.000' Color='#000000' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='122,88' Size='122,88' Visible='false'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='124,110' Size='124,110'/>
</Page>
<Page BackgroundColor='#4A5C66' iscavern='true' Location='600,35' Name='Drugaskan' PackLocation='proportional,proportional' PackLocationProp='0662/1024,0090/0768' PackSize='proportional,proportional' PackSizeProp='0124/1024,0110/0768' planetid='28' ScrollExtent='124,110' Size='124,110'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@c6]' Name='PlanetName' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='124,21' ShadowStyle='/Shadows.Default' Size='124,21' TextAlignment='Center' TextAlignmentVertical='Center'>@c6</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='122,88' Size='122,88'>
<Image continentid='28' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0022/0122,0022/0088' ScrollExtent='22,22' Size='22,22' Style='/Icons.Map.Misc.Lock_icon'/>
<Text Font='/Fonts.ChatFont' LocalText='Online in 00:00:00' Location='0,45' Name='TimeUntilOnline' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0065/0088' PackSize='proportional,proportional' PackSizeProp='0122/0122,0040/0088' ScrollExtent='122,40' Size='122,40' TextAlignment='Center' TextAlignmentVertical='Center'>Online in 00:00:00</Text>
<Image Color='#F3F42E' Location='18,1' Name='EmpireLock' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_ugd06g_outline' Visible='false'/>
<Image Location='18,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_ugd06g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='28' Location='18,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' zonename='c6'/>
<Image BackgroundOpacity='1.000' Color='#000000' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='122,88' Size='122,88' Visible='false'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='124,110' Size='124,110'/>
</Page>
<Page BackgroundColor='#4A5C66' issanctuary='true' Location='210,35' Name='VS' PackLocation='proportional,proportional' PackLocationProp='0272/1024,0090/0768' PackSize='proportional,proportional' PackSizeProp='0124/1024,0110/0768' planetid='13' ScrollExtent='124,110' Size='124,110'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@home3]' Name='PlanetName' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='124,21' ShadowStyle='/Shadows.Default' Size='124,21' TextAlignment='Center' TextAlignmentVertical='Center'>@home3</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='122,88' Size='122,88'>
<Image AbsorbsInput='false' Location='94,2' Name='DominionIcon' PackLocation='proportional,proportional' PackLocationProp='0106/0122,0013/0088' PackSize='proportional,proportional' PackSizeProp='0025/0122,0023/0088' ScrollExtent='25,23' Size='25,23' Style='/Frontend.MiniVS'/>
<Image BackgroundOpacity='1.000' Color='#0000FF' Location='0,-2' Name='EmpireLock' PackLocation='left,top' PackLocationProp='0000/0001,-002/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,-003/0001' RStyleDefault='/Boxes.MapPane_Outline.style' ScrollExtent='122,91' Size='122,91'/>
<Image Location='18,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_map13g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='13' Location='18,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' zonename='home3'/>
<Image BackgroundOpacity='1.000' Color='#64719B' Name='Background' Opacity='0.850' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='122,88' Size='122,88'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='124,110' Size='124,110'/>
</Page>
<Page BackgroundColor='#4A5C66' issanctuary='true' Location='210,35' Name='TR' PackLocation='proportional,proportional' PackLocationProp='0272/1024,0090/0768' PackSize='proportional,proportional' PackSizeProp='0124/1024,0110/0768' planetid='12' ScrollExtent='124,110' Size='124,110'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@home2]' Name='PlanetName' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='124,21' ShadowStyle='/Shadows.Default' Size='124,21' TextAlignment='Center' TextAlignmentVertical='Center'>@home2</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='122,88' Size='122,88'>
<Image AbsorbsInput='false' Location='94,2' Name='DominionIcon' PackLocation='proportional,proportional' PackLocationProp='0106/0122,0013/0088' PackSize='proportional,proportional' PackSizeProp='0025/0122,0023/0088' ScrollExtent='25,23' Size='25,23' Style='/Frontend.MiniTR'/>
<Image BackgroundOpacity='1.000' Color='#0000FF' Location='0,-2' Name='EmpireLock' PackLocation='left,top' PackLocationProp='0000/0001,-002/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,-003/0001' RStyleDefault='/Boxes.MapPane_Outline.style' ScrollExtent='122,91' Size='122,91'/>
<Image Location='18,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_map12g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='12' Location='18,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' zonename='home2'/>
<Image BackgroundOpacity='1.000' Color='#64719B' Name='Background' Opacity='0.850' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='122,88' Size='122,88'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='124,110' Size='124,110'/>
</Page>
<Page BackgroundColor='#4A5C66' issanctuary='true' Location='210,35' Name='NC' PackLocation='proportional,proportional' PackLocationProp='0272/1024,0090/0768' PackSize='proportional,proportional' PackSizeProp='0124/1024,0110/0768' planetid='11' ScrollExtent='124,110' Size='124,110'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@home1]' Name='PlanetName' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' ScrollExtent='124,21' ShadowStyle='/Shadows.Default' Size='124,21' TextAlignment='Center' TextAlignmentVertical='Center'>@home1</Text>
<Page AbsorbsInput='false' Enabled='false' GetsInput='false' Location='1,21' Name='StatsPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='122,88' Size='122,88' Visible='false'>
<Text Font='/Fonts.ChatFont' LocalText='Global Incentives' Name='InformationLine0' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0056/0001' ScrollExtent='122,32' Size='122,32' TextAlignment='Center' TextAlignmentVertical='Center'>Global Incentives</Text>
<Text Font='/Fonts.ChatFont' LocalText='-3 Health, -2% Exp' Location='0,33' Name='InformationLine1' PackLocation='left,bottom' PackLocationProp='0000/0001,-055/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0034/0001' ScrollExtent='122,54' Size='122,54' TextAlignment='Center' TextAlignmentVertical='Center'>-3 Health, -2% Exp</Text>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='122,88' Size='122,88'>
<Image AbsorbsInput='false' Location='94,2' Name='DominionIcon' PackLocation='proportional,proportional' PackLocationProp='0106/0122,0013/0088' PackSize='proportional,proportional' PackSizeProp='0025/0122,0023/0088' ScrollExtent='25,23' Size='25,23' Style='/Frontend.MiniNC'/>
<Image BackgroundOpacity='1.000' Color='#0000FF' Location='0,-2' Name='EmpireLock' PackLocation='left,top' PackLocationProp='0000/0001,-002/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,-003/0001' RStyleDefault='/Boxes.MapPane_Outline.style' ScrollExtent='122,91' Size='122,91'/>
<Image Location='18,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' SourceResource='ui_map11g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='11' Location='18,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0061/0122,0044/0088' PackSize='proportional,proportional' PackSizeProp='0086/0122,0086/0088' ScrollExtent='86,86' Size='86,86' zonename='home1'/>
<Image BackgroundOpacity='1.000' Color='#64719B' Name='Background' Opacity='0.850' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='122,88' Size='122,88'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='124,110' Size='124,110'/>
</Page>
<Page BackgroundColor='#4A5C66' leftside='true' Location='8,623' Name='Searhus' PackLocation='proportional,proportional' PackLocationProp='0088/1024,0695/0768' PackSize='proportional,proportional' PackSizeProp='0160/1024,0144/0768' planetid='9' ScrollExtent='160,144' Size='160,144'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z9]' Location='16,0' Name='PlanetName' PackLocation='left,top' PackLocationProp='0016/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0033/0001,0002/0003' ScrollExtent='127,21' ShadowStyle='/Shadows.Default' Size='127,21' TextAlignmentVertical='Center'>@z9</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='158,122' Size='158,122'>
<Image continentid='9' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Icons.Map.Misc.Lock_icon'/>
<Image AbsorbsInput='false' Location='128,4' Name='DominionIcon' PackLocation='proportional,proportional' PackLocationProp='0140/0158,0016/0122' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Frontend.MiniNC' Visible='false'/>
<Image BackgroundOpacity='1.000' Color='#FF00FF' Location='0,-2' Name='EmpireLock' PackLocation='left,top' PackLocationProp='0000/0001,-002/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,-004/0001' RStyleDefault='/Boxes.MapPane_Outline.style' ScrollExtent='158,126' Size='158,126' Visible='false'/>
<Image Location='19,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' SourceResource='ui_map09g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='9' Location='19,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' zonename='z9'/>
<Image BackgroundOpacity='1.000' Color='#64719B' Name='Background' Opacity='0.850' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='158,122' Size='158,122'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='160,144' Size='160,144'/>
</Page>
<Page BackgroundColor='#4A5C66' leftside='true' Location='856,329' Name='Cyssor' PackLocation='proportional,proportional' PackLocationProp='0936/1024,0401/0768' PackSize='proportional,proportional' PackSizeProp='0160/1024,0144/0768' planetid='3' ScrollExtent='160,144' Size='160,144'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z3]' Location='16,0' Name='PlanetName' PackLocation='left,top' PackLocationProp='0016/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0033/0001,0002/0003' ScrollExtent='127,21' ShadowStyle='/Shadows.Default' Size='127,21' TextAlignment='Right' TextAlignmentVertical='Center'>@z3</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='158,122' Size='158,122'>
<Image continentid='3' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Icons.Map.Misc.Lock_icon'/>
<Image AbsorbsInput='false' Location='128,4' Name='DominionIcon' PackLocation='proportional,proportional' PackLocationProp='0140/0158,0016/0122' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Frontend.MiniNC' Visible='false'/>
<Image BackgroundOpacity='1.000' Color='#FF00FF' Location='0,-2' Name='EmpireLock' PackLocation='left,top' PackLocationProp='0000/0001,-002/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,-004/0001' RStyleDefault='/Boxes.MapPane_Outline.style' ScrollExtent='158,126' Size='158,126' Visible='false'/>
<Image Location='19,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' SourceResource='ui_map03g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='3' Location='19,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' zonename='z3'/>
<Image BackgroundOpacity='1.000' Color='#64719B' Name='Background' Opacity='0.850' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='158,122' Size='158,122'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='160,144' Size='160,144'/>
</Page>
<Page BackgroundColor='#4A5C66' leftside='true' Location='856,476' Name='Solsar' PackLocation='proportional,proportional' PackLocationProp='0936/1024,0548/0768' PackSize='proportional,proportional' PackSizeProp='0160/1024,0144/0768' planetid='1' ScrollExtent='160,144' Size='160,144'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z1]' Location='16,0' Name='PlanetName' PackLocation='left,top' PackLocationProp='0016/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0033/0001,0002/0003' ScrollExtent='127,21' ShadowStyle='/Shadows.Default' Size='127,21' TextAlignment='Right' TextAlignmentVertical='Center'>@z1</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='158,122' Size='158,122'>
<Image continentid='1' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Icons.Map.Misc.Lock_icon'/>
<Image AbsorbsInput='false' Location='128,4' Name='DominionIcon' PackLocation='proportional,proportional' PackLocationProp='0140/0158,0016/0122' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Frontend.MiniNC' Visible='false'/>
<Image BackgroundOpacity='1.000' Color='#FF00FF' Location='0,-2' Name='EmpireLock' PackLocation='left,top' PackLocationProp='0000/0001,-002/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,-004/0001' RStyleDefault='/Boxes.MapPane_Outline.style' ScrollExtent='158,126' Size='158,126' Visible='false'/>
<Image Location='19,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' SourceResource='ui_map01g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='1' Location='19,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' zonename='z1'/>
<Image BackgroundOpacity='1.000' Color='#64719B' Name='Background' Opacity='0.850' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='158,122' Size='158,122'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='160,144' Size='160,144'/>
</Page>
<Page BackgroundColor='#4A5C66' leftside='true' Location='8,182' Name='Oshur' PackLocation='proportional,proportional' PackLocationProp='0088/1024,0254/0768' PackSize='proportional,proportional' PackSizeProp='0160/1024,0144/0768' planetid='8' ScrollExtent='160,144' Size='160,144'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z8]' Location='16,0' Name='PlanetName' PackLocation='left,top' PackLocationProp='0016/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0033/0001,0002/0003' ScrollExtent='127,21' ShadowStyle='/Shadows.Default' Size='127,21' TextAlignmentVertical='Center'>@z8</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='158,122' Size='158,122'>
<Image AbsorbsInput='false' Location='128,4' Name='DominionIcon' PackLocation='proportional,proportional' PackLocationProp='0140/0158,0016/0122' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Frontend.MiniNC' Visible='false'/>
<Image continentid='31' Location='8,33' Name='DesolationPopLock' PackLocation='proportional,proportional' PackLocationProp='0019/0158,0044/0122' PackSize='proportional,proportional' PackSizeProp='0022/0158,0022/0122' ScrollExtent='22,22' Size='22,22' Style='/Icons.Map.Misc.Lock_icon'/>
<Image continentid='30' Location='124,33' Name='AscensionPopLock' PackLocation='proportional,proportional' PackLocationProp='0135/0158,0044/0122' PackSize='proportional,proportional' PackSizeProp='0022/0158,0022/0122' ScrollExtent='22,22' Size='22,22' Style='/Icons.Map.Misc.Lock_icon'/>
<Image continentid='29' Location='8,94' Name='ExtinctionPopLock' PackLocation='proportional,proportional' PackLocationProp='0019/0158,0105/0122' PackSize='proportional,proportional' PackSizeProp='0022/0158,0022/0122' ScrollExtent='22,22' Size='22,22' Style='/Icons.Map.Misc.Lock_icon'/>
<Image continentid='32' Location='124,94' Name='NexusPopLock' PackLocation='proportional,proportional' PackLocationProp='0135/0158,0105/0122' PackSize='proportional,proportional' PackSizeProp='0022/0158,0022/0122' ScrollExtent='22,22' Size='22,22' Style='/Icons.Map.Misc.Lock_icon'/>
<Image Location='14,4' Name='DesolationImage' PackLocation='proportional,proportional' PackLocationProp='0042/0158,0032/0122' PackSize='proportional,proportional' PackSizeProp='0056/0158,0056/0122' ScrollExtent='56,56' Size='56,56' SourceResource='ui_map97g' Visible='false'/>
<Image Location='80,4' Name='AscensionImage' PackLocation='proportional,proportional' PackLocationProp='0108/0158,0032/0122' PackSize='proportional,proportional' PackSizeProp='0056/0158,0056/0122' ScrollExtent='56,56' Size='56,56' SourceResource='ui_map98g' Visible='false'/>
<Image Location='16,62' Name='ExtinctionImage' PackLocation='proportional,proportional' PackLocationProp='0044/0158,0090/0122' PackSize='proportional,proportional' PackSizeProp='0056/0158,0056/0122' ScrollExtent='56,56' Size='56,56' SourceResource='ui_map99g' Visible='false'/>
<Image Location='85,62' Name='NexusImage' PackLocation='proportional,proportional' PackLocationProp='0113/0158,0090/0122' PackSize='proportional,proportional' PackSizeProp='0056/0158,0056/0122' ScrollExtent='56,56' Size='56,56' SourceResource='ui_map96g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='32' Location='57,34' Name='Nexus' PackLocation='proportional,proportional' PackLocationProp='0113/0158,0090/0122' PackSize='proportional,proportional' PackSizeProp='0112/0158,0112/0122' ScrollExtent='112,112' Size='112,112' zonename='i4'/>
<OverheadMap BackgroundOpacity='1.000' continentid='31' Location='-14,-24' Name='Desolation' PackLocation='proportional,proportional' PackLocationProp='0042/0158,0032/0122' PackSize='proportional,proportional' PackSizeProp='0112/0158,0112/0122' ScrollExtent='112,112' Size='112,112' zonename='i3'/>
<OverheadMap BackgroundOpacity='1.000' continentid='30' Location='52,-24' Name='Ascension' PackLocation='proportional,proportional' PackLocationProp='0108/0158,0032/0122' PackSize='proportional,proportional' PackSizeProp='0112/0158,0112/0122' ScrollExtent='112,112' Size='112,112' zonename='i2'/>
<OverheadMap BackgroundOpacity='1.000' continentid='29' Location='-12,34' Name='Extinction' PackLocation='proportional,proportional' PackLocationProp='0044/0158,0090/0122' PackSize='proportional,proportional' PackSizeProp='0112/0158,0112/0122' ScrollExtent='112,112' Size='112,112' zonename='i1'/>
<Image BackgroundOpacity='1.000' Color='#64719B' Name='Background' Opacity='0.850' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='158,122' Size='158,122'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='160,144' Size='160,144'/>
</Page>
<Page BackgroundColor='#4A5C66' leftside='true' Location='8,329' Name='Amerish' PackLocation='proportional,proportional' PackLocationProp='0088/1024,0401/0768' PackSize='proportional,proportional' PackSizeProp='0160/1024,0144/0768' planetid='10' ScrollExtent='160,144' Size='160,144'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z10]' Location='16,0' Name='PlanetName' PackLocation='left,top' PackLocationProp='0016/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0033/0001,0002/0003' ScrollExtent='127,21' ShadowStyle='/Shadows.Default' Size='127,21' TextAlignmentVertical='Center'>@z10</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='158,122' Size='158,122'>
<Image continentid='10' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Icons.Map.Misc.Lock_icon'/>
<Image AbsorbsInput='false' Location='128,4' Name='DominionIcon' PackLocation='proportional,proportional' PackLocationProp='0140/0158,0016/0122' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Frontend.MiniNC' Visible='false'/>
<Image BackgroundOpacity='1.000' Color='#FF00FF' Location='0,-2' Name='EmpireLock' PackLocation='left,top' PackLocationProp='0000/0001,-002/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,-004/0001' RStyleDefault='/Boxes.MapPane_Outline.style' ScrollExtent='158,126' Size='158,126' Visible='false'/>
<Image Location='19,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' SourceResource='ui_map10g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='10' Location='19,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' zonename='z10'/>
<Image BackgroundOpacity='1.000' Color='#64719B' Name='Background' Opacity='0.850' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='158,122' Size='158,122'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='160,144' Size='160,144'/>
</Page>
<Page BackgroundColor='#4A5C66' Location='856,182' Name='Forseral' PackLocation='proportional,proportional' PackLocationProp='0936/1024,0254/0768' PackSize='proportional,proportional' PackSizeProp='0160/1024,0144/0768' planetid='5' ScrollExtent='160,144' Size='160,144'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z5]' Location='16,0' Name='PlanetName' PackLocation='left,top' PackLocationProp='0016/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0033/0001,0002/0003' ScrollExtent='127,21' ShadowStyle='/Shadows.Default' Size='127,21' TextAlignment='Right' TextAlignmentVertical='Center'>@z5</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='158,122' Size='158,122'>
<Image continentid='5' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Icons.Map.Misc.Lock_icon'/>
<Image AbsorbsInput='false' Location='128,4' Name='DominionIcon' PackLocation='proportional,proportional' PackLocationProp='0140/0158,0016/0122' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Frontend.MiniNC' Visible='false'/>
<Image BackgroundOpacity='1.000' Color='#FF00FF' Location='0,-2' Name='EmpireLock' PackLocation='left,top' PackLocationProp='0000/0001,-002/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,-004/0001' RStyleDefault='/Boxes.MapPane_Outline.style' ScrollExtent='158,126' Size='158,126' Visible='false'/>
<Image Location='19,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' SourceResource='ui_map05g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='5' Location='19,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' zonename='z5'/>
<Image BackgroundOpacity='1.000' Color='#64719B' Name='Background' Opacity='0.850' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='158,122' Size='158,122'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='160,144' Size='160,144'/>
</Page>
<Page BackgroundColor='#4A5C66' Location='8,476' Name='Hossin' PackLocation='proportional,proportional' PackLocationProp='0088/1024,0548/0768' PackSize='proportional,proportional' PackSizeProp='0160/1024,0144/0768' planetid='2' ScrollExtent='160,144' Size='160,144'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z2]' Location='16,0' Name='PlanetName' PackLocation='left,top' PackLocationProp='0016/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0033/0001,0002/0003' ScrollExtent='127,21' ShadowStyle='/Shadows.Default' Size='127,21' TextAlignmentVertical='Center'>@z2</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='158,122' Size='158,122'>
<Image continentid='2' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Icons.Map.Misc.Lock_icon'/>
<Image AbsorbsInput='false' Location='128,4' Name='DominionIcon' PackLocation='proportional,proportional' PackLocationProp='0140/0158,0016/0122' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Frontend.MiniNC' Visible='false'/>
<Image BackgroundOpacity='1.000' Color='#FF00FF' Location='0,-2' Name='EmpireLock' PackLocation='left,top' PackLocationProp='0000/0001,-002/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,-004/0001' RStyleDefault='/Boxes.MapPane_Outline.style' ScrollExtent='158,126' Size='158,126' Visible='false'/>
<Image Location='19,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' SourceResource='ui_map02g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='2' Location='19,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' zonename='z2'/>
<Image BackgroundOpacity='1.000' Color='#64719B' Name='Background' Opacity='0.850' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='158,122' Size='158,122'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='160,144' Size='160,144'/>
</Page>
<Page BackgroundColor='#4A5C66' Location='856,623' Name='Ceryshen' PackLocation='proportional,proportional' PackLocationProp='0936/1024,0695/0768' PackSize='proportional,proportional' PackSizeProp='0160/1024,0144/0768' planetid='6' ScrollExtent='160,144' Size='160,144'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z6]' Location='16,0' Name='PlanetName' PackLocation='left,top' PackLocationProp='0016/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0033/0001,0002/0003' ScrollExtent='127,21' ShadowStyle='/Shadows.Default' Size='127,21' TextAlignment='Right' TextAlignmentVertical='Center'>@z6</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='158,122' Size='158,122'>
<Image continentid='6' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Icons.Map.Misc.Lock_icon'/>
<Image AbsorbsInput='false' Location='128,4' Name='DominionIcon' PackLocation='proportional,proportional' PackLocationProp='0140/0158,0016/0122' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Frontend.MiniNC' Visible='false'/>
<Image BackgroundOpacity='1.000' Color='#FF00FF' Location='0,-2' Name='EmpireLock' PackLocation='left,top' PackLocationProp='0000/0001,-002/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,-004/0001' RStyleDefault='/Boxes.MapPane_Outline.style' ScrollExtent='158,126' Size='158,126' Visible='false'/>
<Image Location='19,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' SourceResource='ui_map06g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='6' Location='19,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' zonename='z6'/>
<Image BackgroundOpacity='1.000' Color='#64719B' Name='Background' Opacity='0.850' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='158,122' Size='158,122'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='160,144' Size='160,144'/>
</Page>
<Page BackgroundColor='#4A5C66' Location='856,35' Name='Esamir' PackLocation='proportional,proportional' PackLocationProp='0936/1024,0107/0768' PackSize='proportional,proportional' PackSizeProp='0160/1024,0144/0768' planetid='7' ScrollExtent='160,144' Size='160,144'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z7]' Location='16,0' Name='PlanetName' PackLocation='left,top' PackLocationProp='0016/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0033/0001,0002/0003' ScrollExtent='127,21' ShadowStyle='/Shadows.Default' Size='127,21' TextAlignment='Right' TextAlignmentVertical='Center'>@z7</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='158,122' Size='158,122'>
<Image continentid='7' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Icons.Map.Misc.Lock_icon'/>
<Image AbsorbsInput='false' Location='128,4' Name='DominionIcon' PackLocation='proportional,proportional' PackLocationProp='0140/0158,0016/0122' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Frontend.MiniNC' Visible='false'/>
<Image BackgroundOpacity='1.000' Color='#FF00FF' Location='0,-2' Name='EmpireLock' PackLocation='left,top' PackLocationProp='0000/0001,-002/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,-004/0001' RStyleDefault='/Boxes.MapPane_Outline.style' ScrollExtent='158,126' Size='158,126' Visible='false'/>
<Image Location='19,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' SourceResource='ui_map07g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='7' Location='19,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' zonename='z7'/>
<Image BackgroundOpacity='1.000' Color='#64719B' Name='Background' Opacity='0.850' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='158,122' Size='158,122'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='160,144' Size='160,144'/>
</Page>
<Page BackgroundColor='#4A5C66' Location='8,35' Name='Ishundar' PackLocation='proportional,proportional' PackLocationProp='0088/1024,0107/0768' PackSize='proportional,proportional' PackSizeProp='0160/1024,0144/0768' planetid='4' ScrollExtent='160,144' Size='160,144'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@z4]' Location='16,0' Name='PlanetName' PackLocation='left,top' PackLocationProp='0016/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0033/0001,0002/0003' ScrollExtent='127,21' ShadowStyle='/Shadows.Default' Size='127,21' TextAlignmentVertical='Center'>@z4</Text>
<Page AbsorbsInput='false' BackgroundColor='#64719B' Enabled='false' GetsInput='false' Location='1,21' Name='MapPage' PackLocation='left,top' PackLocationProp='0001/0001,0021/0001' PackSize='absolute,absolute' PackSizeProp='0002/0001,0022/0001' ScrollExtent='158,122' Size='158,122'>
<Image continentid='4' Location='3,3' Name='PopLock' PackLocation='left,top' PackLocationProp='0003/0001,0003/0001' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Icons.Map.Misc.Lock_icon'/>
<Image AbsorbsInput='false' Location='128,4' Name='DominionIcon' PackLocation='proportional,proportional' PackLocationProp='0140/0158,0016/0122' PackSize='proportional,proportional' PackSizeProp='0024/0158,0024/0122' ScrollExtent='24,24' Size='24,24' Style='/Frontend.MiniNC' Visible='false'/>
<Image BackgroundOpacity='1.000' Color='#FF00FF' Location='0,-2' Name='EmpireLock' PackLocation='left,top' PackLocationProp='0000/0001,-002/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,-004/0001' RStyleDefault='/Boxes.MapPane_Outline.style' ScrollExtent='158,126' Size='158,126' Visible='false'/>
<Image Location='19,1' Name='MapImage' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' SourceResource='ui_map04g' Visible='false'/>
<OverheadMap BackgroundOpacity='1.000' continentid='4' Location='19,1' Name='Map' PackLocation='proportional,proportional' PackLocationProp='0079/0158,0061/0122' PackSize='proportional,proportional' PackSizeProp='0120/0158,0120/0122' ScrollExtent='120,120' Size='120,120' zonename='z4'/>
<Image BackgroundOpacity='1.000' Color='#64719B' Name='Background' Opacity='0.850' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/Boxes.MapPane.style' ScrollExtent='158,122' Size='158,122'/>
</Page>
<Image BackgroundOpacity='1.000' Color='#4A5C66' Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.MapPane.style' ScrollExtent='160,144' Size='160,144'/>
</Page>
</Page>
<Page AbsorbsInput='false' Enabled='false' GetsInput='false' Name='PlanetNames' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='1024,768' Size='1024,768'>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@home3]' Location='454,532' Name='VS' PackLocation='proportional,proportional' PackLocationProp='0529/1024,0552/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@home3</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@home2]' Location='617,385' Name='TR' PackLocation='proportional,proportional' PackLocationProp='0692/1024,0405/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@home2</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@home1]' Location='254,304' Name='NC' PackLocation='proportional,proportional' PackLocationProp='0329/1024,0324/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@home1</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@z1]' Location='560,466' Name='Solsar' PackLocation='proportional,proportional' PackLocationProp='0635/1024,0486/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@z1</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@z2]' Location='169,457' Name='Hossin' PackLocation='proportional,proportional' PackLocationProp='0244/1024,0477/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@z2</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@z3]' Location='709,447' Name='Cyssor' PackLocation='proportional,proportional' PackLocationProp='0784/1024,0467/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@z3</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@z4]' Location='349,289' Name='Ishundar' PackLocation='proportional,proportional' PackLocationProp='0424/1024,0309/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@z4</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@z5]' Location='472,346' Name='Forseral' PackLocation='proportional,proportional' PackLocationProp='0547/1024,0366/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@z5</Text>
<Text continentid='6' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@z6]' Location='638,575' Name='Ceryshen' PackLocation='proportional,proportional' PackLocationProp='0713/1024,0595/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@z6</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@z7]' Location='595,289' Name='Esamir' PackLocation='proportional,proportional' PackLocationProp='0670/1024,0309/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@z7</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@z8]' Location='430,428' Name='Oshur' PackLocation='proportional,proportional' PackLocationProp='0505/1024,0448/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@z8</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@z9]' Location='295,575' Name='Searhus' PackLocation='proportional,proportional' PackLocationProp='0370/1024,0595/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@z9</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@z10]' Location='328,467' Name='Amerish' PackLocation='proportional,proportional' PackLocationProp='0403/1024,0487/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@z10</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@c1]' Location='547,210' Name='Supai' PackLocation='proportional,proportional' PackLocationProp='0622/1024,0230/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@c1</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@c2]' Location='633,211' Name='Hunhau' PackLocation='proportional,proportional' PackLocationProp='0708/1024,0231/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@c2</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@c3]' Location='723,212' Name='Adlivun' PackLocation='proportional,proportional' PackLocationProp='0798/1024,0232/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@c3</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@c4]' Location='280,212' Name='Byblos' PackLocation='proportional,proportional' PackLocationProp='0355/1024,0232/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@c4</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@c5]' Location='369,211' Name='Annwn' PackLocation='proportional,proportional' PackLocationProp='0444/1024,0231/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@c5</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@c6]' Location='454,210' Name='Drugaskan' PackLocation='proportional,proportional' PackLocationProp='0529/1024,0230/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='150,40' ShadowStyle='/Shadows.Default' Size='150,40' TextAlignment='Center'>@c6</Text>
</Page>
<Page AbsorbsInput='false' GetsInput='false' Name='Connections' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='1024,768' Size='1024,768'/>
<Image Name='Background' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='1024,768' Size='1024,768' Style='/Plates.Starfield'/>
</Page>
<Textbox Location='460,400' MinimumSize='32,16' Name='EditTextbox' ScrollExtent='128,20' Size='128,20' Style='/Textboxes.Clear' TooltipStyle='/Tooltips.Default' Visible='false'>Test Text</Textbox>
<Page BackgroundOpacity='1.000' Name='Buildings' ScrollExtent='640,640' Size='640,640' Visible='false'>
<Image Name='amp_station' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.amp_station'/>
<Image Location='104,496' Name='bfr_shed' ScrollExtent='32,32' Size='32,32' Style='/Icons.Map.Buildings.bfr_shed'/>
<Image Location='160,342' Name='bridge_end' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.bridge_end'/>
<Image Location='88,342' Name='bridge_mid' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.bridge_mid'/>
<Image Location='9,342' Name='bridge_start' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.bridge_start'/>
<Image Location='9,411' Name='bunker_gauntlet' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.bunker_gauntlet'/>
<Image Location='68,0' Name='bunker_lg' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.bunker_lg'/>
<Image Location='142,0' Name='bunker_sm' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.bunker_sm'/>
<Image Location='526,265' Name='cavern_a_ceiling' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_a_ceiling'/>
<Image Location='454,265' Name='cavern_a_ground' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_a_ground'/>
<Image Location='526,182' Name='cavern_b_ceiling' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_b_ceiling'/>
<Image Location='454,182' Name='cavern_b_ground' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_b_ground'/>
<Image Location='526,89' Name='cavern_c_ceiling' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_c_ceiling'/>
<Image Location='454,89' Name='cavern_c_ground' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_c_ground'/>
<Image Location='526,0' Name='cavern_d_ceiling' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_d_ceiling'/>
<Image Location='454,0' Name='cavern_d_ground' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_d_ground'/>
<Image Location='383,0' Name='cavern_e_ceiling' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_e_ceiling'/>
<Image Location='308,0' Name='cavern_e_ground' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_e_ground'/>
<Image Location='383,89' Name='cavern_f_ceiling' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_f_ceiling'/>
<Image Location='308,89' Name='cavern_f_ground' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_f_ground'/>
<Image Location='383,182' Name='cavern_g_ceiling' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_g_ceiling'/>
<Image Location='308,182' Name='cavern_g_ground' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_g_ground'/>
<Image Location='383,265' Name='cavern_h_ceiling' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_h_ceiling'/>
<Image Location='308,265' Name='cavern_h_ground' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_h_ground'/>
<Image Location='383,342' Name='cavern_i_ceiling' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_i_ceiling'/>
<Image Location='308,342' Name='cavern_i_ground' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_i_ground'/>
<Image Location='383,411' Name='cavern_j_ceiling' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_j_ceiling'/>
<Image Location='308,411' Name='cavern_j_ground' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_j_ground'/>
<Image Location='235,411' Name='cavern_z_ceiling' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_z_ceiling'/>
<Image Location='160,411' Name='cavern_z_ground' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cavern_z_ground'/>
<Image Location='220,0' Name='comm_station' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.comm_station'/>
<Image Location='7,88' Name='comm_station_dsp' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.comm_station_dsp'/>
<Image Location='75,89' Name='cryo_facility' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.cryo_facility'/>
<Image Location='526,411' Name='geo_warpgate' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.geo_warpgate'/>
<Image Location='148,89' Name='meeting_building' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.meeting_building'/>
<Image Location='225,89' Name='orbital_building' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.orbital_building'/>
<Image Location='9,480' Name='redoubt' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.redoubt'/>
<Image Location='176,496' Name='repair_silo' ScrollExtent='32,32' Size='32,32' Style='/Icons.Map.Buildings.repair_silo'/>
<Image Location='12,180' Name='tech_plant' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.tech_plant'/>
<Image Location='83,182' Name='tower_a' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.tower_a'/>
<Image Location='154,182' Name='tower_b' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.tower_b'/>
<Image Location='230,182' Name='tower_c' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.tower_c'/>
<Image Location='454,342' Name='vanu_core' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.vanu_core'/>
<Image Location='526,342' Name='vanu_stasis' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.vanu_stasis'/>
<Image Location='454,411' Name='vanu_vehicle' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.vanu_vehicle'/>
<Image Location='9,265' Name='vt_building' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.vt_building'/>
<Image Location='88,265' Name='vt_dropship' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.vt_dropship'/>
<Image Location='88,411' Name='vt_spawn' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.vt_spawn'/>
<Image Location='235,342' Name='vr_training' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.vr_training'/>
<Image Location='160,265' Name='vt_vehicle' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.vt_vehicle'/>
<Image Location='235,265' Name='warpgate' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Buildings.warpgate'/>
</Page>
<Page Name='ForceDomes' ScrollExtent='320,240' Size='320,240' Visible='false'>
<Image Location='5,5' Name='amp_station' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.ForceDomes.amp_station'/>
<Image Location='139,5' Name='comm_station' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.ForceDomes.comm_station'/>
<Image Location='206,5' Name='comm_station_dsp' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.ForceDomes.comm_station_dsp'/>
<Image Location='72,5' Name='cryo_facility' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.ForceDomes.cryo_facility'/>
<Image Location='5,72' Name='tech_plant' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.ForceDomes.tech_plant'/>
</Page>
<Page BackgroundOpacity='1.000' Name='Floorplans' ScrollExtent='640,680' Size='640,680' Visible='false'>
<Image Location='484,408' Name='redoubt_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.redoubt_1'/>
<Image Location='557,340' Name='redoubt_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.redoubt_0'/>
<Image Name='amp_station_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.amp_station_0'/>
<Image Location='68,0' Name='amp_station_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.amp_station_1'/>
<Image Location='136,0' Name='amp_station_2' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.amp_station_2'/>
<Image Location='204,0' Name='amp_station_3' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.amp_station_3'/>
<Image Location='272,0' Name='amp_station_4' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.amp_station_4'/>
<Image Location='0,68' Name='bunker_gauntlet_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.bunker_gauntlet_0'/>
<Image Location='68,68' Name='bunker_gauntlet_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.bunker_gauntlet_1'/>
<Image Location='132,68' Name='bunker_lg_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.bunker_lg_0'/>
<Image Location='204,68' Name='bunker_sm_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.bunker_sm_0'/>
<Image Location='345,0' Name='cavern_a_ceiling_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_a_ceiling_0'/>
<Image Location='416,0' Name='cavern_a_ceiling_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_a_ceiling_1'/>
<Image Location='273,68' Name='cavern_a_ground_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_a_ground_0'/>
<Image Location='342,68' Name='cavern_a_ground_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_a_ground_1'/>
<Image Location='340,136' Name='cavern_b_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_b_0'/>
<Image Location='409,68' Name='cavern_b_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_b_1'/>
<Image Location='411,136' Name='cavern_c_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_c_0'/>
<Image Location='341,204' Name='cavern_d_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_d_0'/>
<Image Location='410,204' Name='cavern_e_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_e_0'/>
<Image Location='343,272' Name='cavern_e_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_e_1'/>
<Image Location='555,0' Name='cavern_f_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_f_0'/>
<Image Location='484,0' Name='cavern_f_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_f_1'/>
<Image Location='272,340' Name='cavern_g_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_g_0'/>
<Image Location='342,340' Name='cavern_g_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_g_1'/>
<Image Location='270,408' Name='cavern_h_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_h_0'/>
<Image Location='337,408' Name='cavern_h_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_h_1'/>
<Image Location='416,272' Name='cavern_i_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_i_0'/>
<Image Location='416,340' Name='cavern_j_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_j_0'/>
<Image Location='417,408' Name='cavern_z_ceiling_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_z_ceiling_0'/>
<Image Location='339,476' Name='cavern_z_ceiling_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_z_ceiling_1'/>
<Image Location='409,476' Name='cavern_z_ceiling_2' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_z_ceiling_2'/>
<Image Location='273,544' Name='cavern_z_ground_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_z_ground_0'/>
<Image Location='343,544' Name='cavern_z_ground_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_z_ground_1'/>
<Image Location='412,544' Name='cavern_z_ground_2' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_z_ground_2'/>
<Image Location='271,612' Name='cavern_z_ground_3' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_z_ground_3'/>
<Image Location='340,612' Name='cavern_z_ground_4' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cavern_z_ground_4'/>
<Image Location='0,136' Name='comm_station_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.comm_station_0'/>
<Image Location='68,136' Name='comm_station_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.comm_station_1'/>
<Image Location='136,136' Name='comm_station_2' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.comm_station_2'/>
<Image Location='204,136' Name='comm_station_3' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.comm_station_3'/>
<Image Location='272,136' Name='comm_station_4' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.comm_station_4'/>
<Image Location='0,204' Name='comm_station_dsp_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.comm_station_dsp_0'/>
<Image Location='68,204' Name='comm_station_dsp_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.comm_station_dsp_1'/>
<Image Location='136,204' Name='comm_station_dsp_2' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.comm_station_dsp_2'/>
<Image Location='204,204' Name='comm_station_dsp_3' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.comm_station_dsp_3'/>
<Image Location='272,204' Name='comm_station_dsp_4' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.comm_station_dsp_4'/>
<Image Location='0,272' Name='cryo_facility_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cryo_facility_0'/>
<Image Location='68,272' Name='cryo_facility_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cryo_facility_1'/>
<Image Location='136,272' Name='cryo_facility_2' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cryo_facility_2'/>
<Image Location='204,272' Name='cryo_facility_3' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.cryo_facility_3'/>
<Image Location='272,272' Name='meeting_building_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.meeting_building_0'/>
<Image Location='136,612' Name='orbital_building_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.orbital_building_0'/>
<Image Location='204,612' Name='orbital_building_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.orbital_building_1'/>
<Image Location='0,340' Name='tech_plant_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tech_plant_0'/>
<Image Location='68,340' Name='tech_plant_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tech_plant_1'/>
<Image Location='136,340' Name='tech_plant_2' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tech_plant_2'/>
<Image Location='204,340' Name='tech_plant_3' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tech_plant_3'/>
<Image Location='0,408' Name='tower_a_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tower_a_0'/>
<Image Location='68,408' Name='tower_a_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tower_a_1'/>
<Image Location='136,408' Name='tower_a_2' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tower_a_2'/>
<Image Location='204,408' Name='tower_a_3' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tower_a_3'/>
<Image Location='0,476' Name='tower_b_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tower_b_0'/>
<Image Location='68,476' Name='tower_b_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tower_b_1'/>
<Image Location='136,476' Name='tower_b_2' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tower_b_2'/>
<Image Location='204,476' Name='tower_b_3' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tower_b_3'/>
<Image Location='272,476' Name='tower_b_4' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tower_b_4'/>
<Image Location='0,544' Name='tower_c_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tower_c_0'/>
<Image Location='68,544' Name='tower_c_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tower_c_1'/>
<Image Location='136,544' Name='tower_c_2' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tower_c_2'/>
<Image Location='204,544' Name='tower_c_3' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.tower_c_3'/>
<Image Location='484,68' Name='vanu_core_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.vanu_core_0'/>
<Image Location='557,68' Name='vanu_core_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.vanu_core_1'/>
<Image Location='484,136' Name='vanu_core_2' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.vanu_core_2'/>
<Image Location='557,136' Name='vanu_core_3' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.vanu_core_3'/>
<Image Location='484,204' Name='vanu_stasis_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.vanu_stasis_0'/>
<Image Location='557,204' Name='vanu_stasis_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.vanu_stasis_1'/>
<Image Location='484,272' Name='vanu_vehicle_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.vanu_vehicle_0'/>
<Image Location='557,272' Name='vanu_vehicle_1' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.vanu_vehicle_1'/>
<Image Location='484,340' Name='vanu_vehicle_2' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.vanu_vehicle_2'/>
<Image Location='0,612' Name='vr_training_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.vr_training_0'/>
<Image Location='68,612' Name='vt_building_0' ScrollExtent='64,64' Size='64,64' Style='/Icons.Map.Floorplans.vt_building_0'/>
</Page>
<Page BackgroundOpacity='1.000' maxsize='500,500' minsize='100,100' movable='true' Name='RadarBlips' preserveaspectratio='true' resizable='true' ScrollExtent='377,387' Size='377,387' Visible='false'>
<Image Location='244,105' Name='SensorShieldBlip' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Equipment.sensor_shield_icon'/>
<Image Location='178,238' Name='SquadXPCenterBlip2' ScrollExtent='20,24' Size='20,24' Stretch='false' Style='/Icons.HUD.Radar_squadexp_digit_2'/>
<Image Location='200,238' Name='SquadXPCenterBlip1' ScrollExtent='20,24' Size='20,24' Stretch='false' Style='/Icons.HUD.Radar_squadexp_digit_1'/>
<Image Location='185,277' Name='SquadXPCenterBlip' ScrollExtent='11,12' Size='11,12' Stretch='false'/>
<Image Location='114,272' Name='LodestarBlip' ScrollExtent='44,47' Size='44,47' Stretch='false' Style='/Icons.HUD.Radar_lodestar_blip'/>
<Image Location='75,281' Name='RouterTeleporterBlip' ScrollExtent='32,23' Size='32,23' Stretch='false' Style='/Icons.HUD.Radar_router_teleporter_blip'/>
<Image Location='174,277' Name='SquadHomeBaseBlip' ScrollExtent='11,12' Size='11,12' Stretch='false' Style='/Icons.HUD.Radar_squadhomebase_blip'/>
<Image Location='131,32' Name='SquadBlip0' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_0'/>
<Image Location='6,32' Name='SquadBlip1' ScrollExtent='7,14' Size='7,14' Stretch='false' Style='/Icons.HUD.Radar_digit_1'/>
<Image Location='20,32' Name='SquadBlip2' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_2'/>
<Image Location='34,32' Name='SquadBlip3' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_3'/>
<Image Location='48,32' Name='SquadBlip4' ScrollExtent='11,14' Size='11,14' Stretch='false' Style='/Icons.HUD.Radar_digit_4'/>
<Image Location='62,32' Name='SquadBlip5' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_5'/>
<Image Location='77,32' Name='SquadBlip6' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_6'/>
<Image Location='91,32' Name='SquadBlip7' ScrollExtent='11,14' Size='11,14' Stretch='false' Style='/Icons.HUD.Radar_digit_7'/>
<Image Location='105,32' Name='SquadBlip8' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_8'/>
<Image Location='119,32' Name='SquadBlip9' ScrollExtent='10,14' Size='10,14' Stretch='false' Style='/Icons.HUD.Radar_digit_9'/>
<Image Location='146,35' Name='SoldierBlip' ScrollExtent='10,10' Size='10,10' Stretch='false' Style='/Icons.HUD.Radar_soldier_blip' UserResizable='true'/>
<Image Location='5,62' Name='LineBlip' ScrollExtent='12,3' Size='12,3' Stretch='false' Style='/Icons.HUD.Radar_line_blip'/>
<Image Location='23,59' Name='AvatarBlip' ScrollExtent='14,16' Size='14,16' Stretch='false' Style='/Icons.HUD.Radar_avatar_blip'/>
<Image Location='47,56' Name='QuadBlip' ScrollExtent='15,24' Size='15,24' Stretch='false' Style='/Icons.HUD.Radar_quad_blip'/>
<Image Location='72,53' Name='HarasserBlip' ScrollExtent='17,28' Size='17,28' Stretch='false' Style='/Icons.HUD.Radar_harasser_blip'/>
<Image Location='96,53' Name='EnforcerBlip' ScrollExtent='16,28' Size='16,28' Stretch='false' Style='/Icons.HUD.Radar_enforcer_blip'/>
<Image Location='118,54' Name='MarauderBlip' ScrollExtent='15,28' Size='15,28' Stretch='false' Style='/Icons.HUD.Radar_marauder_blip'/>
<Image Location='141,53' Name='ThresherBlip' ScrollExtent='15,28' Size='15,28' Stretch='false' Style='/Icons.HUD.Radar_thresher_blip'/>
<Image Location='163,53' Name='LightningBlip' ScrollExtent='16,28' Size='16,28' Stretch='false' Style='/Icons.HUD.Radar_lightning_blip'/>
<Image Location='4,87' Name='VanguardBlip' ScrollExtent='18,28' Size='18,28' Stretch='false' Style='/Icons.HUD.Radar_vanguard_blip'/>
<Image Location='30,88' Name='ProwlerBlip' ScrollExtent='18,28' Size='18,28' Stretch='false' Style='/Icons.HUD.Radar_prowler_blip'/>
<Image Location='55,89' Name='MagriderBlip' ScrollExtent='15,29' Size='15,29' Stretch='false' Style='/Icons.HUD.Radar_magrider_blip'/>
<Image Location='75,88' Name='DelivererBlip' ScrollExtent='16,33' Size='16,33' Stretch='false' Style='/Icons.HUD.Radar_deliverer_blip'/>
<Image Location='160,280' Name='PhantasmBlip' ScrollExtent='21,24' Size='21,24' Stretch='false' Style='/Icons.HUD.Radar_phantasm_blip'/>
<Image Location='96,88' Name='SunderBlip' ScrollExtent='19,37' Size='19,37' Stretch='false' Style='/Icons.HUD.Radar_sunder_blip'/>
<Image Location='118,90' Name='AntBlip' ScrollExtent='18,32' Size='18,32' Stretch='false' Style='/Icons.HUD.Radar_ant_blip'/>
<Image Location='142,91' Name='AmsBlip' ScrollExtent='15,40' Size='15,40' Stretch='false' Style='/Icons.HUD.Radar_ams_blip'/>
<Image Location='6,143' Name='GalaxyBlip' ScrollExtent='47,43' Size='47,43' Stretch='false' Style='/Icons.HUD.Radar_galaxy_blip'/>
<Image Location='60,145' Name='MosquitoBlip' ScrollExtent='15,28' Size='15,28' Stretch='false' Style='/Icons.HUD.Radar_mosquito_blip'/>
<Image Location='82,145' Name='ReaverBlip' ScrollExtent='22,30' Size='22,30' Stretch='false' Style='/Icons.HUD.Radar_reaver_blip'/>
<Image Location='111,147' Name='MaxBlip' ScrollExtent='20,10' Size='20,10' Stretch='false' Style='/Icons.HUD.Radar_max_blip'/>
<Image Location='142,147' Name='MissileBlip' ScrollExtent='4,11' Size='4,11' Stretch='false' Style='/Icons.HUD.Radar_missile_blip'/>
<Image Location='191,26' Name='HartBlip' PackLocation='Top,Left' PackLocationProp='0191/0001,0026/0001' ScrollExtent='38,81' Size='38,81' Stretch='false' Style='/Icons.HUD.Radar_hart_blip'/>
<Image Location='7,197' Name='DeadAvatarBlip' ScrollExtent='27,17' Size='27,17' Stretch='false' Style='/Icons.Map.Respawn.Dead_avatar_icon'/>
<Image Location='40,197' Name='LiberatorBlip' ScrollExtent='24,34' Size='24,34' Stretch='false' Style='/Icons.HUD.Radar_liberator_blip'/>
<Image Location='71,197' Name='SkyguardBlip' ScrollExtent='16,29' Size='16,29' Stretch='false' Style='/Icons.HUD.Radar_skyguard_blip'/>
<Image Location='97,197' Name='AdvancedMedicBlip' ScrollExtent='16,16' Size='16,16' Stretch='false' Style='/SupportIcons.medical'/>
<Image Location='118,197' Name='AvatarReviveBlip' ScrollExtent='19,20' Size='19,20' Stretch='false' Style='/Icons.Map.Misc.Triangle_icon'/>
<Image Location='142,197' Name='CaptureFlagBlip' ScrollExtent='12,12' Size='12,12' Stretch='false' Style='/Icons.HUD.Radar_capture_flag_blip'/>
<Image Location='40,281' Name='TeleporterIcon' ScrollExtent='30,30' Size='30,30' Stretch='false' Style='/Icons.HUD.Radar_teleporter_blip'/>
<Image Location='4,240' Name='ZiplineIcon' ScrollExtent='42,32' Size='42,32' Stretch='false' Style='/Icons.HUD.Radar_zipline'/>
<Image Location='54,240' Name='VanuModuleBlip' ScrollExtent='9,6' Size='9,6' Stretch='false' Style='/Icons.HUD.Radar_vanu_module_blip'/>
<Image Location='73,240' Name='FlailBlip' ScrollExtent='25,28' Size='25,28' Stretch='false' Style='/Icons.HUD.Radar_flail_blip'/>
<Image Location='107,240' Name='SwitchbladeBlip' ScrollExtent='14,28' Size='14,28' Stretch='false' Style='/Icons.HUD.Radar_switchblade_blip'/>
<Image Location='131,240' Name='RouterBlip' ScrollExtent='32,21' Size='32,21' Stretch='false' Style='/Icons.HUD.Radar_router_blip'/>
<Image Location='4,281' Name='MotionSensorBlip' ScrollExtent='32,32' Size='32,32' Stretch='false' Style='/Icons.Map.Equipment.Motion_sensor_icon'/>
<Image Location='180,169' Name='AphelionBlip' ScrollExtent='22,15' Size='22,15' Stretch='false' Style='/Icons.HUD.Radar_aphelion_blip'/>
<Image Location='181,189' Name='ColossusBlip' ScrollExtent='23,16' Size='23,16' Stretch='false' Style='/Icons.HUD.Radar_colossus_blip'/>
<Image Location='181,209' Name='PeregrineBlip' ScrollExtent='22,15' Size='22,15' Stretch='false' Style='/Icons.HUD.Radar_peregrine_blip'/>
<Image Location='156,197' Name='MonolithUnitBlip' ScrollExtent='12,12' Size='12,12' Style='/Icons.Map.Misc.Monolith_Unit_icon'/>
</Page>
<Page BackgroundOpacity='1.000' maxsize='500,500' minsize='100,100' movable='true' Name='MiscImages' preserveaspectratio='true' resizable='true' ScrollExtent='377,387' Size='377,387' UserResizable='true' Visible='false'>
<Image Location='83,174' Name='sensor_shield' ScrollExtent='32,32' Size='32,32' Stretch='false' Style='/Icons.Map.Equipment.sensor_shield_icon'/>
<Image Location='48,174' Name='GeneratorPain' ScrollExtent='32,32' Size='32,32' Stretch='false' Style='/Icons.Map.Facility.GeneratorPain_icon'/>
<Image Location='12,175' Name='SpawnTubePain' ScrollExtent='32,32' Size='32,32' Stretch='false' Style='/Icons.Map.Facility.SpawnTubePain_icon'/>
<Image Location='114,114' Name='spitfire_cloaked' ScrollExtent='30,32' Size='30,32' Stretch='false' Style='/Icons.Map.Equipment.spitfire_cloaked_icon'/>
<Image Location='144,113' Name='spitfire_aa' ScrollExtent='30,32' Size='30,32' Stretch='false' Style='/Icons.Map.Equipment.spitfire_aa_icon'/>
<Image Location='5,141' Name='jammer_mine' ScrollExtent='30,32' Size='30,32' Stretch='false' Style='/Icons.Map.Equipment.jammer_mine_icon'/>
<Image LocalTooltip='[@ShieldGenerator]' Location='85,115' Name='deployable_shield_generator' ScrollExtent='30,32' Size='30,32' Stretch='false' Style='/Icons.Map.Equipment.deployable_shield_generator_icon' Tooltip='@ShieldGenerator'/>
<Image Location='35,140' Name='tank_traps' ScrollExtent='30,32' Size='30,32' Stretch='false' Style='/Icons.Map.Equipment.tank_traps_icon'/>
<Image Location='66,139' Name='portable_manned_turret' ScrollExtent='30,32' Size='30,32' Stretch='false' Style='/Icons.Map.Equipment.portable_manned_turret_icon'/>
<Image Location='34,115' Name='Telepad' ScrollExtent='33,23' Size='33,23' Style='/Icons.Map.Equipment.Telepad_icon'/>
<Image Location='8,11' Name='Hack' ScrollExtent='46,32' Size='46,32' Stretch='false' Style='/Icons.Map.Facility.Hack_icon'/>
<Image Location='105,142' Name='Generator' ScrollExtent='32,32' Size='32,32' Stretch='false' Style='/Icons.Map.Facility.Generator_icon'/>
<Image Location='85,11' Name='Boomer' ScrollExtent='30,32' Size='30,32' Stretch='false' Style='/Icons.Map.Equipment.Boomer_icon'/>
<Image Location='122,11' Name='HEMine' ScrollExtent='34,32' Size='34,32' Stretch='false' Style='/Icons.Map.Equipment.Hemine_icon'/>
<Image Location='7,49' Name='Spitfire' ScrollExtent='25,32' Size='25,32' Stretch='false' Style='/Icons.Map.Equipment.Spitfire_icon'/>
<Image Location='38,49' Name='MotionSensor' ScrollExtent='32,32' Size='32,32' Stretch='false' Style='/Icons.Map.Equipment.Motion_sensor_icon'/>
<Image Location='88,80' Name='SpawnTubeState' ScrollExtent='33,32' Size='33,32' Stretch='false' Style='/Icons.Map.Facility.SpawnTube_icon'/>
<Image Location='75,80' Name='SpawnTube' ScrollExtent='11,32' Size='11,32' Stretch='false' Style='/Icons.Map.Facility.Benefit_SpawnTube_icon'/>
<Image Location='99,52' Name='Repair' ScrollExtent='15,21' Size='15,21' Stretch='false' Style='/Icons.Map.Facility.Benefit_Repair_icon'/>
<Image Location='122,49' Name='AssaultVehicle' ScrollExtent='37,12' Size='37,12' Stretch='false' Style='/Icons.Map.Facility.Benefit_AssaultVehicle_icon'/>
<Image Location='119,62' Name='ShieldedVehicle' ScrollExtent='40,16' Size='40,16' Stretch='false' Style='/Icons.Map.Facility.Benefit_ShieldedVehicle_icon'/>
<Image Location='74,54' Name='Radar' ScrollExtent='20,20' Size='20,20' Stretch='false' Style='/Icons.Map.Facility.Benefit_Radar_icon'/>
<Image Location='6,91' Name='SquareImage' ScrollExtent='20,20' Size='20,20' Style='/Icons.Map.Misc.Square_icon'/>
<Image Location='29,91' Name='TriangleImage' ScrollExtent='19,20' Size='19,20' Style='/Icons.Map.Misc.Triangle_icon'/>
<Image Location='52,91' Name='CircleImage' ScrollExtent='20,20' Size='20,20' Style='/Icons.Map.Misc.Circle_icon'/>
<Image Location='122,80' Name='DiamondImage' ScrollExtent='20,24' Size='20,24' Style='/Icons.Map.Misc.Diamond_icon'/>
<Text continentid='1' Font='/Fonts.HudFont1' GetsInput='false' LocalText='Example map text small' Location='78,307' Name='MapTextSmall' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>Example map text small</Text>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' LocalText='Example map text medium' Location='78,328' Name='MapTextMedium' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>Example map text medium</Text>
<Text continentid='1' Font='/Fonts.HudFont3' GetsInput='false' LocalText='Example map text large' Location='78,351' Name='MapTextLarge' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>Example map text large</Text>
<Image Location='200,19' Name='Droppod' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Misc.Droppod_icon'/>
<Image Location='243,19' Name='Hotspot' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Misc.Hotspot_icon'/>
<Image Location='282,19' Name='Respawn' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Respawn.Respawn_icon'/>
<Image Location='324,19' Name='RespawnAms' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Respawn.Respawn_ams_icon'/>
<Image Location='200,61' Name='Soi' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_icon'/>
<Image Location='243,61' Name='SoiNC' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_nc_icon'/>
<Image Location='286,61' Name='SoiTR' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_tr_icon'/>
<Image Location='327,61' Name='SoiVS' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_vs_icon'/>
<Image Location='200,105' Name='Warpgate' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Legend.Warpgate_icon'/>
<Image Location='244,105' Name='MotionSensorRange' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_icon'/>
<Image Location='287,105' Name='SpitfireRange' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Facility.Soi_icon'/>
<Image Location='327,105' Name='WeatherDirection' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Weather.Direction'/>
<Image Location='201,147' Name='WarpDots' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Warp.Dots'/>
<Image Location='245,147' Name='WarpLine' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Warp.Line'/>
<Image Location='289,147' Name='WarpTarget' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Warp.Target'/>
<Image Location='327,147' Name='WeatherRange' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Weather.Range'/>
<Image Location='201,194' Name='WarpgateSelection' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Warp.Selection'/>
<Image Location='245,194' Name='WarpgateSelectionEffect' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Warp.SelectionEffect'/>
<Image Location='289,194' Name='SelectionBrackets' ScrollExtent='36,36' Size='36,36' Style='/Icons.Map.Misc.Brackets_icon'/>
<Image Location='327,194' Name='CaptureFlag' ScrollExtent='30,32' Size='30,32' Stretch='false' Style='/Icons.Map.Misc.Capture_flag_icon'/>
<Image Location='207,240' Name='BuildingClock' ScrollExtent='32,32' Size='32,32' Stretch='false' Style='/Icons.Map.Misc.Building_clock_icon'/>
<Image Location='248,239' Name='BuildingFlag' ScrollExtent='24,32' Size='24,32' Stretch='false' Style='/Icons.Map.Misc.Building_flag_icon'/>
<Image Location='291,239' Name='VanuModule' ScrollExtent='32,21' Size='32,21' Stretch='false' Style='/Icons.Map.Misc.Vanu_module_icon'/>
<Image Location='326,239' Name='VanuModuleEmpty' ScrollExtent='32,21' Size='32,21' Stretch='false' Style='/Icons.Map.Misc.Vanu_module_empty_icon'/>
<Image Location='4,117' Name='MonolithUnit' ScrollExtent='21,19' Size='21,19' Stretch='false' Style='/Icons.Map.Misc.Monolith_Unit_icon'/>
</Page>
<Page BackgroundColor='#FFFF00' Location='181,685' movable='true' Name='DroppodToolbar' PackLocation='proportional,proportional' PackLocationProp='0277/1024,0725/0768' ScrollExtent='193,81' Size='193,81' Visible='false'>
<Button BackgroundColor='#FFFFFF' LocalText='[@LaunchDroppod]' Location='31,25' Name='DroppodLaunchButton' OnPress='psc_launchdroppod
psc_hidemap' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style'>@LaunchDroppod</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.800' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='193,81' Size='193,81' Stretch='false'/>
<Image AbsorbsInput='false' BackgroundColor='#FFFFFF' BackgroundOpacity='1.000' Name='Flash' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='193,81' Size='193,81' Stretch='false' Visible='false'/>
</Page>
<Page BackgroundColor='#FFFF00' Location='12,378' movable='true' Name='OrbitalStrikeToolbar' PackLocation='proportional,proportional' PackLocationProp='0108/1024,0442/0768' ScrollExtent='193,129' Size='193,129' Visible='false'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OrbitalStrikeMapInstructions]' Location='19,14' Name='TitleText' PackLocation='left,top' PackLocationProp='0019/0001,0014/0001' PackSize='absolute,fixed' PackSizeProp='0037/0001,0002/0003' ScrollExtent='156,57' Size='156,57' TextAlignment='Center' TextAlignmentVertical='Center' TruncateElipsis='false'>@OrbitalStrikeMapInstructions</Text>
<Button BackgroundColor='#FFFFFF' LocalText='[@OrbitalStrikeMapButton]' LocalTooltip='[@OrbitalStrikeMapButtonTooltip]' Location='31,80' Name='UploadCoordsButton' PackLocation='center,bottom' PackLocationProp='-065/0001,-049/0001' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@OrbitalStrikeMapButtonTooltip'>@OrbitalStrikeMapButton</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.800' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='193,129' Size='193,129' Stretch='false'/>
<Image AbsorbsInput='false' BackgroundColor='#FFFFFF' BackgroundOpacity='1.000' Name='Flash' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='193,129' Size='193,129' Stretch='false' Visible='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFF00' Location='503,0' Name='CommanderToolbar' PackLocation='right,top' PackLocationProp='-521/0001,0000/0001' ScrollExtent='177,140' Size='177,140' Visible='false'>
<Page Location='0,24' Name='Continent' ScrollExtent='177,115' Size='177,115' Visible='false'>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleFriendsTooltip]' Location='21,12' Name='FriendlyToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleFriendsTooltip'>@ToggleFriendlies</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEnemiesTooltip]' Location='21,34' Name='EnemyToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEnemiesTooltip'>@ToggleEnemies</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@MapButtonAddWaypointTooltip]' Location='21,56' Name='AddWaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@MapButtonAddWaypointTooltip'>@AddWaypoint</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@MapButtonExpWaypointTooltip]' Location='21,78' Name='ExpWaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@MapButtonExpWaypointTooltip'>@ExpWaypoint</Checkbox>
<Image BackgroundOpacity='1.000' GetsInput='true' Name='Background' Opacity='0.700' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='177,115' Size='177,115' Stretch='false'/>
</Page>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFF00' Location='382,0' Name='BattleplanToolbar' PackLocation='right,top' PackLocationProp='-642/0001,0000/0001' ScrollExtent='177,235' Size='177,235' Visible='false'>
<Page Location='0,24' Name='Continent' ScrollExtent='177,211' Size='177,211' Visible='false'>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor0Tooltip]' Location='21,11' Name='Color0Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor0Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor1Tooltip]' Location='89,11' Name='Color1Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor1Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor2Tooltip]' Location='21,33' Name='Color2Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor2Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor3Tooltip]' Location='89,33' Name='Color3Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor3Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor4Tooltip]' Location='21,55' Name='Color4Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor4Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor5Tooltip]' Location='89,55' Name='Color5Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor5Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor6Tooltip]' Location='21,77' Name='Color6Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor6Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleColor7Tooltip]' Location='89,77' Name='Color7Toggle' ScrollExtent='66,20' Size='66,20' Style='/Buttons.TextButton.checkcolorstyle' Tooltip='@ToggleColor7Tooltip'></Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleDrawTooltip]' Location='21,103' Name='DrawToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleDrawTooltip'>@ToggleDraw</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEraseTooltip]' Location='21,125' Name='EraseToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEraseTooltip'>@ToggleErase</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEditTextTooltip]' Location='21,147' Name='EditTextToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEditTextTooltip'>@ToggleEditText</Checkbox>
<Button LocalText='[@MapButtonClearAll]' LocalTooltip='[@MapButtonClearAllTooltip]' Location='21,169' Name='ClearAllButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonClearAllTooltip'>@MapButtonClearAll</Button>
<Image BackgroundOpacity='1.000' GetsInput='true' Name='Background' Opacity='0.700' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='177,211' Size='177,211' Stretch='false'/>
</Page>
</Page>
<Page AbsorbsInput='false' Location='745,0' Name='MainToolbar' PackLocation='right,top' PackLocationProp='-279/0001,0000/0001' ScrollExtent='177,188' Size='177,188' Visible='false'>
<Page Location='0,24' Name='Interstellar' ScrollExtent='177,119' Size='177,119' Visible='false'>
<Button LocalText='[@MapButtonContinental]' LocalTooltip='[@MapButtonContinentalTooltip]' Location='21,12' Name='ContinentViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonContinentalTooltip'>@MapButtonContinental</Button>
<Button LocalText='[@MapButtonCluster]' LocalTooltip='[@MapButtonClusterTooltip]' Location='21,34' Name='ClusterViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonClusterTooltip'>@MapButtonCluster</Button>
<Button LocalText='[@MapButtonFindPlayer]' LocalTooltip='[@MapButtonFindPlayerTooltip]' Location='21,56' Name='CenterViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonFindPlayerTooltip'>@MapButtonFindPlayer</Button>
<Button LocalText='[@MapButtonFindWaypoint]' LocalTooltip='[@MapButtonFindWaypointTooltip]' Location='21,78' Name='FindWaypointButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonFindWaypointTooltip'>@MapButtonFindWaypoint</Button>
<Image BackgroundOpacity='1.000' GetsInput='true' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='177,119' Size='177,119' Stretch='false'/>
</Page>
<Page Location='0,24' Name='Cluster' ScrollExtent='177,119' Size='177,119' Visible='false'>
<Button LocalText='[@MapButtonGlobal]' LocalTooltip='[@MapButtonGlobalTooltip]' Location='21,12' Name='GlobalViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonGlobalTooltip'>@MapButtonGlobal</Button>
<Button LocalText='[@MapButtonContinental]' LocalTooltip='[@MapButtonContinentalTooltip]' Location='21,34' Name='ContinentViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonContinentalTooltip'>@MapButtonContinental</Button>
<Button LocalText='[@MapButtonFindPlayer]' LocalTooltip='[@MapButtonFindPlayerTooltip]' Location='21,56' Name='CenterViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonFindPlayerTooltip'>@MapButtonFindPlayer</Button>
<Button LocalText='[@MapButtonFindWaypoint]' LocalTooltip='[@MapButtonFindWaypointTooltip]' Location='21,78' Name='FindWaypointButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonFindWaypointTooltip'>@MapButtonFindWaypoint</Button>
<Image BackgroundOpacity='1.000' GetsInput='true' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='177,119' Size='177,119' Stretch='false'/>
</Page>
<Page Location='0,24' Name='Continent' ScrollExtent='177,164' Size='177,164' Visible='false'>
<Button LocalText='[@MapButtonGlobal]' LocalTooltip='[@MapButtonGlobalTooltip]' Location='21,12' Name='GlobalViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonGlobalTooltip'>@MapButtonGlobal</Button>
<Button LocalText='[@MapButtonCluster]' LocalTooltip='[@MapButtonClusterTooltip]' Location='21,34' Name='ClusterViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonClusterTooltip'>@MapButtonCluster</Button>
<Button LocalText='[@MapButtonFindPlayer]' LocalTooltip='[@MapButtonFindPlayerTooltip]' Location='21,56' Name='CenterViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonFindPlayerTooltip'>@MapButtonFindPlayer</Button>
<Button LocalText='[@MapButtonFindWaypoint]' LocalTooltip='[@MapButtonFindWaypointTooltip]' Location='21,78' Name='FindWaypointButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonFindWaypointTooltip'>@MapButtonFindWaypoint</Button>
<Button LocalText='[@MapButtonZoomIn]' LocalTooltip='[@MapButtonZoomInTooltip]' Location='21,100' Name='ZoomInButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonZoomInTooltip'>@MapButtonZoomIn</Button>
<Button LocalText='[@MapButtonZoomOut]' LocalTooltip='[@MapButtonZoomOutTooltip]' Location='21,122' Name='ZoomOutButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonZoomOutTooltip'>@MapButtonZoomOut</Button>
<Image BackgroundOpacity='1.000' GetsInput='true' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='177,164' Size='177,164' Stretch='false'/>
</Page>
<Page Location='0,24' Name='Cavern' ScrollExtent='177,142' Size='177,142' Visible='false'>
<Button LocalText='[@MapButtonGlobal]' LocalTooltip='[@MapButtonGlobalTooltip]' Location='21,12' Name='GlobalViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonGlobalTooltip'>@MapButtonGlobal</Button>
<Button LocalText='[@MapButtonFindPlayer]' LocalTooltip='[@MapButtonFindPlayerTooltip]' Location='21,34' Name='CenterViewButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonFindPlayerTooltip'>@MapButtonFindPlayer</Button>
<Button LocalText='[@MapButtonFindWaypoint]' LocalTooltip='[@MapButtonFindWaypointTooltip]' Location='21,56' Name='FindWaypointButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonFindWaypointTooltip'>@MapButtonFindWaypoint</Button>
<Button LocalText='[@MapButtonZoomIn]' LocalTooltip='[@MapButtonZoomInTooltip]' Location='21,78' Name='ZoomInButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonZoomInTooltip'>@MapButtonZoomIn</Button>
<Button LocalText='[@MapButtonZoomOut]' LocalTooltip='[@MapButtonZoomOutTooltip]' Location='21,100' Name='ZoomOutButton' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.style' Tooltip='@MapButtonZoomOutTooltip'>@MapButtonZoomOut</Button>
<Image BackgroundOpacity='1.000' GetsInput='true' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='177,142' Size='177,142' Stretch='false'/>
</Page>
</Page>
<Page AbsorbsInput='false' Location='624,0' Name='ToggleToolbar' PackLocation='right,top' PackLocationProp='-400/0001,0000/0001' ScrollExtent='177,422' Size='177,422' Visible='false'>
<Page Location='0,24' Name='Interstellar' ScrollExtent='177,246' Size='177,246' Visible='false'>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleTextOn_Off]' Location='21,12' Name='TextToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleTextOn_Off'>@OverheadToggleText</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleSOITooltip]' Location='21,34' Name='BuildingSOIToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleSOITooltip'>@OverheadToggleBuildingSOI</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleSquadTooltip]' Location='21,56' Name='SquadToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleSquadTooltip'>@OverheadToggleSquad</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleHotSpotsTooltip]' Location='21,78' Name='HotSpotToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleHotSpotsTooltip'>@OverheadToggleHotSpots</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleWaypointsTooltip]' Location='21,100' Name='WaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleWaypointsTooltip'>@OverheadToggleWaypoints</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleContinentInfoTooltip]' Location='21,122' Name='ContinentInfoToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleContinentInfoTooltip'>@OverheadToggleContinentInfo</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@TogglePopulationListTooltip]' Location='21,144' Name='PopulationListToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@TogglePopulationListTooltip'>@OverheadTogglePopulationList</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEmpireBenefitsOn_Off]' Location='21,166' Name='EmpireBenefitsToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEmpireBenefitsOn_Off'>@EmpireBenefitsToggleInfo</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleHomeBaseWaypointsTooltip]' Location='21,188' Name='HomeBaseWaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleHomeBaseWaypointsTooltip'>@OverheadToggleHomeBaseWaypoints</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@SquadEXPWaypointToggleTooltip]' Location='21,210' Name='SquadEXPWaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@SquadEXPWaypointToggleTooltip'>@OverheadToggleSquadEXPWaypoints</Checkbox>
<Image BackgroundOpacity='1.000' GetsInput='true' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='177,246' Size='177,246' Stretch='false'/>
</Page>
<Page Location='0,24' Name='Cluster' ScrollExtent='177,247' Size='177,247' Visible='false'>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleTextOn_Off]' Location='21,12' Name='TextToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleTextOn_Off'>@OverheadToggleText</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleSOITooltip]' Location='21,34' Name='BuildingSOIToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleSOITooltip'>@OverheadToggleBuildingSOI</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleSquadTooltip]' Location='21,56' Name='SquadToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleSquadTooltip'>@OverheadToggleSquad</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleHotSpotsTooltip]' Location='21,78' Name='HotSpotToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleHotSpotsTooltip'>@OverheadToggleHotSpots</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleWaypointsTooltip]' Location='21,100' Name='WaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleWaypointsTooltip'>@OverheadToggleWaypoints</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleContinentInfoTooltip]' Location='21,122' Name='ContinentInfoToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleContinentInfoTooltip'>@OverheadToggleContinentInfo</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@TogglePopulationListTooltip]' Location='21,144' Name='PopulationListToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@TogglePopulationListTooltip'>@OverheadTogglePopulationList</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEmpireBenefitsOn_Off]' Location='21,166' Name='EmpireBenefitsToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEmpireBenefitsOn_Off'>@EmpireBenefitsToggleInfo</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleHomeBaseWaypointsTooltip]' Location='21,187' Name='HomeBaseWaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleHomeBaseWaypointsTooltip'>@OverheadToggleHomeBaseWaypoints</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@SquadEXPWaypointToggleTooltip]' Location='21,209' Name='SquadEXPWaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@SquadEXPWaypointToggleTooltip'>@OverheadToggleSquadEXPWaypoints</Checkbox>
<Image BackgroundOpacity='1.000' GetsInput='true' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='177,247' Size='177,247' Stretch='false'/>
</Page>
<Page Location='0,24' Name='Continent' ScrollExtent='177,382' Size='177,382' Visible='false'>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleTextOn_Off]' Location='21,12' Name='TextToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleTextOn_Off'>@OverheadToggleText</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleSOITooltip]' Location='21,34' Name='BuildingSOIToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleSOITooltip'>@OverheadToggleBuildingSOI</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleSquadTooltip]' Location='21,56' Name='SquadToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleSquadTooltip'>@OverheadToggleSquad</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleHotSpotsTooltip]' Location='21,78' Name='HotSpotToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleHotSpotsTooltip'>@OverheadToggleHotSpots</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleResourcesTooltip]' Location='21,100' Name='ResourceToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleResourcesTooltip'>@OverheadToggleResources</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEquipmentTooltip]' Location='21,122' Name='EquipmentToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEquipmentTooltip'>@OverheadToggleEquipment</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleFacilityInfoTooltip]' Location='21,144' Name='BuildingStateToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleFacilityInfoTooltip'>@OverheadToggleFacilityInfo</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleBattleplanTooltip]' Location='21,166' Name='BattleplanToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleBattleplanTooltip'>@OverheadToggleBattleplan</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleGridTooltip]' Location='21,188' Name='GridToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleGridTooltip'>@OverheadToggleGrid</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleWaypointsTooltip]' Location='21,210' Name='WaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleWaypointsTooltip'>@OverheadToggleWaypoints</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleContinentInfoTooltip]' Location='21,232' Name='ContinentInfoToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleContinentInfoTooltip'>@OverheadToggleContinentInfo</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@TogglePopulationListTooltip]' Location='21,254' Name='PopulationListToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@TogglePopulationListTooltip'>@OverheadTogglePopulationList</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEmpireBenefitsOn_Off]' Location='21,276' Name='EmpireBenefitsToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEmpireBenefitsOn_Off'>@EmpireBenefitsToggleInfo</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleHomeBaseWaypointsTooltip]' Location='21,298' Name='HomeBaseWaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleHomeBaseWaypointsTooltip'>@OverheadToggleHomeBaseWaypoints</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@SquadEXPWaypointToggleTooltip]' Location='21,320' Name='SquadEXPWaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@SquadEXPWaypointToggleTooltip'>@OverheadToggleSquadEXPWaypoints</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleTacticalTooltip]' Location='21,342' Name='TacticalToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleTacticalTooltip'>@OverheadToggleTactical</Checkbox>
<Image BackgroundOpacity='1.000' GetsInput='true' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='177,382' Size='177,382' Stretch='false'/>
</Page>
<Page Location='0,24' Name='Cavern' PackLocation='left,top' PackLocationProp='0000/0001,0024/0001' ScrollExtent='177,400' Size='177,400' Visible='false'>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleTextOn_Off]' Location='21,12' Name='TextToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleTextOn_Off'>@OverheadToggleText</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleSquadTooltip]' Location='21,34' Name='SquadToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleSquadTooltip'>@OverheadToggleSquad</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleHotSpotsTooltip]' Location='21,56' Name='HotSpotToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleHotSpotsTooltip'>@OverheadToggleHotSpots</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEquipmentTooltip]' Location='21,78' Name='EquipmentToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEquipmentTooltip'>@OverheadToggleEquipment</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleFacilityInfoTooltip]' Location='21,100' Name='BuildingStateToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleFacilityInfoTooltip'>@OverheadToggleFacilityInfo</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleBattleplanTooltip]' Location='21,122' Name='BattleplanToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleBattleplanTooltip'>@OverheadToggleBattleplan</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleGridTooltip]' Location='21,144' Name='GridToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleGridTooltip'>@OverheadToggleGrid</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleTacticalTooltip]' Location='21,166' Name='TacticalToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleTacticalTooltip'>@OverheadToggleTactical</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CavernCeilingToggleTooltip]' Location='21,188' Name='CeilingToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@CavernCeilingToggleTooltip'>@CavernCeilingToggle</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CavernGroundToggleTooltip]' Location='21,210' Name='GroundToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@CavernGroundToggleTooltip'>@CavernGroundToggle</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CavernZiplineToggleTooltip]' Location='21,232' Name='ZiplineToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@CavernZiplineToggleTooltip'>@CavernZiplineToggle</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleWaypointsTooltip]' Location='21,254' Name='WaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleWaypointsTooltip'>@OverheadToggleWaypoints</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleContinentInfoTooltip]' Location='21,276' Name='ContinentInfoToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleContinentInfoTooltip'>@OverheadToggleContinentInfo</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@TogglePopulationListTooltip]' Location='21,298' Name='PopulationListToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@TogglePopulationListTooltip'>@OverheadTogglePopulationList</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleEmpireBenefitsOn_Off]' Location='21,320' Name='EmpireBenefitsToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleEmpireBenefitsOn_Off'>@EmpireBenefitsToggleInfo</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@ToggleHomeBaseWaypointsTooltip]' Location='21,341' Name='HomeBaseWaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@ToggleHomeBaseWaypointsTooltip'>@OverheadToggleHomeBaseWaypoints</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@SquadEXPWaypointToggleTooltip]' Location='21,362' Name='SquadEXPWaypointToggle' ScrollExtent='135,20' Size='135,20' Style='/Buttons.TextButton.checklongstyle' Tooltip='@SquadEXPWaypointToggleTooltip'>@OverheadToggleSquadEXPWaypoints</Checkbox>
<Image BackgroundOpacity='1.000' GetsInput='true' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='177,400' Size='177,400' Stretch='false'/>
</Page>
</Page>
<Page AbsorbsInput='false' Location='754,0' Name='MapLegend' PackLocation='right,top' PackLocationProp='-270/0001,0000/0001' ScrollExtent='270,513' Size='270,513' Visible='false'>
<Page Location='0,24' Name='Interstellar' ScrollExtent='270,333' Size='270,333' Visible='false'>
<Image Color='#FFFF00' Location='22,11' Name='Hotspot' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Misc.Hotspot_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendHotSpot]' Location='62,11' MaxLines='1' Name='HotSpotLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendHotSpot</Text>
<Image Color='#01DDFD' Location='27,50' Name='Warpgate' ScrollExtent='20,20' Size='20,20' Style='/Icons.Map.Misc.Circle_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendWarpgate]' Location='62,45' MaxLines='1' Name='WarpgateLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendWarpgate</Text>
<Image Color='#25E23D' Location='27,84' Name='Geowarp' ScrollExtent='20,20' Size='20,20' Style='/Icons.Map.Misc.Triangle_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendGeowarp]' Location='62,79' MaxLines='1' Name='GeowarpLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendGeowarp</Text>
<Image Color='#0404FF' Location='22,113' Name='SoiNC' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_nc_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiNC]' Location='62,113' MaxLines='1' Name='SoiNCLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiNC</Text>
<Image Color='#ED0000' Location='22,147' Name='SoiTR' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_tr_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiTR]' Location='62,147' MaxLines='1' Name='SoiTRLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiTR</Text>
<Image Color='#9400CB' Location='22,181' Name='SoiVS' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_vs_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiVS]' Location='62,181' MaxLines='1' Name='SoiVSLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiVS</Text>
<Image Color='#BFFF73' Location='22,214' Name='SoiNeutral' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiNeutral]' Location='62,214' MaxLines='1' Name='SoiNeutralLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiNeutral</Text>
<Image Color='#5DBAC1' Location='22,248' Name='BWG' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Misc.BWG'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendBWGPossible]' Location='62,248' MaxLines='1' Name='SoiNeutralLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendBWGPossible</Text>
<Image continentid='23' Location='26,286' Name='PopLock' PackLocation='left,top' PackLocationProp='0026/0001,0286/0001' PackSize='proportional,proportional' PackSizeProp='0022/0270,0022/0333' ScrollExtent='22,22' Size='22,22' Style='/Icons.Map.Misc.Lock_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendPopLock]' Location='62,282' MaxLines='1' Name='PopLockLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendPopLock</Text>
<Image BackgroundOpacity='1.000' GetsInput='true' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='270,333' Size='270,333' Stretch='false'/>
</Page>
<Page Location='0,24' Name='Cluster' ScrollExtent='270,267' Size='270,267' Visible='false'>
<Image Color='#FFFF00' Location='22,11' Name='Hotspot' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Misc.Hotspot_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendHotSpot]' Location='62,11' MaxLines='1' Name='HotSpotLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendHotSpot</Text>
<Image Color='#01DDFD' Location='27,50' Name='Warpgate' ScrollExtent='20,20' Size='20,20' Style='/Icons.Map.Misc.Circle_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendWarpgate]' Location='62,45' MaxLines='1' Name='WarpgateLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendWarpgate</Text>
<Image Color='#25E23D' Location='27,84' Name='Geowarp' ScrollExtent='20,20' Size='20,20' Style='/Icons.Map.Misc.Triangle_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendGeowarp]' Location='62,79' MaxLines='1' Name='GeowarpLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendGeowarp</Text>
<Image Color='#0404FF' Location='22,113' Name='SoiNC' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_nc_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiNC]' Location='62,113' MaxLines='1' Name='SoiNCLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiNC</Text>
<Image Color='#ED0000' Location='22,147' Name='SoiTR' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_tr_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiTR]' Location='62,147' MaxLines='1' Name='SoiTRLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiTR</Text>
<Image Color='#9400CB' Location='22,181' Name='SoiVS' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_vs_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiVS]' Location='62,181' MaxLines='1' Name='SoiVSLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiVS</Text>
<Image Color='#BFFF73' Location='22,214' Name='SoiNeutral' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiNeutral]' Location='62,214' MaxLines='1' Name='SoiNeutralLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiNeutral</Text>
<Image BackgroundOpacity='1.000' GetsInput='true' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='270,267' Size='270,267' Stretch='false'/>
</Page>
<Page Location='0,24' Name='Continent' ScrollExtent='270,473' Size='270,473' Visible='false'>
<Image Color='#FFFF00' Location='22,11' Name='Hotspot' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Misc.Hotspot_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendHotSpot]' Location='62,11' MaxLines='1' Name='HotSpotLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendHotSpot</Text>
<Image Color='#FFFF00' Location='27,50' Name='HandAndHold' ScrollExtent='20,20' Size='20,20' Style='/Icons.Map.Misc.Building_clock_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendHackAndHold]' Location='62,45' MaxLines='1' Name='HackAndHoldLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendHackAndHold</Text>
<Image Color='#FFFF00' Location='27,84' Name='LLC' ScrollExtent='20,20' Size='20,20' Style='/Icons.Map.Misc.Building_flag_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendLLC]' Location='62,79' MaxLines='1' Name='LLCLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendLLC</Text>
<Image Color='#0404FF' Location='22,113' Name='SoiNC' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_nc_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiNC]' Location='62,113' MaxLines='1' Name='SoiNCLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiNC</Text>
<Image Color='#ED0000' Location='22,147' Name='SoiTR' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_tr_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiTR]' Location='62,147' MaxLines='1' Name='SoiTRLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiTR</Text>
<Image Color='#9400CB' Location='22,181' Name='SoiVS' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_vs_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiVS]' Location='62,181' MaxLines='1' Name='SoiVSLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiVS</Text>
<Image Color='#BFFF73' Location='22,214' Name='SoiNeutral' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiNeutral]' Location='62,214' MaxLines='1' Name='SoiNeutralLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiNeutral</Text>
<Image Color='#FFFF00' Location='27,253' Name='LLU' ScrollExtent='20,20' Size='20,20' Style='/Icons.Map.Misc.Capture_flag_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendCaptureFlag]' Location='62,248' MaxLines='1' Name='LLULabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendCaptureFlag</Text>
<Image Location='25,288' Name='Module' ScrollExtent='25,16' Size='25,16' Style='/Icons.Map.Misc.Vanu_module_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendVanuModule]' Location='62,281' MaxLines='1' Name='ModulelLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendVanuModule</Text>
<Image Color='#00FFFF' Location='22,321' Name='Respawn' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Respawn.Respawn_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendRespawn]' Location='62,321' MaxLines='1' Name='RespawnlLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendRespawn</Text>
<Image Color='#00FFFF' Location='22,355' Name='RespawnAMS' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Respawn.Respawn_ams_icon'/>
<Image Color='#00FFFF' Location='22,355' Name='RespawnAMSBack' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Respawn.Respawn_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendRespawnAms]' Location='62,355' MaxLines='1' Name='RespawnlAMSLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendRespawnAms</Text>
<Image Color='#000000' Location='23,388' Name='Warpgate' ScrollExtent='28,28' Size='28,28' Style='/Icons.Map.Legend.Warpgate_icon'/>
<Image Color='#BFFF73' Location='22,388' Name='WarpgateBackground' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendWarpgate]' Location='62,388' MaxLines='1' Name='WarpgateLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendWarpgate</Text>
<Image Color='#BFFF73' Location='22,421' Name='Geowarp' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Buildings.geo_warpgate'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendGeowarp]' Location='62,421' MaxLines='1' Name='GeowarpLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendGeowarp</Text>
<Image BackgroundOpacity='1.000' GetsInput='true' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='270,473' Size='270,473' Stretch='false'/>
</Page>
<Page Location='0,24' Name='Cavern' ScrollExtent='270,331' Size='270,331' Visible='false'>
<Image Color='#FFFF00' Location='22,11' Name='Hotspot' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Misc.Hotspot_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendHotSpot]' Location='62,11' MaxLines='1' Name='HotSpotLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendHotSpot</Text>
<Image Color='#FFFF00' Location='27,50' Name='HandAndHold' ScrollExtent='20,20' Size='20,20' Style='/Icons.Map.Misc.Building_clock_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendHackAndHold]' Location='62,45' MaxLines='1' Name='HackAndHoldLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendHackAndHold</Text>
<Image Color='#BFFF73' Location='22,79' Name='Geowarp' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Buildings.geo_warpgate'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendGeowarp]' Location='62,79' MaxLines='1' Name='GeowarpLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendGeowarp</Text>
<Image Color='#0404FF' Location='22,113' Name='SoiNC' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_nc_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiNC]' Location='62,113' MaxLines='1' Name='SoiNCLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiNC</Text>
<Image Color='#ED0000' Location='22,147' Name='SoiTR' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_tr_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiTR]' Location='62,147' MaxLines='1' Name='SoiTRLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiTR</Text>
<Image Color='#9400CB' Location='22,181' Name='SoiVS' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_vs_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiVS]' Location='62,181' MaxLines='1' Name='SoiVSLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiVS</Text>
<Image Color='#BFFF73' Location='22,214' Name='SoiNeutral' ScrollExtent='30,30' Size='30,30' Style='/Icons.Map.Facility.Soi_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendSoiNeutral]' Location='62,214' MaxLines='1' Name='SoiNeutralLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendSoiNeutral</Text>
<Image Color='#FFFF00' Location='27,253' Name='LLU' ScrollExtent='20,20' Size='20,20' Style='/Icons.Map.Misc.Monolith_Unit_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendCaptureFlag]' Location='62,248' MaxLines='1' Name='LLULabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendCaptureFlag</Text>
<Image Location='25,288' Name='Module' ScrollExtent='25,16' Size='25,16' Style='/Icons.Map.Misc.Vanu_module_icon'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@OverheadLegendVanuModule]' Location='62,281' MaxLines='1' Name='ModulelLabel' ScrollExtent='186,30' Size='186,30' TextAlignmentVertical='Center'>@OverheadLegendVanuModule</Text>
<Image BackgroundOpacity='1.000' GetsInput='true' Name='Background' Opacity='0.700' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='270,331' Size='270,331' Stretch='false'/>
</Page>
</Page>
<Page Location='381,113' movable='true' Name='FacilityInfo' PackLocation='left,bottom' PackLocationProp='0381/0001,-655/0001' ScrollExtent='250,508' ShowSound='interface_feedback_rollover.wav' Size='250,508' Visible='false'>
<Page Location='15,0' Name='Title' ScrollExtent='220,32' Size='220,32'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@FacilityInfoTitle]' Location='70,8' Name='TitleText' PackLocation='left,top' PackLocationProp='0070/0001,0008/0001' PackSize='absolute,fixed' PackSizeProp='0139/0001,0002/0003' ScrollExtent='81,34' Size='81,20' TextAlignment='Center' TextAlignmentVertical='Center'>@FacilityInfoTitle</Text>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='40,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0040/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='160,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-060/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Image BackgroundOpacity='1.000' Name='Title' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' RStyleDefault='/WindowPanes.TitleBarFocus.style' ScrollExtent='220,32' Size='220,32'/>
</Page>
<Template Name='VanuModuleTemplate' Size='210,19'>\<Image absorbsinput = \'false\' backgroundopacity = \'0.000\' color = \'$ModuleColor$\' location = \'1,2\' name = \'ModuleIcon\' scrollextent = \'18,14\' size = \'18,14\' style = \'/Icons.Map.Misc.Vanu_Module_Icon\'/\>
\<text font = \'/Fonts.HudFont2\' location = \'20,3\' size = \'125,15\'\>
$ModuleName$
\</text\>
\<text color = \'$TextColor\' font = \'/Fonts.HudFont2\' location = \'121,3\' size = \'90,25\' textalignment = \'right\'\>
$Lifespan$
\</text\></Template>
<DataSource Name='VanuModuleDataSource'>
<Data lifespan='00:00' modulecolor='#C0C0C0' modulename='Bind Module' Name='ModuleInfo6' textcolor='#FFFFFF'/>
<Data lifespan='00:00' modulecolor='#C0C0C0' modulename='Vehicle Module' Name='ModuleInfo5' textcolor='#FFFFFF'/>
<Data lifespan='00:00' modulecolor='#C0C0C0' modulename='Pain Module' Name='ModuleInfo4' textcolor='#FFFFFF'/>
<Data lifespan='00:00' modulecolor='#C0C0C0' modulename='Healing Module' Name='ModuleInfo3' textcolor='#FFFFFF'/>
<Data lifespan='Lattice Benefit' modulecolor='#C0C0C0' modulename='Equipment Module' Name='ModuleInfo2' textcolor='#00FF00'/>
<Data lifespan='Cavern Lock' modulecolor='#C0C0C0' modulename='Defender Module' Name='ModuleInfo1' textcolor='#FFE400'/>
</DataSource>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='18,34' Name='FacilityTypeRect' Opacity='0.750' ScrollExtent='215,19' Size='215,19'/>
<Text Font='/Fonts.HudFont3' LocalText='[@FacilityInfoTypeHeader]' Location='20,34' Name='FacilityTypeHeaderText' ScrollExtent='211,17' Size='211,17'>@FacilityInfoTypeHeader</Text>
<Text Font='/Fonts.HudFont3' Location='20,34' Name='FacilityTypeText' ScrollExtent='209,17' Size='209,17' TextAlignment='Right'></Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='18,56' Name='StatusRect' Opacity='0.750' ScrollExtent='215,109' Size='215,109'/>
<Text Font='/Fonts.HudFont3' LocalText='[@FacilityInfoStatusHeader]' Location='20,56' Name='StatusHeaderText' ScrollExtent='211,17' Size='211,17' TextAlignment='Center'>@FacilityInfoStatusHeader</Text>
<Text Font='/Fonts.HudFont3' LocalText='[@FacilityInfoControlRoom]' Location='20,76' Name='ControlRoomText' ScrollExtent='209,17' Size='209,17'>@FacilityInfoControlRoom</Text>
<Text Font='/Fonts.HudFont3' Location='20,76' Name='ControlRoomStateText' ScrollExtent='209,17' Size='209,17' TextAlignment='Right'></Text>
<Text Font='/Fonts.HudFont3' LocalText='[@FacilityInfoGenerator]' Location='20,94' Name='GeneratorText' ScrollExtent='209,17' Size='209,17'>@FacilityInfoGenerator</Text>
<Text Font='/Fonts.HudFont3' Location='20,94' Name='GeneratorStateText' ScrollExtent='209,17' Size='209,17' TextAlignment='Right'></Text>
<Text Font='/Fonts.HudFont3' LocalText='[@FacilityInfoRespawnTubes]' Location='20,112' Name='SpawnTubesText' ScrollExtent='209,17' Size='209,17'>@FacilityInfoRespawnTubes</Text>
<Text Font='/Fonts.HudFont3' Location='20,112' Name='SpawnTubesStateText' ScrollExtent='209,17' Size='209,17' TextAlignment='Right'></Text>
<Text Font='/Fonts.HudFont3' LocalText='[@FacilityInfoNTUSilo]' Location='20,130' Name='NTUSiloText' ScrollExtent='209,17' Size='209,17'>@FacilityInfoNTUSilo</Text>
<Text Font='/Fonts.HudFont3' Location='20,130' Name='NTUSiloStateText' ScrollExtent='209,17' Size='209,17' TextAlignment='Right'></Text>
<Text Font='/Fonts.HudFont3' LocalText='[@FacilityInfoMainTerminal]' Location='20,148' Name='MainTerminalText' ScrollExtent='209,17' Size='209,17'>@FacilityInfoMainTerminal</Text>
<Text Font='/Fonts.HudFont3' Location='20,148' Name='MainTerminalStateText' ScrollExtent='209,17' Size='209,17' TextAlignment='Right'></Text>
<Text Font='/Fonts.HudFont2' LocalText='Outfit Name Here' Location='20,168' Name='ClaimedByText' ScrollExtent='210,71' Size='210,71' TextAlignment='Center' TextAlignmentVertical='Bottom'>Outfit Name Here</Text>
<Grid CellCount='1,1' CellSize='64,64' DataSource='/DataSources.OutfitLogos' Location='93,166' Name='OutfitDecal' ScrollExtent='64,64' Size='64,64' Style='/DefaultGrid.style'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='18,243' Name='OutfitOwnershipRect' Opacity='0.750' ScrollExtent='215,18' Size='215,18'/>
<Text Font='/Fonts.HudFont3' LocalText='[@FacilityInfoUnclaimed]' Location='20,243' Name='UnclaimedText' ScrollExtent='211,18' Size='211,18' TextAlignment='Center' Visible='false'>@FacilityInfoUnclaimed</Text>
<Text Font='/Fonts.HudFont2' LocalText='[@FacilityInfoClaimDuration]' Location='20,243' Name='ClaimDurationHeaderText' ScrollExtent='211,18' Size='211,18' TextAlignmentVertical='Center'>@FacilityInfoClaimDuration</Text>
<Text Font='/Fonts.HudFont2' Location='20,243' Name='ClaimDurationText' ScrollExtent='211,18' Size='211,18' TextAlignment='Right' TextAlignmentVertical='Center'></Text>
<Listbox AbsorbsInput='false' DataSource='VanuModuleDataSource' GetsInput='false' Location='19,266' Name='ModulesListbox' RowTemplate='VanuModuleTemplate' ScrollExtent='213,114' Size='213,114' Style='/Listboxes.Clear.style'/>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@NoModulesInstalled]' Location='20,266' MaxLines='1' Name='NoModulesText' ScrollExtent='211,114' Size='211,114' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>@NoModulesInstalled</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='17,264' Name='VanuModulesRect' Opacity='0.750' ScrollExtent='217,119' Size='217,119'/>
<Image Location='21,389' Name='AmpBenefitIcon' ScrollExtent='32,13' Size='32,13' Style='/Icons.Map.Facility.Benefit_ShieldedVehicle_icon'/>
<Text Font='/Fonts.HudFont2' LocalText='[@FacilityInfoBenefitAmp]' Location='58,386' Name='AmpBenefitText' ScrollExtent='178,18' Size='178,18' TextAlignmentVertical='Center'>@FacilityInfoBenefitAmp</Text>
<Image Location='33,403' Name='BioBenefitIcon' ScrollExtent='8,22' Size='8,22' Style='/Icons.Map.Facility.Benefit_SpawnTube_icon'/>
<Text Font='/Fonts.HudFont2' LocalText='[@FacilityInfoBenefitBio]' Location='58,406' Name='BioBenefitText' ScrollExtent='178,18' Size='178,18' TextAlignmentVertical='Center'>@FacilityInfoBenefitBio</Text>
<Image Location='30,425' Name='DropBenefitIcon' ScrollExtent='15,21' Size='15,21' Style='/Icons.Map.Facility.Benefit_Repair_icon'/>
<Text Font='/Fonts.HudFont2' LocalText='[@FacilityInfoBenefitDrop]' Location='58,426' Name='DropBenefitText' ScrollExtent='178,18' Size='178,18' TextAlignmentVertical='Center'>@FacilityInfoBenefitDrop</Text>
<Image Location='27,445' Name='InterBenefitIcon' ScrollExtent='20,20' Size='20,20' Style='/Icons.Map.Facility.Benefit_Radar_icon'/>
<Text Font='/Fonts.HudFont2' LocalText='[@FacilityInfoBenefitInter]' Location='58,446' Name='InterBenefitText' ScrollExtent='178,18' Size='178,18' TextAlignmentVertical='Center'>@FacilityInfoBenefitInter</Text>
<Image Location='19,469' Name='TechBenefitIcon' ScrollExtent='37,12' Size='37,12' Style='/Icons.Map.Facility.Benefit_AssaultVehicle_icon'/>
<Text Font='/Fonts.HudFont2' LocalText='[@FacilityInfoBenefitTech]' Location='58,466' Name='TechBenefitText' ScrollExtent='178,18' Size='178,18' TextAlignmentVertical='Center'>@FacilityInfoBenefitTech</Text>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='18,386' Name='FacilityBenefitsRect' Opacity='0.750' ScrollExtent='215,100' Size='215,100'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='250,491' Size='250,491' Stretch='false' Style=' '/>
</Page>
<Page Location='0,28' movable='true' Name='TacticalOverlayControls' ScrollExtent='280,145' Size='280,145' Visible='false'>
<Page Location='30,0' Name='Title' ScrollExtent='220,32' Size='220,32'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@OverheadToggleTactical]' Location='55,8' Name='TitleText' PackLocation='left,top' PackLocationProp='0055/0001,0008/0001' PackSize='absolute,fixed' PackSizeProp='0108/0001,0002/0003' ScrollExtent='112,34' Size='112,20' TextAlignment='Center' TextAlignmentVertical='Center'>@OverheadToggleTactical</Text>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='35,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0035/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='169,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-051/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Image BackgroundOpacity='1.000' Name='Title' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' RStyleDefault='/WindowPanes.TitleBarFocus.style' ScrollExtent='220,32' Size='220,32'/>
</Page>
<Page Name='Controls' PackSize='a,a' PackSizeProp='0000/0001,0000/0001' ScrollExtent='280,145' Size='280,145'>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@TacticalTRTooltip]' Location='23,48' Name='TRCheckbox' ScrollExtent='20,20' Size='20,20' Style='/Buttons.Radiobox.style' Tooltip='@TacticalTRTooltip'></Checkbox>
<Image AbsorbsInput='false' Location='38,40' Name='TR' ScrollExtent='30,30' Size='30,30' Style='/Frontend.MiniTR'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@TacticalNCTooltip]' Location='89,48' Name='NCCheckbox' ScrollExtent='20,20' Size='20,20' Style='/Buttons.Radiobox.style' Tooltip='@TacticalNCTooltip'></Checkbox>
<Image AbsorbsInput='false' Location='106,41' Name='NC' ScrollExtent='30,30' Size='30,30' Style='/Frontend.MiniNC'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@TacticalVSTooltip]' Location='156,48' Name='VSCheckbox' ScrollExtent='20,20' Size='20,20' Style='/Buttons.Radiobox.style' Tooltip='@TacticalVSTooltip'></Checkbox>
<Image AbsorbsInput='false' Location='169,41' Name='VS' ScrollExtent='30,30' Size='30,30' Style='/Frontend.MiniVS'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@TacticalDetectionTooltip]' Location='215,48' Name='CellDetectionCheckbox' ScrollExtent='20,20' Size='20,20' Style='/Buttons.Radiobox.style' Tooltip='@TacticalDetectionTooltip'></Checkbox>
<Image AbsorbsInput='false' Color='#40FFFF' Location='234,44' Name='CellDetection' ScrollExtent='22,22' Size='22,22' Style='/Icons.HUD.Radar_motion_sensor_blip'/>
<Text Font='/Fonts.HudFont2' LocalText='[@TacticalInfluence]' Location='20,79' Name='Influence' ScrollExtent='95,28' Size='95,15' TextAlignment='Center'>@TacticalInfluence</Text>
<Sliderbar LocalTooltip='[@TacticalInfluenceGainTooltip]' Location='120,75' Name='InfluenceGainSlider' ScrollExtent='135,18' Size='135,18' Style='/Sliderbars.Options.Style' Tooltip='@TacticalInfluenceGainTooltip' UpperLimit='100' Value='50'/>
<Text Font='/Fonts.HudFont2' LocalText='[@TacticalDetection]' Location='20,109' Name='Detection' ScrollExtent='95,28' Size='95,15' TextAlignment='Center'>@TacticalDetection</Text>
<Sliderbar LocalTooltip='[@TacticalDetectionOpacityTooltip]' Location='120,105' Name='DetectionOpacitySlider' ScrollExtent='135,18' Size='135,18' Style='/Sliderbars.Options.Style' Tooltip='@TacticalDetectionOpacityTooltip' UpperLimit='100' Value='50'/>
</Page>
<Page Name='NoData' PackSize='a,a' PackSizeProp='0000/0001,0000/0001' ScrollExtent='280,145' Size='280,145' Visible='false'>
<Text Font='/Fonts.HudFont2' LocalText='[@TacticalNoData]' Location='41,29' Name='Text' PackSize='a,a' PackSizeProp='0086/0001,0042/0001' ScrollExtent='194,103' Size='194,103' TextAlignment='Center' TextAlignmentVertical='Center'>@TacticalNoData</Text>
</Page>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0013/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='280,132' Size='280,132' Stretch='false' Style=' '/>
</Page>
<Page Location='0,25' movable='true' Name='ContinentInfo' ScrollExtent='250,138' Size='250,138' Visible='false'>
<Text Font='/Fonts.HudFont1' LocalText='+15% XP +15% Spawn +15% Acquire
+15% HART  +30% NTU' Location='16,73' MaxLines='2' Name='InformationLine0' ScrollExtent='218,32' Size='218,32' TextAlignment='Center' TextAlignmentVertical='Center'>+15% XP +15% Spawn +15% Acquire
+15% HART  +30% NTU</Text>
<Text Font='/Fonts.HudFont1' LocalText='100+ VS Positions Open' Location='17,105' Name='InformationLine1' ScrollExtent='217,16' Size='217,16' TextAlignment='Center' TextAlignmentVertical='Center'>100+ VS Positions Open</Text>
<Text Font='/Fonts.HudFont2' LocalText='33%' Location='179,38' Name='VSPopulationText' ScrollExtent='40,28' Size='40,28' TextAlignment='Center' TextAlignmentVertical='Center'>33%</Text>
<Text Font='/Fonts.HudFont2' LocalText='no data' Location='105,38' Name='NCPopulationText' ScrollExtent='40,28' Size='40,28' TextAlignment='Center' TextAlignmentVertical='Center'>no data</Text>
<Text Font='/Fonts.HudFont2' LocalText='100%' Location='33,38' Name='TRPopulationText' ScrollExtent='40,28' Size='40,28' TextAlignment='Center' TextAlignmentVertical='Center'>100%</Text>
<Page Location='15,0' Name='Title' ScrollExtent='220,32' Size='220,32'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@ContinentInfoTitle]' Location='55,8' Name='TitleText' PackLocation='left,top' PackLocationProp='0055/0001,0008/0001' PackSize='absolute,fixed' PackSizeProp='0108/0001,0002/0003' ScrollExtent='112,34' Size='112,20' TextAlignment='Center' TextAlignmentVertical='Center'>@ContinentInfoTitle</Text>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='35,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0035/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='169,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-051/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Image BackgroundOpacity='1.000' Name='Title' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' RStyleDefault='/WindowPanes.TitleBarFocus.style' ScrollExtent='220,32' Size='220,32'/>
</Page>
<Image AbsorbsInput='false' Location='109,35' Name='NC' Opacity='0.500' ScrollExtent='32,32' Size='32,32' Style='/Frontend.MiniNC'/>
<Image AbsorbsInput='false' Location='37,35' Name='TR' Opacity='0.500' ScrollExtent='32,32' Size='32,32' Style='/Frontend.MiniTR'/>
<Image AbsorbsInput='false' Location='181,35' Name='VS' Opacity='0.500' ScrollExtent='32,32' Size='32,32' Style='/Frontend.MiniVS'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0013/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='250,125' Size='250,125' Stretch='false' Style=' '/>
</Page>
<Page Location='10,180' MaximumSize='220,16384' MinimumSize='220,76' movable='true' Name='PopulationList' resizable='true' ScrollExtent='220,240' Size='220,240' Visible='false'>
<Scrollbar Control='ContinentList' Location='192,36' Name='Scrollbar' PackLocation='right,top' PackLocationProp='-028/0001,0036/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0060/0001' ScrollExtent='10,180' Size='10,180' Style='/ScrollBars.frontend_vertical.style'/>
<ListboxStyle Name='ContinentListboxStyle'/>
<DataSource Name='Continents'>
<Data Name='Amerish' population='22%'/>
<Data Name='Hunhau' population='2%'/>
<Data Name='Byblos' population='100%'/>
<Data Name='Forseral' population='19%'/>
<Data Name='NC Sanctuary' population='0%'/>
<Data Name='VS Sanctuary' population='2%'/>
<Data Name='Cyssor' population='6%'/>
<Data Name='Hossin' population='45%'/>
<Data Name='Solsar' population='1%' sortkey='100'/>
<Data Name='Ceryshen' population='16%'/>
<Data Name='Drugaskan' population='100%'/>
<Data Name='Ishundar'/>
<Data Name='TR Sanctuary'/>
</DataSource>
<Template Name='ContinentTemplate' Size='388,24'>\<text font = \'/Fonts.HudFont2\' location = \'4,4\' size = \'120,24\'\>
$Continent$
\</text\>
\<text font = \'/Fonts.HudFont2\' location = \'122,4\' size = \'40,20\' textalignment = \'Center\'\>
$population$
\</text\></Template>
<Listbox DataSource='Continents' Location='23,32' Name='ContinentList' PackSize='fixed,absolute' PackSizeProp='0002/0003,0050/0001' RowTemplate='ContinentTemplate' ScrollExtent='388,312' Size='162,190' Style='ContinentListboxStyle'/>
<Page Location='15,0' Name='Title' ScrollExtent='190,32' Size='190,32'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@PopulationListTitle]' Location='59,8' Name='TitleText' PackLocation='left,top' PackLocationProp='0059/0001,0008/0001' PackSize='absolute,fixed' PackSizeProp='0121/0001,0002/0003' ScrollExtent='69,51' Size='69,20' TextAlignment='Center' TextAlignmentVertical='Center'>@PopulationListTitle</Text>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='40,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0040/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='135,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-055/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Image BackgroundOpacity='1.000' Name='Title' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' RStyleDefault='/WindowPanes.TitleBarFocus.style' ScrollExtent='190,32' Size='190,32'/>
</Page>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' PackSize='absolute,absolute' PackSizeProp='0000/0001,0016/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='220,224' Size='220,224' Stretch='false' Style=' '/>
</Page>
<Page Location='5,223' MaximumSize='310,295' MinimumSize='310,76' movable='true' Name='EmpireBenefits' resizable='true' ScrollExtent='310,295' Size='310,295' Visible='false'>
<Scrollbar Control='EmpireBenefitsListbox' Location='284,24' Name='EmpireBenefitsScrollbar' PackLocation='right,top' PackLocationProp='-026/0001,0024/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0050/0001' ScrollExtent='9,245' Size='9,245' Style='/ScrollBars.vertical.style'/>
<DataSource Name='EmpireBenefitsDataSource'>
<Data benefit='lock-z4' benefiteffect='AmpStationFLB' description='Amp Station Benefit' empire='tr' iconlocation1='1,2' iconlocation2='115,2' iconsize1='25,25' iconsize2='32,13' iconstyle2='/Icons.Map.Facility.Benefit_ShieldedVehicle_icon' Name='AmpStationBenefit' sortkey='1'/>
<Data benefit='lock-z9' benefiteffect='BioLabFLB' description='Bio Facility Benefit' empire='NC' iconlocation1='1,2' iconlocation2='127,2' iconsize1='25,25' iconsize2='8,22' iconstyle2='/Icons.Map.Facility.Benefit_SpawnTube_icon' Name='BioLabBenefit' sortkey='2'/>
<Data benefit='lock-z3' benefiteffect='ArmorBonus' description='Armor Bonus' empire='tr' iconlocation1='1,2' iconlocation2='123,2' iconsize1='25,25' iconsize2='17,17' iconstyle2='/Icons.HUD.Armor' Name='ArmorBonusBenefit' sortkey='3'/>
<Data benefit='lock-i1-i2-i3-i4' benefiteffect='DropshipCenterFLB' description='Dropship Center Benefit' empire='vs' iconlocation1='1,2' iconlocation2='121,2' iconsize1='25,25' iconsize2='15,21' iconstyle2='/Icons.Map.Facility.Benefit_Repair_icon' Name='DropshipBenefit' sortkey='4'/>
<Data benefit='lock-nc-homes' benefiteffect='NCVehicles' description='NC Vehicles Benefit' empire='vs' iconlocation1='1,2' iconlocation2='121,2' iconsize1='25,25' iconsize2='19,25' iconstyle2='/Icons.HUD.Radar_vanguard_blip' Name='NCHomeLockBenefit' sortkey='5'/>
<Data benefit='lock-vs-homes' benefiteffect='VSVehicles' description='VS Vehicles Benefit' empire='tr' iconlocation1='1,2' iconlocation2='121,2' iconsize1='25,25' iconsize2='18,25' iconstyle2='/Icons.HUD.Radar_magrider_blip' Name='VSHomeLockBenefit' sortkey='6'/>
<Data benefit='lock-tr-homes' benefiteffect='TRVehicles' description='TR Vehicles Benefit' empire='nc' iconlocation1='1,2' iconlocation2='121,2' iconsize1='25,25' iconsize2='22,25' iconstyle2='/Icons.HUD.Radar_prowler_blip' Name='TRHomeLockBenefit' sortkey='6'/>
<Data benefit='tr-nc-vehicles' benefiteffect='NCVehicles' description='NC Vehicles Benefit' empire='vs' iconlocation1='1,2' iconlocation2='121,2' iconsize1='25,25' iconsize2='19,25' iconstyle2='/Icons.HUD.Radar_vanguard_blip' Name='TRNCVehiclesBenefit' optional='true' sortkey='7'/>
<Data benefit='vs-nc-vehicles' benefiteffect='NCVehicles' description='NC Vehicles Benefit' empire='vs' iconlocation1='1,2' iconlocation2='121,2' iconsize1='25,25' iconsize2='19,25' iconstyle2='/Icons.HUD.Radar_vanguard_blip' Name='VSNCVehiclesBenefit' optional='true' sortkey='8'/>
<Data benefit='tr-vs-vehicles' benefiteffect='VSVehicles' description='VS Vehicles Benefit' empire='tr' iconlocation1='1,2' iconlocation2='121,2' iconsize1='25,25' iconsize2='18,25' iconstyle2='/Icons.HUD.Radar_magrider_blip' Name='TRVSVehiclesBenefit' optional='true' sortkey='9'/>
<Data benefit='nc-vs-vehicles' benefiteffect='VSVehicles' description='VS Vehicles Benefit' empire='tr' iconlocation1='1,2' iconlocation2='121,2' iconsize1='25,25' iconsize2='18,25' iconstyle2='/Icons.HUD.Radar_magrider_blip' Name='NCVSVehiclesBenefit' optional='true' sortkey='10'/>
<Data benefit='nc-tr-vehicles' benefiteffect='TRVehicles' description='TR Vehicles Benefit' empire='nc' iconlocation1='1,2' iconlocation2='121,2' iconsize1='25,25' iconsize2='22,25' iconstyle2='/Icons.HUD.Radar_prowler_blip' Name='NCTRVehiclesBenefit' optional='true' sortkey='11'/>
<Data benefit='vs-tr-vehicles' benefiteffect='TRVehicles' description='TR Vehicles Benefit' empire='nc' iconlocation1='1,2' iconlocation2='121,2' iconsize1='25,25' iconsize2='22,25' iconstyle2='/Icons.HUD.Radar_prowler_blip' Name='VSTRVehiclesBenefit' optional='true' sortkey='12'/>
</DataSource>
<ListboxStyle Name='EmpireBenefitsListboxStyle'/>
<Template Name='EmpireBenefitsTemplate' Size='388,35'>\<Image absorbsinput = \'false\' backgroundopacity = \'0.000\' location = \'$iconlocation1$\' name = \'ModuleIcon\' scrollextent = \'$iconsize2$\' size = \'$iconsize1$\' style = \'/Icons.HUD.mini_logo_$empire$\'/\>
\<text font = \'/Fonts.HudFont1\' location = \'30,4\' size = \'120,24\'\>
$title$
\</text\>
\<Image absorbsinput = \'false\' backgroundopacity = \'0.000\' location = \'$iconlocation2$\' name = \'ModuleIcon\' scrollextent = \'$iconsize2$\' size = \'$iconsize2$\' style = \'$iconstyle2$\'/\>
\<text font = \'/Fonts.HudFont1\' location = \'150,4\' size = \'120,24\'\>
$description$
\</text\></Template>
<Listbox DataSource='EmpireBenefitsDataSource' Location='14,32' Name='EmpireBenefitsListbox' PackSize='fixed,absolute' PackSizeProp='0002/0003,0050/0001' RowTemplate='EmpireBenefitsTemplate' ScrollExtent='388,455' Size='280,245' Style='EmpireBenefitsListboxStyle'/>
<Page Location='57,0' Name='Title' ScrollExtent='190,32' Size='190,32'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@EmpireBenefitsListTitle]' Location='59,8' Name='TitleText' PackLocation='left,top' PackLocationProp='0059/0001,0008/0001' PackSize='absolute,fixed' PackSizeProp='0121/0001,0002/0003' ScrollExtent='69,51' Size='69,20' TextAlignment='Center' TextAlignmentVertical='Center'>@EmpireBenefitsListTitle</Text>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='40,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0040/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='135,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-055/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Image BackgroundOpacity='1.000' Name='Title' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' RStyleDefault='/WindowPanes.TitleBarFocus.style' ScrollExtent='190,32' Size='190,32'/>
</Page>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' PackSize='absolute,absolute' PackSizeProp='0005/0001,0016/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='305,279' Size='305,279' Stretch='false' Style=' '/>
</Page>
<Page BackgroundColor='#FFFF00' Location='771,290' movable='true' Name='ClaimedFacilityToolbar' PackLocation='proportional,proportional' PackLocationProp='0878/1024,0354/0768' ScrollExtent='215,129' Size='215,129' Visible='false'>
<DataSource Name='ClaimedFacilityDataSource'>
<Data facilityclaimduration='00:01:30' facilitycolor='#C0C0C0' facilityempire='NC' facilityname='Another' Name='Facility6'/>
<Data facilityclaimduration='03:12:25' facilitycolor='#FFFFFF' facilityempire='VS' facilityname='Thoth' Name='Facility1'/>
<Data facilityclaimduration='02:17:30' facilitycolor='#C0C0C0' facilityempire='TR' facilityname='Voltan' Name='Facility2'/>
<Data facilityclaimduration='01:05:55' facilitycolor='#FFFFFF' facilityempire='NC' facilityname='Gunuku' Name='Facility3'/>
<Data facilityclaimduration='00:30:20' facilitycolor='#FFFFFF' facilityempire='VS' facilityname='Bastet' Name='Facility4'/>
<Data facilityclaimduration='00:01:30' facilitycolor='#C0C0C0' facilityempire='TR' facilityname='Hapi' Name='Facility5'/>
</DataSource>
<Template Name='ClaimedFacilityTemplate' Size='145,15'>\<text color = \'$FacilityColor$\' font = \'/Fonts.HudFont2\' location = \'5,1\' size = \'79,15\'\>
$FacilityName$
\</text\>
\<text color = \'$FacilityColor$\' font = \'/Fonts.HudFont2\' location = \'82,1\' size = \'22,15\'\>
$FacilityEmpire$
\</text\>
\<text color = \'$FacilityColor$\' font = \'/Fonts.HudFont2\' location = \'106,1\' size = \'61,15\'\>
$FacilityClaimDuration$
\</text\></Template>
<Listbox AbsorbsInput='false' DataSource='ClaimedFacilityDataSource' Location='19,37' Name='FacilitiesListbox' RowTemplate='ClaimedFacilityTemplate' ScrollExtent='167,90' Size='167,69' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='FacilitiesListbox' Location='188,35' Name='ScrollFacilityList' PackLocation='right,top' PackLocationProp='-027/0001,0035/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0056/0001' ScrollExtent='9,73' Size='9,73' Style='/ScrollBars.vertical.style'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' Location='19,35' Name='FacilitiesRect' Opacity='0.750' ScrollExtent='167,73' Size='167,73'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@ClaimedFacilityHeader]' Location='19,14' Name='TitleText' PackLocation='left,top' PackLocationProp='0019/0001,0014/0001' PackSize='absolute,fixed' PackSizeProp='0037/0001,0002/0003' ScrollExtent='178,21' Size='178,21' TextAlignment='Center' TextAlignmentVertical='Center' TruncateElipsis='false'>@ClaimedFacilityHeader</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.800' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='215,129' Size='215,129' Stretch='false'/>
</Page>
<WeatherOverlay AbsorbsInput='false' Name='WeatherOverlay' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='1024,768' Size='1024,768'/>
<Page BackgroundColor='#182142' BackgroundOpacity='1.000' Name='ClusterMap' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Rectangle AbsorbsInput='false' Color='#FF0000' Enabled='false' GetsInput='false' Location='0,24' Name='EmpireLock' PackLocation='left,top' PackLocationProp='0000/0001,0024/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0024/0001' ScrollExtent='1024,744' Size='1024,744' Thickness='3.000' ThicknessBottom='3.000' ThicknessLeft='3.000' ThicknessRight='3.000' ThicknessTop='3.000' Visible='false'/>
<Page Name='Oshur' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' planetid='8' ScrollExtent='1024,768' Size='1024,768'>
<Page AbsorbsInput='false' Enabled='false' Name='DominionIcon' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768'>
<Image AbsorbsInput='false' continentid='829' Location='215,108' Name='Extinction' Opacity='0.500' PackLocation='proportional,proportional' PackLocationProp='0231/1024,0124/0768' ScrollExtent='32,32' Size='32,32' Style='/Frontend.MiniNC' Visible='false'/>
<Image AbsorbsInput='false' continentid='830' Location='692,111' Name='Ascension' Opacity='0.500' PackLocation='proportional,proportional' PackLocationProp='0708/1024,0127/0768' ScrollExtent='32,32' Size='32,32' Style='/Frontend.MiniNC' Visible='false'/>
<Image AbsorbsInput='false' continentid='831' Location='308,487' Name='Desolation' Opacity='0.500' PackLocation='proportional,proportional' PackLocationProp='0324/1024,0503/0768' ScrollExtent='32,32' Size='32,32' Style='/Frontend.MiniNC' Visible='false'/>
<Image AbsorbsInput='false' continentid='832' Location='768,482' Name='Nexus' Opacity='0.500' PackLocation='proportiona,proportional' PackLocationProp='xxxx/xxxx,0498/0768' ScrollExtent='32,32' Size='32,32' Style='/Frontend.MiniNC' Visible='false'/>
</Page>
<Page AbsorbsInput='false' Enabled='false' Name='Text' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768'>
<Text continentid='29' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@i1]' Location='199,523' Name='Extinction' PackLocation='proportional,proportional' PackLocationProp='0324/1024,0534/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@i1</Text>
<Text continentid='129' Font='/Fonts.MiscIcons' GetsInput='false' LocalText='D' Location='309,519' Name='ExtinctionLock1' PackLocation='proportional,proportional' PackLocationProp='0324/1024,0534/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='34,30' ShadowStyle='/Shadows.Default' Size='30,30' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>D</Text>
<Text continentid='229' Font='/Fonts.MiscIcons' GetsInput='false' LocalText='D' Location='309,519' Name='ExtinctionLock2' PackLocation='proportional,proportional' PackLocationProp='0324/1024,0534/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='34,30' ShadowStyle='/Shadows.Default' Size='30,30' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>D</Text>
<Text continentid='329' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@i1]' Location='199,546' Name='ExtinctionLockText' PackLocation='proportional,proportional' PackLocationProp='0324/1024,0557/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>@i1</Text>
<Text continentid='30' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@i2]' Location='583,150' Name='Ascension' PackLocation='proportional,proportional' PackLocationProp='0708/1024,0161/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@i2</Text>
<Text continentid='130' Font='/Fonts.MiscIcons' GetsInput='false' LocalText='D' Location='693,146' Name='AscensionLock1' PackLocation='proportional,proportional' PackLocationProp='0708/1024,0161/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='34,30' ShadowStyle='/Shadows.Default' Size='30,30' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>D</Text>
<Text continentid='230' Font='/Fonts.MiscIcons' GetsInput='false' LocalText='D' Location='693,146' Name='AscensionLock2' PackLocation='proportional,proportional' PackLocationProp='0708/1024,0161/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='34,30' ShadowStyle='/Shadows.Default' Size='30,30' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>D</Text>
<Text continentid='330' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@i2]' Location='583,173' Name='AscensionLockText' PackLocation='proportional,proportional' PackLocationProp='0708/1024,0184/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>@i2</Text>
<Text continentid='31' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@i3]' Location='106,147' Name='Desolation' PackLocation='proportional,proportional' PackLocationProp='0231/1024,0158/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@i3</Text>
<Text continentid='131' Font='/Fonts.MiscIcons' GetsInput='false' LocalText='D' Location='216,143' Name='DesolationLock1' PackLocation='proportional,proportional' PackLocationProp='0231/1024,0158/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='34,30' ShadowStyle='/Shadows.Default' Size='30,30' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>D</Text>
<Text continentid='231' Font='/Fonts.MiscIcons' GetsInput='false' LocalText='D' Location='216,143' Name='DesolationLock2' PackLocation='proportional,proportional' PackLocationProp='0231/1024,0158/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='34,30' ShadowStyle='/Shadows.Default' Size='30,30' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>D</Text>
<Text continentid='331' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@i3]' Location='106,170' Name='DesolationLockText' PackLocation='proportional,proportional' PackLocationProp='0231/1024,0181/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>@i3</Text>
<Text continentid='32' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@i4]' Location='659,518' Name='Nexus' PackLocation='proportional,proportional' PackLocationProp='0784/1024,0529/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center'>@i4</Text>
<Text continentid='132' Font='/Fonts.MiscIcons' GetsInput='false' LocalText='D' Location='769,514' Name='NexusLock1' PackLocation='proportional,proportional' PackLocationProp='0784/1024,0529/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='34,30' ShadowStyle='/Shadows.Default' Size='30,30' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>D</Text>
<Text continentid='232' Font='/Fonts.MiscIcons' GetsInput='false' LocalText='D' Location='769,514' Name='NexusLock2' PackLocation='proportional,proportional' PackLocationProp='0784/1024,0529/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='34,30' ShadowStyle='/Shadows.Default' Size='30,30' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>D</Text>
<Text continentid='332' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@i4]' Location='659,541' Name='NexusLockText' PackLocation='proportional,proportional' PackLocationProp='0784/1024,0552/0768' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='250,22' ShadowStyle='/Shadows.Default' Size='250,22' TextAlignment='Center' TextAlignmentVertical='Center' Visible='false'>@i4</Text>
</Page>
<Image AbsorbsInput='false' Enabled='false' Name='Lines' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Style='/Plates.GlobalMapLinework'/>
<Page Name='Maps' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768'>
<Page AbsorbsInput='false' Name='MapImages - for testing' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Visible='false'>
<Image BoundaryPolygon='38.000,80.000,87.000,40.000,97.000,4.000,130.000,3.000,156.000,37.000,177.000,57.000,176.000,104.000,185.000,138.000,161.000,188.000,88.000,222.000,56.000,186.000' Location='174,428' Name='Extinction' PackLocation='proportional,proportional' PackLocationProp='0324/1024,0582/0768' PackSize='proportional,proportional' PackSizeProp='0300/1024,0309/0768' ScrollExtent='300,309' Size='300,309' SourceResource='ui_map99g'/>
<Image BoundaryPolygon='111.000,25.000,171.000,52.000,161.000,96.000,208.000,132.000,213.000,174.000,158.000,204.000,96.000,204.000,36.000,178.000,21.000,79.000' Location='558,63' Name='Ascension' PackLocation='proportional,proportional' PackLocationProp='0708/1024,0217/0768' PackSize='proportional,proportional' PackSizeProp='0300/1024,0309/0768' ScrollExtent='300,309' Size='300,309' SourceResource='ui_map98g'/>
<Image BoundaryPolygon='2.000,11.000,157.000,24.000,211.000,56.000,217.000,129.000,212.000,205.000,36.000,220.000,1.000,166.000' Location='81,64' Name='Desolation' PackLocation='proportional,proportional' PackLocationProp='0231/1024,0218/0768' PackSize='proportional,proportional' PackSizeProp='0300/1024,0309/0768' ScrollExtent='300,309' Size='300,309' SourceResource='ui_map97g'/>
<Image BoundaryPolygon='111.000,9.000,151.000,19.000,198.000,53.000,220.000,70.000,211.000,145.000,176.000,187.000,106.000,219.000,55.000,207.000,11.000,135.000,1.000,75.000,18.000,40.000' Location='634,432' Name='Nexus' PackLocation='proportional,proportional' PackLocationProp='0784/1024,0586/0768' PackSize='proportional,proportional' PackSizeProp='0300/1024,0309/0768' ScrollExtent='300,309' Size='300,309' SourceResource='ui_map96g'/>
</Page>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='150.000,150.000,150.000,450.000,450.000,450.000,450.000,150.000' continentid='29' Location='24,273' Name='Extinction' PackLocation='proportional,proportional' PackLocationProp='0324/1024,0582/0768' PackSize='proportional,proportional' PackSizeProp='0600/1024,0619/0768' ScrollExtent='600,619' Size='600,619' zonename='i1'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='150.000,150.000,150.000,450.000,450.000,450.000,450.000,150.000' continentid='30' Location='408,-92' Name='Ascension' PackLocation='proportional,proportional' PackLocationProp='0708/1024,0217/0768' PackSize='proportional,proportional' PackSizeProp='0600/1024,0619/0768' ScrollExtent='600,619' Size='600,619' zonename='i2'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='150.000,150.000,150.000,450.000,450.000,450.000,450.000,150.000' continentid='31' Location='-69,-91' Name='Desolation' PackLocation='proportional,proportional' PackLocationProp='0231/1024,0218/0768' PackSize='proportional,proportional' PackSizeProp='0600/1024,0619/0768' ScrollExtent='600,619' Size='600,619' zonename='i3'/>
<OverheadMap BackgroundOpacity='1.000' BoundaryPolygon='150.000,150.000,150.000,450.000,450.000,450.000,450.000,150.000' continentid='32' Location='484,277' Name='Nexus' PackLocation='proportional,proportional' PackLocationProp='0784/1024,0586/0768' PackSize='proportional,proportional' PackSizeProp='0600/1024,0619/0768' ScrollExtent='600,619' Size='600,619' zonename='i4'/>
</Page>
<Image Name='Background' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Style='/Plates.GlobalMapWater'/>
</Page>
</Page>
<Page BackgroundColor='#182142' BackgroundOpacity='1.000' Location='0,24' Name='MapWindow' PackLocation='left,top' PackLocationProp='0000/0001,0024/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0024/0001' ScrollExtent='1024,744' Size='1024,744' Visible='false'>
<Rectangle AbsorbsInput='false' Color='#FF0000' Enabled='false' GetsInput='false' Name='EmpireLock' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='1024,744' Size='1024,744' Thickness='3.000' ThicknessBottom='3.000' ThicknessLeft='3.000' ThicknessRight='3.000' ThicknessTop='3.000' Visible='false'/>
<Page Activated='true' Location='285,257' movable='true' Name='RespawnProgress' PackLocation='cfc,cfc' PackLocationProp='0000/0001,-082/0001' ScrollExtent='455,66' Size='455,66'>
<Page AbsorbsInput='false' Enabled='false' GetsInput='false' Name='Release' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='455,66' Size='455,66'>
<Text AbsorbsInput='false' BackgroundColor='#00F2C9' Font='/Fonts.HudFont3' LocalText='[@ReleaseCountdownText]' Location='27,11' Name='ReleaseCountdownText' PackLocation='center,top' PackLocationProp='-200/0001,0011/0001' PackSize='absolute,fixed' PackSizeProp='0055/0001,0002/0003' ScrollExtent='400,20' Size='400,20' TextAlignment='Center' TextAlignmentVertical='Center'>@ReleaseCountdownText</Text>
<Progressbar AbsorbsInput='false' BarBackgroundColor='#00F2C9' Color='#777777' Location='27,33' Name='ReleaseProgress' PackLocation='center,bottom' PackLocationProp='-200/0001,-033/0001' PackSize='absolute,fixed' PackSizeProp='0055/0001,0002/0003' Progress='1.000' ScrollExtent='400,13' Size='400,13' Style='/ProgressBars.Health.style' TooltipStyle='/Fonts.DefaultFont'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.700' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='455,66' Size='455,66' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' Enabled='false' GetsInput='false' Name='RespawnCountdown' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='455,66' Size='455,66' Visible='false'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' LocalText='[@RespawnCountdownText]' Location='27,11' Name='RespawnCountdownText' PackLocation='center,top' PackLocationProp='-200/0001,0011/0001' PackSize='absolute,fixed' PackSizeProp='0055/0001,0002/0003' ScrollExtent='400,20' Size='400,20' TextAlignment='Center'>@RespawnCountdownText</Text>
<Progressbar AbsorbsInput='false' BarBackgroundColor='#00F2C9' Color='#777777' Location='27,33' Name='RespawnProgress' PackLocation='center,bottom' PackLocationProp='-200/0001,-033/0001' PackSize='absolute,fixed' PackSizeProp='0055/0001,0002/0003' Progress='0.330' ScrollExtent='400,13' Size='400,13' Style='/ProgressBars.Health.style' TooltipStyle='/Fonts.DefaultFont'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='Background' Opacity='0.700' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='455,66' Size='455,66' Stretch='false'/>
</Page>
</Page>
<Page Activated='true' BackgroundColor='#FFFF00' Location='831,356' movable='true' Name='RespawnMap0' PackLocation='right,bottom' PackLocationProp='-193/0001,-388/0001' ScrollExtent='185,180' Size='185,180' Visible='false'>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' Location='12,8' Name='MapText' PackLocation='left,top' PackLocationProp='0012/0001,0008/0001' PackSize='absolute,fixed' PackSizeProp='0025/0001,0002/0003' ScrollExtent='160,18' ShadowStyle='/Shadows.Default' Size='160,18' TextAlignment='Center' TextAlignmentVertical='Center'></Text>
<OverheadMap AbsorbsInput='false' Location='32,26' Name='Map' PackLocation='center,center' PackLocationProp='-060/0001,-064/0001' ScrollExtent='120,120' Size='120,120'/>
<Page AbsorbsInput='false' BackgroundColor='#64719B' BackgroundOpacity='0.475' Enabled='false' GetsInput='false' Location='32,26' Name='Water' ScrollExtent='120,120' Size='120,120'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Name='Background' Opacity='0.700' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='185,180' Size='185,180' Stretch='false'/>
</Page>
<Page Activated='true' BackgroundColor='#FFFF00' Location='831,564' movable='true' Name='RespawnMap1' PackLocation='right,bottom' PackLocationProp='-193/0001,-180/0001' ScrollExtent='185,180' Size='185,180' Visible='false'>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' Location='12,8' Name='MapText' PackLocation='left,top' PackLocationProp='0012/0001,0008/0001' PackSize='absolute,fixed' PackSizeProp='0025/0001,0002/0003' ScrollExtent='160,18' ShadowStyle='/Shadows.Default' Size='160,18' TextAlignment='Center' TextAlignmentVertical='Center'></Text>
<OverheadMap AbsorbsInput='false' Location='32,26' Name='Map' PackLocation='center,center' PackLocationProp='-060/0001,-064/0001' ScrollExtent='120,120' Size='120,120'/>
<Page AbsorbsInput='false' BackgroundColor='#64719B' BackgroundOpacity='0.475' Enabled='false' GetsInput='false' Location='32,26' Name='Water' ScrollExtent='120,120' Size='120,120'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Name='Background' Opacity='0.700' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='185,180' Size='185,180' Stretch='false'/>
</Page>
<Page Activated='true' BackgroundColor='#FFFF00' Location='830,148' movable='true' Name='RespawnMap2' PackLocation='right,bottom' PackLocationProp='-194/0001,-596/0001' ScrollExtent='185,180' Size='185,180' Visible='false'>
<Text continentid='1' Font='/Fonts.HudFont2' GetsInput='false' Location='12,8' Name='MapText' PackLocation='left,top' PackLocationProp='0012/0001,0008/0001' PackSize='absolute,fixed' PackSizeProp='0025/0001,0002/0003' ScrollExtent='160,18' ShadowStyle='/Shadows.Default' Size='160,18' TextAlignment='Center' TextAlignmentVertical='Center'></Text>
<OverheadMap AbsorbsInput='false' Location='32,26' Name='Map' PackLocation='center,center' PackLocationProp='-060/0001,-064/0001' ScrollExtent='120,120' Size='120,120'/>
<Page AbsorbsInput='false' BackgroundColor='#64719B' BackgroundOpacity='0.475' Enabled='false' GetsInput='false' Location='32,26' Name='Water' ScrollExtent='120,120' Size='120,120'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Name='Background' Opacity='0.700' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='185,180' Size='185,180' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' Name='MapScrollPage' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0000/0001' ScrollExtent='1024,744' Size='1024,744' Visible='false'>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Location='64,0' Name='North' PackLocation='left,top' PackLocationProp='0064/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0128/0001,0002/0003' ScrollExtent='896,64' Size='896,64'/>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Location='960,0' Name='NorthEast' PackLocation='right,top' PackLocationProp='-064/0001,0000/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='64,64' Size='64,64'/>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Location='960,64' Name='East' PackLocation='right,top' PackLocationProp='-064/0001,0064/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0128/0001' ScrollExtent='64,616' Size='64,616'/>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Location='960,680' Name='SouthEast' PackLocation='right,bottom' PackLocationProp='-064/0001,-064/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='64,64' Size='64,64'/>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Location='64,680' Name='South' PackLocation='left,bottom' PackLocationProp='0064/0001,-064/0001' PackSize='absolute,fixed' PackSizeProp='0128/0001,0002/0003' ScrollExtent='896,64' Size='896,64'/>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Location='0,680' Name='SouthWest' PackLocation='left,bottom' PackLocationProp='0000/0001,-064/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='64,64' Size='64,64'/>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Location='0,64' Name='West' PackLocation='left,top' PackLocationProp='0000/0001,0064/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0128/0001' ScrollExtent='64,616' Size='64,616'/>
<Page AbsorbsInput='false' BackgroundOpacity='0.475' Name='NorthWest' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='64,64' Size='64,64'/>
</Page>
<OverheadMap AbsorbsInput='false' Name='OverheadMap' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,744' Size='1024,744'/>
</Page>
</Page>
