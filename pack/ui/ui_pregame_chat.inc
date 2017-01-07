<Page Name='PreGameChat' navbar.visible='false' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = true' ScrollExtent='800,600' Size='800,600' Visible='false' visualeditlock='true'>
<Button Location='378,90' Name='Join' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Join</Button>
<Button Location='378,120' Name='Create' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Create</Button>
<Button Location='378,150' Name='Private' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Private</Button>
<Button Location='378,180' Name='Whois' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Who Is?</Button>
<Button Location='378,210' Name='Invite' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Invite</Button>
<Button Location='380,240' Name='Squelch' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Squelch</Button>
<Button Location='380,416' Name='Freeze' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Freeze</Button>
<Button Location='380,446' Name='Clear' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Clear</Button>
<Page Location='490,90' Name='Channels' ScrollExtent='286,140' Size='300,140'>
<Listbox DataSource='/DataSources.Channels' Name='Channels' RowTemplate='ChannelTemplate' ScrollExtent='750,230' Size='270,140' Style='/Listboxes.Generic.style'/>
<Scrollbar Control='Channels' Location='270,0' ScrollExtent='16,380' Size='30,140' Style='/VScrollbar.style'/>
</Page>
<Page Location='490,240' Name='Users' ScrollExtent='286,140' Size='300,270'>
<Button Name='Name' ScrollExtent='130,16' Size='130,16' Style='/Buttons.Small.style'>Name</Button>
<Button Location='130,0' Name='Country' ScrollExtent='16,16' Size='16,16' Style='/Buttons.Small.style'>Country</Button>
<Button Location='146,0' Name='Outfit' ScrollExtent='16,16' Size='100,16' Style='/Buttons.Small.style'>Outfit</Button>
<Button Location='246,0' Name='Friend' ScrollExtent='16,16' Size='24,16' Style='/Buttons.Small.style'>Friend</Button>
<Listbox DataSource='/DataSources.ChannelUsers' Location='0,16' Name='Users' RowTemplate='UserTemplate' ScrollExtent='750,230' Size='270,254' Style='/Listboxes.Generic.style'/>
<Scrollbar Control='Users' Location='270,16' ScrollExtent='16,380' Size='30,254' Style='/VScrollbar.style'/>
<Page Location='0,16' Name='Fill' ScrollExtent='270,250' Size='270,254'/>
</Page>
<Textbox Location='20,480' Name='TextInput' ScrollExtent='6,28' Size='350,32' Style='/ConsoleTextbox.Style'></Textbox>
<Scrollbar Control='Chat' Location='340,90' ScrollExtent='16,380' Size='30,380' Style='/VScrollbar.style'/>
<Text Font='/Fonts.DefaultFont' Location='20,90' Name='Chat' ScrollExtent='108,20' Size='320,380'>Chat Goes Here</Text>
<Page Location='20,90' ScrollExtent='330,380' Size='320,380'/>
<Image Location='-1,538' Name='Bottom' ScrollExtent='800,66' Size='800,66' Stretch='false' Style='/Plates.Bottom'/>
<Image Location='9,47' Name='Plate1' Opacity='0.30' ScrollExtent='782,505' Size='791,513' Stretch='false' Style='/Plates.Large' visualeditlock='true'/>
<Image Name='Background' ScrollExtent='800,600' Size='800,600' Style='/Backdrops.BluePlanet' visualeditlock='true'/>
<Template Name='ChannelTemplate' Size='200,20'>\<text font = \'/Fonts.DefaultFont\' location = \'5,0\' size = \'195,20\'\>
$Name$
















\</text\></Template>
<Template Name='UserTemplate' Size='270,16'>\<text font = \'SmallFont\' location = \'5,2\' size = \'130,12\'\>
$Name$
















\</text\>
\<image location = \'130,0\' size = \'16,16\' style = \'/Images/Country/$Country$\'/\>
\<text font = \'SmallFont\' location = \'146,0\' size = \'100,16\'\>
$Outfit$
















\</text\>
\<text font = \'SmallFont\' location = \'246,0\' size = \'24,16\'\>
$Friend$
















\</text\></Template>
</Page>
