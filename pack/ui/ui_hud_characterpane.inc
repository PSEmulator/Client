<Page Location='202,200' MinimumSize='620,450' minsize='620,450' movable='true' Name='CharacterPane' PackLocation='cfc,cfc' PackLocationProp='0000/0001,0041/0001' resizable='true' ScrollExtent='620,450' Size='620,450' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@CharacterTitle]' Location='101,13' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0013/0001' PackSize='absolute,fixed' PackSizeProp='0208/0001,0002/0003' ScrollExtent='412,20' Size='412,20' TextAlignment='Center' TextAlignmentVertical='Center'>@CharacterTitle</Text>
<Checkbox BackgroundOpacity='1.000' Location='19,46' Name='SoldierTab' ScrollExtent='72,24' Size='72,24' Style='/Buttons.WindowIconTab.style'>@CharacterInfoTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='95,46' Name='AchievementsTab' ScrollExtent='105,24' Size='105,24' Style='/Buttons.WindowIconTab.style'>@PlayerAchievements</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='204,46' Name='EventTab' ScrollExtent='72,24' Size='72,24' Style='/Buttons.WindowIconTab.style'>@CharacterEventsTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='279,46' Name='MissionTab' ScrollExtent='124,24' Size='124,24' Style='/Buttons.WindowIconTab.style'>@CharacterTrainingMissionTab</Checkbox>
<Page Location='18,70' Name='SoldierPage' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='584,360' Size='584,360'>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='999:99:00' Location='153,338' MaxLines='1' Name='BlackOpsTimer' ScrollExtent='80,14' Size='80,14' TextAlignmentVertical='Center' TruncateElipsis='false' Visible='false'>999:99:00</Text>
<Button Enabled='false' LocalText='[@LeaveBlackOps]' Location='5,334' Name='BlackOpsButton' PackLocation='left,bottom' PackLocationProp='0005/0001,-026/0001' ScrollExtent='142,20' Size='142,20' Style='/Buttons.TextButton.style' Visible='false'>@LeaveBlackOps</Button>
<Page Location='206,0' Name='CertificationPage' PackLocation='left,top' PackLocationProp='0206/0001,0000/0001' PackSize='absolute,Absolute' PackSizeProp='0206/0001,0033/0001' ScrollExtent='378,327' Size='378,327'>
<Rectangle Color='#385E61' GetsInput='false' Name='BorderRect' PackSize='1,Absolute' PackSizeProp='0002/0003,0000/0001' ScrollExtent='378,327' Size='378,327'/>
<Listbox DataSource='CertificationsDataSource' Location='2,2' Name='CertificationsListbox' PackLocation='left,top' PackLocationProp='0002/0001,0002/0001' PackSize='absolute,absolute' PackSizeProp='0015/0001,0004/0001' RowTemplate='ListboxTemplate' ScrollExtent='363,323' Size='363,323' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='CertificationsListbox' Location='365,1' Name='ScrollCertifications' PackLocation='right,top' PackLocationProp='-013/0001,0001/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0004/0001' ScrollExtent='9,323' Size='9,323' Style='/ScrollBars.vertical.style'/>
<Template Name='ListboxTemplate' Size='182,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'$width$,18\' visible = \'$IsNotHeading$\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont1\' location = \'-18,2\' maxlines = \'1\' size = \'$width$,18\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$IsHeading$\'\>
$Internationalize$
\</text\>
\<Image backgroundopacity = \'1.000\' location = \'0,10\' name = \'UnderlineTemplate\' rstyledefault = \'/Listboxes.ListboxContentHeader.style\' scrollextent = \'$width$,8\' size = \'$width$,8\' visible = \'$IsHeading$\'/\></Template>
<DataSource Name='CertificationsDataSource'>
<Data color='#FFFFFF' internationalize='WEAPONS' isheading='true' isnotheading='false' Name='Dummy1' width='182'/>
<Data color='#FFFFFF' internationalize='Happy go lucky' isheading='false' isnotheading='true' Name='Dummy2' width='182'/>
<Data color='#FFFFFF' internationalize='ARMOR' isheading='true' isnotheading='false' Name='Dummy3' width='182'/>
</DataSource>
</Page>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterSoldierName]' Location='0,4' MaxLines='1' Name='CharacterNameTitle' PackLocation='left,top' PackLocationProp='0000/0001,0004/0001' PackSize='absolute,fixed' PackSizeProp='0383/0001,0002/0003' ScrollExtent='201,14' Size='201,14'>@CharacterSoldierName</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='Character Name' Location='0,4' MaxLines='1' Name='CharacterName' ScrollExtent='203,14' Size='203,14' TextAlignment='Right' TextAlignmentVertical='Center' TruncateElipsis='false'>Character Name</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterBattleRank]' Location='0,30' MaxLines='1' Name='BattleRankTitle' ScrollExtent='173,14' Size='173,14'>@CharacterBattleRank</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='88' Location='173,30' MaxLines='1' Name='BattleRank' ScrollExtent='24,14' Size='24,14' TextAlignment='Right' TruncateElipsis='false'>88</Text>
<Progressbar BarBackgroundColor='#43ABAE' Location='0,49' Name='BattleProgressLarge' Progress='0.400' ScrollExtent='200,10' Size='200,10' Style='/ProgressBars.CharacterExperienceStep.style'/>
<Progressbar BarBackgroundColor='#43ABAE' Location='0,62' Name='BattleProgressSmall' Progress='0.750' ScrollExtent='200,6' Size='200,6' Style='/ProgressBars.CharacterExperienceContinuous.style'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterCommandRank]' Location='0,75' MaxLines='1' Name='CommandRankTitle' ScrollExtent='173,14' Size='173,14'>@CharacterCommandRank</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='88' Location='173,75' MaxLines='1' Name='CommandRank' ScrollExtent='24,14' Size='24,14' TextAlignment='Right' TruncateElipsis='false'>88</Text>
<Progressbar BarBackgroundColor='#4284B8' Location='0,94' Name='CommandProgressLarge' Progress='0.400' ScrollExtent='200,10' Size='200,10' Style='/ProgressBars.CharacterExperienceStep.style'/>
<Progressbar BarBackgroundColor='#4284B8' Location='0,107' Name='CommandProgressSmall' Progress='0.750' ScrollExtent='200,6' Size='200,6' Style='/ProgressBars.CharacterExperienceContinuous.style'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterCertificationPoints]' Location='0,125' MaxLines='1' Name='CertificationPointsTitle' ScrollExtent='173,28' Size='173,14'>@CharacterCertificationPoints</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='88' Location='173,125' MaxLines='1' Name='CertificationPoints' ScrollExtent='24,14' Size='24,14' TextAlignment='Right' TruncateElipsis='false'>88</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterGriefPoints]' Location='0,145' MaxLines='1' Name='GriefPointsTitle' ScrollExtent='158,14' Size='158,14'>@CharacterGriefPoints</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='8888' Location='145,145' MaxLines='1' Name='GriefPoints' ScrollExtent='52,14' Size='52,14' TextAlignment='Right' TruncateElipsis='false'>8888</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterBFRImprintStatus]' Location='5,170' MaxLines='1' Name='BFR Imprint StatusTitle' ScrollExtent='117,28' Size='117,14'>@CharacterBFRImprintStatus</Text>
<Page Location='0,184' Name='BFRImprintPage' ScrollExtent='201,63' Size='201,63'>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterCavernCaps]' Location='5,4' MaxLines='1' Name='Cavern Cap Title' ScrollExtent='173,14' Size='173,14'>@CharacterCavernCaps</Text>
<Progressbar BarBackgroundColor='#43ABAE' Location='5,21' Name='CavernCapProgress' Progress='0.600' ScrollExtent='125,6' Size='125,6' Style='/ProgressBars.CharacterExperienceContinuous.style'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='3/5' Location='151,16' MaxLines='1' Name='CavernCapProgressText' ScrollExtent='41,14' Size='41,14' TextAlignment='Right' TextAlignmentVertical='Center' TruncateElipsis='false'>3/5</Text>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterCavernKills]' Location='5,32' MaxLines='1' Name='Cavern Kill Title' ScrollExtent='173,14' Size='173,14'>@CharacterCavernKills</Text>
<Progressbar BarBackgroundColor='#4284B8' Location='5,49' Name='CavernKillProgress' Progress='0.932' ScrollExtent='125,6' Size='125,6' Style='/ProgressBars.CharacterExperienceContinuous.style'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='233/250' Location='133,45' MaxLines='1' Name='CavernKillProgressText' ScrollExtent='59,14' Size='59,14' TextAlignment='Right' TextAlignmentVertical='Center' TruncateElipsis='false'>233/250</Text>
</Page>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterBFRImprinted]' Location='21,205' MaxLines='1' Name='BFRImprintedText' ScrollExtent='158,14' Size='158,14' TextAlignment='Center' Visible='false'>@CharacterBFRImprinted</Text>
<Rectangle Color='#385E61' GetsInput='false' Location='0,177' Name='BFRStatusRect' ScrollExtent='201,71' Size='201,71'/>
<Text Font='/Fonts.HudFont2' GetsInput='false' LocalText='[@CharacterImplants]' Location='5,256' MaxLines='1' Name='Implant Title' ScrollExtent='173,14' Size='173,14'>@CharacterImplants</Text>
<Rectangle Location='25,277' Name='Implant1Rect' ScrollExtent='34,34' Size='34,34'/>
<Grid CellCount='1,1' CellSize='32,32' DataSource='Implant1Datasource' DragAccepts='Item,Shortcut' Location='26,278' Name='Implant1' ScrollExtent='32,32' Size='32,32' Style='/DefaultGrid.style'/>
<Progressbar Location='25,312' Name='Implant1Progress' Progress='0.400' ScrollExtent='23,10' Size='23,10' Style='/ProgressBars.CharacterImplant.style'/>
<Checkbox BackgroundOpacity='1.000' Location='49,312' Name='Implant1Check' ScrollExtent='10,10' Size='10,10' Style='/Buttons.CharacterImplantToggle.style'></Checkbox>
<Rectangle Location='83,277' Name='Implant2Rect' ScrollExtent='34,34' Size='34,34'/>
<Grid CellCount='1,1' CellSize='32,32' DataSource='Implant2Datasource' DragAccepts='Item,Shortcut' LocalTooltip='Personal Shield' Location='84,278' Name='Implant2' ScrollExtent='32,32' Size='32,32' Style='/DefaultGrid.style' Tooltip='Personal Shield'/>
<Progressbar Location='83,312' Name='Implant2Progress' Progress='1.000' ScrollExtent='23,10' Size='23,10' Style='/ProgressBars.CharacterImplant.style'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='107,312' Name='Implant2Check' ScrollExtent='10,10' Size='10,10' Style='/Buttons.CharacterImplantToggle.style'></Checkbox>
<Rectangle Location='141,277' Name='Implant3Rect' ScrollExtent='34,34' Size='34,34'/>
<Grid CellCount='1,1' CellSize='32,32' DataSource='Implant3Datasource' DragAccepts='Item,Shortcut' LocalTooltip='Advanced Targeting' Location='142,278' Name='Implant3' ScrollExtent='32,32' Size='32,32' Style='/DefaultGrid.style' Tooltip='Advanced Targeting'/>
<Progressbar Location='141,312' Name='Implant3Progress' ScrollExtent='23,10' Size='23,10' Style='/ProgressBars.CharacterImplant.style'/>
<Checkbox BackgroundOpacity='1.000' Enabled='false' Location='165,312' Name='Implant3Check' ScrollExtent='10,10' Size='10,10' Style='/Buttons.CharacterImplantToggle.style'></Checkbox>
<Rectangle Color='#385E61' GetsInput='false' Location='0,263' Name='ImplantsRect' ScrollExtent='201,64' Size='201,64' UserScrollable='false'/>
<Button LocalText='[@CharacterFlair]' Location='285,334' Name='FlairButton' PackLocation='right,bottom' PackLocationProp='-299/0001,-026/0001' ScrollExtent='147,20' Size='147,20' Style='/Buttons.TextButton.style'>@CharacterFlair</Button>
<Button LocalText='[@CharacterStats]' Location='437,334' Name='StatsButton' PackLocation='right,bottom' PackLocationProp='-147/0001,-026/0001' ScrollExtent='142,20' Size='142,20' Style='/Buttons.TextButton.style'>@CharacterStats</Button>
<DataSource Name='Implant1Datasource'>
<Data e='1,1' guid='1' l='0,0' Name='surge' opacity='1.0' t='/Icons.shortcut' tooltip='Surge'/>
</DataSource>
<DataSource Name='Implant2Datasource'>
<Data e='1,1' guid='2' imagecolor='#008800' l='0,0' Name='personal_shield' opacity='1.0' t='/Icons.shortcut' tooltip='Personal Shield'/>
</DataSource>
<DataSource Name='Implant3Datasource'>
<Data e='1,1' guid='3' l='0,0' Name='targeting' opacity='1.0' t='/Icons.shortcut' tooltip='Advanced Targeting'/>
</DataSource>
</Page>
<Page Location='18,70' Name='AchievementsPage' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0036/0001,0091/0001' ScrollExtent='584,359' Size='584,359' Visible='false'>
<RectangleStyle Center='AwardTextureCenter' Color='#000000' Name='AwardTexture'/>
<ImageStyle Name='AwardTextureCenter'>
<ImageFrame Source='ui_award_shadow' SourceRect='8,10,22,21'/>
</ImageStyle>
<ImageStyle Name='AwardBarStyle'>
<ImageFrame SourceRect='91,1,93,3'>
<ImageFragment Source='ui_shell_parts_00' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,0' Source='ui_shell_parts_01' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,64' Source='ui_shell_parts_02' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,64' Source='ui_shell_parts_03' SourceRect='0,0,64,64'/>
</ImageFrame>
</ImageStyle>
<Page BackgroundOpacity='0.722' Location='4,4' Name='DisplayAward1' PackLocation='left,top' PackLocationProp='0004/0001,0004/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='190,69' Size='190,69'>
<Page Location='25,16' Name='AwardIcon' ScrollExtent='140,34' Size='140,34'>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='AwardBorder' Opacity='0.750' RStyleDefault='/WindowPanes.AwardBorder.style' ScrollExtent='140,34' Size='140,34'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='AwardTextureImage' Opacity='0.800' RStyleDefault='AwardTexture' ScrollExtent='140,34' Size='140,34'/>
<Image Color='#0000FF' Name='Bar0' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#0000FF' Location='14,0' Name='Bar1' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#0000FF' Location='28,0' Name='Bar2' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#FF0000' Location='42,0' Name='Bar3' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Location='56,0' Name='Bar4' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Location='70,0' Name='Bar5' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#0000FF' Location='84,0' Name='Bar6' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#FF0000' Location='98,0' Name='Bar7' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#FF0000' Location='112,0' Name='Bar8' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#FF0000' Location='126,0' Name='Bar9' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
</Page>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Rookie Sniper Identifier' Location='0,36' Name='NameText' ScrollExtent='190,30' Size='190,30' TextAlignment='Center' TextAlignmentVertical='Bottom'>Rookie Sniper Identifier</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@DisplayAward1]' Name='TitleText' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='190,20' Size='190,20' TextAlignment='Center'>@DisplayAward1</Text>
<Rectangle Color='#808080' Name='AwardRect' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='190,69' Size='190,69'/>
</Page>
<Page BackgroundOpacity='0.722' Location='197,4' Name='DisplayAward2' PackLocation='center,top' PackLocationProp='-095/0001,0004/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='190,69' Size='190,69'>
<Page Location='25,16' Name='AwardIcon' ScrollExtent='140,34' Size='140,34'>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='AwardBorder' Opacity='0.750' RStyleDefault='/WindowPanes.AwardBorder.style' ScrollExtent='140,34' Size='140,34'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='AwardTextureImage' Opacity='0.800' RStyleDefault='AwardTexture' ScrollExtent='140,34' Size='140,34'/>
<Image Color='#0000FF' Name='Bar0' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#FFFF00' Location='14,0' Name='Bar1' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#FFFF00' Location='28,0' Name='Bar2' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#0000FF' Location='42,0' Name='Bar3' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#0000FF' Location='56,0' Name='Bar4' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#0000FF' Location='70,0' Name='Bar5' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#0000FF' Location='84,0' Name='Bar6' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#FFFF00' Location='98,0' Name='Bar7' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#FFFF00' Location='112,0' Name='Bar8' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#0000FF' Location='126,0' Name='Bar9' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
</Page>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Expert Sniper Certification' Location='0,36' Name='NameText' ScrollExtent='190,30' Size='190,30' TextAlignment='Center' TextAlignmentVertical='Bottom'>Expert Sniper Certification</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@DisplayAward2]' Name='TitleText' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='190,20' Size='190,20' TextAlignment='Center'>@DisplayAward2</Text>
<Rectangle Color='#808080' Name='AwardRect' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='190,69' Size='190,69'/>
</Page>
<Page BackgroundOpacity='0.722' Location='390,4' Name='DisplayAward3' PackLocation='right,top' PackLocationProp='-194/0001,0004/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='190,69' Size='190,69'>
<Page Location='25,16' Name='AwardIcon' ScrollExtent='140,34' Size='140,34'>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='AwardBorder' Opacity='0.750' RStyleDefault='/WindowPanes.AwardBorder.style' ScrollExtent='140,34' Size='140,34'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Name='AwardTextureImage' Opacity='0.800' RStyleDefault='AwardTexture' ScrollExtent='140,34' Size='140,34'/>
<Image Color='#FF0000' Name='Bar0' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Location='14,0' Name='Bar1' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#0000FF' Location='28,0' Name='Bar2' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#000000' Location='42,0' Name='Bar3' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#000000' Location='56,0' Name='Bar4' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#000000' Location='70,0' Name='Bar5' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#000000' Location='84,0' Name='Bar6' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#0000FF' Location='98,0' Name='Bar7' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Location='112,0' Name='Bar8' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
<Image Color='#FF0000' Location='126,0' Name='Bar9' ScrollExtent='14,34' Size='14,34' Style='AwardBarStyle'/>
</Page>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='Sniper Qualification Badge' Location='0,36' Name='NameText' ScrollExtent='190,30' Size='190,30' TextAlignment='Center' TextAlignmentVertical='Bottom'>Sniper Qualification Badge</Text>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont1' LocalText='[@DisplayAward3]' Name='TitleText' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='190,20' Size='190,20' TextAlignment='Center'>@DisplayAward3</Text>
<Rectangle Color='#808080' Name='AwardRect' PackLocation='left,top' PackLocationProp='0000/0001,0000/0001' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='190,69' Size='190,69'/>
</Page>
<Rectangle Color='#385E61' Location='2,2' Name='DisplayedAwardsRect' PackLocation='left,top' PackLocationProp='0002/0001,0002/0001' PackSize='absolute,fixed' PackSizeProp='0004/0001,0002/0003' ScrollExtent='580,73' Size='580,73' Visible='false'/>
<Button LocalText='[@AwardListHeadingDate]' Location='9,79' Name='DateHeading' ScrollExtent='85,20' Size='85,20' Style='/Buttons.ListboxHeading.style'>@AwardListHeadingDate</Button>
<Button GetsInput='false' LocalText='[@AwardListHeadingIcon]' Location='99,79' Name='IconHeading' ScrollExtent='70,20' Size='70,20' Style='/Buttons.ListboxHeading.style'>@AwardListHeadingIcon</Button>
<Button LocalText='[@AwardListHeadingName]' Location='174,79' Name='NameHeading' ScrollExtent='205,20' Size='205,20' Style='/Buttons.ListboxHeading.style'>@AwardListHeadingName</Button>
<Button LocalText='[@AwardListHeadingType]' Location='384,79' Name='TypeHeading' ScrollExtent='70,20' Size='70,20' Style='/Buttons.ListboxHeading.style'>@AwardListHeadingType</Button>
<Button LocalText='[@AwardListHeadingTitle]' Location='459,79' Name='TitleHeading' ScrollExtent='105,20' Size='105,20' Style='/Buttons.ListboxHeading.style'>@AwardListHeadingTitle</Button>
<Rectangle Color='#385E61' Location='2,77' Name='AwardListRect' PackLocation='left,top' PackLocationProp='0002/0001,0077/0001' PackSize='absolute,absolute' PackSizeProp='0004/0001,0110/0001' ScrollExtent='580,249' Size='580,249'/>
<Listbox DataSource='AwardList' Location='4,100' Name='AwardListbox' PackLocation='left,top' PackLocationProp='0004/0001,0100/0001' PackSize='absolute,absolute' PackSizeProp='0022/0001,0135/0001' RowTemplate='ListboxTemplate' ScrollExtent='562,224' Size='562,224' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='AwardListbox' Location='569,100' Name='ScrollAwardList' PackLocation='right,top' PackLocationProp='-015/0001,0100/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0135/0001' ScrollExtent='9,224' Size='9,224' Style='/ScrollBars.vertical.style'/>
<Template Name='ListboxTemplate' Size='560,20'>\<text font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'85,18\' textalignment = \'center\'\>
$DateReceived$
\</text\>
\<text font = \'/Fonts.HudFont2\' location = \'170,2\' maxlines = \'1\' size = \'205,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$AwardName$
\</text\>
\<text font = \'/Fonts.HudFont2\' location = \'380,2\' maxlines = \'1\' size = \'70,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$AwardLevelDisplay$
\</text\>
\<text font = \'/Fonts.HudFont2\' location = \'455,2\' maxlines = \'1\' size = \'105,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$AwardTitle$
\</text\>
\<Image backgroundopacity = \'0.000\' color = \'$Color0$\' location = \'100,4\' name = \'AwardBar0\' size = \'6,12\' style = \'/HUD.CharacterPane.AchievementsPage.AwardBarStyle\'/\>
\<Image backgroundopacity = \'0.000\' color = \'$Color1$\' location = \'106,4\' name = \'AwardBar1\' size = \'6,12\' style = \'/HUD.CharacterPane.AchievementsPage.AwardBarStyle\'/\>
\<Image backgroundopacity = \'0.000\' color = \'$Color2$\' location = \'112,4\' name = \'AwardBar2\' size = \'6,12\' style = \'/HUD.CharacterPane.AchievementsPage.AwardBarStyle\'/\>
\<Image backgroundopacity = \'0.000\' color = \'$Color3$\' location = \'118,4\' name = \'AwardBar3\' size = \'6,12\' style = \'/HUD.CharacterPane.AchievementsPage.AwardBarStyle\'/\>
\<Image backgroundopacity = \'0.000\' color = \'$Color4$\' location = \'124,4\' name = \'AwardBar4\' size = \'6,12\' style = \'/HUD.CharacterPane.AchievementsPage.AwardBarStyle\'/\>
\<Image backgroundopacity = \'0.000\' color = \'$Color5$\' location = \'130,4\' name = \'AwardBar5\' size = \'6,12\' style = \'/HUD.CharacterPane.AchievementsPage.AwardBarStyle\'/\>
\<Image backgroundopacity = \'0.000\' color = \'$Color6$\' location = \'136,4\' name = \'AwardBar6\' size = \'6,12\' style = \'/HUD.CharacterPane.AchievementsPage.AwardBarStyle\'/\>
\<Image backgroundopacity = \'0.000\' color = \'$Color7$\' location = \'142,4\' name = \'AwardBar7\' size = \'6,12\' style = \'/HUD.CharacterPane.AchievementsPage.AwardBarStyle\'/\>
\<Image backgroundopacity = \'0.000\' color = \'$Color8$\' location = \'148,4\' name = \'AwardBar8\' size = \'6,12\' style = \'/HUD.CharacterPane.AchievementsPage.AwardBarStyle\'/\>
\<Image backgroundopacity = \'0.000\' color = \'$Color9$\' location = \'154,4\' name = \'AwardBar9\' size = \'6,12\' style = \'/HUD.CharacterPane.AchievementsPage.AwardBarStyle\'/\></Template>
<DataSource Name='AwardList'>
<Data awardname='Order of Precision' awardtitle='Master Sniper' awardtype='Elite' color0='#00FF00' color1='#00FF00' color2='#FFFF00' color3='#FFFFFF' color4='#00FF00' color5='#00FF00' color6='#FFFFFF' color7='#FFFF00' color8='#00FF00' color9='#00FF00' datereceived='11.19.03' guid='105' Name='Award5' t='/Icons.award_ribbon'/>
<Data awardname='Expert Sniper Certification' awardtitle='Expert Sniper' awardtype='Advanced' color0='#0000FF' color1='#FFFF00' color2='#FFFF00' color3='#0000FF' color4='#0000FF' color5='#0000FF' color6='#0000FF' color7='#FFFF00' color8='#FFFF00' color9='#0000FF' datereceived='11.05.03' guid='104' Name='Award4' t='/Icons.award_ribbon'/>
<Data awardname='Advanced Sniper Award' awardtitle='Advanced Sniper' awardtype='Advanced' color0='#80FFFF' color1='#80FFFF' color2='#FFFF00' color3='#0000FF' color4='#FF0000' color5='#FF0000' color6='#0000FF' color7='#FFFF00' color8='#80FFFF' color9='#80FFFF' datereceived='11.02.03' guid='103' Name='Award3' t='/Icons.award_ribbon'/>
<Data awardname='Sniper Qualification Badge' awardtitle='Sniper' awardtype='Basic' color0='#408080' color1='#408080' color2='#404080' color3='#808000' color4='#80DE00' color5='#80DE00' color6='#808000' color7='#404080' color8='#408080' color9='#408080' datereceived='10.30.03' guid='102' Name='Award2' t='/Icons.award_ribbon'/>
<Data awardname='Rookie Sniper Identifier' awardtitle='Novice Sniper' awardtype='Basic' color0='#0000FF' color1='#0000FF' color2='#0000FF' color3='#FF0000' color4='#FFFFFF' color5='#FFFFFF' color6='#0000FF' color7='#FF0000' color8='#FF0000' color9='#FF0000' datereceived='10/10/2004' guid='101' Name='Award1' t='/Icons.award_ribbon'/>
</DataSource>
<Button LocalText='[@CharacterAwardProgress]' Location='237,334' Name='AwardProgressButton' PackLocation='center,bottom' PackLocationProp='-055/0001,-025/0001' ScrollExtent='109,20' Size='109,20' Style='/Buttons.TextButton.style'>@CharacterAwardProgress</Button>
</Page>
<Page Location='18,70' Name='EventPage' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0036/0001,0091/0001' ScrollExtent='584,359' Size='584,359' Visible='false'>
<Text AbsorbsInput='false' BackgroundColor='#00FF00' Color='#AFB9BA' Font='/Fonts.HudFont1' GetsInput='false' LocalText='[@TrainingEventInstruction]' Location='5,332' Name='InstructionText' PackLocation='left,bottom' PackLocationProp='0005/0001,-027/0001' PackSize='absolute,fixed' PackSizeProp='0240/0001,0002/0003' ScrollExtent='344,25' Size='344,25' TextAlignmentVertical='Center'>@TrainingEventInstruction</Text>
<Text Font='/Fonts.HudFont1' LocalText='[@BFRPilotHeader]' Location='215,5' Name='Header' PackLocation='right,top' PackLocationProp='-369/0001,0005/0001' ScrollExtent='337,18' Size='337,18' TextAlignment='Right'>@BFRPilotHeader</Text>
<Image BackgroundOpacity='1.000' Location='8,14' Name='Divider' PackLocation='left,top' PackLocationProp='0008/0001,0014/0001' PackSize='absolute,fixed' PackSizeProp='0024/0001,0002/0003' RStyleDefault='/Listboxes.ListboxContentHeader.style' ScrollExtent='560,8' Size='560,8'/>
<Rectangle Color='#385E61' Location='2,2' Name='EventListRect' PackLocation='left,top' PackLocationProp='0002/0001,0002/0001' PackSize='absolute,absolute' PackSizeProp='0006/0001,0035/0001' ScrollExtent='578,324' Size='578,324'/>
<Listbox DataSource='EventList' Location='4,25' Name='EventListbox' PackLocation='left,top' PackLocationProp='0004/0001,0025/0001' PackSize='absolute,absolute' PackSizeProp='0022/0001,0060/0001' RowTemplate='ListboxTemplate' ScrollExtent='562,299' Size='562,299' Style='/Listboxes.Generic.style'/>
<Scrollbar Control='EventListbox' Location='569,25' Name='ScrollEventList' PackLocation='right,top' PackLocationProp='-015/0001,0025/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0060/0001' ScrollExtent='9,299' Size='9,299' Style='/ScrollBars.vertical.style'/>
<Checkbox BackgroundOpacity='1.000' Location='368,336' Name='CompletedOn' PackLocation='center,bottom' PackLocationProp='0076/0001,-023/0001' ScrollExtent='71,22' Size='71,22' Style='/Buttons.LargeRadiobox.style'>@CHKON</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='452,335' Name='CompletedOff' PackLocation='center,bottom' PackLocationProp='0160/0001,-024/0001' ScrollExtent='88,22' Size='88,22' Style='/Buttons.LargeRadiobox.style'>@CHKOFF</Checkbox>
<Template Name='ListboxTemplate' Size='384,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'25,2\' maxlines = \'1\' size = \'$width$,18\' visible = \'$IsNotHeading$\'\>
$Internationalize$
\</text\>
\<Checkbox backgroundopacity = \'1.000\' checked = \'$ischecked$\' getsinput = \'false\' location = \'5,-2\' scrollextent = \'15,17\' size = \'15,17\' style = \'/Buttons.DefaultCheckbox.style\' visible = \'$IsNotHeading$\'\>
\</Checkbox\></Template>
<DataSource Name='EventList'>
<Data color='#FFFFFF' internationalize='Jimmy the Greek' isheading='false' isnotheading='true' Name='Event1' width='384'/>
</DataSource>
</Page>
<Page Location='18,70' Name='MissionPage' PackLocation='left,top' PackLocationProp='0018/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0036/0001,0091/0001' ScrollExtent='584,359' Size='584,359' Visible='false'>
<Text Font='/Fonts.HudFont1' LocalText='[@CharacterTrainingMissions]' Location='9,5' Name='Header' PackLocation='left,top' PackLocationProp='0009/0001,0005/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='283,18' Size='283,18' TextAlignment='Right'>@CharacterTrainingMissions</Text>
<Image BackgroundOpacity='1.000' Location='8,14' Name='Divider' PackLocation='left,top' PackLocationProp='0008/0001,0014/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' RStyleDefault='/Listboxes.ListboxContentHeader.style' ScrollExtent='299,8' Size='299,8'/>
<Rectangle Color='#385E61' Location='2,2' Name='MissionListRect' PackLocation='left,top' PackLocationProp='0002/0001,0002/0001' PackSize='absolute,absolute' PackSizeProp='0006/0001,0035/0001' ScrollExtent='578,324' Size='578,324'/>
<Listbox DataSource='Missions' Location='9,25' Name='MissionList' PackLocation='left,top' PackLocationProp='0009/0001,0025/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0065/0001' RowTemplate='ListboxTemplate' ScrollExtent='285,294' Size='285,294' Style='/Listboxes.Generic.style'/>
<Scrollbar Control='MissionList' Location='298,25' Name='MissionListScroll' PackLocation='left,top' PackLocationProp='0298/0001,0025/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0060/0001' ScrollExtent='9,299' Size='9,299' Style='/ScrollBars.vertical.style'/>
<Text Font='/Fonts.HudFont1' LocalText='[@CharacterMissionDescription]' Location='322,5' Name='Header' PackLocation='right,top' PackLocationProp='-262/0001,0005/0001' ScrollExtent='247,18' Size='247,18' TextAlignment='Right'>@CharacterMissionDescription</Text>
<Image BackgroundOpacity='1.000' Location='312,14' Name='Divider' PackLocation='left,top' PackLocationProp='0312/0001,0014/0001' PackSize='absolute,fixed' PackSizeProp='0316/0001,0002/0003' RStyleDefault='/Listboxes.ListboxContentHeader.style' ScrollExtent='268,8' Size='268,8'/>
<Rectangle Color='#385E61' Location='313,26' Name='MissionDescriptionRect' PackLocation='left,top' PackLocationProp='0313/0001,0026/0001' PackSize='absolute,absolute' PackSizeProp='0322/0001,0201/0001' ScrollExtent='262,158' Size='262,158'/>
<Text Font='/Fonts.HudFont2' LocalText='This is the mission description' Location='319,32' Name='MissionDescriptionText' PackLocation='left,top' PackLocationProp='0319/0001,0032/0001' PackSize='absolute,absolute' PackSizeProp='0344/0001,0215/0001' ScrollExtent='240,144' Size='240,144'>This is the mission description</Text>
<Scrollbar Control='MissionDescriptionText' Location='563,29' Name='MissionDescriptionScroll' PackLocation='right,top' PackLocationProp='-021/0001,0029/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0207/0001' ScrollExtent='9,152' Size='9,152' Style='/ScrollBars.vertical.style'/>
<Text Font='/Fonts.HudFont1' LocalText='[@CharacterMissionRequirements]' Location='322,183' Name='Header' PackLocation='right,bottom' PackLocationProp='-262/0001,-176/0001' ScrollExtent='247,18' Size='247,18' TextAlignment='Right'>@CharacterMissionRequirements</Text>
<Image BackgroundOpacity='1.000' Location='312,193' Name='Divider' PackLocation='left,bottom' PackLocationProp='0312/0001,-166/0001' PackSize='absolute,fixed' PackSizeProp='0316/0001,0002/0003' RStyleDefault='/Listboxes.ListboxContentHeader.style' ScrollExtent='268,8' Size='268,8'/>
<Rectangle Color='#385E61' Location='313,205' Name='MissionRequirementRect' PackLocation='left,bottom' PackLocationProp='0313/0001,-154/0001' PackSize='absolute,fixed' PackSizeProp='0322/0001,0002/0003' ScrollExtent='262,115' Size='262,115'/>
<Text Font='/Fonts.HudFont2' LocalText='These are the mission requirements' Location='319,211' Name='MissionRequirementText' PackLocation='left,bottom' PackLocationProp='0319/0001,-148/0001' PackSize='absolute,fixed' PackSizeProp='0344/0001,0002/0003' ScrollExtent='240,102' Size='240,102'>These are the mission requirements</Text>
<Scrollbar Control='MissionRequirementText' Location='563,208' Name='MissionRequirementScroll' PackLocation='right,bottom' PackLocationProp='-021/0001,-151/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='9,109' Size='9,109' Style='/ScrollBars.vertical.style'/>
<Button LocalText='[@CharacterMissionStart]' Location='232,334' Name='StartMission' PackLocation='center,bottom' PackLocationProp='-060/0001,-025/0001' ScrollExtent='120,20' Size='120,20' Style='/Buttons.TextButton.style'>@CharacterMissionStart</Button>
<Button LocalText='[@CharacterMissionShowStatus]' Location='232,334' Name='ShowMissionStatus' PackLocation='center,bottom' PackLocationProp='-060/0001,-025/0001' ScrollExtent='120,20' Size='120,20' Style='/Buttons.TextButton.style' Visible='false'>@CharacterMissionShowStatus</Button>
<Template Name='ListboxTemplate' Size='285,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'28,2\' maxlines = \'1\' size = \'$width$,18\' visible = \'$IsNotHeading$\'\>
$Internationalize$
\</text\>
\<Checkbox backgroundopacity = \'1.000\' checked = \'$ischecked$\' getsinput = \'false\' location = \'5,0\' scrollextent = \'15,17\' size = \'15,17\' style = \'/Buttons.DefaultCheckbox.style\' visible = \'$IsNotHeading$\'\>
\</Checkbox\></Template>
<DataSource Name='Missions'>
<Data color='#FFFFFF' internationalize='Foo' isheading='false' isnotheading='true' Name='Mission1' width='285'/>
</DataSource>
</Page>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='16,399' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0016/0001,-051/0001' PackSize='absolute,fixed' PackSizeProp='0033/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='587,31' Size='587,31'/>
<Button LocalText='[@Cancel]' Location='81,14' Name='HelpButton' PackLocation='left,top' PackLocationProp='0081/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='518,14' Name='CloseButton' PackLocation='right,top' PackLocationProp='-102/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='51,6' Name='Title' PackLocation='left,top' PackLocationProp='0051/0001,0006/0001' PackSize='absolute,fixed' PackSizeProp='0104/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='516,32' Size='516,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,20' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0021/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='620,429' Size='620,429' Stretch='false'/>
</Page>
