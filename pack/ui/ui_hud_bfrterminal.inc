<Page Location='298,200' MinimumSize='427,409' movable='true' Name='BFRTerminal' noresizex='true' PackLocation='cfc,cfc' PackLocationProp='-001/0001,0056/0001' resizable='true' ScrollExtent='427,480' Size='427,480' Visible='false'>
<Image BackgroundOpacity='1.000' Color='#385E61' Location='361,57' Name='TabBorderTop5' PackLocation='left,top' PackLocationProp='0361/0001,0057/0001' PackSize='absolute,fixed' PackSizeProp='0387/0001,0002/0003' ScrollExtent='40,2' Size='40,2' Style='TabBorderTopStyle'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Color='#385E61' Location='21,58' Name='TabBorder' PackSize='absolute,absolute' PackSizeProp='0045/0001,0106/0001' RStyleDefault='/WindowPanes.TabBorder.style' ScrollExtent='382,374' Size='382,374'/>
<Button LocalText='[@Cancel]' Location='352,8' Name='CancelButton' PackLocation='right,top' PackLocationProp='-075/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='58,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0058/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@BFRTerminalTitle]' Location='92,6' Name='TitleText' PackLocation='center,top' PackLocationProp='-121/0001,0006/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='245,20' Size='245,20' TextAlignment='Center' TextAlignmentVertical='Center'>@BFRTerminalTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='30,-1' Name='Title' PackSize='absolute,fixed' PackSizeProp='0054/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='373,32' Size='373,32'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='21,35' Name='ChassisTab' ScrollExtent='85,24' Size='85,24' Style='/Buttons.WindowIconTab.style'>@ChassisTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='106,35' Name='PilotTab' ScrollExtent='85,24' Size='85,24' Style='/Buttons.WindowIconTab.style'>@PilotTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='191,35' Name='GunnerTab' ScrollExtent='85,24' Size='85,24' Style='/Buttons.WindowIconTab.style'>@GunnerTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='276,35' Name='FavoritesTab' ScrollExtent='85,24' Size='85,24' Style='/Buttons.WindowIconTab.style'>@FavoritesTab</Checkbox>
<Page AbsorbsInput='false' Location='24,62' Name='ChassisPage' PackSize='absolute,absolute' PackSizeProp='0053/0001,0074/0001' ScrollExtent='374,406' Size='374,406'>
<Page Name='ListPage' PackSize='absolute,absolute' PackSizeProp='0000/0001,0131/0001' ScrollExtent='374,275' Size='374,275'>
<Scrollbar Control='OrderTerminalListbox' Location='364,8' Name='ScrollOrderTerminalListbox' PackLocation='right,top' PackLocationProp='-010/0001,0008/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0008/0001' ScrollExtent='9,267' Size='9,267' Style='/ScrollBars.vertical.style'/>
<Listbox DataSource='OrderTerminalDataSource' Location='2,8' Name='OrderTerminalListbox' PackSize='absolute,absolute' PackSizeProp='0015/0001,0008/0001' RowTemplate='OrderTerminalTemplate' ScrollExtent='359,330' Size='359,267' Style='/Listboxes.Clear.style'/>
</Page>
<Rectangle Color='#385E61' Location='0,278' Name='InfoRect' PackLocation='left,bottom' PackLocationProp='0000/0001,-128/0001' PackSize='absolute,fixed' PackSizeProp='0001/0001,0002/0003' ScrollExtent='373,1' Size='373,1'/>
<Text Font='/Fonts.HudFont2' Location='3,281' Name='ItemInfoText' PackLocation='left,bottom' PackLocationProp='0003/0001,-125/0001' PackSize='absolute,fixed' PackSizeProp='0014/0001,0002/0003' ScrollExtent='360,86' Size='360,86' TextAlignment='Center'></Text>
<Scrollbar Control='ItemInfoText' Location='364,281' Name='ItemInfoScrollbar' PackLocation='right,bottom' PackLocationProp='-010/0001,-125/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='9,86' Size='9,86' Style='/ScrollBars.vertical.style'/>
<Button LocalText='[@BuyItem]' Location='119,377' Name='BuyButton' PackLocation='center,bottom' PackLocationProp='-068/0001,-029/0001' ScrollExtent='140,20' Size='140,20' Style='/Buttons.TextButton.style'>@BuyItem</Button>
<DataSource Name='OrderTerminalDataSource'>
<Data color='0xffffff' hasicon='true' internationalize='@colossus_gunner' item.icon='/ItemIcons1GridHigh.colossus_gunner' item.opacity='0.6' item.w='70' item.x='275' Localinternationalize='[@colossus_gunner]' Name='Colossus Gunner' time='1:15' timecolor='#FF0000' validarmor='Invalid Armor'/>
<Data color='0xffffff' hasicon='true' internationalize='@colossus_flight' item.icon='/ItemIcons1GridHigh.colossus_flight' item.opacity='.6' item.w='79' item.x='275' Localinternationalize='[@colossus_flight]' Name='Colossus Flight' timecolor='#FF0000' validarmor='Invalid Armor'/>
<Data color='0xffffff' hasicon='true' internationalize='@aphelion_gunner' item.icon='/ItemIcons1GridHigh.aphelion_gunner' item.opacity='.6' item.w='42' item.x='291' Localinternationalize='[@aphelion_gunner]' Name='Aphelion Gunner' timecolor='#FF0000' validarmor='Invalid Armor'/>
<Data color='0xffffff' hasicon='true' internationalize='@aphelion_flight' item.icon='/ItemIcons1GridHigh.aphelion_flight' item.opacity='.6' item.w='77' item.x='276' Localinternationalize='[@aphelion_flight]' Name='Aphelion Flight' timecolor='#FF0000' validarmor='Invalid Armor'/>
<Data color='0xffffff' hasicon='true' internationalize='@peregrine_flight' item.icon='/ItemIcons1GridHigh.peregrine_gunner' item.opacity='.6' item.w='63' item.x='282' Localinternationalize='[@peregrine_flight]' Name='Peregrine Gunner' timecolor='#FF0000' validarmor='Invalid Armor'/>
<Data color='0xffffff' hasicon='true' internationalize='@peregrine_flight' item.icon='/ItemIcons1GridHigh.peregrine_flight' item.opacity='.6' item.w='74' item.x='277' Localinternationalize='[@peregrine_flight]' Name='Peregrine Flight' timecolor='#FF0000' validarmor='Invalid Armor'/>
</DataSource>
<Template Name='OrderTerminalTemplate' Size='359,55'>\<text color = \'$color\' font = \'/Fonts.HudFont2\' location = \'4,2\' size = \'260,50\' textalignmentvertical = \'center\'\>
$Internationalize$
\</text\>
\<text color = \'$timecolor\' font = \'/SmallFont\' location = \'160,2\' size = \'50,50\' textalignment = \'center\' textalignmentvertical = \'center\'\>
$Time$
\</text\>
\<text color = \'#FF0000\' font = \'/SmallFont\' location = \'215,2\' size = \'55,50\' textalignment = \'center\' textalignmentvertical = \'center\'\>
$ValidArmor$
\</text\>
\<image location = \'$item.x$,2\' name = \'Image\' opacity = \'$item.opacity$\' scrollextent = \'$item.w$,50\' size = \'$item.w$,50\' style = \'$item.icon$\' visible = \'$HasIcon$\'/\></Template>
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
<Page AbsorbsInput='false' Location='24,62' Name='WeaponsPage' PackSize='absolute,absolute' PackSizeProp='0053/0001,0074/0001' ScrollExtent='374,406' Size='374,406' Visible='false'>
<Page Name='ListPage' PackSize='absolute,absolute' PackSizeProp='0000/0001,0131/0001' ScrollExtent='374,275' Size='374,275'>
<Image BackgroundOpacity='1.000' Location='289,155' Name='Selection' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='57,29' Size='57,29' Style='S'/>
<Scrollbar Control='OrderTerminalListbox' Location='364,8' Name='ScrollOrderTerminalListbox' PackLocation='right,top' PackLocationProp='-010/0001,0008/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0008/0001' ScrollExtent='9,267' Size='9,267' Style='/ScrollBars.vertical.style'/>
<Listbox DataSource='OrderTerminalDataSource' Location='2,8' Name='OrderTerminalListbox' PackSize='absolute,absolute' PackSizeProp='0015/0001,0008/0001' RowTemplate='OrderTerminalTemplate' ScrollExtent='359,385' Size='359,267' Style='/Listboxes.Clear.style'/>
</Page>
<Rectangle AbsorbsInput='false' Color='#385E61' GetsInput='false' Location='0,278' Name='InfoRect' PackLocation='left,bottom' PackLocationProp='0000/0001,-128/0001' PackSize='absolute,fixed' PackSizeProp='0001/0001,0002/0003' ScrollExtent='373,1' Size='373,1'/>
<Text Font='/Fonts.HudFont2' Location='3,281' Name='ItemInfoText' PackLocation='left,bottom' PackLocationProp='0003/0001,-125/0001' PackSize='absolute,fixed' PackSizeProp='0014/0001,0002/0003' ScrollExtent='360,86' Size='360,86' TextAlignment='Center'></Text>
<Scrollbar Control='ItemInfoText' Location='364,281' Name='ItemInfoScrollbar' PackLocation='right,bottom' PackLocationProp='-010/0001,-125/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='9,86' Size='9,86' Style='/ScrollBars.vertical.style'/>
<Button LocalText='[@BuyItem]' Location='4,378' Name='BuyButton' PackLocation='center,bottom' PackLocationProp='-183/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@BuyItem</Button>
<Button LocalText='[@SellItem]' Location='298,378' Name='SellButton' PackLocation='center,bottom' PackLocationProp='0111/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@SellItem</Button>
<DataSource Name='OrderTerminalDataSource'>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' internationalize='200mm Cannon' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.colossus_200mm_cannon' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='81' item1.x='234' item2.icon='/ItemIcons1GridHigh.200mmbullet' item2.w='30' item2.x='320' Localitem1.tooltip='[@amptooltip]' Name='colossus_gunner_1'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' internationalize='Mortar Launcher' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.colossus_mortar_launcher' item1.tooltip='@amptooltip' item1.w='48' item1.x='267' item2.icon='/ItemIcons1GridHigh.mortar_ammo' item2.w='30' item2.x='320' Localitem1.tooltip='[@amptooltip]' Name='colossus_gunner_2'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='false' internationalize='NTU Siphon' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.colossus_ntu_siphon' item1.name='NTU Siphon' item1.tooltip='@amptooltip' item1.w='43' item1.x='271' Localitem1.tooltip='[@amptooltip]' Name='colossus_ntu_siphon'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='false' internationalize='Armor Siphon' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.colossus_armor_siphon' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='50' item1.x='265' Localitem1.tooltip='[@amptooltip]' Name='colossus_armor_siphon'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' internationalize='Burster Pod' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.colossus_rocket_pod' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='38' item1.x='274' item2.icon='/ItemIcons1GridHigh.burster_ammo' item2.w='30' item2.x='320' Localitem1.tooltip='[@amptooltip]' Name='colossus_rocketpod'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' internationalize='30mm Rotary Chaingun' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.colossus_chaingun' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='50' item1.x='264' item2.icon='/ItemIcons1GridHigh.30mmbullet' item2.w='30' item2.x='320' Localitem1.tooltip='[@amptooltip]' Name='colossus_chaingun'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='false' internationalize='Jackhammer' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.r_shotgun' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='239' item2.icon='/ItemIcons1GridHigh.shotgun_shell' item2.w='25' item2.x='320' item3.icon='/ItemIcons1GridHigh.shotgun_shell_ap' item3.w='25' item3.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='false' hasitem4='false' internationalize='Bolt Driver' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.bolt_driver' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='270' item2.icon='/ItemIcons1GridHigh.bolt' item2.w='25' item2.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='false' hasitem3='false' hasitem4='false' internationalize='Decimator' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.phoenix' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='300' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='false' hasitem4='false' internationalize='Rocklet' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.rocklet' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='270' item2.icon='/ItemIcons1GridHigh.rocket' item2.w='25' item2.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='true' internationalize='Thumper' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.thumper' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='210' item2.icon='/ItemIcons1GridHigh.frag_cartridge' item2.w='25' item2.x='290' item3.icon='/ItemIcons1GridHigh.jammer_cartridge' item3.w='25' item3.x='320' item4.icon='/ItemIcons1GridHigh.plasma_cartridge' item4.w='25' item4.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
</DataSource>
<Template Name='OrderTerminalTemplate' Size='359,35'>\<image color = \'$item1.color$\' location = \'$item1.x$,2\' name = \'Image1Icon\' opacity = \'$item1.opacity$\' scrollextent = \'$item1.w$,30\' size = \'$item1.w$,30\' style = \'$item1.icon\' visible = \'$HasItem1$\'/\>
\<image color = \'$item2.color$\' location = \'$item2.x$,2\' name = \'Image2Icon\' opacity = \'$item2.opacity$\' scrollextent = \'$item2.w$,30\' size = \'$item2.w$,30\' style = \'$item2.icon\' visible = \'$HasItem2$\'/\>
\<text align = \'center\' color = \'$color\' font = \'/Fonts.HudFont2\' location = \'4,2\' scrollextent = \'420,30\' size = \'420,30\' textalignmentvertical = \'center\' visible = \'$IsItem$\'\>
$Internationalize$ 
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'40,2\' size = \'380,50\' verticalalign = \'center\' visible = \'$IsSubitem$\'\>
$Internationalize$ 
\</text\></Template>
</Page>
<Page AbsorbsInput='false' Location='24,62' Name='FavoritesPage' PackSize='absolute,absolute' PackSizeProp='0053/0001,0074/0001' ScrollExtent='374,406' Size='374,406' Visible='false'>
<Text Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@InventoryFavoriteName]' Location='45,-3' Name='Name' ScrollExtent='261,20' Size='261,20' TextAlignment='Center' TooltipStyle='/Tooltips.Default'>@InventoryFavoriteName</Text>
<Listbox DataSource='/DataSources.BFRFavorites' Location='2,24' Name='FavoritesListbox' PackSize='absolute,absolute' PackSizeProp='0014/0001,0062/0001' RowTemplate='FavoritesTemplate' ScrollExtent='360,344' Size='360,344' Style='/Listboxes.Clear.style'/>
<Button LocalText='[@LoadFavorite]' Location='4,378' Name='LoadButton' PackLocation='center,bottom' PackLocationProp='-183/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@LoadFavorite</Button>
<Button LocalText='[@SaveFavorite]' Location='151,378' Name='SaveButton' PackLocation='center,bottom' PackLocationProp='-036/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@SaveFavorite</Button>
<Button LocalText='[@DeleteFavorite]' Location='298,378' Name='DeleteButton' PackLocation='center,bottom' PackLocationProp='0111/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DeleteFavorite</Button>
<Template Name='FavoritesTemplate' Size='360,20'>\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'4,2\' maxlines = \'1\' size = \'32,20\'\>
$slot$
\</text\>
\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'40,2\' maxlines = \'1\' size = \'260,20\'\>
$FavoriteName$
\</text\>
\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'310,2\' maxlines = \'1\' size = \'150,20\'\>
$time$
\</text\></Template>
</Page>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='23,434' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0023/0001,-046/0001' PackSize='absolute,fixed' PackSizeProp='0048/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='379,31' Size='379,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='0,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,-003/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='427,483' Size='427,483' Stretch='false'/>
</Page>
