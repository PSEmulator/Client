<Page Name='Missions' OnShow='Missions.SelectedItemIndex = 0' PackLocation='0.5, 0.5' ScrollExtent='800,600' Size='800,600' Visible='false'>
<Text Font='/Fonts.DefaultFont' Location='10,10' Name='Missions' ScrollExtent='55,20' Size='100,20'>Missions</Text>
<Scrollbar Control='MissionInfo' Location='750,350' ScrollExtent='16,230' Size='30,160' Style='/VScrollbar.style'/>
<Button Dragable='true' Location='20,80' Name='Accept' ScrollExtent='200,32' Size='200,32' Style='/Buttons.Default.style'>Accept</Button>
<Scrollbar Control='Messages' Location='750,120' ScrollExtent='16,230' Size='30,220' Style='/VScrollbar.style'/>
<Listbox DataSource='/DataSources.Missions' Location='20,120' Name='Missions' OnSelect='Parent.MissionInfo.Text = SelectedItem.Info' RowTemplate='MissionRowTemplate' ScrollExtent='750,230' Size='730,220' Style='/Listboxes.Generic.style'/>
<Text Color='#C0C0C0' Font='/Fonts.DefaultFont' Location='20,350' Name='MissionInfo' ScrollExtent='158,20' Size='730,160'>Oh no, Guido is Dead!</Text>
<Button Location='760,60' Name='Exit' OnPress='ui_popstate' ScrollExtent='16,16' Size='16,16' Style='/Buttons.Exit' visualeditlock='true'></Button>
<Image Location='9,47' Name='Plate' Opacity='0.30' ScrollExtent='782,505' Size='782,505' Stretch='false' Style='/Plates.Large'/>
<Image Name='Backdrop' ScrollExtent='800,600' Size='800,600' Style='/Backdrops.BluePlanet'/>
<Template Name='MissionRowTemplate' Size='750,20'></Template>
</Page>
