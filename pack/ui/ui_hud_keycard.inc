<Page Location='324,180' movable='true' Name='KeyCard' PackLocation='cfc,cfc' PackLocationProp='0000/0001,0019/0001' ScrollExtent='376,446' Size='376,446' Visible='false'>
<Page Location='35,48' Name='VehicleView' ScrollExtent='309,120' Size='309,120'>
<Image AbsorbsInput='false' Name='Image' ScrollExtent='309,120' Size='309,120' Visible='false'/>
</Page>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='198,208' Name='AccessTypeSeparator' RStyleDefault='/Listboxes.ListboxContentHeader.style' ScrollExtent='157,8' Size='157,8'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@VehicleAccessType]' Location='213,189' MaxLines='1' Name='AccessTypeTitle' PackLocation='left,top' PackLocationProp='0213/0001,0189/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='129,34' Size='129,26' TextAlignment='Center'>@VehicleAccessType</Text>
<Checkbox BackgroundOpacity='1.000' Location='203,316' Name='NoAccess' ScrollExtent='144,26' Size='144,26' Style='/Buttons.Radiobox.style'>@NoAccess</Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='203,341' Name='SquadAccess' ScrollExtent='144,26' Size='144,26' Style='/Buttons.Radiobox.style'>@SquadAccess</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='203,368' Name='EmpireAccess' ScrollExtent='144,26' Size='144,26' Style='/Buttons.Radiobox.style'>@EmpireAccess</Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@VehicleAccessLevel]' Location='208,279' MaxLines='1' Name='AccessLevelTitle' PackLocation='left,top' PackLocationProp='0208/0001,0279/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='129,34' Size='129,26' TextAlignment='Center'>@VehicleAccessLevel</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='195,298' Name='AccessLevelSeparator' RStyleDefault='/Listboxes.ListboxContentHeader.style' ScrollExtent='157,8' Size='157,8'/>
<Dropdownbox DataSource='AccessTypes' Location='197,219' Name='AccessTypeDropdown' RowTemplate='Row Template' ScrollExtent='157,32' SelectedItemIndex='2' Size='157,32' Style='/Dropdowns.HudPane.style'/>
<DataSource Name='AccessTypes'>
<Data localtypename='[@VehicleAccessAll]' Name='All' type='0' typename='@VehicleAccessAll'/>
<Data localtypename='[@Driver]' Name='Driver' type='1' typename='@Driver'/>
<Data localtypename='[@Gunner]' Name='Gunner' type='2' typename='@Gunner'/>
<Data localtypename='[@Passenger]' Name='Passenger' type='3' typename='@Passenger'/>
<Data localtypename='[@Trunk]' Name='Trunk' type='4' typename='@Trunk'/>
</DataSource>
<Template Name='Row Template' Size='250,20'>\<text font = \'/Fonts.DefaultFont\' location = \'5,-1\' size = \'250,20\'\>
$TypeName$
\</text\></Template>
<Button LocalText='[@Cancel]' Location='294,9' Name='Close' PackLocation='right,top' PackLocationProp='-082/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='68,10' Name='HelpButton' PackLocation='right,top' PackLocationProp='-308/0001,0010/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@VehicleAccessTitle]' Location='90,9' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0090/0001,0009/0001' PackSize='absolute,fixed' PackSizeProp='0175/0001,0002/0003' ScrollExtent='201,17' Size='201,17' TextAlignment='Center'>@VehicleAccessTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='38,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='304,32' Size='304,32'/>
<DataSource Name='Foo'>
<Data displayname='Driver' icon='driver' location='10,2' Name='Driver' size='16,16'/>
<Data displayname='Passenger' icon='passenger' location='12,2' Name='Passenger' size='17,16'/>
<Data displayname='Vehicle' icon='vehicle' location='2,5' Name='Vehicle' size='30,17'/>
<Data displayname='Gunner' icon='gunner' location='4,2' Name='Gunner' size='27,16'/>
</DataSource>
<Rectangle AbsorbsInput='false' Color='#00F2C9' GetsInput='false' Location='20,40' Name='3DVehicleViewBorderRect' Opacity='0.750' ScrollExtent='336,136' Size='336,136'/>
<GameObjectView AbsorbsInput='false' Location='35,48' Name='3DVehicleView' ScrollExtent='309,120' Size='309,120'/>
<Template Name='OccupantTemplate' Size='220,22'>\<text color = \'$color\' font = \'/Fonts.HudFont1\' location = \'32,5\' size = \'200,12\'\>
$displayname$
\</text\>
\<image location = \'$location\' size = \'$size$\' stretch = \'false\' style = \'$icon$\'/\></Template>
<Rectangle AbsorbsInput='false' Color='#00F2C9' GetsInput='false' Location='186,176' Name='VerticalLine' Opacity='0.750' ScrollExtent='1,217' Size='1,217'/>
<Listbox DataSource='Foo' Location='19,183' Name='OccupantsListbox' RowTemplate='OccupantTemplate' ScrollExtent='220,213' SelectedItemIndex='0' Size='154,213' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='OccupantsListbox' Location='175,183' Name='ScrollOccupants' ScrollExtent='9,213' Size='9,213' Style='/ScrollBars.vertical.style'/>
<Button LocalText='[@KickPassenger]' Location='24,404' Name='KickPassenger' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@KickPassenger</Button>
<Button LocalText='[@DeconstructVehicle]' Location='280,405' Name='Deconstruct' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DeconstructVehicle</Button>
<ImageStyle Name='driver'>
<ImageFrame Source='vehicle_keycard_icons_00' SourceRect='0,32,16,48'/>
</ImageStyle>
<ImageStyle Name='passenger'>
<ImageFrame Source='vehicle_keycard_icons_00' SourceRect='44,32,57,49'/>
</ImageStyle>
<ImageStyle Name='gunner'>
<ImageFrame Source='vehicle_keycard_icons_00' SourceRect='17,32,43,49'/>
</ImageStyle>
<ImageStyle Name='vehicle'>
<ImageFrame Source='vehicle_keycard_icons_00' SourceRect='0,50,28,66'/>
</ImageStyle>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='19,399' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='341,31' Size='341,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,15' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0012/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='376,434' Size='376,434' Stretch='false'/>
</Page>
