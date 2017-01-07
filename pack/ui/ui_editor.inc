<Page Name='EditHUD' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' runengine='true' ScrollExtent='1024,768' showcursor='true' Size='1024,768' Visible='false' wantsinput='Mouse'>
<DataSource Name='Stages'/>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='Stage:' Location='430,20' PackLocation='Right,Top' PackLocationProp='-594/0001,0020/0001' ScrollExtent='180,20' Size='180,20' Visible='false'>Stage:</Text>
<Dropdownbox DataSource='Stages' Location='610,20' Name='stage' PackLocation='Right,Top' PackLocationProp='-414/0001,0020/0001' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style' Visible='false'/>
<Page Location='430,50' Name='Stage Editor' PackLocation='Right,Top' PackLocationProp='-594/0001,0050/0001' PackSize='Fixed, Absolute' PackSizeProp='0002/0003,xxxx/xxxx' ScrollExtent='340,330' Size='340,330' Visible='false'>
<TextboxStyle CaratColor='#00FF00' CaratWidth='2' Name='TinyTextboxStyle' NormalGridStyle='/DefaultGrid.style' NormalTextStyle='/SmallFont' SelectionColor='#00FF00' TextColor='#FFFFFF' TextPadding='4,4,2,2'/>
<DataSource Name='TextureOperation'>
<Data Name='disable'/>
<Data Name='selectarg1'/>
<Data Name='selectarg2'/>
<Data Name='modulate'/>
<Data Name='modulate2x'/>
<Data Name='modulate4x'/>
<Data Name='add'/>
<Data Name='addsigned'/>
<Data Name='addsigned2x'/>
<Data Name='subtract'/>
<Data Name='addsmooth'/>
<Data Name='blenddiffusealpha'/>
<Data Name='blendtexturealpha'/>
<Data Name='blendfactoralpha'/>
<Data Name='blendtexturealphapm'/>
<Data Name='blendcurrentalpha'/>
<Data Name='premodulate'/>
<Data Name='modulatealpha_addcolor'/>
<Data Name='modulatecolor_addalpha'/>
<Data Name='modulateinvalpha_addcolor'/>
<Data Name='modulateinvcolor_addalpha'/>
<Data Name='bumpenvmap'/>
<Data Name='bumpenvmapluminance'/>
<Data Name='dotproduct3'/>
<Data Name='multiplyadd'/>
<Data Name='lerp'/>
</DataSource>
<DataSource Name='TextureArgument'>
<Data Name='selectmask'/>
<Data Name='diffuse'/>
<Data Name='current'/>
<Data Name='texture'/>
<Data Name='tfactor'/>
<Data Name='specular'/>
<Data Name='complement'/>
<Data Name='alphareplicate'/>
</DataSource>
<DataSource Name='TextureCoordinate'>
<Data Name='passthru'/>
<Data Name='uv1'/>
<Data Name='uv2'/>
<Data Name='cameraspacenormal'/>
<Data Name='cameraspaceposition'/>
<Data Name='cameraspacereflectionvector'/>
</DataSource>
<DataSource Name='TextureAddress'>
<Data Name='wrap'/>
<Data Name='mirror'/>
<Data Name='clamp'/>
<Data Name='border'/>
<Data Name='mirroronce'/>
</DataSource>
<DataSource Name='TextureFilter'>
<Data Name='none'/>
<Data Name='point'/>
<Data Name='linear'/>
<Data Name='anisotropic'/>
<Data Name='flatcubic'/>
<Data Name='gaussiancubic'/>
</DataSource>
<DataSource Name='TextureTransform'>
<Data Name='disable'/>
<Data Name='count1'/>
<Data Name='count2'/>
<Data Name='count3'/>
<Data Name='count4'/>
<Data Name='projected'/>
</DataSource>
<DataSource Name='Transform'>
<Data Name='None'/>
<Data arg='0.5 0.0 0.0 0.0    0.0 -0.5 0.0 0.0       0.0 0.0 1.0 0.0     0.5 0.5 0.0' Name='SphereMap'/>
</DataSource>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='ColorOp:' ScrollExtent='180,20' Size='180,20'>ColorOp:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='ColorArg0:' Location='0,20' ScrollExtent='180,20' Size='180,20'>ColorArg0:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='ColorArg1:' Location='0,40' ScrollExtent='180,20' Size='180,20'>ColorArg1:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='ColorArg2:' Location='0,60' ScrollExtent='180,20' Size='180,20'>ColorArg2:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='AlphaOp:' Location='0,80' ScrollExtent='180,20' Size='180,20'>AlphaOp:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='AlphaArg0:' Location='0,100' ScrollExtent='180,20' Size='180,20'>AlphaArg0:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='AlphaArg1:' Location='0,120' ScrollExtent='180,20' Size='180,20'>AlphaArg1:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='AlphaArg2:' Location='0,140' ScrollExtent='180,20' Size='180,20'>AlphaArg2:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='BumpEnvMat00:' Location='0,160' ScrollExtent='180,20' Size='180,20'>BumpEnvMat00:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='BumpEnvMat01:' Location='0,180' ScrollExtent='180,20' Size='180,20'>BumpEnvMat01:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='BumpEnvMat10:' Location='0,200' ScrollExtent='180,20' Size='180,20'>BumpEnvMat10:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='BumpEnvMat11:' Location='0,220' ScrollExtent='180,20' Size='180,20'>BumpEnvMat11:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='TexCoordIndex:' Location='0,240' ScrollExtent='180,20' Size='180,20'>TexCoordIndex:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='AddressU:' Location='0,260' ScrollExtent='180,20' Size='180,20'>AddressU:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='AddressV:' Location='0,280' ScrollExtent='180,20' Size='180,20'>AddressV:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='AddressW:' Location='0,300' ScrollExtent='180,20' Size='180,20'>AddressW:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='BorderColor:' Location='0,320' ScrollExtent='180,20' Size='180,20'>BorderColor:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='MagFilter:' Location='0,340' ScrollExtent='180,20' Size='180,20'>MagFilter:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='MinFilter:' Location='0,360' ScrollExtent='180,20' Size='180,20'>MinFilter:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='MipFilter:' Location='0,380' ScrollExtent='180,20' Size='180,20'>MipFilter:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='MipMapLODBias:' Location='0,400' ScrollExtent='180,20' Size='180,20'>MipMapLODBias:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='MaxAnisotropy:' Location='0,420' ScrollExtent='180,20' Size='180,20'>MaxAnisotropy:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='BumpEnvLScale:' Location='0,440' ScrollExtent='180,20' Size='180,20'>BumpEnvLScale:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='BumpEnvLOffset:' Location='0,460' ScrollExtent='180,20' Size='180,20'>BumpEnvLOffset:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='TextureTransformFlags:' Location='0,480' ScrollExtent='180,20' Size='180,20'>TextureTransformFlags:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='ResultArg:' Location='0,500' ScrollExtent='180,20' Size='180,20'>ResultArg:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='TexGen:' Location='0,520' ScrollExtent='180,20' Size='180,20'>TexGen:</Text>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='Transform:' Location='0,540' ScrollExtent='180,20' Size='180,20'>Transform:</Text>
<Dropdownbox DataSource='TextureOperation' Location='180,0' Name='sc_colorop' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Dropdownbox DataSource='TextureArgument' Location='180,20' Name='sc_colorarg0' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Dropdownbox DataSource='TextureArgument' Location='180,40' Name='sc_colorarg1' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Dropdownbox DataSource='TextureArgument' Location='180,60' Name='sc_colorarg2' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Dropdownbox DataSource='TextureOperation' Location='180,80' Name='sc_alphaop' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Dropdownbox DataSource='TextureArgument' Location='180,100' Name='sc_alphaarg0' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Dropdownbox DataSource='TextureArgument' Location='180,120' Name='sc_alphaarg1' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Dropdownbox DataSource='TextureArgument' Location='180,140' Name='sc_alphaarg2' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Textbox Location='180,160' Name='sc_bumpenvmat00' OnChange='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name Text
sc_end' ScrollExtent='160,20' Size='160,20' Style='TinyTextboxStyle'></Textbox>
<Textbox Location='180,180' Name='sc_bumpenvmat01' OnChange='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name Text
sc_end' ScrollExtent='160,20' Size='160,20' Style='TinyTextboxStyle'></Textbox>
<Textbox Location='180,200' Name='sc_bumpenvmat10' OnChange='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name Text
sc_end' ScrollExtent='160,20' Size='160,20' Style='TinyTextboxStyle'></Textbox>
<Textbox Location='180,220' Name='sc_bumpenvmat11' OnChange='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name Text
sc_end' ScrollExtent='160,20' Size='160,20' Style='TinyTextboxStyle'></Textbox>
<Dropdownbox DataSource='TextureCoordinate' Location='180,240' Name='sc_texcoordindex' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Dropdownbox DataSource='TextureAddress' Location='180,260' Name='sc_addressu' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Dropdownbox DataSource='TextureAddress' Location='180,280' Name='sc_addressv' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Dropdownbox DataSource='TextureAddress' Location='180,300' Name='sc_addressw' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Textbox Location='180,320' Name='sc_bordercolor' OnChange='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name Text
sc_end' ScrollExtent='160,20' Size='160,20' Style='TinyTextboxStyle'></Textbox>
<Dropdownbox DataSource='TextureFilter' Location='180,340' Name='sc_magfilter' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Dropdownbox DataSource='TextureFilter' Location='180,360' Name='sc_minfilter' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Dropdownbox DataSource='TextureFilter' Location='180,380' Name='sc_mipfilter' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Textbox Location='180,400' Name='sc_mipmaplodbias' OnChange='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name Text
sc_end' ScrollExtent='160,20' Size='160,20' Style='TinyTextboxStyle'></Textbox>
<Textbox Location='180,420' Name='sc_maxmiplevel' OnChange='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name Text
sc_end' ScrollExtent='160,20' Size='160,20' Style='TinyTextboxStyle'></Textbox>
<Textbox Location='180,440' Name='sc_maxanisotropy' OnChange='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name Text
sc_end' ScrollExtent='160,20' Size='160,20' Style='TinyTextboxStyle'></Textbox>
<Textbox Location='180,460' Name='sc_bumpenvloffset' OnChange='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name Text
sc_end' ScrollExtent='160,20' Size='160,20' Style='TinyTextboxStyle'></Textbox>
<Dropdownbox DataSource='TextureTransform' Location='180,480' Name='sc_texturetransformflags' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Dropdownbox DataSource='TextureArgument' Location='180,500' Name='sc_resultarg' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Name
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
<Textbox Location='180,520' Name='sc_texgen' OnChange='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name Text
sc_end' ScrollExtent='160,20' Size='160,20' Style='TinyTextboxStyle'></Textbox>
<Dropdownbox DataSource='Transform' Location='180,540' Name='sc_transform' OnSelect='sc_begin Parent.Parent.Stage.SelectedItem.Name
Name SelectedItem.Arg
sc_end' RowTemplate='T' ScrollExtent='160,20' Size='160,20' Style='/dropdown20.style'/>
</Page>
<Scrollbar Control='Stage Editor' Location='770,50' Name='Scroll' PackLocation='Right, Top' PackLocationProp='-254/0001,xxxx/xxxx' PackSize='Fixed, Absolute' PackSizeProp='0002/0003,xxxx/xxxx' ScrollExtent='20,330' Size='20,330' Style='/VScrollbar.style' Visible='false'/>
<DataSource Name='WorldObjects'>
<Data color='#FF0000' Name='====Vanu Shrines==============='/>
<Data Name='vanu_shrine1'/>
<Data Name='vanu_shrine2'/>
<Data Name='vanu_shrine3'/>
<Data color='#FF0000' Name='====Bases======================'/>
<Data Name='mainbase1'/>
<Data Name='mainbase2'/>
<Data Name='mainbase3'/>
<Data Name='minibase1'/>
<Data Name='minibase2'/>
<Data Name='minibase3'/>
<Data Name='player_base'/>
<Data Name='LODtest'/>
<Data Name='LODtest2'/>
<Data color='#FF0000' Name='====Vanu Ruins================='/>
<Data Name='vanu_ruins1'/>
<Data Name='vanu_ruins2'/>
<Data Name='vanu_ruins3'/>
<Data Name='vanu_ruins4'/>
<Data Name='vanu_ruins5'/>
<Data Name='vanu_ruins6'/>
<Data Name='vanu_ruins7'/>
<Data Name='vanu_ruins8'/>
<Data Name='vanu_ruins9'/>
<Data Name='vanu_ruins10'/>
<Data color='#FF0000' Name='====Man Made Ruins================='/>
<Data Name='manmade_ruins1'/>
<Data Name='manmade_ruins2'/>
<Data Name='manmade_ruins3'/>
<Data Name='manmade_ruins4'/>
<Data Name='manmade_ruins5'/>
<Data Name='manmade_ruins6'/>
<Data Name='manmade_ruins7'/>
<Data Name='manmade_ruins8'/>
<Data Name='manmade_ruins9'/>
<Data Name='manmade_ruins10'/>
<Data color='#FF0000' Name='==Stations==================='/>
<Data Name='comm_station'/>
<Data Name='amp_station'/>
<Data Name='cryofac'/>
<Data Name='tech_plant'/>
<Data color='#FF0000' Name='==Hives==================='/>
<Data Name='hive01'/>
<Data Name='hive02'/>
<Data Name='hive03'/>
<Data Name='hive04'/>
<Data Name='hive05'/>
<Data Name='hive06'/>
<Data Name='hive07'/>
<Data Name='hive08'/>
<Data Name='hive09'/>
<Data Name='hive10'/>
<Data Name='hive11'/>
<Data Name='hive12'/>
<Data Name='hive13'/>
<Data Name='hive14'/>
<Data Name='hive15'/>
<Data Name='hive16'/>
<Data Name='hive17'/>
<Data Name='hive18'/>
<Data Name='hive19'/>
<Data Name='hive20'/>
<Data color='#FF0000' Name='==Nests==================='/>
<Data Name='nest01'/>
<Data Name='nest02'/>
<Data Name='nest03'/>
<Data Name='nest04'/>
<Data Name='nest05'/>
<Data Name='nest06'/>
<Data Name='nest07'/>
<Data Name='nest08'/>
<Data Name='nest09'/>
<Data Name='nest10'/>
<Data Name='nest11'/>
<Data Name='nest12'/>
<Data Name='nest13'/>
<Data Name='nest14'/>
<Data Name='nest15'/>
<Data Name='nest16'/>
<Data Name='nest17'/>
<Data Name='nest18'/>
<Data Name='nest19'/>
<Data Name='nest20'/>
<Data color='#FF0000' Name='==Gun Towers================='/>
<Data Name='gun_tower1'/>
<Data Name='gun_tower2'/>
<Data Name='gun_tower3'/>
<Data color='#FF0000' Name='==Bridges ==================='/>
<Data Name='bridge1a'/>
<Data Name='bridge1b'/>
<Data Name='bridge1c'/>
<Data Name='bridge2a'/>
<Data Name='bridge2b'/>
<Data Name='bridge2c'/>
<Data Name='bridge3a'/>
<Data Name='bridge3b'/>
<Data Name='bridge3c'/>
<Data Name='bridge4a'/>
<Data Name='bridge4b'/>
<Data Name='bridge4c'/>
<Data color='#FF0000' Name='==MeshItems ==================='/>
<Data Name='repair_bay'/>
<Data Name='panels'/>
<Data Name='vehterm_detail'/>
<Data Name='capterm_mech'/>
<Data Name='capture_terminal'/>
<Data Name='ceiling'/>
<Data Name='machine'/>
<Data Name='radiator'/>
<Data Name='vent'/>
<Data Name='crates'/>
<Data Name='banner'/>
<Data Name='maindoor_frame'/>
<Data Name='respawn_tube'/>
<Data Name='spawn_crates'/>
<Data Name='spawn_light'/>
<Data Name='barracks_bed'/>
<Data Name='barracks_crates'/>
<Data Name='barracks_light'/>
<Data Name='barracks_monitors'/>
<Data Name='barracks_powerbox'/>
<Data Name='wires'/>
<Data Name='fan'/>
<Data Name='toolboxes'/>
<Data Name='hangar'/>
<Data Name='trim'/>
<Data Name='barrier'/>
<Data Name='shield_door'/>
<Data Name='door'/>
<Data Name='main_door'/>
<Data Name='louvres'/>
<Data Name='main_terminal'/>
<Data Name='order_terminal'/>
<Data Name='stairs'/>
<Data Name='vents'/>
<Data Name='understairs'/>
<Data Name='medical_terminal'/>
<Data Name='pipes'/>
<Data Name='computer'/>
<Data Name='doorframe'/>
<Data Name='lights'/>
<Data Name='monitors'/>
<Data Name='mainterm_detail'/>
<Data Name='bigpipes'/>
<Data Name='doorterm'/>
<Data Name='drainpipe'/>
<Data Name='powerbox'/>
<Data Name='rails'/>
<Data Name='vehicle_terminal'/>
<Data Name='mr_computer'/>
<Data Name='roundlight'/>
<Data Name='entry_powerbox'/>
<Data Name='entry_light'/>
<Data Name='gar_door'/>
<Data Name='barracks_locker1'/>
<Data Name='fx_spawnpoint'/>
<Data Name='entry_doorterm'/>
<Data Name='mr_brace'/>
<Data Name='mr_frame'/>
<Data Name='entry_bigframe'/>
<Data Name='entry_doorframe'/>
<Data Name='small_powerbox'/>
<Data Name='entry_rails'/>
<Data Name='mr_doorframe'/>
<Data Name='rsidepipes'/>
<Data Name='lsidepipes'/>
<Data Name='mr_monitors'/>
<Data Name='mr_bigframe'/>
<Data Name='rchannel'/>
<Data Name='lchannel'/>
<Data Name='rpipes'/>
<Data Name='lpipes'/>
<Data Name='midvents'/>
<Data Name='comm_inside_comp'/>
<Data Name='comm_inside_monitors'/>
<Data Name='comm_inside_computers'/>
<Data Name='mainterm_commdetail'/>
<Data Name='comm_inside_wall'/>
<Data Name='comm_inside_tower'/>
<Data Name='discus'/>
<Data color='#FF0000' Name='==Ground Cover==============='/>
<Data Name='earth_tree1'/>
<Data Name='earth_tree2'/>
<Data Name='earth_tree3'/>
<Data Name='earth_tree4'/>
<Data Name='earth_tree5'/>
<Data Name='earth_tree6'/>
<Data Name='earth_tree7'/>
<Data Name='earth_tree8'/>
<Data Name='earth_tree9'/>
<Data Name='earth_shrub1'/>
<Data Name='earth_shrub2'/>
<Data Name='earth_shrub3'/>
<Data Name='earth_shrub4'/>
<Data Name='earth_shrub5'/>
<Data Name='earth_shrub6'/>
<Data Name='earth_shrub7'/>
<Data Name='earth_shrub8'/>
<Data Name='earth_shrub9'/>
<Data Name='earth_slot1'/>
<Data Name='earth_slot2'/>
<Data Name='earth_slot3'/>
<Data Name='earth_slot4'/>
<Data Name='earth_slot5'/>
<Data Name='earth_slot6'/>
<Data Name='earth_slot7'/>
<Data Name='earth_slot8'/>
<Data Name='earth_slot9'/>
<Data Name='earth_rock0'/>
<Data Name='earth_rock1'/>
<Data Name='earth_rock2'/>
<Data Name='earth_rock3'/>
<Data Name='earth_rock4'/>
<Data Name='earth_rock5'/>
<Data Name='earth_rock6'/>
<Data Name='earth_rock7'/>
<Data Name='earth_rock8'/>
<Data Name='earth_rock9'/>
<Data Name='volc_tree1'/>
<Data Name='volc_tree2'/>
<Data Name='volc_tree3'/>
<Data Name='volc_tree4'/>
<Data Name='volc_tree5'/>
<Data Name='volc_tree6'/>
<Data Name='volc_tree7'/>
<Data Name='volc_tree8'/>
<Data Name='volc_tree9'/>
<Data Name='volc_shrub1'/>
<Data Name='volc_shrub2'/>
<Data Name='volc_shrub3'/>
<Data Name='volc_shrub4'/>
<Data Name='volc_shrub5'/>
<Data Name='volc_shrub6'/>
<Data Name='volc_shrub7'/>
<Data Name='volc_shrub8'/>
<Data Name='volc_shrub9'/>
<Data Name='volc_slot1'/>
<Data Name='volc_slot2'/>
<Data Name='volc_slot3'/>
<Data Name='volc_slot4'/>
<Data Name='volc_slot5'/>
<Data Name='volc_slot6'/>
<Data Name='volc_slot7'/>
<Data Name='volc_slot8'/>
<Data Name='volc_slot9'/>
<Data Name='volc_rock0'/>
<Data Name='volc_rock1'/>
<Data Name='volc_rock2'/>
<Data Name='volc_rock3'/>
<Data Name='volc_rock4'/>
<Data Name='volc_rock5'/>
<Data Name='volc_rock6'/>
<Data Name='volc_rock7'/>
<Data Name='volc_rock8'/>
<Data Name='volc_rock9'/>
<Data Name='arctic_tree1'/>
<Data Name='arctic_tree2'/>
<Data Name='arctic_tree3'/>
<Data Name='arctic_tree4'/>
<Data Name='arctic_tree5'/>
<Data Name='arctic_tree6'/>
<Data Name='arctic_tree7'/>
<Data Name='arctic_tree8'/>
<Data Name='arctic_tree9'/>
<Data Name='arctic_shrub1'/>
<Data Name='arctic_shrub2'/>
<Data Name='arctic_shrub3'/>
<Data Name='arctic_shrub4'/>
<Data Name='arctic_shrub5'/>
<Data Name='arctic_shrub6'/>
<Data Name='arctic_shrub7'/>
<Data Name='arctic_shrub8'/>
<Data Name='arctic_shrub9'/>
<Data Name='arctic_slot1'/>
<Data Name='arctic_slot2'/>
<Data Name='arctic_slot3'/>
<Data Name='arctic_slot4'/>
<Data Name='arctic_slot5'/>
<Data Name='arctic_slot6'/>
<Data Name='arctic_slot7'/>
<Data Name='arctic_slot8'/>
<Data Name='arctic_slot9'/>
<Data Name='arctic_rock0'/>
<Data Name='arctic_rock1'/>
<Data Name='arctic_rock2'/>
<Data Name='arctic_rock3'/>
<Data Name='arctic_rock4'/>
<Data Name='arctic_rock5'/>
<Data Name='arctic_rock6'/>
<Data Name='arctic_rock7'/>
<Data Name='arctic_rock8'/>
<Data Name='arctic_rock9'/>
<Data Name='desert_tree1'/>
<Data Name='desert_tree2'/>
<Data Name='desert_tree3'/>
<Data Name='desert_tree4'/>
<Data Name='desert_tree5'/>
<Data Name='desert_tree6'/>
<Data Name='desert_tree7'/>
<Data Name='desert_tree8'/>
<Data Name='desert_tree9'/>
<Data Name='desert_shrub1'/>
<Data Name='desert_shrub2'/>
<Data Name='desert_shrub3'/>
<Data Name='desert_shrub4'/>
<Data Name='desert_shrub5'/>
<Data Name='desert_shrub6'/>
<Data Name='desert_shrub7'/>
<Data Name='desert_shrub8'/>
<Data Name='desert_shrub9'/>
<Data Name='desert_slot1'/>
<Data Name='desert_slot2'/>
<Data Name='desert_slot3'/>
<Data Name='desert_slot4'/>
<Data Name='desert_slot5'/>
<Data Name='desert_slot6'/>
<Data Name='desert_slot7'/>
<Data Name='desert_slot8'/>
<Data Name='desert_slot9'/>
<Data Name='desert_rock0'/>
<Data Name='desert_rock1'/>
<Data Name='desert_rock2'/>
<Data Name='desert_rock3'/>
<Data Name='desert_rock4'/>
<Data Name='desert_rock5'/>
<Data Name='desert_rock6'/>
<Data Name='desert_rock7'/>
<Data Name='desert_rock8'/>
<Data Name='desert_rock9'/>
<Data Name='alien_tree1'/>
<Data Name='alien_tree2'/>
<Data Name='alien_tree3'/>
<Data Name='alien_tree4'/>
<Data Name='alien_tree5'/>
<Data Name='alien_tree6'/>
<Data Name='alien_tree7'/>
<Data Name='alien_tree8'/>
<Data Name='alien_tree9'/>
<Data Name='alien_shrub1'/>
<Data Name='alien_shrub2'/>
<Data Name='alien_shrub3'/>
<Data Name='alien_shrub4'/>
<Data Name='alien_shrub5'/>
<Data Name='alien_shrub6'/>
<Data Name='alien_shrub7'/>
<Data Name='alien_shrub8'/>
<Data Name='alien_shrub9'/>
<Data Name='alien_slot1'/>
<Data Name='alien_slot2'/>
<Data Name='alien_slot3'/>
<Data Name='alien_slot4'/>
<Data Name='alien_slot5'/>
<Data Name='alien_slot6'/>
<Data Name='alien_slot7'/>
<Data Name='alien_slot8'/>
<Data Name='alien_slot9'/>
<Data Name='alien_rock0'/>
<Data Name='alien_rock1'/>
<Data Name='alien_rock2'/>
<Data Name='alien_rock3'/>
<Data Name='alien_rock4'/>
<Data Name='alien_rock5'/>
<Data Name='alien_rock6'/>
<Data Name='alien_rock7'/>
<Data Name='alien_rock8'/>
<Data Name='alien_rock9'/>
</DataSource>
<Template Name='T' Size='200,20'>\<text color = \'$color$\' font = \'smallfont\' location = \'2,2\' size = \'249,15\'\>
$name$
















\</text\></Template>
<Dropdownbox DataSource='WorldObjects' Location='460,402' Name='ObjectType' PackLocation='Left,Bottom' PackLocationProp='0460/0001,-366/0001' RowTemplate='T' ScrollExtent='210,20' SelectedItemIndex='141' Size='210,20' Style='/dropdown20.style'/>
<Button LocalText='Create' Location='680,400' Name='CreateObject' PackLocation='Left,Bottom' PackLocationProp='0680/0001,-368/0001' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Create</Button>
<Button LocalText='Delete' Location='460,430' Name='DeleteObject' PackLocation='Left,Bottom' PackLocationProp='0460/0001,-338/0001' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Delete</Button>
<Button LocalText='Undo' Location='570,430' Name='Undo' PackLocation='Left,Bottom' PackLocationProp='0570/0001,-338/0001' ScrollExtent='100,24' Size='100,24' Style='/Buttons.Medium.style'>Undo</Button>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='Selected Object:' Location='20,400' PackLocation='Left,Bottom' PackLocationProp='0020/0001,-368/0001' ScrollExtent='126,20' Size='126,20'>Selected Object:</Text>
<Text Font='/Fonts.DefaultFont' LocalText='(none)' Location='140,400' Name='SelectedObject' PackLocation='Left,Bottom' PackLocationProp='0140/0001,-368/0001' ScrollExtent='170,20' Size='170,20'>(none)</Text>
<Button Location='312,395' Name='NextObject' PackLocation='Left,Bottom' PackLocationProp='0312/0001,-373/0001' ScrollExtent='20,30' Size='20,30' Style='/Buttons.RightArrow.style'></Button>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='Type:' Location='340,400' PackLocation='Left,Bottom' PackLocationProp='0340/0001,-368/0001' ScrollExtent='50,20' Size='50,20'>Type:</Text>
<Text Font='/Fonts.DefaultFont' LocalText='(none)' Location='390,400' Name='SelectedObjectType' PackLocation='Left,Bottom' PackLocationProp='0390/0001,-368/0001' ScrollExtent='140,20' Size='140,20'>(none)</Text>
<Page Location='20,430' Name='ObjectEditor' PackLocation='Left,Bottom' PackLocationProp='0020/0001,-338/0001' ScrollExtent='440,150' Size='440,150'>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='Location:' Location='20,5' ScrollExtent='70,20' Size='70,20'>Location:</Text>
<Button Location='92,0' Name='DecX' ScrollExtent='20,30' Size='20,30' Style='/Buttons.LeftArrow.style'></Button>
<Textbox Location='110,0' Name='X' ScrollExtent='70,30' Size='70,30' Style='/ConsoleTextbox.Style'>(none)</Textbox>
<Button Location='182,0' Name='IncX' ScrollExtent='20,30' Size='20,30' Style='/Buttons.RightArrow.style'></Button>
<Button Location='202,0' Name='DecY' ScrollExtent='20,30' Size='20,30' Style='/Buttons.LeftArrow.style'></Button>
<Textbox Location='220,0' Name='Y' ScrollExtent='70,30' Size='70,30' Style='/ConsoleTextbox.Style'>(none)</Textbox>
<Button Location='292,0' Name='IncY' ScrollExtent='20,30' Size='20,30' Style='/Buttons.RightArrow.style'></Button>
<Button Location='312,0' Name='DecZ' ScrollExtent='20,30' Size='20,30' Style='/Buttons.LeftArrow.style'></Button>
<Textbox Location='330,0' Name='Z' ScrollExtent='70,30' Size='70,30' Style='/ConsoleTextbox.Style'>(none)</Textbox>
<Button Location='402,0' Name='IncZ' ScrollExtent='20,30' Size='20,30' Style='/Buttons.RightArrow.style'></Button>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='Rotation:' Location='20,40' ScrollExtent='70,20' Size='70,20'>Rotation:</Text>
<Button Location='92,35' Name='DecRX' ScrollExtent='20,30' Size='20,30' Style='/Buttons.LeftArrow.style'></Button>
<Textbox Location='110,35' Name='RX' ScrollExtent='70,30' Size='70,30' Style='/ConsoleTextbox.Style'>(none)</Textbox>
<Button Location='182,35' Name='IncRX' ScrollExtent='20,30' Size='20,30' Style='/Buttons.RightArrow.style'></Button>
<Button Location='202,35' Name='DecRY' ScrollExtent='20,30' Size='20,30' Style='/Buttons.LeftArrow.style'></Button>
<Textbox Location='220,35' Name='RY' ScrollExtent='70,30' Size='70,30' Style='/ConsoleTextbox.Style'>(none)</Textbox>
<Button Location='292,35' Name='IncRY' ScrollExtent='20,30' Size='20,30' Style='/Buttons.RightArrow.style'></Button>
<Button Location='312,35' Name='DecRZ' ScrollExtent='20,30' Size='20,30' Style='/Buttons.LeftArrow.style'></Button>
<Textbox Location='330,35' Name='RZ' ScrollExtent='70,30' Size='70,30' Style='/ConsoleTextbox.Style'>(none)</Textbox>
<Button Location='402,35' Name='IncRZ' ScrollExtent='20,30' Size='20,30' Style='/Buttons.RightArrow.style'></Button>
<Text Color='#FFFF00' Font='/Fonts.DefaultFont' LocalText='Scale:' Location='20,75' ScrollExtent='70,20' Size='70,20'>Scale:</Text>
<Button Location='92,70' Name='DecS' ScrollExtent='20,30' Size='20,30' Style='/Buttons.LeftArrow.style'></Button>
<Textbox Location='110,70' Name='S' ScrollExtent='70,30' Size='70,30' Style='/ConsoleTextbox.Style'>(none)</Textbox>
<Button Location='182,70' Name='IncS' ScrollExtent='20,30' Size='20,30' Style='/Buttons.RightArrow.style'></Button>
</Page>
<Page BackgroundOpacity='0.475' Location='0,380' Name='Tint' PackLocation='Left,Bottom' PackLocationProp='0000/0001,-388/0001' PackSize='Absolute,Fixed' PackSizeProp='0224/0001,0002/0003' ScrollExtent='800,220' Size='800,220'/>
<Page BackgroundOpacity='0.475' Location='410,0' Name='RightTint' PackLocation='Right, Top' PackLocationProp='-614/0001,xxxx/xxxx' PackSize='Fixed, Absolute' PackSizeProp='0002/0003,xxxx/xxxx' ScrollExtent='390,380' Size='390,380' Visible='false'/>
</Page>
