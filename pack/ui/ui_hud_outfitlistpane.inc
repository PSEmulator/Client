<Page Location='144,230' minsize='730,320' movable='true' Name='OutfitListPane' PackLocation='cfc,cfc' PackLocationProp='-003/0001,0006/0001' resizable='true' ScrollExtent='730,320' Size='730,320' Visible='false'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='[@OutfitListPane]' Location='101,14' MaxLines='1' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0014/0001' PackSize='absolute,fixed' PackSizeProp='0204/0001,0002/0003' ScrollExtent='526,17' Size='526,17' TextAlignment='Center'>@OutfitListPane</Text>
<Button LocalText='[@Cancel]' Location='630,14' Name='CloseButton' PackLocation='right,top' PackLocationProp='-100/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='78,14' Name='HelpButton' PackLocation='left,top' PackLocationProp='0078/0001,0014/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Button LocalText='[@OutfitListHeadingName]' Location='21,50' Name='NameHeading' PackLocation='left,top' PackLocationProp='0021/0001,0050/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='279,20' Size='279,20' Style='/Buttons.ListboxHeading.style'>@OutfitListHeadingName</Button>
<Button LocalText='[@OutfitListHeadingLeader]' Location='310,50' Name='LeaderHeading' PackLocation='left,top' PackLocationProp='0310/0001,0050/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='220,20' Size='220,20' Style='/Buttons.ListboxHeading.style'>@OutfitListHeadingLeader</Button>
<Button LocalText='[@OutfitListHeadingMembers]' Location='540,50' Name='MemberHeading' PackLocation='left,top' PackLocationProp='0540/0001,0050/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='71,20' Size='71,20' Style='/Buttons.ListboxHeading.style'>@OutfitListHeadingMembers</Button>
<Button LocalText='[@OutfitListHeadingPoints]' Location='620,50' Name='PointHeading' PackLocation='left,top' PackLocationProp='0620/0001,0050/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='80,20' Size='80,20' Style='/Buttons.ListboxHeading.style'>@OutfitListHeadingPoints</Button>
<Listbox AbsorbsInput='false' DataSource='/DataSources.OutfitListing' Enabled='false' Location='21,70' Name='OutfitListListbox' PackLocation='left,top' PackLocationProp='0021/0001,0070/0001' PackSize='absolute,absolute' PackSizeProp='0051/0001,0098/0001' RowTemplate='ListboxTemplate' ScrollExtent='679,222' Size='679,222' Style='/Listboxes.Clear.style'/>
<Scrollbar Control='OutfitListListbox' Location='706,70' Name='ScrollOutfitList' PackLocation='right,top' PackLocationProp='-024/0001,0070/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0098/0001' ScrollExtent='9,222' Size='9,222' Style='/ScrollBars.vertical.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='51,6' Name='Title' PackLocation='left,top' PackLocationProp='0051/0001,0006/0001' PackSize='absolute,fixed' PackSizeProp='0103/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='627,32' Size='627,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,20' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='730,300' Size='730,300' Stretch='false'/>
<Template Name='ListboxTemplate' Size='679,20'>\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'5,1\' maxlines = \'1\' size = \'275,20\'\>
$OutfitName$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'295,1\' maxlines = \'1\' size = \'215,20\' textalignment = \'Left\'\>
$OutfitLeader$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'525,1\' maxlines = \'1\' size = \'65,20\' textalignment = \'Center\'\>
$MemberCount$
\</text\>
\<text color = \'$color$\' font = \'/Fonts.HudFont2\' location = \'605,1\' maxlines = \'1\' size = \'70,20\' textalignment = \'Center\'\>
$Points$
\</text\></Template>
</Page>
