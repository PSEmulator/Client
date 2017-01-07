<Page Name='Email' PackLocation='0.5, 0.5' ScrollExtent='800,600' Size='800,600' Visible='false'>
<Text Font='/Fonts.DefaultFont' Location='10,10' Name='Email' ScrollExtent='37,20' Size='260,20'>Email</Text>
<Text Font='/Fonts.DefaultFont' Location='20,360' Name='From Label' ScrollExtent='38,20' Size='50,20'>From:</Text>
<Text Color='#C0C0C0' Font='/Fonts.DefaultFont' Location='70,360' Name='From' ScrollExtent='124,20' Size='700,20'>Steve Manchester</Text>
<Text Color='#C0C0C0' Font='/Fonts.DefaultFont' Location='20,390' Name='MessageBody' ScrollExtent='209,20' Size='730,120'>This is the body of message 2</Text>
<Scrollbar Control='Messages' Location='750,120' ScrollExtent='16,230' Size='30,230' Style='/VScrollbar.style'/>
<Listbox DataSource='/DataSources.Email' Location='20,120' Name='Messages' OnSelect='Parent.From.Text = SelectedItem.From
















Parent.MessageBody.Text = SelectedItem.Body' RowTemplate='EmailRowTemplate' ScrollExtent='750,230' Size='730,230' Style='/Listboxes.Generic.style'/>
<Button Dragable='true' Location='20,80' Name='New' OnPress='ui_pushstate
















ui_showpage SendEmail' ScrollExtent='200,32' Size='200,32' Style='/Buttons.Default.style'>New</Button>
<Button Location='230,80' Name='Delete' OnPress='sv_deletemail Messages.SelectedItem.GUID' ScrollExtent='200,32' Size='200,32' Style='/Buttons.Default.style'>Delete</Button>
<Scrollbar Control='MessageBody' Location='750,390' ScrollExtent='16,230' Size='30,120' Style='/VScrollbar.style'/>
<Button Location='760,60' Name='Exit' OnPress='ui_popstate' ScrollExtent='16,16' Size='16,16' Style='/Buttons.Exit.style' visualeditlock='true'></Button>
<Template Name='EmailRowTemplate' Size='750,20'>\<text font = \'/Fonts.DefaultFont\' size = \'200,20\'\>
$From$
















\</text\>
\<text font = \'/Fonts.DefaultFont\' location = \'200,0\' size = \'400,20\'\>
$Subject$
















\</text\>
\<text font = \'/Fonts.DefaultFont\' location = \'600,0\' size = \'150,20\'\>
$Recieved$
















\</text\></Template>
<Image Location='9,47' Name='Plate' Opacity='0.30' ScrollExtent='782,505' Size='782,505' Stretch='false' Style='/Plates.Large'/>
<Image Name='Backdrop' ScrollExtent='800,600' Size='800,600' Style='/Backdrops.BluePlanet'/>
</Page>
