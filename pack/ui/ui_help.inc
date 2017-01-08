<Page Location='100,100' MinimumSize='367,200' movable='true' Name='Help' PackLocation='center,center' PackLocationProp='-412/0001,-284/0001' resizable='true' ScrollExtent='419,290' Size='419,290' Visible='false'>
<Scrollbar Control='HelpText' Location='385,35' Name='TextScroll' PackLocation='right,top' PackLocationProp='-034/0001,0035/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0067/0001' ScrollExtent='9,223' Size='9,223' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' LocalText='Bob\\nTwo' Location='190,35' Name='HelpText' PackSize='absolute,absolute' PackSizeProp='0230/0001,0067/0001' ScrollExtent='189,223' Size='189,223'>Bob\\nTwo</Text>
<Template Name='HelpListTemplate' Size='154,25'>\<text color = \'$color\' font = \'/Fonts.HudFont2\' location = \'4,2\' maxlines = \'1\' size = \'150,20\' truncateelipsis = \'true\' visible = \'$IsItem1$\'\>
$Internationalize$ 
\</text\>
\<text color = \'$color\' font = \'/Fonts.HudFont2\' location = \'24,2\' maxlines = \'1\' size = \'150,20\' truncateelipsis = \'true\' visible = \'$IsItem2$\'\>
$Internationalize$ 
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'0,2\' maxlines = \'1\' size = \'135,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsHeading$\'\>
$Internationalize$
\</text\>
\<Image backgroundopacity = \'1.000\' location = \'0,10\' name = \'UnderlineTemplate\' rstyledefault = \'/Listboxes.ListboxContentHeader.style\' scrollextent = \'150,8\' size = \'150,8\' visible = \'$IsHeading$\'/\></Template>
<DataSourceContainer Name='HelpContainer'>
<DataSource Name='HelpHeading'>
<Data internationalize='@HelpHelp' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpHelp]' Name='Help'/>
</DataSource>
<DataSource Name='Help'>
<Data internationalize='@HelpHelpItem' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHelpItem]' Name='HelpItem'/>
<Data internationalize='@HelpHelpContext' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHelpContext]' Name='HelpContext'/>
</DataSource>
<DataSource Name='OfflineHeading'>
<Data internationalize='@HelpOfflineTraining' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpOfflineTraining]' Name='Offline Training'/>
</DataSource>
<DataSource Name='Offline'>
<Data internationalize='@HelpOfflineMissionSelect' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpOfflineMissionSelect]' Name='OfflineMissionSelectHelp'/>
</DataSource>
<DataSource Name='FrontendHeading'>
<Data internationalize='@HelpFrontend' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpFrontend]' Name='Frontend'/>
</DataSource>
<DataSource Name='Frontend'>
<Data internationalize='@HelpFrontendServer' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpFrontendServer]' Name='FrontendServer'/>
<Data internationalize='@HelpFrontendEmpire' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpFrontendEmpire]' Name='FrontendEmpire'/>
<Data internationalize='@HelpFrontendCharacter' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpFrontendCharacter]' Name='FrontendCharacter'/>
<Data internationalize='@HelpFrontendCreate' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpFrontendCreate]' Name='FrontendCreate'/>
<Data internationalize='@HelpFrontendInstantAction' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpFrontendInstantAction]' Name='InstantActionHelp'/>
</DataSource>
<DataSource Name='OptionsHeading'>
<Data internationalize='@HelpOptions' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpGameOptions]' Name='Options'/>
</DataSource>
<DataSource Name='Options'>
<Data internationalize='@HelpOptionColor' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpOptionColor]' Name='OptionsColor'/>
<Data internationalize='@HelpOptionKeymap' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHelpContext]' Name='OptionsKeymap'/>
<Data internationalize='@HelpOptionSound' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='OptionsSound'/>
<Data internationalize='@HelpOptionOther' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='OptionsOther'/>
</DataSource>
<DataSourceContainer Name='OptionsVideoHeading'>
<DataSource Name='OptionsVideoParent'>
<Data internationalize='@HelpOptionVideo' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='OptionsVideo'/>
</DataSource>
<DataSource Name='OptionsVideoChildren'>
<Data internationalize='@HelpOptionVideoGamma' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoGamma]' Name='OptionsVideoGamma'/>
<Data internationalize='@HelpOptionVideoResolution' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoResolution]' Name='OptionsVideoResolution'/>
<Data internationalize='@HelpOptionVideoQuality' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoQuality]' Name='OptionsVideoQuality'/>
<Data internationalize='@HelpOptionVideoBitDepth' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='OptionsVideoBitDepth'/>
<Data internationalize='@HelpOptionVideoTextureResolution' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoTextureResolution]' Name='OptionsVideoTextureResolution'/>
<Data internationalize='@HelpOptionVideoEffects' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoEffects]' Name='OptionsVideoEffects'/>
<Data internationalize='@HelpOptionVideoFlora' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoFlora]' Name='OptionsVideoFlora'/>
<Data internationalize='@HelpOptionVideoDetail' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoDetail]' Name='OptionsVideoDetail'/>
<Data internationalize='@HelpOptionVideoDecals' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoDecals]' Name='OptionsVideoDecals'/>
<Data internationalize='@HelpOptionVideoShadows' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoShadows]' Name='OptionsVideoShadows'/>
<Data internationalize='@HelpOptionVideoWeatherParticles' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoWeatherParticles]' Name='OptionsVideoWeatherParticles'/>
<Data internationalize='@HelpOptionVideoSkydome' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoSkydome]' Name='OptionsVideoSkydome'/>
<Data internationalize='@HelpOptionVideoViewDistance' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoViewDistance]' Name='OptionsVideoViewDistance'/>
<Data internationalize='@HelpOptionVideoAdvanced' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoAdvanced]' Name='OptionsVideoAdvanced'/>
</DataSource>
</DataSourceContainer>
<DataSource Name='HUDHeading'>
<Data internationalize='@HelpHUDView' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpHUDView]' Name='HUDView'/>
</DataSource>
<DataSource Name='HUD'>
<Data internationalize='@HelpHUDWindow' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='HUDWindow'/>
<Data internationalize='@HelpHUDAlarm' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDAlarm]' Name='HUDAlarm'/>
<Data internationalize='@HelpHUDCharacterPane' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDCharacterPane]' Name='HUDCharacterPane'/>
<Data internationalize='@HelpHUDDamage' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='HUDDamageIndicator'/>
<Data internationalize='@HelpHUDCorpse' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDCorpse]' Name='HUDCorpse'/>
<Data internationalize='@HelpHUDEquipment' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='HUDEquipment'/>
<Data internationalize='@HelpHUDFriends' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDFriends]' Name='HUDFriends'/>
<Data internationalize='@HelpHUDExclamation' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDExclamation]' Name='HUDExclamation'/>
<Data internationalize='@HelpHUDActiveItems' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='HUDActiveItems'/>
<Data internationalize='@HelpHUDImplant' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='HUDImplant'/>
<Data internationalize='@HelpHUDInventory' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='HUDInventory'/>
<Data internationalize='@HelpHUDLocker' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDLocker]' Name='HUDLocker'/>
<Data internationalize='@HelpHUDOutfit' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDOutfit]' Name='HUDOutfitPane'/>
<Data internationalize='@HelpHUDOutfitList' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDOutfitList]' Name='HUDOutfitListPane'/>
<Data internationalize='@HelpHUDPlayerPane' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDPlayerPane]' Name='HUDPlayerPane'/>
<Data internationalize='@HelpHUDRadar' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='HUDRadar'/>
<Data internationalize='@HelpHUDShortcuts' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='HUDShortcuts'/>
<Data internationalize='@HelpHUDStatus' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='HUDStatus'/>
<Data internationalize='@HelpHUDSquad' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDSquad]' Name='HUDSquad'/>
<Data internationalize='@HelpHUDStatistics' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDStatistics]' Name='HUDStatisticsPane'/>
<Data internationalize='@HelpHUDTrunk' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDTrunk]' Name='HUDTrunk'/>
<Data internationalize='@HelpHUDVehicle' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='HUDVehicle'/>
<Data internationalize='@HelpHUDVehicleAccess' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDVehicleAccess]' Name='HUDVehicleAccess'/>
<Data internationalize='@HelpHUDVoiceHost' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDVoiceHost]' Name='HUDVoiceHost'/>
<Data internationalize='@HelpHUDReticle' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='HUDReticle'/>
<Data internationalize='@HelpHUDCustomerService' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDCustomerService]' Name='HUDCustomerService'/>
<Data internationalize='@HelpHUDBugReport' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpHUDBugReport]' Name='HUDBugReport'/>
</DataSource>
<DataSource Name='MapHeading'>
<Data internationalize='@HelpMapView' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpMapView]' Name='MapView'/>
</DataSource>
<DataSource Name='Map'>
<Data internationalize='@HelpMapGlobal' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='MapGlobal'/>
<Data internationalize='@HelpMapContinent' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='MapContinent'/>
<Data internationalize='@HelpMapDroppod' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='MapDroppod'/>
</DataSource>
<DataSource Name='ArmorHeading'>
<Data internationalize='@HelpArmor' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpArmor]' Name='Armor'/>
</DataSource>
<DataSource Name='Armor'>
<Data internationalize='@lite_armor' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@lite_armor]' localtext='[@lite_armor_info]' Name='ArmorLight' text='@lite_armor_info'/>
<Data internationalize='@stealth_armor' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@stealth_armor]' localtext='[@stealth_armor_info]' Name='ArmorStealth' text='@stealth_armor_info'/>
<Data internationalize='@trhev_antiaircraft' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@trhev_antiaircraft]' localtext='[@trhev_antiaircraft_info]' Name='ArmorTRAntiAir' text='@trhev_antiaircraft_info'/>
<Data internationalize='@vshev_antivehicular' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@vshev_antivehicular]' localtext='[@vshev_antivehicular_info]' Name='ArmorVSAntiVeh' text='@vshev_antivehicular_info'/>
<Data internationalize='@trhev_antipersonnel' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@trhev_antipersonnel]' localtext='[@trhev_antipersonnel_info]' Name='ArmorTRAntiPer' text='@trhev_antipersonnel_info'/>
<Data internationalize='@nchev_antivehicular' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@nchev_antivehicular]' localtext='[@nchev_antivehicular_info]' Name='ArmorNCAntiVeh' text='@nchev_antivehicular_info'/>
<Data internationalize='@trhev_antivehicular' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@trhev_antivehicular]' localtext='[@trhev_antivehicular_info]' Name='ArmorTRAntiVeh' text='@trhev_antivehicular_info'/>
<Data internationalize='@vshev_antipersonnel' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@vshev_antipersonnel]' localtext='[@vshev_antipersonnel_info]' Name='ArmorVSAntiPer' text='@vshev_antipersonnel_info'/>
<Data internationalize='@nchev_antipersonnel' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@nchev_antipersonnel]' localtext='[@nchev_antipersonnel_info]' Name='ArmorNCAntiPer' text='@nchev_antipersonnel_info'/>
<Data internationalize='@nchev_antiaircraft' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@nchev_antiaircraft]' localtext='[@nchev_antiaircraft_info]' Name='ArmorNCAntiAir' text='@nchev_antiaircraft_info'/>
<Data internationalize='@vshev_antiaircraft' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@vshev_antiaircraft]' localtext='[@vshev_antiaircraft_info]' Name='ArmorVSAntiAir' text='@vshev_antiaircraft_info'/>
<Data internationalize='@med_armor' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@med_armor]' localtext='[@med_armor_info]' Name='ArmorMedium' text='@med_armor_info'/>
<Data internationalize='@standard_issue_armor' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@standard_issue_armor]' localtext='[@standard_issue_armor_info]' Name='ArmorStandard' text='@standard_issue_armor_info'/>
</DataSource>
<DataSource Name='EquipmentHeading'>
<Data internationalize='@HelpEquipment' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpEquipment]' Name='Equipment'/>
</DataSource>
<DataSource Name='Equipment'>
<Data internationalize='@xp_ace_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_ace_label]' localtext='[@xp_ace_message]' Name='EquipmentACE' text='@xp_ace_message'/>
<Data internationalize='@xp_bank_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_bank_label]' localtext='[@xp_bank_message]' Name='EquipmentBANK' text='@xp_bank_message'/>
<Data internationalize='@xp_med_app_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_med_app_label]' localtext='[@xp_med_app_message]' Name='EquipmentMedApp' text='@xp_med_app_message'/>
<Data internationalize='@medkit' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@medkit]' localtext='[@medkit_info]' Name='EquipmentMedKit' text='@medkit_info'/>
<Data internationalize='@xp_nano_dispenser_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_nano_dispenser_label]' localtext='[@xp_nano_dispenser_message]' Name='EquipmentNanoDispenser' text='@xp_nano_dispenser_message'/>
<Data internationalize='@xp_rek_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_rek_label]' localtext='[@xp_rek_message]' Name='EquipmentREK' text='@xp_rek_message'/>
</DataSource>
<DataSource Name='ObjectsHeading'>
<Data internationalize='@HelpStaticObjects' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpStaticObjects]' Name='StaticObjects'/>
</DataSource>
<DataSource Name='Objects'>
<Data internationalize='@xp_adv_med_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_adv_med_terminal_message]' Name='ObjectAdvMedTerminal' text='@xp_adv_med_terminal_message'/>
<Data internationalize='@xp_galaxy_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_galaxy_terminal_label]' localtext='[@xp_galaxy_terminal_message]' Name='ObjectGalaxyTerminal' text='@xp_galaxy_terminal_message'/>
<Data internationalize='@xp_air_vehicle_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_air_vehicle_terminal_label]' localtext='[@xp_air_vehicle_message]' Name='ObjectAirVehicleTerminal' text='@xp_air_vehicle_message'/>
<Data internationalize='@xp_certification_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_certification_terminal_label]' localtext='[@xp_certification_terminal_message]' Name='ObjectCertificationTerminal' text='@xp_certification_terminal_message'/>
<Data internationalize='@xp_capture_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_capture_terminal_label]' localtext='[@xp_capture_terminal_message]' Name='ObjectCaptureTerminal' text='@xp_capture_terminal_message'/>
<Data internationalize='@xp_locker_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_locker_label]' localtext='[@xp_locker_message]' Name='ObjectLocker' text='@xp_locker_message'/>
<Data internationalize='@xp_order_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_order_terminal_label]' localtext='[@xp_order_terminal_message]' Name='ObjectOrderTerminal' text='@xp_order_terminal_message'/>
<Data internationalize='@xp_generator_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_generator_label]' localtext='[@xp_generator_message]' Name='ObjectGenerator' text='@xp_generator_message'/>
<Data internationalize='@xp_ground_vehicle_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_ground_vehicle_terminal_label]' localtext='[@xp_ground_vehicle_terminal_message]' Name='ObjectGroundVehicleTerminal' text='@xp_ground_vehicle_terminal_message'/>
<Data internationalize='@xp_secondary_capture_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_secondary_capture_label]' localtext='[@xp_secondary_capture_message]' Name='ObjectSecondaryCapture' text='@xp_secondary_capture_message'/>
<Data internationalize='@xp_implant_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_implant_terminal_label]' localtext='[@xp_implant_terminal_message]' Name='ObjectImplantTerminal' text='@xp_implant_terminal_message'/>
<Data internationalize='@xp_respawn_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_respawn_terminal_label]' localtext='[@xp_respawn_terminal_message]' Name='ObjectRespawnTerminal' text='@xp_respawn_terminal_message'/>
<Data internationalize='@xp_med_terminal_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_med_terminal_label]' localtext='[@xp_med_terminal_message]' Name='ObjectMedTerminal' text='@xp_med_terminal_message'/>
<Data internationalize='@xp_wall_turret_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_wall_turret_label]' localtext='[@xp_wall_turret_message]' Name='ObjectWallTurret' text='@xp_wall_turret_message'/>
<Data internationalize='@xp_external_door_lock_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_external_door_lock_label]' localtext='[@xp_external_door_lock_message]' Name='ObjectExternalDoorLock' text='@xp_external_door_lock_message'/>
<Data internationalize='@xp_warpgate_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_warpgate_label]' localtext='[@xp_warpgate_message]' Name='ObjectWarpgate' text='@xp_warpgate_message'/>
</DataSource>
<DataSource Name='ImplantHeading'>
<Data internationalize='@HelpImplants' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpImplants]' Name='Implants'/>
</DataSource>
<DataSource Name='Implant'>
<Data internationalize='@advanced_regen' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@advanced_regen]' localtext='[@Advanced_Regen_Descrip]' Name='ImplantAdvancedRegen' text='@Advanced_Regen_Descrip'/>
<Data internationalize='@targeting' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@targeting]' localtext='[@Targeting_Descrip]' Name='ImplantTargeting' text='@Targeting_Descrip'/>
<Data internationalize='@audio_amplifier' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@audio_amplifier]' localtext='[@Audio_Amplifier_Descrip]' Name='ImplantAudio' text='@Audio_Amplifier_Descrip'/>
<Data internationalize='@darklight_vision' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@darklight_vision]' localtext='[@Darklight_Vision_Descrip]' Name='ImplantDarklight' text='@Darklight_Vision_Descrip'/>
<Data internationalize='@melee_booster' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@melee_booster]' localtext='[@Melee_Booster_Descrip]' Name='ImplantMelee' text='@Melee_Booster_Descrip'/>
<Data internationalize='@personal_shield' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@personal_shield]' localtext='[@Personal_Shield_Descrip]' Name='ImplantShield' text='@Personal_Shield_Descrip'/>
<Data internationalize='@range_magnifier' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@range_magnifier]' localtext='[@Range_Magnifier_Descrip]' Name='ImplantRange' text='@Range_Magnifier_Descrip'/>
<Data internationalize='@second_wind' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@second_wind]' localtext='[@Second_Wind_Descrip]' Name='ImplantSecondWind' text='@Second_Wind_Descrip'/>
<Data internationalize='@silent_run' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@silent_run]' localtext='[@Silent_Run_Descrip]' Name='ImplantSilentRun' text='@Silent_Run_Descrip'/>
<Data internationalize='@surge' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@surge]' localtext='[@Surge_Descrip]' Name='ImplantSurge' text='@Surge_Descrip'/>
</DataSource>
<DataSource Name='VehicleHeading'>
<Data internationalize='@HelpVehicles' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpVehicles]' Name='Vehicles'/>
</DataSource>
<DataSource Name='Vehicle'>
<Data internationalize='@xp_ams_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_ams_label]' localtext='[@xp_ams_message]' Name='VehicleAMS' text='@xp_ams_message'/>
<Data internationalize='@xp_ant_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_ant_label]' localtext='[@xp_ant_message]' Name='VehicleANT' text='@xp_ant_message'/>
<Data internationalize='@xp_quadassault_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_quadassault_label]' localtext='[@xp_quadassault_message]' Name='VehicleBasilisk' text='@xp_quadassault_message'/>
<Data internationalize='@xp_mediumtransport_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_mediumtransport_label]' localtext='[@xp_mediumtransport_message]' Name='VehicleDeliverer' text='@xp_mediumtransport_message'/>
<Data internationalize='@xp_twomanheavybuggy_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_twomanheavybuggy_label]' localtext='[@xp_twomanheavybuggy_message]' Name='VehicleEnforcer' text='@xp_twomanheavybuggy_message'/>
<Data internationalize='@xp_dropship_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_dropship_label]' localtext='[@xp_dropship_message]' Name='VehicleGalaxy' text='@xp_dropship_message'/>
<Data internationalize='@xp_two_man_assault_buggy_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_two_man_assault_buggy_label]' localtext='[@xp_two_man_assault_buggy_message]' Name='VehicleHarasser' text='@xp_two_man_assault_buggy_message'/>
<Data internationalize='@xp_liberator_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_liberator_label]' localtext='[@xp_liberator_message]' Name='VehicleLiberator' text='@xp_liberator_message'/>
<Data internationalize='@xp_lightning_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_lightning_label]' localtext='[@xp_lightning_message]' Name='VehicleLightning' text='@xp_lightning_message'/>
<Data internationalize='@xp_magrider_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_magrider_label]' localtext='[@xp_magrider_message]' Name='VehicleMagrider' text='@xp_magrider_message'/>
<Data internationalize='@xp_threemanheavybuggy_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_threemanheavybuggy_label]' localtext='[@xp_threemanheavybuggy_message]' Name='VehicleMarauder' text='@xp_threemanheavybuggy_message'/>
<Data internationalize='@xp_mosquito_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_mosquito_label]' localtext='[@xp_mosquito_message]' Name='VehicleMosquito' text='@xp_mosquito_message'/>
<Data internationalize='@xp_prowler_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_prowler_label]' localtext='[@xp_prowler_message]' Name='VehicleProwler' text='@xp_prowler_message'/>
<Data internationalize='@xp_lightgunship_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_lightgunship_label]' localtext='[@xp_lightgunship_message]' Name='VehicleReaver' text='@xp_lightgunship_message'/>
<Data internationalize='@xp_skyguard_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_skyguard_label]' localtext='[@xp_skyguard_message]' Name='VehicleSkyguard' text='@xp_skyguard_message'/>
<Data internationalize='@xp_apc_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_apc_label]' localtext='[@xp_apc_message]' Name='VehicleSunderer' text='@xp_apc_message'/>
<Data internationalize='@xp_twomanhoverbuggy_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_twomanhoverbuggy_label]' localtext='[@xp_twomanhoverbuggy_message]' Name='VehicleThresher' text='@xp_twomanhoverbuggy_message'/>
<Data internationalize='@xp_vanguard_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_vanguard_label]' localtext='[@xp_vanguard_message]' Name='VehicleVanguard' text='@xp_vanguard_message'/>
<Data internationalize='@xp_quadstealth_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_quadstealth_label]' localtext='[@xp_quadstealth_message]' Name='VehicleWraith' text='@xp_quadstealth_message'/>
</DataSource>
<DataSource Name='WeaponHeading'>
<Data internationalize='@HelpWeapons' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpWeapons]' Name='Weapons'/>
</DataSource>
<DataSource Name='Weapons'>
<Data internationalize='@xp_ilc9_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_ilc9_message]' Name='WeaponILC9' text='@xp_ilc9_message'/>
<Data internationalize='@xp_beamer_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_beamer_message]' Name='WeaponBeamer' text='@xp_beamer_message'/>
<Data internationalize='@xp_bolt_driver_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_bolt_driver_message]' Name='WeaponBoltDriver' text='@xp_bolt_driver_message'/>
<Data internationalize='@xp_chainblade_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_chainblade_message]' Name='WeaponChainblade' text='@xp_chainblade_message'/>
<Data internationalize='@xp_cycler_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_cycler_message]' Name='WeaponCycler' text='@xp_cycler_message'/>
<Data internationalize='@xp_phoenix_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_phoenix_message]' Name='WeaponPhoenix' text='@xp_phoenix_message'/>
<Data internationalize='@xp_forceblade_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_forceblade_message]' Name='WeaponForceblade' text='@xp_forceblade_message'/>
<Data internationalize='@xp_grenade_frag_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_grenade_frag_label]' localtext='[@xp_grenade_frag_message]' Name='WeaponFragGrenade' text='@xp_grenade_frag_message'/>
<Data internationalize='@xp_gauss_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_gauss_message]' Name='WeaponGauss' text='@xp_gauss_message'/>
<Data internationalize='@xp_r_shotgun_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_r_shotgun_message]' Name='WeaponRShotgun' text='@xp_r_shotgun_message'/>
<Data internationalize='@xp_grenade_jammer_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_grenade_jammer_label]' localtext='[@xp_grenade_jammer_message]' Name='WeaponJammerGrenade' text='@xp_grenade_jammer_message'/>
<Data internationalize='@xp_lancer_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_lancer_message]' Name='WeaponLancer' text='@xp_lancer_message'/>
<Data internationalize='@xp_lasher_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_lasher_message]' Name='WeaponLasher' text='@xp_lasher_message'/>
<Data internationalize='@xp_magcutter_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_magcutter_message]' Name='WeaponMagcutter' text='@xp_magcutter_message'/>
<Data internationalize='@xp_isp_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_isp_message]' Name='WeaponISP' text='@xp_isp_message'/>
<Data internationalize='@xp_mini_chaingun_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_mini_chaingun_message]' Name='WeaponMiniChaingun' text='@xp_mini_chaingun_message'/>
<Data internationalize='@xp_hunterseeker_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_hunterseeker_message]' Name='WeaponHunterseeker' text='@xp_hunterseeker_message'/>
<Data internationalize='@xp_grenade_plasma_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_grenade_plasma_label]' localtext='[@xp_grenade_plasma_message]' Name='WeaponPlasmaGrenade' text='@xp_grenade_plasma_message'/>
<Data internationalize='@xp_pulsar_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_pulsar_message]' Name='WeaponPulsar' text='@xp_pulsar_message'/>
<Data internationalize='@xp_punisher_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_punisher_message]' Name='WeaponPunisher' text='@xp_punisher_message'/>
<Data internationalize='@xp_repeater_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_repeater_message]' Name='WeaponRepeater' text='@xp_repeater_message'/>
<Data internationalize='@xp_rocklet_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_rocklet_label]' localtext='[@xp_rocklet_message]' Name='WeaponJackhammer' text='@xp_rocklet_message'/>
<Data internationalize='@xp_striker_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_striker_message]' Name='WeaponStriker' text='@xp_striker_message'/>
<Data internationalize='@xp_suppressor_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_suppressor_message]' Name='WeaponSuppressor' text='@xp_suppressor_message'/>
<Data internationalize='@xp_flechette_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_flechette_message]' Name='WeaponFlechette' text='@xp_flechette_message'/>
<Data internationalize='@xp_thumper_label' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@xp_adv_med_terminal_label]' localtext='[@xp_thumper_message]' Name='WeaponThumper' text='@xp_thumper_message'/>
</DataSource>
<DataSource Name='SquadHeading'>
<Data internationalize='@HelpSquads' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpSquads]' Name='Squads'/>
</DataSource>
<DataSource Name='Squad'>
<Data internationalize='@HelpSquadJoin' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='SquadJoin'/>
<Data internationalize='@HelpSquadCreate' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='SquadCreate'/>
<Data internationalize='@HelpSquadLeave' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='SquadLeave'/>
<Data internationalize='@HelpSquadCommands' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='SquadCommands'/>
</DataSource>
<DataSource Name='PlatoonHeading'>
<Data internationalize='@HelpPlatoon' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpSquads]' Name='Squads'/>
</DataSource>
<DataSource Name='Platoons'>
<Data internationalize='@HelpPlatoonJoin' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='PlatoonJoin'/>
<Data internationalize='@HelpPlatoonCreate' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='PlatoonCreate'/>
<Data internationalize='@HelpPlatoonLeave' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='PlatoonLeave'/>
</DataSource>
<DataSource Name='OutfitHeading'>
<Data internationalize='@HelpOutfits' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpOutfits]' Name='Outfits'/>
</DataSource>
<DataSource Name='Outfit'>
<Data internationalize='@HelpOutfitJoin' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='OutfitJoin'/>
<Data internationalize='@HelpOutfitCreate' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='OutfitCreate'/>
<Data internationalize='@HelpOutfitLeave' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='OutfitLeave'/>
</DataSource>
<DataSource Name='ChatHeading'>
<Data internationalize='@HelpChat' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpChat]' Name='Chat'/>
</DataSource>
<DataSource Name='Chat'>
<Data internationalize='@HelpChatChannels' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpChatChannels]' Name='ChatChannels'/>
<Data internationalize='@HelpChatFilters' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='ChatFilters'/>
<Data internationalize='@HelpChatMacros' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpChatMacros]' Name='ChatMacros'/>
</DataSource>
<DataSource Name='ChatCommandsHeading'>
<Data internationalize='@HelpChatCommands' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpChatCommands]' Name='ChatCommands'/>
</DataSource>
<DataSourceContainer Name='ChatCommands'>
<DataSource Name='ChatCommandsChatHeading'>
<Data internationalize='@HelpChatCommandsChat' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='ChatCommandsChat'/>
</DataSource>
<DataSource Name='ChatCommandsChat'>
<Data command='true' internationalize='@CMT_BROADCAST' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_BROADCAST'/>
<Data command='true' internationalize='@CMT_COMMAND' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND'/>
<Data command='true' internationalize='@CMT_COMMAND_ALLZONES' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_ALLZONES'/>
<Data command='true' internationalize='@CMT_COMMAND_REPORT' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_REPORT'/>
<Data command='true' internationalize='@CMT_COMMAND_SANCTUARY' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_SANCTUARY'/>
<Data command='true' internationalize='@CMT_COMMAND_CAVERN1' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_CAVERN1'/>
<Data command='true' internationalize='@CMT_COMMAND_CAVERN2' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_CAVERN2'/>
<Data command='true' internationalize='@CMT_COMMAND_CAVERN3' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_CAVERN3'/>
<Data command='true' internationalize='@CMT_COMMAND_CAVERN4' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_CAVERN4'/>
<Data command='true' internationalize='@CMT_COMMAND_CAVERN5' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_CAVERN5'/>
<Data command='true' internationalize='@CMT_COMMAND_CAVERN6' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_CAVERN6'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE1' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_ZONE1'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE2' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_ZONE2'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE3' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_ZONE3'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE4' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_ZONE4'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE5' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_ZONE5'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE6' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_ZONE6'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE7' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_ZONE7'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE8' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_ZONE8'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE9' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_ZONE9'/>
<Data command='true' internationalize='@CMT_COMMAND_ZONE10' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_COMMAND_ZONE10'/>
<Data command='true' internationalize='@CMT_OPEN' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_OPEN'/>
<Data command='true' internationalize='@CMT_OUTFIT' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_OUTFIT'/>
<Data command='true' internationalize='@CMT_PLATOON' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_PLATOON'/>
<Data command='true' internationalize='@CMT_PLATOONLEADER' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_PLATOONLEADER'/>
<Data command='true' internationalize='@CMT_SQUAD' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_SQUAD'/>
<Data command='true' internationalize='@CMT_TELL' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_TELL'/>
<Data command='true' internationalize='@CMT_REPLY' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_REPLY'/>
</DataSource>
<DataSource Name='ChatCommandsGeneralHeading'>
<Data internationalize='@HelpChatCommandsGeneral' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='ChatCommandsGeneral'/>
</DataSource>
<DataSource Name='ChatCommandsGeneral'>
<Data command='true' internationalize='@CMT_ALARM' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_ALARM'/>
<Data command='true' internationalize='@CMT_APPEAL' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_APPEAL'/>
<Data command='true' internationalize='@CMT_BUGREPORT' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_BUGREPORT'/>
<Data command='true' internationalize='@CMT_CHATLOG' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_CHATLOG'/>
<Data command='true' internationalize='@CMT_CREATE_MACRO' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_CREATE_MACRO'/>
<Data command='true' internationalize='@CMT_FILTER' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_FILTER'/>
<Data command='true' internationalize='@CMT_FRIENDS' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_FRIENDS'/>
<Data command='true' internationalize='@CMT_HELP' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_HELP'/>
<Data command='true' internationalize='@CMT_IGNORE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_IGNORE'/>
<Data command='true' internationalize='@CMT_INSTANTACTION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_INSTANTACTION'/>
<Data command='true' internationalize='@CMT_LOC' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_LOC'/>
<Data command='true' internationalize='@CMT_QUIT' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_QUIT'/>
<Data command='true' internationalize='@CMT_RECALL' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_RECALL'/>
<Data command='true' internationalize='@CMT_REPORTUSER' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_REPORTUSER'/>
<Data command='true' internationalize='@CMT_TIME' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_TIME'/>
<Data command='true' internationalize='@CMT_TOGGLE_STATS' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_TOGGLE_STATS'/>
<Data command='true' internationalize='@CMT_WHO' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_WHO'/>
<Data command='true' internationalize='@CMT_WHO_PLATOONLEADERS' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_WHO_PLATOONLEADERS'/>
<Data command='true' internationalize='@CMT_WHO_SQUADLEADERS' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_WHO_SQUADLEADERS'/>
<Data command='true' internationalize='@CMT_WHO_TEAMS' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_WHO_TEAMS'/>
</DataSource>
<DataSource Name='ChatCommandsSquadHeading'>
<Data internationalize='@HelpChatCommandsSquad' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='ChatCommandsSquad'/>
</DataSource>
<DataSource Name='ChatCommandsSquad'>
<Data command='true' internationalize='@CMT_SQUADINVITE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_SQUADINVITE'/>
<Data command='true' internationalize='@CMT_SQUADKICK' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_SQUADKICK'/>
<Data command='true' internationalize='@CMT_SQUADACCEPTINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_SQUADACCEPT'/>
<Data command='true' internationalize='@CMT_SQUADREJECTINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_SQUADREJECT'/>
<Data command='true' internationalize='@CMT_SQUADCANCELINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_SQUADCANCEL'/>
<Data command='true' internationalize='@CMT_SQUADPROMOTE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_SQUADPROMOTE'/>
<Data command='true' internationalize='@CMT_SQUADDISBAND' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_SQUADDISBAND'/>
<Data command='true' internationalize='@CMT_SQUADLEAVE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_SQUADLEAVE'/>
</DataSource>
<DataSource Name='ChatCommandsPlatoonHeading'>
<Data internationalize='@HelpChatCommandsPlatoon' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='ChatCommandsPlatoon'/>
</DataSource>
<DataSource Name='ChatCommandsPlatoon'>
<Data command='true' internationalize='@CMT_PLATOONINVITE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_PLATOONINVITE'/>
<Data command='true' internationalize='@CMT_PLATOONKICK' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_PLATOONKICK'/>
<Data command='true' internationalize='@CMT_PLATOONACCEPTINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_PLATOONACCEPT'/>
<Data command='true' internationalize='@CMT_PLATOONREJECTINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_PLATOONREJECT'/>
<Data command='true' internationalize='@CMT_PLATOONCANCELINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_PLATOONCANCEL'/>
<Data command='true' internationalize='@CMT_PLATOONDISBAND' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_PLATOONDISBAND'/>
<Data command='true' internationalize='@CMT_PLATOONLEAVE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_PLATOONLEAVE'/>
</DataSource>
<DataSource Name='ChatCommandsOutfitHeading'>
<Data internationalize='@HelpChatCommandsOutfit' isexpanded='false' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@Help]' Name='ChatCommandsOutfit'/>
</DataSource>
<DataSource Name='ChatCommandsOutfit'>
<Data command='true' internationalize='@CMT_OUTFITCREATE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_OUTFITCREATE'/>
<Data command='true' internationalize='@CMT_OUTFITCREATEFROMSQUAD' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_OUTFITCREATEFROMSQUAD'/>
<Data command='true' internationalize='@CMT_OUTFITINVITE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_OUTFITINVITE'/>
<Data command='true' internationalize='@CMT_OUTFITKICK' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_OUTFITKICK'/>
<Data command='true' internationalize='@CMT_OUTFITACCEPTINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_OUTFITACCEPT'/>
<Data command='true' internationalize='@CMT_OUTFITREJECTINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_OUTFITREJECT'/>
<Data command='true' internationalize='@CMT_OUTFITCANCELINVITATION' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_OUTFITCANCEL'/>
<Data command='true' internationalize='@CMT_OUTFITLEAVE' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_OUTFITLEAVE'/>
<Data command='true' internationalize='@CMT_OUTFIT_RECALL' isheading='false' isitem1='false' isitem2='true' Localinternationalize='[@HelpOptionVideoBitDepth]' Name='CMT_OUTFITRECALL'/>
</DataSource>
</DataSourceContainer>
<DataSource Name='SupportHeading'>
<Data internationalize='@HelpSupport' isexpanded='false' isheading='true' isitem1='false' isitem2='false' Localinternationalize='[@HelpSupport]' Name='Support'/>
</DataSource>
<DataSource Name='Support'>
<Data internationalize='@HelpSupportTechnical' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpSupportTechnical]' Name='SupportTechnical'/>
<Data internationalize='@HelpSupportWeb' isheading='false' isitem1='true' isitem2='false' Localinternationalize='[@HelpSupportWeb]' Name='SupportWeb'/>
</DataSource>
</DataSourceContainer>
<DataSource Name='HelpData'/>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@HelpTitle]' Location='65,7' Name='TitleText' PackLocation='center,fixed' PackLocationProp='-144/0001,xxxx/xxxx' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='278,20' Size='278,20' TextAlignment='Center' TextAlignmentVertical='Center'>@HelpTitle</Text>
<Listbox DataSource='HelpData' Location='21,35' Name='HelpList' PackSize='fixed,absolute' PackSizeProp='0002/0003,0067/0001' RowTemplate='HelpListTemplate' ScrollExtent='154,223' Size='154,223' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='HelpList' Location='177,35' Name='ListScroll' PackSize='fixed,absolute' PackSizeProp='0002/0003,0067/0001' ScrollExtent='9,223' Size='9,223' Style='/ScrollBars.vertical.style'/>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='330,8' Name='CancelButton' PackLocation='right,top' PackLocationProp='-089/0001,0008/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='31,0' Name='Title' PackSize='absolute,fixed' PackSizeProp='0071/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='348,32' Size='348,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,15' Name='Background' Opacity='0.800' PackSize='1,absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='419,273' Size='419,273' Stretch='false'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='11,22' Name='FrontendBackground' PackSize='absolute,absolute' PackSizeProp='0024/0001,0046/0001' RStyleDefault='/Frontend.Box.style' ScrollExtent='395,244' Size='395,244' Stretch='false' Visible='false'/>
</Page>
