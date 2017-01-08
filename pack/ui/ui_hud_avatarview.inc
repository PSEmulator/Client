<Page HideSound='interface_pane_close2.wav' Location='537,235' movable='true' Name='AvatarView' PackLocation='center,center' PackLocationProp='0025/0001,-149/0001' ScrollExtent='455,280' ShowSound='interface_pane_open.wav' Size='455,280' Visible='false'>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Name='StealthArmor' ScrollExtent='281,171' Size='281,171' Visible='false'>
<Button LocalText='[@Cancel]' Location='206,10' Name='CloseButton' PackLocation='right,top' PackLocationProp='-075/0001,0010/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='53,9' Name='HelpButton' PackLocation='right,top' PackLocationProp='-228/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='77,7' Name='TitleText' ScrollExtent='124,20' Size='124,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='21,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='232,32' Size='232,32'/>
<Rectangle Color='#81C9D4' Location='25,36' Name='RightHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='133,36' Name='BackpackRect' ScrollExtent='103,103' Size='103,103' UserMovable='true'/>
<Grid CellCount='6,6' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='133,36' Name='Backpack' ScrollExtent='102,102' Size='103,103' Style='/DefaultGrid.style' UserMovable='true' UserScrollable='false'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='25,36' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-2,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0014/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='281,157' Size='281,157' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Name='HeavyArmor' ScrollExtent='325,282' Size='325,282' Visible='false'>
<Button LocalText='[@Cancel]' Location='254,9' Name='CloseButton' PackLocation='right,top' PackLocationProp='-071/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='64,9' Name='HelpButton' PackLocation='left,top' PackLocationProp='0064/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='52,6' Name='TitleText' ScrollExtent='224,20' Size='224,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='33,0' Name='Title' PackSize='absolute,fixed' PackSizeProp='0058/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='267,32' Size='267,32'/>
<Rectangle Color='#81C9D4' Location='27,36' Name='BackpackRect' PackSize='absolute,absolute' PackSizeProp='0052/0001,0076/0001' ScrollExtent='273,206' Size='273,206'/>
<Grid CellCount='16,12' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='27,36' Name='Backpack' ScrollExtent='272,204' Size='275,213' Style='/DefaultGrid.style' UserScrollable='false'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='2,14' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='325,262' Size='325,262' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Name='MediumArmor' ScrollExtent='405,232' Size='405,232' Visible='false'>
<Button LocalText='[@Cancel]' Location='309,9' Name='CloseButton' PackLocation='right,top' PackLocationProp='-096/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='96,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-309/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='114,7' Name='TitleText' ScrollExtent='192,20' Size='192,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='68,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='289,32' Size='289,32'/>
<Rectangle Color='#81C9D4' Location='23,143' Name='LeftBackHolsterRect' ScrollExtent='154,52' Size='154,52'/>
<Rectangle Color='#81C9D4' Location='23,90' Name='RightBackHolsterRect' ScrollExtent='154,52' Size='154,52'/>
<Rectangle Color='#81C9D4' Location='23,37' Name='RightHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='125,37' Name='LeftHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='178,37' Name='BackpackRect' ScrollExtent='205,154' Size='205,154'/>
<Grid CellCount='12,9' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='178,37' Name='Backpack' ScrollExtent='204,153' Size='205,154' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,143' Name='LeftBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,90' Name='RightBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,37' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='125,37' Name='LeftHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='0,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='405,212' Size='405,212' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Name='LightArmor' ScrollExtent='359,221' Size='359,221' Visible='false'>
<Button LocalText='[@Cancel]' Location='275,9' Name='CloseButton' PackLocation='right,top' PackLocationProp='-084/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Help]' Location='80,9' Name='HelpButton' PackLocation='right,top' PackLocationProp='-279/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Help</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='100,6' Name='TitleText' ScrollExtent='174,20' Size='174,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='52,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='270,32' Size='270,32'/>
<Rectangle Color='#81C9D4' Location='23,90' Name='RightBackHolsterRect' ScrollExtent='154,52' Size='154,52'/>
<Rectangle Color='#81C9D4' Location='23,37' Name='RightHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='125,37' Name='LeftHipHolsterRect' OnShowEffector='Effectors.ShowInventory' ScrollExtent='52,52' Size='52,52'/>
<Rectangle Color='#81C9D4' Location='179,36' Name='BackpackRect' ScrollExtent='154,154' Size='154,154'/>
<Grid CellCount='9,9' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='179,36' Name='Backpack' ScrollExtent='153,153' Size='154,154' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,90' Name='RightBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,37' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='125,37' Name='LeftHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-1,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0008/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='359,213' Size='359,213' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Name='StandardArmor' ScrollExtent='357,175' Size='357,175' Visible='false'>
<Button LocalText='[@Cancel]' Location='273,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-084/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='77,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-280/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='96,5' Name='TitleText' ScrollExtent='174,20' Size='174,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='50,-1' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='271,32' Size='271,32'/>
<Rectangle Color='#81C9D4' Location='23,92' Name='RightBackHolsterRect' Opacity='0.750' ScrollExtent='154,52' Size='154,52'/>
<Rectangle Color='#81C9D4' Location='23,39' Name='RightHipHolsterRect' Opacity='0.750' ScrollExtent='52,52' Size='52,52'/>
<Rectangle BackgroundOpacity='1.000' Color='#81C9D4' Location='178,41' Name='BackpackRect' Opacity='0.750' ScrollExtent='154,103' Size='154,103'/>
<Grid BackgroundColor='#FFFFFF' BackgroundOpacity='1.000' CellCount='9,6' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='178,41' Name='Backpack' ScrollExtent='153,102' Size='154,103' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,92' Name='RightBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,39' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-1,9' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0010/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='357,165' Size='357,165' SizeIncrement='1,0' Stretch='false'/>
</Page>
</Page>
