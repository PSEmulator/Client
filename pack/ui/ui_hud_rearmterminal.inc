<Page Location='182,200' MinimumSize='427,409' movable='true' Name='RearmTerminal' noresizex='true' PackLocation='cfc,cfc' PackLocationProp='-117/0001,0046/0001' resizable='true' ScrollExtent='427,460' Size='427,460' Visible='false'>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Color='#385E61' Location='180,57' Name='TabBorderTop5' PackLocation='left,top' PackLocationProp='0180/0001,0059/0001' PackSize='absolute,fixed' PackSizeProp='0205/0001,0002/0003' ScrollExtent='222,2' Size='222,2' Style='TabBorderTopStyle'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Color='#385E61' Location='21,58' Name='TabBorder' PackSize='absolute,absolute' PackSizeProp='0045/0001,0126/0001' RStyleDefault='/WindowPanes.TabBorder.style' ScrollExtent='382,334' Size='382,334'/>
<Button LocalText='[@Cancel]' Location='352,8' Name='CancelButton' PackLocation='right,top' PackLocationProp='-075/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='58,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0058/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@EquipmentTerminalTitle]' Location='92,6' Name='TitleText' PackLocation='center,top' PackLocationProp='-121/0001,0006/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='245,20' Size='245,20' TextAlignment='Center' TextAlignmentVertical='Center'>@EquipmentTerminalTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='30,-1' Name='Title' PackSize='absolute,fixed' PackSizeProp='0054/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='373,32' Size='373,32'/>
<Checkbox BackgroundOpacity='1.000' Location='21,35' Name='VehicleAmmoTab' ScrollExtent='74,24' Size='74,24' Style='/Buttons.WindowIconTab.style'>@VehicleTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='95,35' Name='FavoritesTab' ScrollExtent='85,24' Size='85,24' Style='/Buttons.WindowIconTab.style'>@FavoritesTab</Checkbox>
<Page AbsorbsInput='false' Location='24,62' Name='RearmPage' PackSize='absolute,absolute' PackSizeProp='0053/0001,0094/0001' ScrollExtent='374,366' Size='374,366'>
<Page Name='ListPage' PackSize='absolute,absolute' PackSizeProp='0000/0001,0131/0001' ScrollExtent='374,235' Size='374,235'>
<Image BackgroundOpacity='1.000' Location='289,155' Name='Selection' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='57,29' Size='57,29' Style='S'/>
<Scrollbar Control='RearmTerminalListbox' Location='364,8' Name='ScrollRearmTerminalListbox' PackLocation='right,top' PackLocationProp='-010/0001,0008/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0008/0001' ScrollExtent='9,227' Size='9,227' Style='/ScrollBars.vertical.style'/>
<Listbox DataSource='RearmTerminalDataSource' Location='2,8' Name='RearmTerminalListbox' PackSize='absolute,absolute' PackSizeProp='0015/0001,0008/0001' RowTemplate='RearmTerminalTemplate' ScrollExtent='359,464' Size='359,227' Style='/Listboxes.Clear.style'/>
</Page>
<Rectangle Color='#385E61' Location='0,238' Name='InfoRect' PackLocation='left,bottom' PackLocationProp='0000/0001,-128/0001' PackSize='absolute,fixed' PackSizeProp='0001/0001,0002/0003' ScrollExtent='373,1' Size='373,1'/>
<Text Font='/Fonts.HudFont2' LocalText='[@ItemInfo]' Location='3,241' Name='ItemInfoText' PackLocation='left,bottom' PackLocationProp='0003/0001,-125/0001' PackSize='absolute,fixed' PackSizeProp='0014/0001,0002/0003' ScrollExtent='360,86' Size='360,86' TextAlignment='Center'>@ItemInfo</Text>
<Scrollbar Control='ItemInfoText' Location='364,241' Name='ItemInfoScrollbar' PackLocation='right,bottom' PackLocationProp='-010/0001,-125/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='9,86' Size='9,86' Style='/ScrollBars.vertical.style'/>
<Button LocalText='[@BuyItem]' Location='4,338' Name='BuyButton' PackLocation='center,bottom' PackLocationProp='-183/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@BuyItem</Button>
<Button LocalText='[@SellItem]' Location='298,338' Name='SellButton' PackLocation='center,bottom' PackLocationProp='0111/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@SellItem</Button>
<DataSource Name='RearmTerminalDataSource'>
<Data color='#FFFFFF' hasitem1='false' hasitem2='false' hasitem3='false' hasitem4='false' hasitem5='false' hasitem6='false' internationalize='STANDARD ASSAULT' isheading='true' isitem='false' issubitem='false' Name='standard'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='false' internationalize='Repeater' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.repeater' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='25' item1.x='290' item2.icon='/ItemIcons1GridHigh.9mmbullet' item2.w='25' item2.x='320' item3.icon='/ItemIcons1GridHigh.9mmbullet_ap' item3.w='25' item3.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='false' internationalize='Scatter' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.isp' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='25' item1.x='290' item2.icon='/ItemIcons1GridHigh.shotgun_shell' item2.w='25' item2.x='320' item3.icon='/ItemIcons1GridHigh.shotgun_shell_ap' item3.w='25' item3.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='false' internationalize='Suppressor' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.suppressor' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='51' item1.x='265' item2.icon='/ItemIcons1GridHigh.9mmbullet' item2.w='25' item2.x='320' item3.icon='/ItemIcons1GridHigh.9mmbullet_ap' item3.w='25' item3.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='false' hasitem2='false' hasitem3='false' hasitem4='false' hasitem5='false' hasitem6='false' internationalize='MEDIUM ASSAULT' isheading='true' isitem='false' issubitem='false' Name='medium'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='false' internationalize='Gauss' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.gauss' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='51' item1.x='265' item2.icon='/ItemIcons1GridHigh.9mmbullet' item2.w='25' item2.x='320' item3.icon='/ItemIcons1GridHigh.9mmbullet_ap' item3.w='25' item3.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='true' hasitem5='true' hasitem6='true' hasitem7='true' internationalize='Punisher' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.9mmbullet' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='25' item1.x='200' item2.icon='/ItemIcons1GridHigh.9mmbullet_ap' item2.w='25' item2.x='230' item3.icon='/ItemIcons1GridHigh.rocket' item3.w='25' item3.x='260' item4.icon='/ItemIcons1GridHigh.frag_cartridge' item4.w='25' item4.x='290' item5.icon='/ItemIcons1GridHigh.jammer_cartridge' item5.w='25' item5.x='320' item6.icon='/ItemIcons1GridHigh.plasma_cartridge' item6.w='25' item6.x='350' item7.icon='/ItemIcons1GridHigh.punisher' item7.w='75' item7.x='120' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='false' internationalize='Sweeper' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.lasher' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='239' item2.icon='/ItemIcons1GridHigh.shotgun_shell' item2.w='25' item2.x='320' item3.icon='/ItemIcons1GridHigh.shotgun_shell_ap' item3.w='25' item3.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='false' hasitem2='false' hasitem3='false' hasitem4='false' hasitem5='false' hasitem6='false' internationalize='HEAVY ASSAULT' isheading='true' isitem='false' issubitem='false' Name='heavy'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='false' internationalize='Jackhammer' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.r_shotgun' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='239' item2.icon='/ItemIcons1GridHigh.shotgun_shell' item2.w='25' item2.x='320' item3.icon='/ItemIcons1GridHigh.shotgun_shell_ap' item3.w='25' item3.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='false' hasitem2='false' hasitem3='false' hasitem4='false' hasitem5='false' hasitem6='false' internationalize='SNIPER' isheading='true' isitem='false' issubitem='false' Name='sniper'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='false' hasitem4='false' internationalize='Bolt Driver' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.bolt_driver' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='270' item2.icon='/ItemIcons1GridHigh.bolt' item2.w='25' item2.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='false' hasitem2='false' hasitem3='false' hasitem4='false' hasitem5='false' hasitem6='false' internationalize='SPECIAL ASSAULT' isheading='true' isitem='false' issubitem='false' Name='special'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='false' hasitem3='false' hasitem4='false' internationalize='Decimator' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.phoenix' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='300' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='false' hasitem4='false' internationalize='Rocklet' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.rocklet' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='270' item2.icon='/ItemIcons1GridHigh.rocket' item2.w='25' item2.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
<Data color='#FFFFFF' hasitem1='true' hasitem2='true' hasitem3='true' hasitem4='true' internationalize='Thumper' isheading='false' isitem='true' issubitem='false' item1.icon='/ItemIcons1GridHigh.thumper' item1.name='AMP' item1.tooltip='@amptooltip' item1.w='75' item1.x='210' item2.icon='/ItemIcons1GridHigh.frag_cartridge' item2.w='25' item2.x='290' item3.icon='/ItemIcons1GridHigh.jammer_cartridge' item3.w='25' item3.x='320' item4.icon='/ItemIcons1GridHigh.plasma_cartridge' item4.w='25' item4.x='350' Localitem1.tooltip='[@amptooltip]' Name='weapon1' price='10000'/>
</DataSource>
<Template Name='RearmTerminalTemplate' Size='359,29'>\<image color = \'$item1.color$\' location = \'$item1.x$,2\' name = \'Image1Icon\' opacity = \'$item1.opacity$\' scrollextent = \'$item1.w$,25\' size = \'$item1.w$,25\' style = \'$item1.icon\' visible = \'$HasItem1$\'/\>
\<image color = \'$item2.color$\' location = \'$item2.x$,2\' name = \'Image2Icon\' opacity = \'$item2.opacity$\' scrollextent = \'$item2.w$,25\' size = \'$item2.w$,25\' style = \'$item2.icon\' visible = \'$HasItem2$\'/\>
\<image color = \'$item3.color$\' location = \'$item3.x$,2\' name = \'Image3Icon\' opacity = \'$item3.opacity$\' scrollextent = \'$item3.w$,25\' size = \'$item3.w$,25\' style = \'$item3.icon\' visible = \'$HasItem3$\'/\>
\<image color = \'$item4.color$\' location = \'$item4.x$,2\' name = \'Image4Icon\' opacity = \'$item4.opacity$\' scrollextent = \'$item4.w$,25\' size = \'$item4.w$,25\' style = \'$item4.icon\' visible = \'$HasItem4$\'/\>
\<image color = \'$item5.color$\' location = \'$item5.x$,2\' name = \'Image5Icon\' opacity = \'$item5.opacity$\' scrollextent = \'$item5.w$,25\' size = \'$item5.w$,25\' style = \'$item5.icon\' visible = \'$HasItem5$\'/\>
\<image color = \'$item6.color$\' location = \'$item6.x$,2\' name = \'Image6Icon\' opacity = \'$item6.opacity$\' scrollextent = \'$item6.w$,25\' size = \'$item6.w$,25\' style = \'$item6.icon\' visible = \'$HasItem6$\'/\>
\<image color = \'$item7.color$\' location = \'$item7.x$,2\' name = \'Image7Icon\' opacity = \'$item7.opacity$\' scrollextent = \'$item7.w$,25\' size = \'$item7.w$,25\' style = \'$item7.icon\' visible = \'$HasItem7$\'/\>
\<text align = \'center\' color = \'$color\' font = \'/Fonts.HudFont2\' location = \'4,2\' scrollextent = \'420,25\' size = \'420,25\' textalignmentvertical = \'center\' visible = \'$IsItem$\'\>
$Internationalize$ 
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'40,2\' size = \'380,50\' verticalalign = \'center\' visible = \'$IsSubitem$\'\>
$Internationalize$ 
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'0,3\' maxlines = \'1\' size = \'340,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsHeading$\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'200,2\' size = \'150,50\' verticalalign = \'center\'\>
$Time$
\</text\>
\<Image backgroundopacity = \'1.000\' location = \'0,10\' name = \'UnderlineTemplate\' rstyledefault = \'/Listboxes.ListboxContentHeader.style\' scrollextent = \'359,8\' size = \'359,8\' visible = \'$IsHeading$\'/\></Template>
</Page>
<Page AbsorbsInput='false' Location='24,62' Name='FavoritesPage' PackSize='absolute,absolute' PackSizeProp='0053/0001,0094/0001' ScrollExtent='374,366' Size='374,366' Visible='false'>
<Template Name='OldTemplate' Size='360,20'>\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'4,2\' maxlines = \'1\' size = \'32,20\'\>
$slot$
\</text\>
\<Checkbox backgroundopacity = \'1.0\' checked = \'$isdefault$\' getsinput = \'false\' location = \'50,0\' scrollextent = \'15,20\' size = \'15,20\' style = \'/Buttons.DefaultCheckbox.style\'\>
\</Checkbox\>
\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'100,2\' maxlines = \'1\' size = \'250,20\'\>
$name$
\</text\></Template>
<Text Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@InventoryFavoriteName]' Location='45,-3' Name='Name' ScrollExtent='261,20' Size='261,20' TextAlignment='Center' TooltipStyle='/Tooltips.Default' Visible='false'>@InventoryFavoriteName</Text>
<Text Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@InventoryFavoriteDefault]' LocalTooltip='[@SelectServerNewsTextHeadingTooltip]' Location='20,-3' Name='Default' ScrollExtent='80,51' Size='80,20' TextAlignment='Center' Tooltip='@SelectServerNewsTextHeadingTooltip' TooltipStyle='/Tooltips.Default' Visible='false'>@InventoryFavoriteDefault</Text>
<Listbox DataSource='/DataSources.VehicleFavorites' Location='2,24' Name='FavoritesListbox' PackSize='absolute,absolute' PackSizeProp='0014/0001,0062/0001' RowTemplate='FavoritesTemplate' ScrollExtent='360,304' Size='360,304' Style='/Listboxes.Clear.style'/>
<Button LocalText='[@LoadFavorite]' Location='4,338' Name='LoadButton' PackLocation='center,bottom' PackLocationProp='-183/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@LoadFavorite</Button>
<Button LocalText='[@SaveFavorite]' Location='151,338' Name='SaveButton' PackLocation='center,bottom' PackLocationProp='-036/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@SaveFavorite</Button>
<Button LocalText='[@DeleteFavorite]' Location='298,338' Name='DeleteButton' PackLocation='center,bottom' PackLocationProp='0111/0001,-028/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DeleteFavorite</Button>
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
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='23,394' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0023/0001,-066/0001' PackSize='absolute,fixed' PackSizeProp='0048/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='379,31' Size='379,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='0,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='427,443' Size='427,443' Stretch='false'/>
</Page>