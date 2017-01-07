<Page Name='News' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = true
News.SelectedItemIndex = 0
Title.Text = News.SelectedItem.Name
Body.Text = News.SelectedItem.Body
Body.ScrollLocation = 0,0' PackLocation='Center,Center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='800,600' Size='800,600' Visible='false'>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='SelectedItem.Name' Location='270,77' Name='Title' ScrollExtent='480,43' Size='480,43' TextAlignment='Center'>SelectedItem.Name</Text>
<Text Font='/Fonts.DefaultFont' LocalText='SelectedItem.Body' Location='270,130' Name='Body' ScrollExtent='460,410' Size='460,410'>SelectedItem.Body</Text>
<Scrollbar Control='Body' Location='730,130' PackLocation='Right, Top' PackLocationProp='-070/0001,xxxx/xxxx' ScrollExtent='20,410' Size='20,410' Style='/VScrollbar.style'/>
<Template Name='NewsTemplate' Size='200,20'>\<text font = \'/Fonts.DefaultFont\' location = \'2,2\' size = \'80,16\'\>
$Date$
\</text\>
\<text font = \'/Fonts.DefaultFont\' location = \'82,2\' size = \'118,16\'\>
$Name$
\</text\></Template>
<Listbox DataSource='/DataSources.News' Location='40,70' Name='News' ondatasourcechanged='SelectedItemIndex = 1
Parent.Title.Text = SelectedItem.Name
Parent.Body.Text = SelectedItem.Body
Parent.Body.ScrollLocation = 0,0' OnSelect='Parent.Title.Text = SelectedItem.Name
Parent.Body.Text = SelectedItem.Body
Parent.Body.ScrollLocation = 0,0' RowTemplate='NewsTemplate' ScrollExtent='200,480' Size='200,480' Style='/Listboxes.EmbeddedListbox16.style'/>
<Page BackgroundOpacity='1.000' Location='40,70' Name='Tint' ScrollExtent='200,480' Size='200,480'/>
<Image Name='Border' ScrollExtent='930,640' Size='930,640' Stretch='false' Style='/Plates.Border'/>
<Page BackgroundOpacity='1.000' Location='260,70' Name='Tint' ScrollExtent='500,480' Size='500,480'/>
<3DPlanet Color='#000000' Name='Planet' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='800,600' Size='800,600'/>
</Page>
