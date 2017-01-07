<Page Name='CreateDebugObjects' ScrollExtent='800,600' Size='800,600' Visible='false'>
<Button Location='726,60' Name='Exit' OnPress='ui_popstate' ScrollExtent='16,16' Size='16,16' Style='/Buttons.Exit.style'></Button>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='Create Debug Object' Location='50,70' Name='Objects' ScrollExtent='180,20' Size='180,20'>Create Debug Object</Text>
<Scrollbar Control='ObjectList' Location='230,90' ScrollExtent='30,370' Size='30,370' Style='/VScrollbar.style'/>
<Button LocalText='[@Create]' Location='50,470' Name='Create' OnPress='fs_create Parent.ObjectList.SelectedItem.Name
ui_popstate' ScrollExtent='200,32' Size='200,32' Style='/Buttons.Default.style'>@Create</Button>
<Listbox DataSource='WorldObjects' Location='50,90' Name='ObjectList' RowTemplate='WorldObjectRowTemplate' ScrollExtent='249,1320' Size='180,370' Style='/Listboxes.Generic.style'/>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='Go To UI Screen' Location='260,70' Name='Screens' ScrollExtent='180,20' Size='180,20'>Go To UI Screen</Text>
<Scrollbar Control='ScreenList' Location='440,90' ScrollExtent='30,370' Size='30,370' Style='/VScrollbar.style'/>
<Listbox DataSource='UIScreens' Location='260,90' Name='ScreenList' RowTemplate='WorldObjectRowTemplate' ScrollExtent='249,370' Size='180,370' Style='/Listboxes.Generic.style'/>
<Button LocalText='[@Go]' Location='260,470' Name='Go' OnPress='ui_pushstate
ui_showpage Parent.ScreenList.SelectedItem.Name' ScrollExtent='200,32' Size='200,32' Style='/Buttons.Default.style'>@Go</Button>
<Template Name='WorldObjectRowTemplate' Size='249,15'>\<text color = \'$color$\' font = \'smallfont\' location = \'2,2\' size = \'249,15\'\>
$name$

\</text\></Template>
<DataSource Name='WorldObjects'>
<Data color='#FF0000' Name='===== VEHICLES ================='/>
<Data Name='ams'/>
<Data Name='ant'/>
<Data Name='apc'/>
<Data Name='droppod'/>
<Data Name='dropship'/>
<Data Name='lightgunship'/>
<Data Name='lightning'/>
<Data Name='magrider'/>
<Data Name='manned_turret'/>
<Data Name='mediumtransport'/>
<Data Name='mosquito'/>
<Data Name='prowler'/>
<Data Name='quadassault'/>
<Data Name='quadstealth'/>
<Data Name='spitfire_turret'/>
<Data Name='threemanheavybuggy'/>
<Data Name='two_man_assault_buggy'/>
<Data Name='twomanheavybuggy'/>
<Data Name='twomanhoverbuggy'/>
<Data Name='vanguard'/>
<Data color='#FF0000' Name='===== CHARACTERS ================='/>
<Data Name='avatar'/>
<Data color='#FF0000' Name='===== WEAPONS =================='/>
<Data Name='beamer'/>
<Data Name='bolt_driver'/>
<Data Name='chainblade'/>
<Data Name='cycler'/>
<Data Name='flame_spitter'/>
<Data Name='flechette_rifle'/>
<Data Name='force_blade'/>
<Data Name='gauss'/>
<Data Name='hunter_seeker'/>
<Data Name='ilc9_pistol'/>
<Data Name='isp'/>
<Data Name='lancer'/>
<Data Name='lasher'/>
<Data Name='magcutter'/>
<Data Name='mini_chaingun'/>
<Data Name='nc_knife'/>
<Data Name='phoenix'/>
<Data Name='punisher'/>
<Data Name='pulsar'/>
<Data Name='r_shotgun'/>
<Data Name='repeater'/>
<Data Name='rocklet_gun'/>
<Data Name='suppressor'/>
<Data Name='striker'/>
<Data Name='thumper'/>
<Data Name='tr_knife'/>
<Data color='#FF0000' Name='==== MISC. OBJECTS ============'/>
<Data Name='alarm_beacon'/>
<Data Name='bolt_pack'/>
<Data Name='bullet_pack'/>
<Data Name='energy_cell_pack'/>
<Data Name='fuel_pack'/>
<Data Name='founder_recharge'/>
<Data Name='grenade_pack'/>
<Data Name='hack_kit'/>
<Data Name='jack_kit'/>
<Data Name='medkit'/>
<Data Name='mine_sweeper'/>
<Data Name='missile_pack'/>
<Data Name='mortar_pack'/>
<Data Name='remote_camera'/>
<Data Name='rocklet_pack'/>
<Data Name='serum_adrenaline'/>
<Data Name='serum_bracing'/>
<Data Name='serum_surge'/>
<Data Name='shotgun_pack'/>
<Data Name='targeting_beacon'/>
<Data Name='terminal'/>
<Data color='#FF0000' Name='==== SHIFTERS ============'/>
<Data Name='wardoginfant'/>
<Data Name='wardogadolescent'/>
<Data Name='wardogadult'/>
<Data Name='avianinfant'/>
<Data Name='avianadolescent'/>
<Data Name='avianadult'/>
<Data Name='burrowerinfant'/>
<Data Name='burroweradolescent'/>
<Data Name='burroweradult'/>
<Data Name='chameleoninfant'/>
<Data Name='chameleonadolescent'/>
<Data Name='chameleonadult'/>
<Data Name='seigebeastinfant'/>
<Data Name='seigebeastadolescent'/>
<Data Name='seigebeastadult'/>
</DataSource>
<DataSource Name='UIScreens'>
<Data Name='PCT'/>
<Data Name='News'/>
<Data Name='Email'/>
<Data Name='Missions'/>
<Data Name='PlanetaryMap'/>
<Data Name='ContinentalMap'/>
<Data Name='Vendor'/>
<Data Name='Play'/>
<Data Name='CreateCharacter'/>
<Data Name='Profile'/>
<Data Name='PreGameChat'/>
<Data Name='Options'/>
<Data Name='MapSelect'/>
<Data Name='SplashScreen'/>
<Data Name='Login'/>
<Data Name='Trade'/>
<Data Name='VehicleInventory'/>
<Data Name='Inventory'/>
<Data Name='Keymap'/>
<Data Name='SelectServer'/>
</DataSource>
<Page Location='20,100' ScrollExtent='180,370' Size='180,370'/>
<Page Location='230,100' ScrollExtent='180,370' Size='180,370'/>
<Image Location='18,40' Name='Plate' Opacity='0.150' ScrollExtent='764,541' Size='764,541' Stretch='false' Style='/Plates.Large'/>
<3DPlanet Color='#000000' Name='Planet' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='800,600' Size='800,600'/>
</Page>
