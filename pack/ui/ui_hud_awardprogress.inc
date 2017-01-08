<Page Location='140,230' MinimumSize='730,347' minsize='730,347' movable='true' Name='AwardProgress' PackLocation='cfc,cfc' PackLocationProp='-007/0001,0019/0001' resizable='true' ScrollExtent='730,347' Size='730,347' Visible='false'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' GetsInput='false' LocalText='Sniper II: To achieve the Sniper II designation, you must kill a total of 300 enemies with a Bolt Driver and subsequently kill 20 enemies without the need for re-matrixing. You have qualified for this designation. I\'m adding more text here to wrap this to a third line.' Location='24,282' MaxLines='3' Name='DescriptionText' PackLocation='left,bottom' PackLocationProp='0024/0001,-065/0001' PackSize='absolute,fixed' PackSizeProp='0048/0001,0002/0003' ScrollExtent='682,45' Size='682,45' TextAlignment='Center' TextAlignmentVertical='Center'>Sniper II: To achieve the Sniper II designation, you must kill a total of 300 enemies with a Bolt Driver and subsequently kill 20 enemies without the need for re-matrixing. You have qualified for this designation. I\'m adding more text here to wrap this to a third line.</Text>
<Rectangle Color='#81C9D4' GetsInput='false' Location='18,281' Name='AwardRect' PackLocation='left,bottom' PackLocationProp='0018/0001,-066/0001' PackSize='absolute,fixed' PackSizeProp='0036/0001,0002/0003' ScrollExtent='694,47' Size='694,47'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@AwardProgressPane]' Location='101,14' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0014/0001' PackSize='absolute,fixed' PackSizeProp='0204/0001,0002/0003' ScrollExtent='526,17' Size='526,17' TextAlignment='Center'>@AwardProgressPane</Text>
<Button LocalText='[@Cancel]' Location='630,14' Name='CloseButton' PackLocation='right,top' PackLocationProp='-100/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='78,14' Name='HelpButton' PackLocation='left,top' PackLocationProp='0078/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Button LocalText='[@AchievementListHeadingName]' Location='20,50' Name='NameHeading' ScrollExtent='305,20' Size='305,20' Style='/Buttons.ListboxHeading.style'>@AchievementListHeadingName</Button>
<Button LocalText='[@AchievementListHeadingLevel]' Location='330,50' Name='LevelHeading' ScrollExtent='100,20' Size='100,20' Style='/Buttons.ListboxHeading.style'>@AchievementListHeadingLevel</Button>
<Button LocalText='[@AchievementListHeadingType]' Location='435,50' Name='TypeHeading' ScrollExtent='120,20' Size='120,20' Style='/Buttons.ListboxHeading.style'>@AchievementListHeadingType</Button>
<Button AbsorbsInput='false' GetsInput='false' LocalText='[@AchievementListHeadingProgress]' Location='560,50' Name='ProgressHeading' ScrollExtent='140,20' Size='140,20' Style='/Buttons.ListboxHeading.style'>@AchievementListHeadingProgress</Button>
<Listbox DataSource='AchievementsDS' Location='20,70' Name='AchievementsList' PackLocation='left,top' PackLocationProp='0020/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0050/0001,0140/0001' RowTemplate='ListboxTemplate' ScrollExtent='680,207' Size='680,207' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='AchievementsList' Location='706,70' Name='ScrollAchievements' PackLocation='right,top' PackLocationProp='-024/0001,0070/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0140/0001' ScrollExtent='9,207' Size='9,207' Style='/ScrollBars.vertical.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='51,6' Name='Title' PackLocation='left,top' PackLocationProp='0051/0001,0006/0001' PackSize='absolute,fixed' PackSizeProp='0103/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='627,32' Size='627,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,20' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='730,327' Size='730,327' Stretch='false'/>
<Template Name='ListboxTemplate' Size='679,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,1\' maxlines = \'1\' size = \'295,20\' textalignment = \'Left\'\>
$AwardName$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'310,1\' maxlines = \'1\' size = \'100,20\' textalignment = \'Center\'\>
$Level$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'415,1\' maxlines = \'1\' size = \'120,20\' textalignment = \'Center\'\>
$Type$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'540,1\' maxlines = \'1\' size = \'140,20\' textalignment = \'Center\'\>
$Progress$
\</text\></Template>
<DataSource Name='AchievementsDS'>
<Data awardid='122' color='#FFFFFF' desc='Knife I: To achieve the Knife I ...' level='Basic' Name='Knife I' progress='Completed' reqs='100 Kills with a Knife' status='1' type='Weapons'/>
<Data awardid='200' color='#808080' desc='BW I: To achieve this ...' level='Basic' Name='Basket Weaving I' progress='Not Qualified' reqs='Make 100 baskets' status='0' type='Support'/>
<Data awardid='101' color='#FFFFFF' desc='Sniper II: To achieve the Sniper II designation, you must kill a total of 300 enemies with a Bolt Driver and subsequently kill 20 enemies without the need for re-matrixing. You have qualified for this designation. I\'m adding more text here to wrap this to a third line.' level='Advanced' Name='Sniper II' progress='Qualified / 12' reqs='300/20 Kills with a Bolt Driver' status='2' type='Heavy Weapons'/>
<Data awardid='100' color='#FFFFFF' desc='Sniper I: To achieve the Sniper I ...' level='Basic' Name='Sniper I' progress='Completed' reqs='100 Kills with a Bolt Driver' status='1' type='Weapons'/>
</DataSource>
</Page>
