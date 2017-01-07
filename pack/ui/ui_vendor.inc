<Page Name='Vendor' OnHide='Parent.InventoryOverlay.Visible = false' OnShow='Parent.InventoryOverlay.Location = InventoryPlaceholder.Location
















ui_showpage InventoryOverlay' PackLocation='0.5, 0.5' ScrollExtent='800,600' Size='800,600' Visible='false'>
<Button Location='20,80' Name='Weapons' ScrollExtent='190,24' Size='80,24' Style='/Buttons.Medium.style'>Weapons</Button>
<Button Location='120,80' Name='Ammo' ScrollExtent='190,24' Size='80,24' Style='/Buttons.Medium.style'>Ammo</Button>
<Button Location='220,80' Name='Supplies' ScrollExtent='190,24' Size='80,24' Style='/Buttons.Medium.style'>Supplies</Button>
<Page Location='20,310' Name='Placeholder' ScrollExtent='270,360' Size='280,170'>
<Text Font='/Fonts.DefaultFont' Location='70,63' ScrollExtent='140,40' Size='140,45' TextAlignment='Center'>3D Item Image Goes Here</Text>
</Page>
<Page Location='330,80' Name='InventoryPlaceholder' ScrollExtent='270,360' Size='200,300' Visible='false'/>
<Button Location='760,60' Name='Exit' OnPress='ui_popstate' ScrollExtent='16,16' Size='16,16' Style='/Buttons.Exit.style'></Button>
<Listbox DataSource='/DataSources.Vendor' Location='20,110' Name='ShopInventory' RowTemplate='InventoryTemplate' ScrollExtent='250,380' Size='250,190' Style='InventoryStyle'/>
<Page Location='20,130' ScrollExtent='270,360' Size='250,170'/>
<Scrollbar Control='ShopInventory' Location='270,110' ScrollExtent='16,380' Size='30,190' Style='/VScrollbar.style'/>
<Button Location='170,490' Name='Buy' ScrollExtent='190,24' Size='130,24' Style='/Buttons.Medium.style'>Buy</Button>
<Button Location='650,490' Name='Sell' ScrollExtent='190,24' Size='130,24' Style='/Buttons.Medium.style'>Sell</Button>
<Image Location='9,47' Name='Plate1' Opacity='0.30' ScrollExtent='782,505' Size='781,513' Stretch='false' Style='/Plates.Large' visualeditlock='true'/>
<Image Location='-1,538' Name='Bottom' ScrollExtent='800,66' Size='800,66' Stretch='false' Style='/Plates/Bottom'/>
<Image Name='Top' ScrollExtent='800,67' Size='800,67' Stretch='false' Style='/Plates/Top'/>
<Image Name='Background' ScrollExtent='800,600' Size='800,600' Style='/Backdrops.BluePlanet' visualeditlock='true'/>
<ListboxStyle GridStyle='/EmbeddedGrid.style' Name='InventoryStyle'/>
<Template Name='InventoryTemplate' Size='250,20'>\<text font = \'/Fonts.DefaultFont\' location = \'5,1\' size = \'200,20\'\>
$Name$
















\</text\>
\<text font = \'/Fonts.DefaultFont\' location = \'200,1\' size = \'45,20\' textalignment = \'right\'\>
$Price$
















\</text\></Template>
</Page>
