<Page Location='18,70' Name='FavoritesPage' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='558,368' Size='558,368' Visible='false'>
<Image BackgroundOpacity='1.000' Location='2,334' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0002/0001,-034/0001' PackSize='absolute,fixed' PackSizeProp='0005/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='553,31' Size='553,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Color='#385E61' Location='2,2' Name='TabBorder' PackLocation='left,top' PackLocationProp='0002/0001,0002/0001' PackSize='absolute,absolute' PackSizeProp='0004/0001,0044/0001' RStyleDefault='/WindowPanes.TabBorder.style' ScrollExtent='554,324' Size='554,324'/>
<Text Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@SquadDefinitionFavoritesTitle]' Location='6,9' Name='Name' PackLocation='left,top' PackLocationProp='0006/0001,0009/0001' PackSize='absolute,fixed' PackSizeProp='0012/0001,0002/0003' ScrollExtent='546,20' Size='546,20' TextAlignment='Center' TooltipStyle='/Tooltips.Default'>@SquadDefinitionFavoritesTitle</Text>
<Listbox DataSource='FavoritesDataSource' Location='6,30' Name='FavoritesListbox' PackSize='absolute,absolute' PackSizeProp='0013/0001,0076/0001' RowTemplate='FavoritesTemplate' ScrollExtent='570,292' Size='545,292' Style='/Listboxes.Clear.style'/>
<DataSource Name='FavoritesDataSource'>
<Data color='#FFFFFF' isdefault='true' Name='Favorites #1' name.w='260' slot='(1)' slotindex='0'/>
<Data color='#FFFFFF' isdefault='false' Name='Favorites #2' name.w='260' slot='(2)' slotindex='1'/>
<Data color='#FFFFFF' isdefault='false' Name='Favorites #3' name.w='260' slot='(3)' slotindex='2'/>
<Data color='#FFFFFF' isdefault='false' Name='Favorites #4' name.w='260' slot='(4)' slotindex='3'/>
<Data color='#FFFFFF' isdefault='false' Name='Favorites #5' name.w='260' slot='(5)' slotindex='4'/>
<Data color='#FFFFFF' isdefault='false' Name='Favorites #6' name.w='260' slot='(6)' slotindex='5'/>
<Data color='#FFFFFF' isdefault='false' Name='Favorites #7' name.w='260' slot='(7)' slotindex='6'/>
<Data color='#FFFFFF' isdefault='false' Name='Favorites #8' name.w='260' slot='(8)' slotindex='7'/>
<Data color='#FFFFFF' isdefault='false' Name='Favorites #9' name.w='260' slot='(9)' slotindex='8'/>
<Data color='#FFFFFF' favoritename='happy fun favorite' isdefault='false' Name='Favorites #10' name.w='260' slot='(10)' slotindex='9'/>
</DataSource>
<Template Name='FavoritesTemplate' Size='570,20'>\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'4,2\' maxlines = \'1\' size = \'32,20\'\>
$slot$
\</text\>
\<text color = \'$textcolor$\' font = \'/Fonts.HudFont2\' location = \'40,2\' maxlines = \'1\' size = \'$name.w$,20\'\>
$FavoriteName$
\</text\></Template>
<Button LocalText='[@DeleteFavorite]' LocalTooltip='[@DeleteSquadFavoriteTooltip]' Location='455,339' Name='DeleteButton' PackLocation='center,bottom' PackLocationProp='0176/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@DeleteSquadFavoriteTooltip' TooltipStyle='/Tooltips.Default'>@DeleteFavorite</Button>
<Button LocalText='[@SaveFavorite]' LocalTooltip='[@SaveSquadFavoriteTooltip]' Location='237,339' Name='SaveButton' PackLocation='center,bottom' PackLocationProp='-042/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@SaveSquadFavoriteTooltip' TooltipStyle='/Tooltips.Default'>@SaveFavorite</Button>
<Button LocalText='[@LoadFavorite]' LocalTooltip='[@LoadSquadFavoriteTooltip]' Location='26,339' Name='LoadButton' PackLocation='center,bottom' PackLocationProp='-253/0001,-029/0001' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style' Tooltip='@LoadSquadFavoriteTooltip' TooltipStyle='/Tooltips.Default'>@LoadFavorite</Button>
</Page>
