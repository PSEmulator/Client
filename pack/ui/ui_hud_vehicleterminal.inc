<Page Location='280,200' MaximumSize='466,16384' MinimumSize='466,406' movable='true' Name='VehicleTerminal' PackLocation='cfc,cfc' PackLocationProp='0001/0001,0056/0001' popup='True' resizable='true' ScrollExtent='466,480' Size='466,480' Visible='false'>
<Button LocalText='[@Cancel]' Location='368,8' Name='CancelButton' PackLocation='right,top' PackLocationProp='-098/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='82,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-384/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Button LocalText='[@BuyVehicle]' Location='163,421' Name='BuyButton' PackLocation='center,bottom' PackLocationProp='-070/0001,-059/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='140,20' Size='140,20' Style='/Buttons.TextButton.style'>@BuyVehicle</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@VehicleTerminalTitle]' Location='101,5' Name='TitleText' ScrollExtent='265,20' Size='265,20' TextAlignment='Center' TextAlignmentVertical='Center'>@VehicleTerminalTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='53,-1' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='362,32' Size='362,32'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' GetsInput='false' Location='20,31' Name='VehicleListboxRect' Opacity='0.750' PackSize='absolute,absolute' PackSizeProp='0046/0001,0202/0001' ScrollExtent='420,278' Size='420,278'/>
<Scrollbar Control='VehicleListbox' Location='429,34' Name='VehicleListboxScroll' PackLocation='right,top' PackLocationProp='-037/0001,0034/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0208/0001' ScrollExtent='9,272' Size='9,272' Style='/ScrollBars.vertical.style'/>
<Listbox DataSource='VehicleDataSource' Location='25,34' Name='VehicleListbox' PackSize='absolute,absolute' PackSizeProp='0072/0001,0208/0001' RowTemplate='VehicleNameTemplate' ScrollExtent='400,918' Size='394,272' Style='/Listboxes.Clear.style'/>
<Rectangle AbsorbsInput='false' Color='#00F2C9' GetsInput='false' Location='20,312' Name='VehicleInfoRect' Opacity='0.750' PackLocation='left,bottom' PackLocationProp='0020/0001,-168/0001' PackSize='absolute,fixed' PackSizeProp='0046/0001,0002/0003' ScrollExtent='420,100' Size='420,100'/>
<Scrollbar Control='VehicleInfoText' Location='429,315' Name='VehicleTextScroll' PackLocation='right,bottom' PackLocationProp='-037/0001,-165/0001' ScrollExtent='9,95' Size='9,95' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='Blah, Blah, Blah' Location='25,315' Name='VehicleInfoText' PackLocation='left,bottom' PackLocationProp='0025/0001,-165/0001' PackSize='absolute,fixed' PackSizeProp='0064/0001,0002/0003' ScrollExtent='402,94' Size='402,94'>Blah, Blah, Blah</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='20,416' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0020/0001,-064/0001' PackSize='absolute,fixed' PackSizeProp='0046/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='420,31' Size='420,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-1,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='466,463' Size='466,463' Stretch='false'/>
<Template Name='VehicleNameTemplate' Size='400,54'>\<text color = \'$color\' font = \'/Fonts.HudFont2\' location = \'4,2\' size = \'146,50\' textalignmentvertical = \'center\'\>
$Internationalize$
\</text\>
\<text color = \'$timecolor\' font = \'/SmallFont\' location = \'150,2\' size = \'40,50\' textalignment = \'center\' textalignmentvertical = \'center\'\>
$Time$
\</text\>
\<text color = \'#FF0000\' font = \'/SmallFont\' location = \'190,2\' size = \'55,50\' textalignment = \'center\' textalignmentvertical = \'center\'\>
$ValidArmor$
\</text\>
\<image location = \'$item.x$,2\' name = \'Image\' opacity = \'$item.opacity$\' scrollextent = \'$item.w$,50\' size = \'$item.w$,50\' style = \'$item.icon\' visible = \'$HasIcon$\'/\></Template>
<DataSource Name='VehicleDataSource'>
<Data color='0xffffff' hasicon='true' internationalize='@ams' item.icon='/ItemIcons1GridHigh.ams_nc' item.opacity='0.5' item.w='100' item.x='275' Localinternationalize='[@ams]' Name='AMS' price='1000' timecolor='#FF0000' validarmor='Invalid Armor'/>
<Data color='0xffffff' hasicon='true' internationalize='@ant' item.icon='/ItemIcons1GridHigh.ant_nc' item.opacity='0.5' item.w='100' item.x='275' Localinternationalize='[@ant]' Name='ANT' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@apc' item.icon='/ItemIcons1GridHigh.apc_nc' item.w='100' item.x='250' Localinternationalize='[@apc]' Name='APC' price='1000' time='12:00' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@dropship' Localinternationalize='[@dropship]' Name='Dropship' price='1000' time='12:00' timecolor='#ff0000'/>
<Data color='0xffffff' internationalize='@lightgunship' Localinternationalize='[@lightgunship]' Name='Lightgunship' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@lightning' Localinternationalize='[@lightning]' Name='Lightning' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@lodestar' Localinternationalize='[@lodestar]' Name='Lodestar' price='1000' time='12:00' timecolor='#ff0000'/>
<Data color='0xffffff' internationalize='@magrider' Localinternationalize='[@magrider]' Name='Magrider' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@mosquito' Localinternationalize='[@mosquito]' Name='Mosquito' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@prowler' Localinternationalize='[@prowler]' Name='Prowler' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@quadassault' Localinternationalize='[@quadassault]' Name='Quadassault' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@skyguard' Localinternationalize='[@skyguard]' Name='Skyguard' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@threemanheavybuggy' Localinternationalize='[@threemanheavybuggy]' Name='ThreeManHeavyBuggy' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@two_man_assault_buggy' Localinternationalize='[@two_man_assault_buggy]' Name='Two_Man_Assault_Buggy' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@twomanheavybuggy' Localinternationalize='[@twomanheavybuggy]' Name='TwoManHeavyBuggy' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@twomanhoverbuggy' Localinternationalize='[@twomanhoverbuggy]' Name='TwoManHoverBuggy' price='1000' timecolor='#FF0000'/>
<Data color='0xffffff' internationalize='@vanguard' Localinternationalize='[@vanguard]' Name='Vanguard' price='1000' timecolor='#FF0000'/>
</DataSource>
<Namespace Name='Styles'>
<RectangleStyle Center='normal' Name='RNormal'/>
<RectangleStyle Center='pressed' Name='RPressed'/>
<RectangleStyle Center='rollover' Name='RRollover'/>
<ButtonStyle MouseOverSound='interface_feedback_rollover.wav' Name='Default' RStyleActivated='RPressed' RStyleDefault='RNormal' RStyleMouseOver='RRollover'/>
<ImageStyle Name='normal'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,191,132,220'/>
</ImageStyle>
<ImageStyle Name='pressed'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,249,132,278'/>
</ImageStyle>
<ImageStyle Name='rollover'>
<ImageFrame Source='ps_keymap_art_00' SourceRect='0,220,132,249'/>
</ImageStyle>
</Namespace>
</Page>
