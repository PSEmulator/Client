<Page Location='292,200' minsize='400,344' movable='true' Name='OutfitCreationPane' PackLocation='cfc,cfc' PackLocationProp='0000/0001,-009/0001' resizable='true' ScrollExtent='440,350' Size='440,350' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@OutfitCreationPane]' Location='101,14' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0014/0001' PackSize='absolute,fixed' PackSizeProp='0204/0001,0002/0003' ScrollExtent='236,17' Size='236,17' TextAlignment='Center'>@OutfitCreationPane</Text>
<Button LocalText='[@Cancel]' Location='81,14' Name='HelpButton' PackLocation='left,top' PackLocationProp='0081/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Button IsCancelButton='true' LocalText='[@Cancel]' Location='340,14' Name='CloseButton' PackLocation='right,top' PackLocationProp='-100/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='Squad Name' Location='18,43' MaxLines='1' Name='SquadName' PackLocation='left,top' PackLocationProp='0018/0001,0043/0001' PackSize='absolute,fixed' PackSizeProp='0034/0001,0002/0003' ScrollExtent='406,17' Size='406,17' TextAlignment='Center'>Squad Name</Text>
<Listbox AbsorbsInput='false' DataSource='/DataSources.OutfitCreationList' GetsInput='false' Location='16,65' Name='OutfitListbox' PackLocation='left,top' PackLocationProp='0016/0001,0065/0001' PackSize='absolute,absolute' PackSizeProp='0042/0001,0149/0001' RowTemplate='ListboxTemplate' ScrollExtent='409,201' Size='398,201' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='OutfitListbox' Location='413,65' Name='ScrollOutfitList' PackLocation='right,top' PackLocationProp='-027/0001,0065/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0149/0001' ScrollExtent='9,201' Size='9,201' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='0:10' Location='20,272' MaxLines='1' Name='CreationStatus' PackLocation='left,bottom' PackLocationProp='0020/0001,-078/0001' PackSize='absolute,fixed' PackSizeProp='0038/0001,0002/0003' ScrollExtent='402,23' Size='402,23' TextAlignment='Center' TextAlignmentVertical='Center' TruncateElipsis='false'>0:10</Text>
<Button LocalText='[@OK]' Location='21,305' Name='OkButton' PackLocation='Center,bottom' PackLocationProp='-199/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@OK</Button>
<Button LocalText='[@Cancel]' Location='344,305' Name='CancelButton' PackLocation='center,bottom' PackLocationProp='0124/0001,-045/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='51,6' Name='Title' PackLocation='left,top' PackLocationProp='0051/0001,0006/0001' PackSize='absolute, fixed' PackSizeProp='0103/0001,xxxx/xxxx' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='337,32' Size='337,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='15,300' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0015/0001,-050/0001' PackSize='absolute,fixed' PackSizeProp='0031/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='409,31' Size='409,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='16,268' Name='InfoBorder' PackLocation='left,bottom' PackLocationProp='0016/0001,-082/0001' PackSize='absolute,fixed' PackSizeProp='0031/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='409,31' Size='409,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,20' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='440,330' Size='440,330' Stretch='false'/>
<Template Name='ListboxTemplate' Size='409,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,1\' maxlines = \'1\' size = \'25,20\' textalignment = \'right\' truncateelipsis = \'false\'\>
$MemberID$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'40,1\' maxlines = \'1\' size = \'320,20\'\>
$Internationalize$
\</text\>
\<text color = \'#00FF00\' font = \'/Fonts.ButtonIcons\' location = \'360,1\' maxlines = \'1\' size = \'32,20\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$hasAccepted$\'\>
i
\</text\>
\<text color = \'#FF0000\' font = \'/Fonts.ButtonIcons\' location = \'360,1\' maxlines = \'1\' size = \'32,20\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$hasDeclined$\'\>
j
\</text\>
\<text color = \'#CCCCCC\' font = \'/Fonts.ButtonIcons\' location = \'360,1\' maxlines = \'1\' size = \'32,20\' textalignment = \'right\' truncateelipsis = \'false\' visible = \'$hasNotReplied$\'\>
G
\</text\></Template>
</Page>
