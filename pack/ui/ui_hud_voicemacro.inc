<Page Name='VoiceMacro' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768' Visible='false' visualeditlock='true'>
<Page Location='235,308' Name='Level4' ScrollExtent='205,87' Size='205,87'>
<PopupMenuStyle ButtonStyle='/Buttons.HUD_VoiceMacro.style' Name='PopupMenuStyle'/>
<PopupMenu DataSource='Level3.6Data' Location='15,19' MaximumSize='175,112' MinimumSize='175,112' Name='Menu1' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='175,112' Size='175,112' Style='PopupMenuStyle'>
</PopupMenu>
<Image BackgroundOpacity='1.000' Name='Background' Opacity='0.800' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.DialogBackground.style' ScrollExtent='205,87' Size='205,87' Stretch='false'/>
</Page>
<Page Location='230,200' Name='Level3' ScrollExtent='206,104' Size='206,104'>
<PopupMenuStyle ButtonStyle='/Buttons.HUD_VoiceMacro.style' Name='PopupMenuStyle'/>
<PopupMenu DataSource='Level3.2Data' Location='15,20' MaximumSize='188,128' MinimumSize='188,128' Name='Menu1' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='188,128' Size='188,128' Style='PopupMenuStyle'>
</PopupMenu>
<Image BackgroundOpacity='1.000' Name='Background' Opacity='0.800' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.DialogBackground.style' ScrollExtent='206,104' Size='206,104' Stretch='false'/>
</Page>
<Page Location='34,188' MinimumSize='145,58' Name='Level2' ScrollExtent='249,262' Size='249,262'>
<Template Name='IconMenuTemplate' Size='64,24'>\<text font = \'/Fonts.ButtonIcons\' location = \'0,2\' name = \'Image1Icon\' scrollextent = \'32,20\' size = \'32,20\' visible = \'$IsLocal$\'\>
t
\</text\>
\<text font = \'/Fonts.ButtonIcons\' location = \'32,2\' name = \'Image1Icon\' scrollextent = \'32,20\' size = \'32,20\' visible = \'$IsSquad$\'\>
u
\</text\></Template>
<Listbox AbsorbsInput='false' DataSource='Level2Data' Enabled='false' GetsInput='false' Location='16,42' Name='IconMenu' RowTemplate='IconMenuTemplate' ScrollExtent='64,192' Size='64,192' Style='/Listboxes.Clear.style'/>
<PopupMenuStyle ButtonStyle='/Buttons.HUD_VoiceMacro.style' ItemHeight='24' Name='PopupMenuStyle'/>
<PopupMenu DataSource='Level2Data' Location='78,42' MaximumSize='155,192' MinimumSize='155,192' Name='Menu1' PackLocation='left,top' PackLocationProp='0078/0001,0042/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='155,192' Size='155,192' Style='PopupMenuStyle'>
</PopupMenu>
<Text BackgroundColor='#00F2C9' BackgroundOpacity='0.224' Font='/Fonts.HudFont2' LocalText='[@VoiceMacroTitle]' Location='12,18' Name='MenuTitle' PackLocation='left,top' PackLocationProp='0012/0001,0018/0001' PackSize='absolute,fixed' PackSizeProp='0024/0001,0002/0003' ScrollExtent='225,21' Size='225,21' SizeIncrement='0,0' TextAlignment='Center' TextAlignmentVertical='Center'>@VoiceMacroTitle</Text>
<Image BackgroundOpacity='1.000' Name='Background' Opacity='0.800' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/WindowPanes.DialogBackground.style' ScrollExtent='249,262' Size='249,262' Stretch='false'/>
</Page>
<DataSource Name='Level2Data'>
<Data isall='true' islocal='false' issquad='false' localtext='[@VoiceL2_VeryQuick]' menu='Level3.1Data' Name='VeryQuick' text='@VoiceL2_VeryQuick'/>
<Data isall='false' islocal='true' issquad='true' localtext='[@VoiceL2_Attack]' menu='Level3.2Data' Name='Attack' text='@VoiceL2_Attack'/>
<Data isall='false' islocal='true' issquad='true' localtext='[@VoiceL2_Defend]' menu='Level3.3Data' Name='Defend' text='@VoiceL2_Defend'/>
<Data isall='false' islocal='true' issquad='true' localtext='[@VoiceL2_Need]' menu='Level3.4Data' Name='Need' text='@VoiceL2_Need'/>
<Data isall='false' islocal='true' issquad='true' localtext='[@VoiceL2_Repair]' menu='Level3.2Data' Name='Repair' text='@VoiceL2_Repair'/>
<Data isall='false' islocal='true' issquad='true' localtext='[@VoiceL2_Warning]' menu='Level3.6Data' Name='Warning' text='@VoiceL2_Warning'/>
<Data isall='false' islocal='true' issquad='true' localtext='[@VoiceL2_Self]' menu='Level3.7Data' Name='Self' text='@VoiceL2_Self'/>
<Data isall='false' islocal='false' issquad='true' localtext='[@VoiceL2_Tactical]' menu='Level3.8Data' Name='Tactical' text='@VoiceL2_Tactical'/>
</DataSource>
<DataSource Name='Level3.1Data'>
<Data localtext='[@VoiceL3_Anytime]' Name='Anytime' text='@VoiceL3_Anytime'/>
<Data localtext='[@VoiceL3_Best]' Name='Best' text='@VoiceL3_Best'/>
<Data localtext='[@VoiceL3_CeaseFire]' Name='CeaseFire' text='@VoiceL3_CeaseFire'/>
<Data localtext='[@VoiceL3_DontKnow]' Name='DontKnow' text='@VoiceL3_DontKnow'/>
<Data localtext='[@VoiceL3_Excellent]' Name='Excellent' text='@VoiceL3_Excellent'/>
<Data localtext='[@VoiceL3_Fantastic]' Name='Fantastic' text='@VoiceL3_Fantastic'/>
<Data localtext='[@VoiceL3_GreatShot]' Name='GreatShot' text='@VoiceL3_GreatShot'/>
<Data localtext='[@VoiceL3_Hail]' Name='Hail' text='@VoiceL3_Hail'/>
<Data localtext='[@VoiceL3_Move]' Name='Move' text='@VoiceL3_Move'/>
<Data localtext='[@VoiceL3_No]' Name='No' text='@VoiceL3_No'/>
<Data localtext='[@VoiceL3_Quiet]' Name='Quiet' text='@VoiceL3_Quiet'/>
<Data localtext='[@VoiceL3_NeedReconstruction]' Name='NeedReconstruction' text='@VoiceL3_NeedReconstruction'/>
<Data localtext='[@VoiceL3_Sorry]' Name='Sorry' text='@VoiceL3_Sorry'/>
<Data localtext='[@VoiceL3_Thanks]' Name='Thanks' text='@VoiceL3_Thanks'/>
<Data localtext='[@VoiceL3_Help]' Name='Help' text='@VoiceL3_Help'/>
<Data localtext='[@VoiceL3_Wave]' Name='Wave' text='@VoiceL3_Wave'/>
<Data localtext='[@VoiceL3_Stop]' Name='Stop' text='@VoiceL3_Stop'/>
<Data localtext='[@VoiceL3_Yes]' Name='Yes' text='@VoiceL3_Yes'/>
<Data localtext='[@VoiceL3_ZeroChance]' Name='ZeroChance' text='@VoiceL3_ZeroChance'/>
</DataSource>
<DataSource Name='Level3.2Data'>
<Data localtext='[@VoiceL3_TypeControl]' Name='TypeControl' text='@VoiceL3_TypeControl'/>
<Data localtext='[@VoiceL3_TypeDeployable]' Name='TypeDeployable' text='@VoiceL3_TypeDeployable'/>
<Data localtext='[@VoiceL3_TypeEquipment]' Name='TypeEquipment' text='@VoiceL3_TypeEquipment'/>
<Data localtext='[@VoiceL3_TypeGenerator]' Name='TypeGenerator' text='@VoiceL3_TypeGenerator'/>
<Data localtext='[@VoiceL3_TypeMedical]' Name='TypeMedical' text='@VoiceL3_TypeMedical'/>
<Data localtext='[@VoiceL3_TypeSpawn]' Name='TypeSpawn' text='@VoiceL3_TypeSpawn'/>
<Data localtext='[@VoiceL3_TypeTurret]' Name='TypeTurret' text='@VoiceL3_TypeTurret'/>
<Data localtext='[@VoiceL3_TypeVehicle]' Name='TypeVehicle' text='@VoiceL3_TypeVehicle'/>
</DataSource>
<DataSource Name='Level3.3Data'>
<Data localtext='[@VoiceL3_TypeControl]' Name='TypeControl' text='@VoiceL3_TypeControl'/>
<Data localtext='[@VoiceL3_TypeEquipment]' Name='TypeEquipment' text='@VoiceL3_TypeEquipment'/>
<Data localtext='[@VoiceL3_TypeGenerator]' Name='TypeGenerator' text='@VoiceL3_TypeGenerator'/>
<Data localtext='[@VoiceL3_TypeSpawn]' Name='TypeSpawn' text='@VoiceL3_TypeSpawn'/>
<Data localtext='[@VoiceL3_TypeTurret]' Name='TypeTurret' text='@VoiceL3_TypeTurret'/>
<Data localtext='[@VoiceL3_TypeVehicle]' Name='TypeVehicle' text='@VoiceL3_TypeVehicle'/>
</DataSource>
<DataSource Name='Level3.4Data'>
<Data localtext='[@VoiceL3_NeedAir]' Name='NeedAir' text='@VoiceL3_NeedAir'/>
<Data localtext='[@VoiceL3_NeedCovering]' Name='NeedCovering' text='@VoiceL3_NeedCovering'/>
<Data localtext='[@VoiceL3_NeedEscort]' Name='NeedEscort' text='@VoiceL3_NeedEscort'/>
<Data localtext='[@VoiceL3_NeedGunner]' Name='NeedGunner' text='@VoiceL3_NeedGunner'/>
<Data localtext='[@VoiceL3_NeedHacker]' Name='NeedHacker' text='@VoiceL3_NeedHacker'/>
<Data localtext='[@VoiceL3_NeedMedic]' Name='NeedMedic' text='@VoiceL3_NeedMedic'/>
<Data localtext='[@VoiceL3_NeedPassenger]' Name='NeedPassenger' text='@VoiceL3_NeedPassenger'/>
<Data localtext='[@VoiceL3_NeedRepairs]' Name='NeedRepairs' text='@VoiceL3_NeedRepairs'/>
</DataSource>
<DataSource Name='Level3.6Data'>
<Data localtext='[@VoiceL3_WarnAir]' Name='WarnAir' text='@VoiceL3_WarnAir'/>
<Data localtext='[@VoiceL3_WarnCloaked]' Name='WarnCloaked' text='@VoiceL3_WarnCloaked'/>
<Data localtext='[@VoiceL3_WarnMAX]' Name='WarnMAX' text='@VoiceL3_WarnMAX'/>
<Data localtext='[@VoiceL3_WarnSniper]' Name='WarnSniper' text='@VoiceL3_WarnSniper'/>
<Data localtext='[@VoiceL3_WarnTroops]' Name='WarnTroops' text='@VoiceL3_WarnTroops'/>
<Data localtext='[@VoiceL3_WarnGround]' Name='WarnGround' text='@VoiceL3_WarnGround'/>
<Data localtext='[@VoiceL3_WarnClear]' Name='WarnClear' text='@VoiceL3_WarnClear'/>
</DataSource>
<DataSource Name='Level3.7Data'>
<Data localtext='[@VoiceL3_SelfAttack]' menu='Level3.2Data' Name='SelfAttack' text='@VoiceL3_SelfAttack'/>
<Data localtext='[@VoiceL3_SelfDefend]' menu='Level3.3Data' Name='SelfDefend' text='@VoiceL3_SelfDefend'/>
<Data localtext='[@VoiceL3_SelfRepair]' menu='Level3.2Data' Name='SelfRepair' text='@VoiceL3_SelfRepair'/>
</DataSource>
<DataSource Name='Level3.8Data'>
<Data localtext='[@VoiceL3_TactRequest]' Name='TactRequest' text='@VoiceL3_TactRequest'/>
<Data localtext='[@VoiceL3_TactFallback]' Name='TactFallBack' text='@VoiceL3_TactFallback'/>
<Data localtext='[@VoiceL3_TactCover]' Name='TactCover' text='@VoiceL3_TactCover'/>
<Data localtext='[@VoiceL3_TactDeploy]' Name='TactDeploy' text='@VoiceL3_TactDeploy'/>
<Data localtext='[@VoiceL3_TactEnemy]' Name='TactEnemy' text='@VoiceL3_TactEnemy'/>
<Data localtext='[@VoiceL3_TactFollow]' Name='TactFollow' text='@VoiceL3_TactFollow'/>
<Data localtext='[@VoiceL3_TactRetreat]' Name='TactRetreat' text='@VoiceL3_TactRetreat'/>
<Data localtext='[@VoiceL3_TactSpreadOut]' Name='TactSpreadOut' text='@VoiceL3_TactSpreadOut'/>
<Data localtext='[@VoiceL3_TactTurret]' Name='TactTurret' text='@VoiceL3_TactTurret'/>
<Data localtext='[@VoiceL3_TactWaypoint]' Name='TactWaypoint' text='@VoiceL3_TactWaypoint'/>
<Data localtext='[@VoiceL3_TactDecline]' Name='TactDecline' text='@VoiceL3_TactDecline'/>
</DataSource>
</Page>
