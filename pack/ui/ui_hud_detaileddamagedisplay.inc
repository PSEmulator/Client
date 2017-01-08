<Page Location='0,489' movable='true' Name='DetailedDamageDisplay' ScrollExtent='471,189' Size='471,189' Visible='false'>
<Page BackgroundColor='#00F2C9' BackgroundOpacity='0.224' Location='114,0' Name='DamageListPage' ScrollExtent='357,189' Size='357,189'>
<Listbox DataSource='DamageItems' GetsInput='false' Location='10,10' Name='DamageList' PackLocation='left,top' PackLocationProp='0010/0001,0010/0001' PackSize='absolute,absolute' PackSizeProp='0032/0001,0039/0001' RowTemplate='ListboxTemplate' ScrollExtent='325,150' Size='325,150' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='DamageList' Location='337,10' Name='ScrollDamageList' PackLocation='right,top' PackLocationProp='-020/0001,0010/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0039/0001' ScrollExtent='9,150' Size='9,150' Style='/ScrollBars.vertical.style'/>
<Text Font='/Fonts.HudFont1' LocalText='Gunner Name' Location='10,162' Name='GunnerName' ScrollExtent='163,20' Size='163,20' TextAlignmentVertical='Center'>Gunner Name</Text>
<Image AbsorbsInput='false' Location='174,164' Name='WeaponIcon' ScrollExtent='67,17' Size='67,17' Style='/ItemIcons1GridHigh.colossus_chaingun' text='100/200'/>
<Text Font='/Fonts.HudFont1' LocalText='100' Location='245,162' Name='AmmoCount' ScrollExtent='35,20' Size='35,20' TextAlignment='Center' TextAlignmentVertical='Center'>100</Text>
<Image Activated='true' GetsInput='true' LocalTooltip='Bobble was here' Location='282,164' Name='AmmoIcon' ScrollExtent='16,16' Size='16,16' Style='/ItemIcons1GridHigh.9mmbullet_AP' text='100/200' Tooltip='Bobble was here'/>
<Text Font='/Fonts.HudFont1' LocalText='1000' Location='300,162' Name='AmmoReserve' ScrollExtent='45,20' Size='45,20' TextAlignment='Center' TextAlignmentVertical='Center'>1000</Text>
<Template Name='ListboxTemplate' Size='325,18'>\<text color = \'#FFFFFF\' font = \'/Fonts.ChatFont\' location = \'5,1\' shadowstyle = \'/Shadows.Default\' size = \'110,16\'\>
$DamageLocation$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'120,1\' shadowstyle = \'/Shadows.Default\' size = \'200,16\'\>
$DamageValue$
\</text\></Template>
<DataSource Name='DamageItems'>
<Data color='#FF0000' damagelocation='Shield Generator' damagevalue='Offline' location='0' Name='Damage1' severity='10' type='0'/>
<Data color='#FFFF00' damagelocation='Left Weapon' damagevalue='Reload -50%' location='1' Name='Damage2' severity='1' type='2'/>
</DataSource>
</Page>
<Rectangle Color='#00F2C9' Name='Border' ScrollExtent='471,189' Size='471,189' Thickness='2.000' ThicknessBottom='2.000' ThicknessLeft='2.000' ThicknessRight='2.000' ThicknessTop='2.000'/>
</Page>
