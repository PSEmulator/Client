<Page Name='Keymap_old' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = true' PackLocation='Center,Center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='800,600' Size='800,600' Visible='false'>
<Namespace Name='NOTE: THESE BUTTON STYLES NOT CONVERTED BECAUSE THIS PAGE IS OBSOLETE'/>
<Text Font='/SmallFont' LocalText='Steer With Mouse' Location='336,360' ScrollExtent='100,12' Size='100,10'>Steer With Mouse</Text>
<Checkbox BackgroundOpacity='1.000' Location='60,273' Name='MoveLook' ScrollExtent='167,10' Size='167,10' Style='/Buttons.SmallRadiobox.style'></Checkbox>
<Image Location='74,272' Name='MoveLookLabel' ScrollExtent='153,13' Size='153,13' SourceRect='248,114,400,126' SourceResource='ps_keymap_art_00' Stretch='false'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='60,288' Name='Weapons' ScrollExtent='207,10' Size='207,10' Style='/Buttons.SmallRadiobox.style'></Checkbox>
<Image Location='74,287' Name='WeaponsLabel' ScrollExtent='193,13' Size='193,13' SourceRect='248,126,438,138' SourceResource='ps_keymap_art_00' Stretch='false'/>
<Checkbox BackgroundOpacity='1.000' Location='60,302' Name='Misc' ScrollExtent='150,10' Size='150,10' Style='/Buttons.SmallRadiobox.style'></Checkbox>
<Image Location='74,301' Name='MiscLabel' ScrollExtent='193,13' Size='193,13' SourceRect='248,138,384,150' SourceResource='ps_keymap_art_00' Stretch='false'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='321,273' Name='AlwaysRun' ScrollExtent='122,10' Size='122,10' Style='/Buttons.SmallRadiobox.style'></Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='321,288' Name='MouseFreelook' ScrollExtent='156,10' Size='156,10' Style='/Buttons.SmallRadiobox.style'></Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='321,302' Name='InvertMouse' ScrollExtent='132,10' Size='132,10' Style='/Buttons.SmallRadiobox.style'></Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='321,317' Name='Joystick' ScrollExtent='91,10' Size='91,10' Style='/Buttons.SmallRadiobox.style'></Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='321,331' Name='InvertJoystick' ScrollExtent='153,10' Size='153,10' Style='/Buttons.SmallRadiobox.style'></Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='321,346' Name='SmoothMouse' ScrollExtent='141,10' Size='141,10' Style='/Buttons.SmallRadiobox.style'></Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='321,360' Name='SteerWithMouse' ScrollExtent='141,10' Size='141,10' Style='/Buttons.SmallRadiobox.style'></Checkbox>
<DataSource Name='MoveLookData'>
<Data actionname='Forward' keys='W, UpArrow' Name='Forward'/>
<Data actionname='Turn Left' Name='Turn Left'/>
<Data actionname='Turn Right' Name='Turn Right'/>
<Data actionname='Backward' Name='Backwards'/>
<Data actionname='Strafe Left' Name='Strafe Left'/>
<Data actionname='Strafe Right' Name='Strafe Right'/>
<Data actionname='Look Up' Name='Look Up'/>
<Data actionname='Look Down' Name='Look Down'/>
<Data actionname='Look Center' Name='Look Center'/>
<Data actionname='Jump' Name='Jump'/>
<Data actionname='Crouch' Name='Crouch'/>
<Data actionname='Autorun' Name='Toggle Autorun'/>
<Data actionname='Toggle Run' Name='Toggle Run'/>
<Data actionname='Toggle Mouse Look' Name='Toggle Mouse Look'/>
<Data actionname='Toggle Third Person Camera' Name='Toggle 3rd Person'/>
<Data actionname='Zoom' Name='Zoom'/>
<Data actionname='Move Third Person Camera' Name='3rd Person Camera'/>
</DataSource>
<DataSource Name='WeaponsData'>
<Data actionname='Primary Fire' Name='Primary Fire'/>
<Data actionname='Secondary Fire' Name='Secondary Fire'/>
<Data actionname='Reload' Name='Reload'/>
<Data actionname='Open Inventory' Name='Open Inventory'/>
<Data actionname='Drop Item' Name='Drop Item'/>
<Data actionname='Use Item' Name='Use Selected Item'/>
</DataSource>
<DataSource Name='MiscData'>
<Data actionname='Suicide' Name='Suicide'/>
<Data actionname='Escort' Name='Escort Target'/>
<Data actionname='Open Chat' Name='Open Chat'/>
<Data actionname='Chat Size' Name='Chat Window Size'/>
<Data actionname='Toggle Overhead Map' Name='Toggle Map'/>
<Data actionname='Emote Wave Low' Name='Wave (Emote) '/>
<Data actionname='Emote Wave High' Name='Wave High (Emote) '/>
<Data actionname='Emote Point' Name='Point (Emote) '/>
<Data actionname='Emote Stop' Name='Stop (Emote) '/>
<Data actionname='Emote Crouch' Name='Crouch (Emote) '/>
<Data actionname='Emote Go' Name='Go (Emote) '/>
<Data actionname='Emote Salute' Name='Salute (Emote) '/>
<Data actionname='Emote Come Here' Name='Come Here (Emote) '/>
<Data actionname='Emote Follow Me' Name='Follow Me (Emote) '/>
<Data actionname='Emote Taunt 1' Name='Taunt 1 (Emote) '/>
<Data actionname='Emote Taunt 2' Name='Taunt 2 (Emote) '/>
<Data actionname='Emote Taunt 3' Name='Taunt 3 (Emote) '/>
</DataSource>
<Template Name='ActionListTemplate' Size='229,11'>\<text font = \'/SmallFont\' size = \'100,10\'\>
$Name$
\</text\>
\<text font = \'/SmallFont\' location = \'100,0\' size = \'129,10\'\>
$Keys$
\</text\></Template>
<Listbox DataSource='MoveLookData' Location='46,319' Name='ActionList' RowTemplate='ActionListTemplate' ScrollExtent='229,236' SelectedItemIndex='0' Size='229,236' Style='/Listboxes.Generic.style'/>
<Page BackgroundOpacity='1.000' Location='46,319' Name='BlackFill' ScrollExtent='229,236' Size='229,236'/>
<ListboxStyle Name='ActionListStyle'/>
<Sliderbar Location='298,398' Name='MouseSensitivity' ScrollExtent='285,25' Size='285,25' Style='/Sliderbars.HNew.Style' UpperLimit='1000' Value='456'/>
<Sliderbar Location='298,471' Name='JoystickSensitivity' ScrollExtent='285,25' Size='285,25' Style='/Sliderbars.HNew.Style' UpperLimit='1000'/>
<Button Location='388,530' Name='Ok' ScrollExtent='51,29' Size='51,29' Style='Styles.Ok'></Button>
<Button Location='440,530' Name='Reset' ScrollExtent='98,29' Size='98,29' Style='Styles.Reset'></Button>
<Button Location='539,530' Name='Default' ScrollExtent='132,29' Size='132,29' Style='Styles.Default'></Button>
<Button Location='672,530' Name='Test' ScrollExtent='82,29' Size='82,29' Style='Styles.Test'></Button>
<Button keyname='`' Location='47,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='1' Location='86,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='2' Location='125,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='3' Location='164,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='4' Location='203,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='5' Location='242,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='6' Location='281,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='7' Location='320,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='8' Location='359,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='9' Location='398,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='0' Location='437,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='-' Location='476,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='=' Location='515,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='\\' Location='554,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='Backspace' Location='593,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='Insert' Location='638,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='Home' Location='677,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='Page Up' Location='716,69' ScrollExtent='38,38' Size='38,38' Style='Styles.Key' visualeditlock='true'></Button>
<Button keyname='Page Down' Location='716,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='End' Location='677,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Delete' Location='638,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname=']' Location='535,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='[' Location='496,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='P' Location='457,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='O' Location='418,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='I' Location='379,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='U' Location='340,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Y' Location='301,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='T' Location='262,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='R' Location='223,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='E' Location='184,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='W' Location='145,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Q' Location='106,108' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='A' Location='116,147' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='S' Location='155,147' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='D' Location='194,147' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='F' Location='233,147' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='G' Location='272,147' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='H' Location='311,147' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='J' Location='350,147' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='K' Location='389,147' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='L' Location='428,147' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname=';' Location='467,147' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='\'' Location='506,147' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='/' Location='487,186' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='.' Location='448,186' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname=',' Location='409,186' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='M' Location='370,186' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='N' Location='331,186' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='B' Location='292,186' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='V' Location='253,186' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='C' Location='214,186' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='X' Location='175,186' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Z' Location='136,186' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Left Ctrl' Location='47,225' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Left Alt' Location='125,225' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Right Alt' Location='476,225' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Right Ctrl' Location='593,225' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Left Arrow' Location='638,225' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Up Arrow' Location='677,186' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Down Arrow' Location='677,225' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Right Arrow' Location='716,225' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Num Lock' Location='599,270' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Num Pad /' Location='638,270' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Num Pad *' Location='677,270' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Num Pad -' Location='716,270' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Num Pad 7' Location='599,309' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Num Pad 8' Location='638,309' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Num Pad 9' Location='677,309' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Num Pad 6' Location='677,348' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Num Pad 5' Location='638,348' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Num Pad 4' Location='599,348' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Num Pad 1' Location='599,387' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Num Pad 2' Location='638,387' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Num Pad 3' Location='677,387' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Num Pad .' Location='677,426' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Left Mouse Button' Location='638,471' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Middle Mouse Button' Location='677,471' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Right Mouse Button' Location='716,471' ScrollExtent='38,38' Size='38,38' Style='Styles.Key'></Button>
<Button keyname='Left Shift' Location='47,186' ScrollExtent='88,38' Size='88,38' Style='Styles.LShift'></Button>
<Button keyname='Right Shift' Location='526,186' ScrollExtent='105,38' Size='105,38' Style='Styles.RShift'></Button>
<Button keyname='Tab' Location='47,108' ScrollExtent='58,38' Size='58,38' Style='Styles.Tab'></Button>
<Button keyname='Caps Lock' Location='47,147' ScrollExtent='68,38' Size='68,38' Style='Styles.CapsLock'></Button>
<Button keyname='Enter' Location='545,108' ScrollExtent='86,77' Size='86,77' Style='Styles.Enter'></Button>
<Button keyname='Space' LocalTooltip='Test Tooltip' Location='164,225' ScrollExtent='311,38' Size='311,38' Style='Styles.Space' Tooltip='Test Tooltip'></Button>
<Button keyname='Num Pad +' Location='716,309' ScrollExtent='38,77' Size='38,77' Style='Styles.NumEnter'></Button>
<Button keyname='Num Pad Enter' Location='716,387' ScrollExtent='38,77' Size='38,77' Style='Styles.NumEnter'></Button>
<Button keyname='Num Pad 0' Location='599,426' ScrollExtent='77,38' Size='77,38' Style='Styles.Num0'></Button>
<Image Location='334,272' ScrollExtent='109,13' Size='109,13' SourceRect='400,114,508,126' SourceResource='ps_keymap_art_00' Stretch='false'/>
<Image Location='334,287' ScrollExtent='145,13' Size='145,13' SourceRect='248,150,392,162' SourceResource='ps_keymap_art_00' Stretch='false'/>
<Image Location='334,301' ScrollExtent='119,13' Size='119,13' SourceRect='248,162,445,174' SourceResource='ps_keymap_art_00' Stretch='false'/>
<Image Location='334,316' ScrollExtent='79,13' Size='79,13' SourceRect='392,150,472,162' SourceResource='ps_keymap_art_00' Stretch='false'/>
<Image Location='334,330' ScrollExtent='140,13' Size='140,13' SourceRect='248,174,464,186' SourceResource='ps_keymap_art_00' Stretch='false'/>
<Image Location='334,345' ScrollExtent='134,13' Size='134,13' SourceRect='248,186,378,198' SourceResource='ps_keymap_art_00' Stretch='false'/>
<Image Location='357,378' ScrollExtent='167,13' Size='167,13' SourceRect='248,198,406,210' SourceResource='ps_keymap_art_00' Stretch='false'/>
<Image Location='357,445' ScrollExtent='181,13' Size='181,13' SourceRect='248,210,426,222' SourceResource='ps_keymap_art_00' Stretch='false'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='50,36' Name='SoldierCheck' ScrollExtent='167,20' Size='167,20' Style='/Buttons.LargeRadiobox.style'></Checkbox>
<Text Font='/Fonts.Medium' LocalText='Soldier' Location='70,36' Name='SoldierText' ScrollExtent='117,20' Size='117,20'>Soldier</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='300,36' Name='VehicleCheck' ScrollExtent='167,20' Size='167,20' Style='/Buttons.LargeRadiobox.style'></Checkbox>
<Text Font='/Fonts.Medium' LocalText='Vehicle' Location='320,36' Name='VehicleText' ScrollExtent='117,20' Size='117,20'>Vehicle</Text>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='550,36' Name='SquadCheck' ScrollExtent='167,20' Size='167,20' Style='/Buttons.LargeRadiobox.style'></Checkbox>
<Text Font='/Fonts.Medium' LocalText='Squad' Location='570,36' Name='SquadText' ScrollExtent='117,20' Size='117,20'>Squad</Text>
<Image Location='46,68' Name='Keyboard' ScrollExtent='729,442' Size='729,442' Stretch='false' Style='Styles.Keyboard'/>
<Image Name='Border' ScrollExtent='800,600' Size='800,600' Stretch='false' Style='/Plates.Border'/>
<3DPlanet Color='#000000' Name='Planet' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='800,600' Size='800,600'/>
<Namespace Name='Styles'>
<ImageStyle Name='Keyboard'>
<ImageFrame>
<ImageFragment Source='ps_keymap_keyboard_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ps_keymap_keyboard_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='512,0' Source='ps_keymap_keyboard_02' SourceRect='0,0,197,256'/>
<ImageFragment Offset='0,256' Source='ps_keymap_keyboard_03' SourceRect='0,0,256,186'/>
<ImageFragment Offset='256,256' Source='ps_keymap_keyboard_04' SourceRect='0,0,256,186'/>
<ImageFragment Offset='512,256' Source='ps_keymap_keyboard_05' SourceRect='0,0,197,186'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='KeyInner'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,0,38,38'/>
</ImageStyle>
<ImageStyle Name='KeyOuter'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='38,0,76,38'/>
</ImageStyle>
<ButtonStyle Name='Key' normalimage='KeyOuter' pressedimage='KeyInner'/>
<ButtonStyle Name='LShift' normalimage='LShiftOuter' pressedimage='LShiftInner'/>
<ImageStyle Name='LShiftInner'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='328,0,416,38'/>
</ImageStyle>
<ImageStyle Name='LShiftOuter'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='416,0,504,38'/>
</ImageStyle>
<ButtonStyle Name='RShift' normalimage='RShiftOuter' pressedimage='RShiftInner'/>
<ImageStyle Name='RShiftInner'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='311,38,416,76'/>
</ImageStyle>
<ImageStyle Name='RShiftOuter'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='311,76,416,114'/>
</ImageStyle>
<ButtonStyle Name='Tab' normalimage='TabOuter' pressedimage='TabInner'/>
<ImageStyle Name='TabInner'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='76,0,134,38'/>
</ImageStyle>
<ImageStyle Name='TabOuter'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='134,0,192,38'/>
</ImageStyle>
<ButtonStyle Name='CapsLock' normalimage='CapsLockOuter' pressedimage='CapsLockInner'/>
<ImageStyle Name='CapsLockInner'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='192,0,260,38'/>
</ImageStyle>
<ImageStyle Name='CapsLockOuter'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='260,0,328,38'/>
</ImageStyle>
<ButtonStyle Name='Enter' normalimage='EnterOuter' pressedimage='EnterInner'/>
<ImageStyle Name='EnterInner'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='76,114,162,191'/>
</ImageStyle>
<ImageStyle Name='EnterOuter'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='162,114,248,191'/>
</ImageStyle>
<ButtonStyle Name='Space' normalimage='SpaceOuter' pressedimage='SpaceInner'/>
<ImageStyle Name='SpaceInner'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,38,311,76'/>
</ImageStyle>
<ImageStyle Name='SpaceOuter'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,76,311,114'/>
</ImageStyle>
<ButtonStyle Name='NumEnter' normalimage='NumEnterOuter' pressedimage='NumEnterInner'/>
<ImageStyle Name='NumEnterInner'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,114,38,191'/>
</ImageStyle>
<ImageStyle Name='NumEnterOuter'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='38,114,76,191'/>
</ImageStyle>
<ButtonStyle Name='Num0' normalimage='Num0Outer' pressedimage='Num0Inner'/>
<ImageStyle Name='Num0Inner'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='416,38,493,76'/>
</ImageStyle>
<ImageStyle Name='Num0Outer'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='416,76,493,114'/>
</ImageStyle>
<ButtonStyle mouseoverimage='OkRollover' Name='Ok' normalimage='OkNormal' pressedimage='OkPressed'/>
<ImageStyle Name='OkNormal'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='132,191,183,220'/>
</ImageStyle>
<ImageStyle Name='OkPressed'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='132,249,183,278'/>
</ImageStyle>
<ImageStyle Name='OkRollover'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='132,220,183,249'/>
</ImageStyle>
<ButtonStyle mouseoverimage='ResetRollover' Name='Reset' normalimage='ResetNormal' pressedimage='ResetPressed'/>
<ImageStyle Name='ResetNormal'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,278,98,307'/>
</ImageStyle>
<ImageStyle Name='ResetPressed'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,336,98,365'/>
</ImageStyle>
<ImageStyle Name='ResetRollover'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,307,98,336'/>
</ImageStyle>
<ButtonStyle mouseoverimage='DefaultRollover' Name='Default' normalimage='DefaultNormal' pressedimage='DefaultPressed'/>
<ImageStyle Name='DefaultNormal'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,191,132,220'/>
</ImageStyle>
<ImageStyle Name='DefaultPressed'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,249,132,278'/>
</ImageStyle>
<ImageStyle Name='DefaultRollover'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,220,132,249'/>
</ImageStyle>
<ButtonStyle mouseoverimage='TestRollover' Name='Test' normalimage='TestNormal' pressedimage='TestPressed'/>
<ImageStyle Name='TestNormal'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,365,81,394'/>
</ImageStyle>
<ImageStyle Name='TestPressed'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,423,81,452'/>
</ImageStyle>
<ImageStyle Name='TestRollover'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,394,81,423'/>
</ImageStyle>
</Namespace>
</Page>
