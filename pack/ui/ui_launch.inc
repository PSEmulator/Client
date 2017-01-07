<Page BackgroundColor='#000000' BackgroundOpacity='0.00' Color='#FFFFFF' Dragable='false' Enabled='true' Location='0,0' Name='Vendor' Opacity='1.00' ScrollExtent='800,600' ScrollLocation='0,0' Size='800,600' Visible='false'>
<Listbox AutoScrollSpeed='10.00' Color='#FFFFFF' DataSource='/DataSources.Vendor' Dragable='false' Enabled='true' Location='30,90' Name='ShopInventory' Opacity='1.00' RowTemplate='InventoryTemplate' ScrollExtent='250,380' ScrollLocation='0,0' SelectedItemIndex='-1' Size='250,350' Style='InventoryStyle' Visible='true'/>
<Scrollbar Color='#FFFFFF' Control='ShopInventory' Dragable='false' Enabled='true' Location='280,90' Opacity='1.00' ScrollExtent='16,380' ScrollLocation='0,0' Size='16,350' Style='/VScrollbar.style' Visible='true'/>
<Text Color='#FFFFFF' Dragable='false' Enabled='true' Font='/Fonts.DefaultFont' Location='84,451' Name='BuyQuantityLabel' Opacity='1.00' ScrollExtent='117,20' ScrollLocation='0,0' Size='130,20' TextAlignment='Left' Visible='true'>Quantity To Buy:</Text>
<Textbox Color='#FFFFFF' Dragable='false' Enabled='true' Location='209,450' MaxLength='3' MaxLines='1' Name='BuyQuantity' Opacity='1.00' Password='false' ScrollExtent='18,20' ScrollLocation='0,0' Size='33,22' Style='/SmallTextbox.Style' Visible='true' WrapWidth='None'>888</Textbox>
<Button Color='#FFFFFF' Dragable='false' Enabled='true' Location='63,480' Name='Buy' OnPress='sv_buy Parent.ShopInventory.SelectedItem.GUID Parent.BuyQuantity.Text' Opacity='1.00' ScrollExtent='200,32' ScrollLocation='0,0' Size='200,32' Style='/MapSelect.LBS' TextColor='#FFFFFF' Visible='true'>Buy</Button>
<Listbox AutoScrollSpeed='10.00' Color='#FFFFFF' DataSource='/DataSources.MainInventory' Dragable='false' Enabled='true' Location='505,90' Name='PlayerInventory' Opacity='1.00' RowTemplate='InventoryTemplate' ScrollExtent='250,380' ScrollLocation='0,0' SelectedItemIndex='-1' Size='250,350' Style='InventoryStyle' Visible='true'/>
<Scrollbar Color='#FFFFFF' Control='PlayerInventory' Dragable='false' Enabled='true' Location='755,90' Opacity='1.00' ScrollExtent='16,380' ScrollLocation='0,0' Size='16,350' Style='/VScrollbar.style' Visible='true'/>
<Text Color='#FFFFFF' Dragable='false' Enabled='true' Font='/Fonts.DefaultFont' Location='558,451' Name='SellQuantityLabel' Opacity='1.00' ScrollExtent='114,20' ScrollLocation='0,0' Size='130,20' TextAlignment='Left' Visible='true'>Quantity To Sell:</Text>
<Textbox Color='#FFFFFF' Dragable='false' Enabled='true' Location='683,450' MaxLength='3' MaxLines='1' Name='SellQuantity' Opacity='1.00' Password='false' ScrollExtent='18,20' ScrollLocation='0,0' Size='33,22' Style='/SmallTextbox.Style' Visible='true' WrapWidth='None'>888</Textbox>
<Button Color='#FFFFFF' Dragable='false' Enabled='true' Location='538,480' Name='Sell' OnPress='sv_sell Parent.PlayerInventory.SelectedItem.GUID Parent.SellQuantity.Text' Opacity='1.00' ScrollExtent='200,32' ScrollLocation='0,0' Size='200,32' Style='/MapSelect.LBS' TextColor='#FFFFFF' Visible='true'>Sell</Button>
<Image Color='#FFFFFF' Dragable='false' Enabled='true' Location='9,47' Name='Plate1' Opacity='0.30' ScrollExtent='782,505' ScrollLocation='0,0' Size='782,505' Stretch='false' Style='Plate1_Style' Visible='true'/>
<Image Color='#FFFFFF' Dragable='false' Enabled='true' Location='-1,538' Name='Bottom' Opacity='1.00' ScrollExtent='800,66' ScrollLocation='0,0' Size='800,66' Stretch='false' Style='Bottom_Style' Visible='true'/>
<Image Color='#FFFFFF' Dragable='false' Enabled='true' Location='0,0' Name='Top' Opacity='1.00' ScrollExtent='800,67' ScrollLocation='0,0' Size='800,67' Stretch='false' Style='Top_Style' Visible='true'/>
<Image Color='#FFFFFF' Dragable='false' Enabled='true' Location='0,0' Name='Background' Opacity='1.00' ScrollExtent='800,600' ScrollLocation='0,0' Size='800,600' Stretch='true' Style='/Backdrops.BluePlanet' Visible='true' visualeditlock='true'/>
<ImageStyle Loop='true' Name='Plate1_Style' Playtime='1.00'>
<ImageFrame Duration='1' Offset='0,0'>
<ImageFragment Offset='0,0' Source='ps_interface_plate1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ps_interface_plate1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='512,0' Source='ps_interface_plate1_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='768,0' Source='ps_interface_plate1_03' SourceRect='0,0,12,256'/>
<ImageFragment Offset='0,256' Source='ps_interface_plate1_04' SourceRect='0,0,256,247'/>
<ImageFragment Offset='256,256' Source='ps_interface_plate1_05' SourceRect='0,0,256,247'/>
<ImageFragment Offset='512,256' Source='ps_interface_plate1_06' SourceRect='0,0,256,247'/>
<ImageFragment Offset='768,256' Source='ps_interface_plate1_07' SourceRect='0,0,12,247'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Loop='true' Name='Top_Style' Playtime='1.00'>
<ImageFrame Duration='1' Offset='0,0'>
<ImageFragment Offset='0,0' Source='ps_interface_bar_top_00' SourceRect='0,0,128,63'/>
<ImageFragment Offset='128,0' Source='ps_interface_bar_top_01' SourceRect='0,0,128,63'/>
<ImageFragment Offset='256,0' Source='ps_interface_bar_top_02' SourceRect='0,0,128,63'/>
<ImageFragment Offset='384,0' Source='ps_interface_bar_top_03' SourceRect='0,0,128,63'/>
<ImageFragment Offset='512,0' Source='ps_interface_bar_top_04' SourceRect='0,0,128,63'/>
<ImageFragment Offset='640,0' Source='ps_interface_bar_top_05' SourceRect='0,0,128,63'/>
<ImageFragment Offset='768,0' Source='ps_interface_bar_top_06' SourceRect='0,0,32,63'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Loop='true' Name='Bottom_Style' Playtime='1.00'>
<ImageFrame Duration='1' Offset='0,0'>
<ImageFragment Offset='0,0' Source='ps_interface_bar_btm_00' SourceRect='0,0,128,63'/>
<ImageFragment Offset='128,0' Source='ps_interface_bar_btm_01' SourceRect='0,0,128,63'/>
<ImageFragment Offset='256,0' Source='ps_interface_bar_btm_02' SourceRect='0,0,128,63'/>
<ImageFragment Offset='384,0' Source='ps_interface_bar_btm_03' SourceRect='0,0,128,63'/>
<ImageFragment Offset='512,0' Source='ps_interface_bar_btm_04' SourceRect='0,0,128,63'/>
<ImageFragment Offset='640,0' Source='ps_interface_bar_btm_05' SourceRect='0,0,128,63'/>
<ImageFragment Offset='768,0' Source='ps_interface_bar_btm_06' SourceRect='0,0,32,63'/>
</ImageFrame>
</ImageStyle>
<ListboxStyle GridStyle='/DefaultGrid.style' Layout='Vertical' Name='InventoryStyle'/>
<Template Name='InventoryTemplate' Size='250,30'><text font = '/Fonts.DefaultFont' location = '5,7' size = '150,20'>

$Name$






</text>

<text font = '/Fonts.DefaultFont' location = '155,7' size = '45,20' textalignment = 'right'>

$Quantity$






</text>

<text font = '/Fonts.DefaultFont' location = '200,7' size = '45,20' textalignment = 'right'>

$Price$






</text></Template>
</Page>
