<Page BackgroundColor='#008000' BackgroundOpacity='0.475' Location='788,206' Name='EditCharacter' OnHide='parent.wantsinput = shared
parent.showcursor = false' OnShow='parent.wantsinput = true
parent.showcursor = true' PackLocation='right,center' PackLocationProp='-236/0001,-178/0001' ScrollExtent='190,300' Size='190,300' Visible='false'>
<Template Name='Row' Size='400,16'>\<text font = \'/Fonts.DefaultFont\' location = \'5,-1\' size = \'400,18\'\>
$Name$
\</text\></Template>
<DataSource Name='EmpireDS'>
<Data Name='Terran Republic' symbol='tr'/>
<Data Name='New Conglomerate' symbol='nc'/>
<Data Name='Vanu Sovereinty' symbol='vs'/>
</DataSource>
<DataSource Name='GenderDS'>
<Data Name='Male'/>
<Data Name='Female'/>
</DataSource>
<DataSource Name='ArmorDS'>
<Data Name='Light'/>
<Data Name='Medium'/>
<Data Name='Heavy'/>
<Data Name='Stealth'/>
</DataSource>
<DataSource Name='RankDS'>
<Data Name='1'/>
<Data Name='2'/>
<Data Name='3'/>
<Data Name='4'/>
<Data Name='5'/>
<Data Name='6'/>
<Data Name='7'/>
<Data Name='8'/>
<Data Name='9'/>
<Data Name='10'/>
<Data Name='11'/>
<Data Name='12'/>
<Data Name='13'/>
</DataSource>
<Text Font='/Fonts.DefaultFont' LocalText='Guid:' Location='10,10' ScrollExtent='70,20' Size='70,20'>Guid:</Text>
<Text Font='/Fonts.DefaultFont' Location='60,10' Name='Guid' ScrollExtent='120,20' Size='120,20'></Text>
<Text Font='/Fonts.DefaultFont' LocalText='Empire:' Location='10,50' ScrollExtent='70,20' Size='70,20'>Empire:</Text>
<Dropdownbox DataSource='EmpireDS' Location='10,70' Name='Empire' OnSelect='ic_setempire parent.guid.text selecteditem.symbol' RowTemplate='Row' ScrollExtent='170,20' SelectedItemIndex='1' Size='170,20' Style='/dropdown20.style'/>
<Text Font='/Fonts.DefaultFont' LocalText='Gender:' Location='10,110' ScrollExtent='70,20' Size='70,20'>Gender:</Text>
<Dropdownbox DataSource='GenderDS' Location='10,130' Name='Gender' OnSelect='ic_setgender parent.guid.text selecteditem.name' RowTemplate='Row' ScrollExtent='170,20' Size='170,20' Style='/dropdown20.style'/>
<Text Font='/Fonts.DefaultFont' LocalText='Armor:' Location='10,170' ScrollExtent='70,20' Size='70,20'>Armor:</Text>
<Dropdownbox DataSource='ArmorDS' Location='10,190' Name='Armor' OnSelect='ic_setarmortype parent.guid.text selecteditem.name' RowTemplate='Row' ScrollExtent='170,20' Size='170,20' Style='/dropdown20.style'/>
<Text Font='/Fonts.DefaultFont' LocalText='Rank:' Location='10,220' ScrollExtent='70,20' Size='70,20'>Rank:</Text>
<Dropdownbox DataSource='RankDS' Location='10,240' Name='Rank' OnSelect='ic_setrank parent.guid.text selecteditem.name' RowTemplate='Row' ScrollExtent='170,20' Size='170,20' Style='/dropdown20.style'/>
<Button LocalText='Close' Location='50,270' Name='Close' OnPress='parent.visible = false' ScrollExtent='90,24' Size='90,24' Style='/Buttons.Medium.style'>Close</Button>
</Page>
