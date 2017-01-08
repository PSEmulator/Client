<Page Location='91,214' maxsize='800,1920' minsize='800,376' movable='true' Name='StatisticsPane' PackLocation='cfc,cfc' PackLocationProp='-021/0001,0045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' resizable='true' ScrollExtent='800,430' Size='800,430' Visible='false'>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Color='#385E61' Location='342,67' Name='TabBorderTop5' PackLocation='left,top' PackLocationProp='0342/0001,0067/0001' PackSize='absolute,fixed' PackSizeProp='0361/0001,0002/0003' ScrollExtent='439,2' Size='439,2' Style='TabBorderTopStyle'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Color='#385E61' Location='18,68' Name='TabBorder' PackSize='absolute,absolute' PackSizeProp='0036/0001,0089/0001' RStyleDefault='/WindowPanes.TabBorder.style' ScrollExtent='764,341' Size='764,341'/>
<Page Location='18,68' Name='AssistStats' PackLocation='left,top' PackLocationProp='0018/0001,0068/0001' PackSize='absolute,Absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='764,340' Size='764,340' Visible='false'>
<Rectangle Color='#385E61' GetsInput='false' Location='4,45' Name='DividerRect0' PackSize='absolute,fixed' PackSizeProp='0008/0001,0002/0003' ScrollExtent='756,1' Size='756,1'/>
<Text Font='/Fonts.HudFont2' LocalText='[@AssistItemTitle]' Location='4,5' MaxLines='2' Name='ItemTitle' ScrollExtent='193,34' Size='193,34' TextAlignment='Center' TextAlignmentVertical='Bottom'>@AssistItemTitle</Text>
<Rectangle Color='#385E61' GetsInput='false' Location='203,50' Name='DividerRect1' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,289' Size='1,289'/>
<Image Location='243,10' Name='Empire2Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_NC'/>
<Rectangle Color='#385E61' GetsInput='false' Location='312,50' Name='DividerRect2' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,289' Size='1,289'/>
<Image Location='354,10' Name='Empire1Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_TR'/>
<Rectangle Color='#385E61' GetsInput='false' Location='422,50' Name='DividerRect3' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,289' Size='1,289'/>
<Image Location='463,10' Name='Empire3Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_BO'/>
<Rectangle Color='#385E61' GetsInput='false' Location='532,50' Name='DividerRect4' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,289' Size='1,289'/>
<Text Font='/Fonts.HudFont2' LocalText='[@TotalAssistsTitle]' Location='532,5' MaxLines='2' Name='TotalAssistsTitle' ScrollExtent='110,34' Size='110,34' TextAlignment='Center' TextAlignmentVertical='Bottom'>@TotalAssistsTitle</Text>
<Rectangle Color='#385E61' GetsInput='false' Location='642,50' Name='DividerRect5' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,289' Size='1,289'/>
<Image Location='684,10' Name='Empire0Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_VS'/>
<Listbox DataSource='/DataSources.AssistStatistics' Location='2,48' Name='AssistStatsListbox' PackLocation='left,top' PackLocationProp='0002/0001,0048/0001' PackSize='absolute,absolute' PackSizeProp='0015/0001,0049/0001' RowTemplate='ListboxTemplate' ScrollExtent='749,291' Size='749,291' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='AssistStatsListbox' Location='751,48' Name='ScrollAssistStats' PackLocation='right,top' PackLocationProp='-013/0001,0048/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0049/0001' ScrollExtent='9,291' Size='9,291' Style='/ScrollBars.vertical.style'/>
<Template Name='ListboxTemplate' Size='749,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'190,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'205,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire2old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'260,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire2new$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'315,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire1old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'370,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire1new$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'425,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire3old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'480,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire3new$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'535,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$totalold$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'590,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$totalnew$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'645,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire0old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'700,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire0new$
\</text\></Template>
</Page>
<Checkbox BackgroundOpacity='1.000' Location='100,45' Name='AssistTab' ScrollExtent='82,24' Size='82,24' Style='/Buttons.WindowIconTab.style'>@StatsAssistTab</Checkbox>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@StatisticsTitle]' Location='101,13' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0013/0001' PackSize='absolute,fixed' PackSizeProp='0208/0001,0002/0003' ScrollExtent='592,20' Size='592,20' TextAlignment='Center' TextAlignmentVertical='Center'>@StatisticsTitle</Text>
<Checkbox BackgroundOpacity='1.000' Location='18,45' Name='KillTab' ScrollExtent='83,24' Size='83,24' Style='/Buttons.WindowIconTab.style'>@StatsKillTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='181,45' Name='FacilityTab' ScrollExtent='82,24' Size='82,24' Style='/Buttons.WindowIconTab.style'>@StatsFacilityTab</Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='262,45' Name='SupportTab' ScrollExtent='80,24' Size='80,24' Style='/Buttons.WindowIconTab.style'>@StatsSupportTab</Checkbox>
<Page Location='18,68' Name='KillStats' PackLocation='left,top' PackLocationProp='0018/0001,0068/0001' PackSize='absolute,Absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='764,340' Size='764,340'>
<Rectangle Color='#385E61' GetsInput='false' Location='4,45' Name='DividerRect0' PackSize='absolute,fixed' PackSizeProp='0008/0001,0002/0003' ScrollExtent='756,1' Size='756,1'/>
<Text Font='/Fonts.HudFont2' LocalText='[@KillItemTitle]' Location='4,5' MaxLines='2' Name='ItemTitle' ScrollExtent='197,34' Size='197,34' TextAlignment='Center' TextAlignmentVertical='Bottom'>@KillItemTitle</Text>
<Rectangle Color='#385E61' GetsInput='false' Location='203,50' Name='DividerRect1' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,289' Size='1,289'/>
<Image Location='243,10' Name='Empire2Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_NC'/>
<Rectangle Color='#385E61' GetsInput='false' Location='312,50' Name='DividerRect2' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,289' Size='1,289'/>
<Image Location='354,10' Name='Empire1Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_TR'/>
<Rectangle Color='#385E61' GetsInput='false' Location='422,50' Name='DividerRect3' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,289' Size='1,289'/>
<Image Location='463,10' Name='Empire3Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_BO'/>
<Rectangle Color='#385E61' GetsInput='false' Location='532,50' Name='DividerRect4' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,289' Size='1,289'/>
<Text Font='/Fonts.HudFont2' LocalText='[@TotalKillsTitle]' Location='537,5' MaxLines='2' Name='TotalKillsTitle' ScrollExtent='100,34' Size='100,34' TextAlignment='Center' TextAlignmentVertical='Bottom'>@TotalKillsTitle</Text>
<Rectangle Color='#385E61' GetsInput='false' Location='642,50' Name='DividerRect5' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,289' Size='1,289'/>
<Image Location='684,10' Name='Empire0Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_VS'/>
<Listbox DataSource='/DataSources.KillStatistics' Location='2,48' Name='KillStatsListbox' PackLocation='left,top' PackLocationProp='0002/0001,0048/0001' PackSize='absolute,absolute' PackSizeProp='0015/0001,0049/0001' RowTemplate='ListboxTemplate' ScrollExtent='749,291' Size='749,291' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='KillStatsListbox' Location='751,48' Name='ScrollKillStats' PackLocation='right,top' PackLocationProp='-013/0001,0048/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0049/0001' ScrollExtent='9,291' Size='9,291' Style='/ScrollBars.vertical.style'/>
<Template Name='ListboxTemplate' Size='749,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'190,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'205,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire2old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'260,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire2new$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'315,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire1old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'370,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire1new$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'425,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire3old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'480,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire3new$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'535,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$totalold$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'590,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$totalnew$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'645,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire0old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'700,2\' maxlines = \'1\' size = \'45,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire0new$
\</text\></Template>
</Page>
<Page Location='18,68' Name='FacilityStats' PackLocation='left,top' PackLocationProp='0018/0001,0068/0001' PackSize='absolute,Absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='764,340' Size='764,340' Visible='false'>
<Rectangle Color='#385E61' GetsInput='false' Location='4,45' Name='DividerRect0' PackSize='absolute,fixed' PackSizeProp='0008/0001,0002/0003' ScrollExtent='756,1' Size='756,1'/>
<Text Font='/Fonts.HudFont2' LocalText='[@FacilityItemTitle]' Location='4,5' MaxLines='2' Name='ItemTitle' ScrollExtent='354,34' Size='354,34' TextAlignment='Center' TextAlignmentVertical='Bottom'>@FacilityItemTitle</Text>
<Rectangle Color='#385E61' GetsInput='false' Location='358,50' Name='DividerRect1' PackSize='fixed,absolute' PackSizeProp='0002/0003,0052/0001' ScrollExtent='1,288' Size='1,288'/>
<Image Location='412,10' Name='Empire2Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_NC'/>
<Rectangle Color='#385E61' GetsInput='false' Location='488,50' Name='DividerRect2' PackSize='fixed,absolute' PackSizeProp='0002/0003,0052/0001' ScrollExtent='1,288' Size='1,288'/>
<Image Location='539,10' Name='Empire1Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_TR'/>
<Rectangle Color='#385E61' GetsInput='false' Location='618,50' Name='DividerRect3' PackSize='fixed,absolute' PackSizeProp='0002/0003,0052/0001' ScrollExtent='1,288' Size='1,288'/>
<Text Font='/Fonts.HudFont2' LocalText='[@TotalFacilitiesTitle]' Location='625,5' MaxLines='2' Name='TotalKillsTitle' ScrollExtent='123,34' Size='123,34' TextAlignment='Center' TextAlignmentVertical='Bottom'>@TotalFacilitiesTitle</Text>
<Listbox DataSource='/DataSources.FacilityStatistics' Location='2,48' Name='FacilityStatsListbox' PackLocation='left,top' PackLocationProp='0002/0001,0048/0001' PackSize='absolute,absolute' PackSizeProp='0015/0001,0050/0001' RowTemplate='ListboxTemplate' ScrollExtent='749,290' Size='749,290' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='FacilityStatsListbox' Location='751,48' Name='ScrollFacilityStats' PackLocation='right,top' PackLocationProp='-013/0001,0048/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0050/0001' ScrollExtent='9,290' Size='9,290' Style='/ScrollBars.vertical.style'/>
<Template Name='ListboxTemplate' Size='749,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'350,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'370,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire2old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'425,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire2new$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'500,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire1old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'555,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire1new$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'630,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$totalold$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'685,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$totalnew$
\</text\></Template>
</Page>
<Page Location='18,68' Name='SupportStats' PackLocation='left,top' PackLocationProp='0018/0001,0068/0001' PackSize='absolute,Absolute' PackSizeProp='0036/0001,0090/0001' ScrollExtent='764,340' Size='764,340' Visible='false'>
<Rectangle Color='#385E61' GetsInput='false' Location='4,45' Name='DividerRect0' PackSize='absolute,fixed' PackSizeProp='0008/0001,0002/0003' ScrollExtent='756,1' Size='756,1'/>
<Text Font='/Fonts.HudFont2' LocalText='[@SupportItemTitle]' Location='4,5' MaxLines='2' Name='ItemTitle' ScrollExtent='354,34' Size='354,34' TextAlignment='Center' TextAlignmentVertical='Bottom'>@SupportItemTitle</Text>
<Rectangle Color='#385E61' GetsInput='false' Location='358,50' Name='DividerRect1' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,289' Size='1,289'/>
<Image Location='412,10' Name='Empire0Logo' ScrollExtent='28,31' Size='28,31' Stretch='false' Style='/Icons.HUD.Mini_logo_VS'/>
<Rectangle Color='#385E61' GetsInput='false' Location='488,50' Name='DividerRect2' PackSize='fixed,absolute' PackSizeProp='0002/0003,0051/0001' ScrollExtent='1,289' Size='1,289'/>
<Listbox DataSource='/DataSources.SupportStatistics' Location='2,48' Name='SupportStatsListbox' PackLocation='left,top' PackLocationProp='0002/0001,0048/0001' PackSize='absolute,absolute' PackSizeProp='0015/0001,0049/0001' RowTemplate='ListboxTemplate' ScrollExtent='749,291' Size='749,291' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='SupportStatsListbox' Location='751,48' Name='ScrollSupportStats' PackLocation='right,top' PackLocationProp='-013/0001,0048/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0049/0001' ScrollExtent='9,291' Size='9,291' Style='/ScrollBars.vertical.style'/>
<Template Name='ListboxTemplate' Size='749,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,2\' maxlines = \'1\' size = \'350,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$Internationalize$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'370,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire0old$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'425,2\' maxlines = \'1\' size = \'50,18\' textalignment = \'center\' truncateelipsis = \'false\'\>
$empire0new$
\</text\></Template>
</Page>
<Button LocalText='[@Cancel]' Location='81,14' Name='HelpButton' PackLocation='left,top' PackLocationProp='0081/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='698,14' Name='CloseButton' PackLocation='right,top' PackLocationProp='-102/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Location='51,6' Name='Title' PackLocation='left,top' PackLocationProp='0051/0001,0006/0001' PackSize='absolute,fixed' PackSizeProp='0104/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='696,32' Size='696,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Location='0,20' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0021/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='800,409' Size='800,409' Stretch='false'/>
</Page>
