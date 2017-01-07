<Page Name='Options' navbar.visible='false' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = true' ScrollExtent='800,600' Size='800,600' Visible='false' visualeditlock='true'>
<Button Location='20,80' Name='Video' OnPress='Parent.VideoPage.Visible = true













Parent.AudioPage.Visible = false













Parent.FilterPage.Visible = false













Parent.ControlPage.Visible = false













Parent.GeneralPage.Visible = false' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Video</Button>
<Page BackgroundOpacity='0.50' Location='20,110' Name='VideoPage' ScrollExtent='760,400' Size='760,400' Visible='false' visualeditlock='true'>
<Sliderbar Location='360,30' Name='TextureDetail' ScrollExtent='230,30' Size='230,30' Style='/Sliderbars.HDefault.Style' UpperLimit='2' Value='2'/>
<Sliderbar Location='360,80' Name='TerrainDetail' ScrollExtent='230,30' Size='230,30' Style='/Sliderbars.HDefault.Style' UpperLimit='2' Value='2'/>
<Sliderbar Location='360,130' Name='LightingDetail' ScrollExtent='230,30' Size='230,30' Style='/Sliderbars.HDefault.Style' UpperLimit='2'/>
<Sliderbar Location='360,180' Name='DecalDetail' ScrollExtent='230,30' Size='230,30' Style='/Sliderbars.HDefault.Style' UpperLimit='2' Value='1'/>
<Sliderbar Location='360,230' Name='ModelDetail' ScrollExtent='230,30' Size='230,30' Style='/Sliderbars.HDefault.Style' UpperLimit='2' Value='2'/>
<Sliderbar Location='360,280' Name='DamageDetail' ScrollExtent='230,30' Size='230,30' Style='/Sliderbars.HDefault.Style' UpperLimit='2' Value='1'/>
<Sliderbar Location='360,330' Name='SkyDetail' ScrollExtent='230,30' Size='230,30' Style='/Sliderbars.HDefault.Style' UpperLimit='2' Value='2'/>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' Location='0,20' Name='DriverLabel' ScrollExtent='114,20' Size='130,20'>Direct3D Driver:</Text>
<Dropdownbox DataSource='/DataSources.D3DDrivers' Location='0,40' Name='Driver' RowTemplate='DriverTemplate' ScrollExtent='100,20' Size='200,20' Style='/dropdown20.style'/>
<Template Name='DriverTemplate' Size='200,20'>\<text font = \'/Fonts.DefaultFont\' location = \'2,-1\' size = \'200,20\'\>
$Name$
















\</text\></Template>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' Location='0,70' Name='ResolutionLabel' ScrollExtent='75,20' Size='90,20'>Resolution:</Text>
<Dropdownbox DataSource='/DataSources.ScreenResolutions' Location='0,90' Name='Resolution' RowTemplate='ResolutionTemplate' ScrollExtent='100,20' Size='200,20' Style='/dropdown20.style'/>
<Template Name='ResolutionTemplate' Size='200,20'>\<text font = \'/Fonts.DefaultFont\' location = \'2,-1\' size = \'200,20\'\>
$Name$
















\</text\></Template>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' Location='220,30' ScrollExtent='99,20' Size='120,20'>Texture Detail:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' Location='220,80' ScrollExtent='98,20' Size='120,20'>Terrain Detail:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' Location='220,130' ScrollExtent='103,20' Size='120,20'>Lighting Detail:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' Location='220,180' ScrollExtent='88,20' Size='120,20'>Decal Detail:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' Location='220,230' ScrollExtent='89,20' Size='120,20'>Model Detail:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' Location='220,280' ScrollExtent='107,20' Size='120,20'>Damage Detail:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' Location='220,330' ScrollExtent='74,20' Size='120,20'>Sky Detail:</Text>
<Text Font='/SmallFont' Location='356,50' ScrollExtent='10,12' Size='30,20'>Low</Text>
<Text Font='/SmallFont' Location='356,100' ScrollExtent='10,12' Size='30,20'>Low</Text>
<Text Font='/SmallFont' Location='356,150' ScrollExtent='10,12' Size='30,20'>Low</Text>
<Text Font='/SmallFont' Location='356,200' ScrollExtent='10,12' Size='30,20'>Low</Text>
<Text Font='/SmallFont' Location='356,250' ScrollExtent='10,12' Size='30,20'>Low</Text>
<Text Font='/SmallFont' Location='356,300' ScrollExtent='10,12' Size='30,20'>Low</Text>
<Text Font='/SmallFont' Location='356,350' ScrollExtent='10,12' Size='30,20'>Low</Text>
<Text Font='/SmallFont' Location='574,50' ScrollExtent='14,12' Size='30,20'>High</Text>
<Text Font='/SmallFont' Location='574,100' ScrollExtent='14,12' Size='30,20'>High</Text>
<Text Font='/SmallFont' Location='574,150' ScrollExtent='14,12' Size='30,20'>High</Text>
<Text Font='/SmallFont' Location='574,200' ScrollExtent='14,12' Size='30,20'>High</Text>
<Text Font='/SmallFont' Location='574,250' ScrollExtent='14,12' Size='30,20'>High</Text>
<Text Font='/SmallFont' Location='574,300' ScrollExtent='14,12' Size='30,20'>High</Text>
<Text Font='/SmallFont' Location='574,350' ScrollExtent='14,12' Size='30,20'>High</Text>
<Page BackgroundOpacity='0.60' Location='210,20' ScrollExtent='390,350' Size='390,370'/>
</Page>
<Button Location='130,80' Name='Audio' OnPress='Parent.VideoPage.Visible = false
















Parent.AudioPage.Visible = true
















Parent.FilterPage.Visible = false
















Parent.ControlPage.Visible = false
















Parent.GeneralPage.Visible = false' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Audio</Button>
<Page BackgroundOpacity='0.50' Location='20,110' Name='AudioPage' ScrollExtent='760,400' Size='760,400' Visible='false' visualeditlock='true'>
<Template Name='TrackTemplate' Size='160,20'>\<checkbox checked = \'$Enabled$\' location = \'2,3\' name = \'enabled\' size = \'16,16\' style = \'Buttons.DefaultCheckbox.style\'/\>
\<text font = \'/Fonts.DefaultFont\' location = \'20,2\' size = \'140,16\'\>
$Name$
















\</text\></Template>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' Location='10,20' ScrollExtent='96,20' Size='160,20'>Audio Tracks:</Text>
<Scrollbar Control='Tracks' Location='170,40' ScrollExtent='16,230' Size='30,300' Style='/VScrollbar.style'/>
<Listbox DataSource='/DataSources.AudioTracks' Location='10,40' Name='Tracks' RowTemplate='TrackTemplate' ScrollExtent='160,330' Size='160,300' Style='/Listboxes.Generic.style'/>
<Page Location='10,40' Name='Fill' ScrollExtent='190,350' Size='160,300'/>
<Button Location='10,350' Name='Play' ScrollExtent='100,24' Size='190,24' Style='/Buttons.Medium.style'>Play Track Now</Button>
<Page BackgroundOpacity='0.60' Location='10,20' Name='Tint' ScrollExtent='190,350' Size='190,370'/>
<Sliderbar Location='360,180' Name='EffectsVolume' ScrollExtent='230,30' Size='230,30' Style='/Sliderbars.HDefault.Style' UpperLimit='100' Value='68'/>
<Sliderbar Location='360,130' Name='VoiceVolume' ScrollExtent='230,30' Size='230,30' Style='/Sliderbars.HDefault.Style' UpperLimit='100' Value='100'/>
<Sliderbar Location='360,80' Name='MusicVolume' ScrollExtent='230,30' Size='230,30' Style='/Sliderbars.HDefault.Style' UpperLimit='100' Value='68'/>
<Sliderbar Location='360,30' Name='AmbientVolume' ScrollExtent='230,30' Size='230,30' Style='/Sliderbars.HDefault.Style' UpperLimit='100' Value='100'/>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' Location='220,30' ScrollExtent='110,20' Size='140,20'>Effects Volume:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' Location='220,80' ScrollExtent='101,20' Size='140,20'>Voice Volume:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' Location='220,130' ScrollExtent='102,20' Size='140,20'>Music Volume:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' Location='220,180' ScrollExtent='118,20' Size='140,20'>Ambient Volume:</Text>
<Text Font='/SmallFont' Location='356,50' ScrollExtent='10,12' Size='30,20'>Low</Text>
<Text Font='/SmallFont' Location='356,100' ScrollExtent='10,12' Size='30,20'>Low</Text>
<Text Font='/SmallFont' Location='356,150' ScrollExtent='10,12' Size='30,20'>Low</Text>
<Text Font='/SmallFont' Location='356,200' ScrollExtent='10,12' Size='30,20'>Low</Text>
<Text Font='/SmallFont' Location='574,50' ScrollExtent='14,12' Size='30,20'>High</Text>
<Text Font='/SmallFont' Location='574,100' ScrollExtent='14,12' Size='30,20'>High</Text>
<Text Font='/SmallFont' Location='574,150' ScrollExtent='14,12' Size='30,20'>High</Text>
<Text Font='/SmallFont' Location='574,200' ScrollExtent='14,12' Size='30,20'>High</Text>
<Page BackgroundOpacity='0.60' Location='210,20' Name='Tint' ScrollExtent='390,350' Size='390,370'/>
</Page>
<Button Location='240,80' Name='Filters' OnPress='Parent.VideoPage.Visible = false
















Parent.AudioPage.Visible = false
















Parent.FilterPage.Visible = true
















Parent.ControlPage.Visible = false
















Parent.GeneralPage.Visible = false' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Filters</Button>
<Page BackgroundOpacity='0.50' Location='20,110' Name='FilterPage' ScrollExtent='760,400' Size='760,400' Visible='false' visualeditlock='true'>
<Page Location='210,10' Name='Filter' ScrollExtent='210,380' Size='210,380'>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' ScrollExtent='121,20' Size='210,20' TextAlignment='Center'>Filter Chat Words</Text>
<Button Location='25,20' Name='Remove' ScrollExtent='130,16' Size='160,16' Style='/Buttons.Small.style'>Remove Selected Word From Filter</Button>
<Textbox Location='0,350' MaxLength='3' Name='Add' ScrollExtent='139,28' Size='210,30' Style='/ConsoleTextbox.Style'>Add Word To Filter</Textbox>
<Scrollbar Control='FilteredWords' Location='180,40' ScrollExtent='16,380' Size='30,310' Style='/VScrollbar.style'/>
<Listbox DataSource='/DataSources.FilteredChat' Location='0,40' Name='FilteredWords' RowTemplate='/CreateDebugObjects.WorldObjectRowTemplate' ScrollExtent='250,380' Size='180,310' Style='/Listboxes.Generic.style'/>
<Page Location='0,40' ScrollExtent='180,310' Size='180,310'/>
</Page>
<Page Location='430,10' Name='Ignore' ScrollExtent='210,380' Size='210,380'>
<Listbox DataSource='/DataSources.IgnoredCharacters' Location='0,40' Name='IgnoredCharacters' RowTemplate='/CreateDebugObjects.WorldObjectRowTemplate' ScrollExtent='250,380' Size='180,310' Style='/Listboxes.Generic.style'/>
<Scrollbar Control='IgnoredCharacters' Location='180,40' ScrollExtent='16,380' Size='30,310' Style='/VScrollbar.style'/>
<Textbox Location='0,350' MaxLength='3' Name='Add' ScrollExtent='189,28' Size='210,30' Style='/ConsoleTextbox.Style'>Enter Character To Ignore</Textbox>
<Button Location='25,20' Name='Remove' ScrollExtent='130,16' Size='160,16' Style='/Buttons.Small.style'>Stop Ignoring Selected Character</Button>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' ScrollExtent='134,20' Size='210,20' TextAlignment='Center'>Ignored Characters</Text>
<Page Location='0,40' ScrollExtent='180,310' Size='180,310'/>
</Page>
<Button Location='10,50' Name='ChatFilterOn' OnPress='Visible = false
















Parent.ChatFilterOff.Visible = true' ScrollExtent='190,24' Size='190,24' Style='/Buttons.Medium.style' visble='true' Visible='false'>Chat Filter Is On</Button>
<Button Location='10,50' Name='ChatFilterOff' OnPress='Visible = false
















Parent.ChatFilterOn.Visible = true' ScrollExtent='190,24' Size='190,24' Style='/Buttons.Medium.style' visble='true'>Chat Filter Is Off</Button>
<Button Location='10,90' Name='GoreFilterOn' OnPress='Visible = false
















Parent.GoreFilterOff.Visible = true' ScrollExtent='190,24' Size='190,24' Style='/Buttons.Medium.style' visble='true' Visible='false'>Gore Filter Is On</Button>
<Button Location='10,90' Name='GoreFilterOff' OnPress='Visible = false
















Parent.GoreFilterOn.Visible = true' ScrollExtent='190,24' Size='190,24' Style='/Buttons.Medium.style' visble='true'>Gore Filter Is Off</Button>
<Button Location='10,130' Name='ChangeFilterPassword' ScrollExtent='190,24' Size='190,24' Style='/Buttons.Medium.style' visble='true'>Change Filter Password</Button>
</Page>
<Button Location='350,80' Name='Controls' OnPress='Parent.VideoPage.Visible = false
















Parent.AudioPage.Visible = false
















Parent.FilterPage.Visible = false
















Parent.ControlPage.Visible = true
















Parent.GeneralPage.Visible = false' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Controls</Button>
<Page BackgroundOpacity='0.50' Location='20,110' Name='ControlPage' ScrollExtent='760,400' Size='760,400' Visible='false' visualeditlock='true'/>
<Button Location='460,80' Name='General' OnPress='Parent.VideoPage.Visible = false
















Parent.AudioPage.Visible = false
















Parent.FilterPage.Visible = false
















Parent.ControlPage.Visible = false
















Parent.GeneralPage.Visible = true' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>General</Button>
<Page BackgroundOpacity='0.50' Location='20,110' Name='GeneralPage' ScrollExtent='760,400' Size='760,400' visualeditlock='true'/>
<Image Location='-1,538' Name='Bottom' ScrollExtent='800,66' Size='800,66' Stretch='false' Style='/Plates.Bottom'/>
<Image Location='9,47' Name='Plate1' Opacity='0.30' ScrollExtent='782,505' Size='791,513' Stretch='false' Style='/Plates.Large' visualeditlock='true'/>
<Image Name='Background' ScrollExtent='800,600' Size='800,600' Style='/Backdrops.BluePlanet' visualeditlock='true'/>
</Page>
