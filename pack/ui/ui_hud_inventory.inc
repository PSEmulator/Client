<Page HideSound='interface_pane_close2.wav' Location='427,226' movable='true' Name='Inventory' PackLocation='right,cfc' PackLocationProp='-597/0001,0039/0001' ScrollExtent='405,395' ShowSound='interface_pane_open.wav' Size='405,395'>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Name='SoldierStandardArmor' ScrollExtent='357,211' Size='357,211' Visible='false'>
<Button LocalText='[@Cancel]' Location='273,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-084/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='77,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-280/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='96,5' Name='TitleText' ScrollExtent='174,20' Size='174,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='50,-1' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='271,32' Size='271,32'/>
<Button LocalText='[@UseItem]' Location='24,154' Name='btn_use' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@UseItem</Button>
<Button LocalText='[@DropItem]' Location='102,154' Name='btn_drop' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DropItem</Button>
<Button LocalText='[@DestroyItem]' Location='179,154' Name='btn_destroy' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DestroyItem</Button>
<Button LocalText='[@ClearInventory]' Location='256,154' Name='btn_clear' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@ClearInventory</Button>
<Page Location='80,51' Name='KnifeHolster' ScrollExtent='40,40' Size='40,40'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='5' Location='2,22' Name='KnifeText' ScrollExtent='35,20' Size='35,20' TextAlignmentVertical='Center'>5</Text>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Name='Rect' Opacity='0.750' ScrollExtent='40,40' Size='40,40'/>
<Grid CellCount='1,1' CellSize='40,40' DataSource='/DataSources.Inventory' Name='KnifeHolster' ScrollExtent='40,40' Size='40,40' Style='/DefaultGrid.style' UserScrollable='false'/>
<Image AbsorbsInput='false' BackgroundColor='#FFFFFF' BackgroundOpacity='0.200' Location='1,1' Name='Background' ScrollExtent='38,38' Size='38,38'/>
</Page>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='2' Location='25,126' Name='RightBackText' ScrollExtent='150,20' Size='150,20' TextAlignmentVertical='Center'>2</Text>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='1' Location='25,73' Name='RightHipText' ScrollExtent='48,20' Size='48,20' TextAlignmentVertical='Center'>1</Text>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='23,92' Name='RightBackHolsterRect' Opacity='0.750' ScrollExtent='154,52' Size='154,52'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='23,39' Name='RightHipHolsterRect' Opacity='0.750' ScrollExtent='52,52' Size='52,52'/>
<Rectangle AbsorbsInput='false' BackgroundOpacity='1.000' Color='#81C9D4' GetsInput='false' Location='178,41' Name='BackpackRect' Opacity='0.750' ScrollExtent='154,103' Size='154,103'/>
<Grid BackgroundColor='#FFFFFF' BackgroundOpacity='1.000' CellCount='9,6' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='178,41' Name='Backpack' ScrollExtent='153,102' Size='154,103' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,92' Name='RightBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,39' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='18,149' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='317,31' Size='317,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-1,9' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0010/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='357,201' Size='357,201' SizeIncrement='1,0' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Name='SoldierLightArmor' ScrollExtent='359,253' Size='359,253' Visible='false'>
<Button LocalText='[@Cancel]' Location='275,9' Name='CloseButton' PackLocation='right,top' PackLocationProp='-084/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Help]' Location='80,9' Name='HelpButton' PackLocation='right,top' PackLocationProp='-279/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Help</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='100,6' Name='TitleText' ScrollExtent='174,20' Size='174,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='52,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='270,32' Size='270,32'/>
<Button LocalText='[@UseItem]' Location='25,200' Name='btn_use' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@UseItem</Button>
<Button LocalText='[@DropItem]' Location='103,200' Name='btn_drop' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DropItem</Button>
<Button LocalText='[@DestroyItem]' Location='180,200' Name='btn_destroy' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DestroyItem</Button>
<Button LocalText='[@ClearInventory]' Location='257,200' Name='btn_clear' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@ClearInventory</Button>
<Page Location='80,49' Name='KnifeHolster' ScrollExtent='40,40' Size='40,40'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='5' Location='2,22' Name='KnifeText' ScrollExtent='35,20' Size='35,20' TextAlignmentVertical='Center'>5</Text>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Name='Rect' Opacity='0.750' ScrollExtent='40,40' Size='40,40'/>
<Grid CellCount='1,1' CellSize='40,40' DataSource='/DataSources.Inventory' Name='KnifeHolster' ScrollExtent='40,40' Size='40,40' Style='/DefaultGrid.style' UserScrollable='false'/>
<Image AbsorbsInput='false' BackgroundColor='#FFFFFF' BackgroundOpacity='0.200' Location='1,1' Name='Background' ScrollExtent='38,38' Size='38,38'/>
</Page>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='1' Location='25,71' Name='RightHipText' ScrollExtent='48,20' Size='48,20' TextAlignmentVertical='Center'>1</Text>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='3' Location='127,71' Name='LeftHipText' ScrollExtent='48,20' Size='48,20' TextAlignmentVertical='Center'>3</Text>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='2' Location='25,124' Name='RightBackText' ScrollExtent='150,20' Size='150,20' TextAlignmentVertical='Center'>2</Text>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='23,90' Name='RightBackHolsterRect' ScrollExtent='154,52' Size='154,52'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='23,37' Name='RightHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='125,37' Name='LeftHipHolsterRect' OnShowEffector='Effectors.ShowInventory' ScrollExtent='52,52' Size='52,52'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='179,36' Name='BackpackRect' ScrollExtent='154,154' Size='154,154'/>
<Grid CellCount='9,9' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='179,36' Name='Backpack' ScrollExtent='153,153' Size='154,154' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,90' Name='RightBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,37' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='125,37' Name='LeftHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='19,195' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='317,31' Size='317,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-1,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0011/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='359,242' Size='359,242' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Name='SoldierMediumArmor' ScrollExtent='405,266' Size='405,266' Visible='false'>
<Button LocalText='[@Cancel]' Location='309,9' Name='CloseButton' PackLocation='right,top' PackLocationProp='-096/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='96,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-309/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='114,7' Name='TitleText' ScrollExtent='192,20' Size='192,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='68,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='289,32' Size='289,32'/>
<Button LocalText='[@UseItem]' Location='26,204' Name='btn_use' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@UseItem</Button>
<Button LocalText='[@DropItem]' Location='118,204' Name='btn_drop' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DropItem</Button>
<Button LocalText='[@DestroyItem]' Location='211,204' Name='btn_destroy' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DestroyItem</Button>
<Button LocalText='[@ClearInventory]' Location='305,204' Name='btn_clear' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@ClearInventory</Button>
<Page Location='80,49' Name='KnifeHolster' ScrollExtent='40,40' Size='40,40'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='5' Location='2,22' Name='KnifeText' ScrollExtent='35,20' Size='35,20' TextAlignmentVertical='Center'>5</Text>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Name='Rect' Opacity='0.750' ScrollExtent='40,40' Size='40,40'/>
<Grid CellCount='1,1' CellSize='40,40' DataSource='/DataSources.Inventory' Name='KnifeHolster' ScrollExtent='40,40' Size='40,40' Style='/DefaultGrid.style' UserScrollable='false'/>
<Image AbsorbsInput='false' BackgroundColor='#FFFFFF' BackgroundOpacity='0.200' Location='1,1' Name='Background' ScrollExtent='38,38' Size='38,38'/>
</Page>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='1' Location='25,71' Name='RightHipText' ScrollExtent='48,20' Size='48,20' TextAlignmentVertical='Center'>1</Text>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='3' Location='127,71' Name='LeftHipText' ScrollExtent='48,20' Size='48,20' TextAlignmentVertical='Center'>3</Text>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='2' Location='25,124' Name='RightBackText' ScrollExtent='150,20' Size='150,20' TextAlignmentVertical='Center'>2</Text>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='4' Location='26,177' Name='LeftBackText' ScrollExtent='150,20' Size='150,20' TextAlignmentVertical='Center'>4</Text>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='23,143' Name='LeftBackHolsterRect' ScrollExtent='154,52' Size='154,52'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='23,90' Name='RightBackHolsterRect' ScrollExtent='154,52' Size='154,52'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='23,37' Name='RightHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='125,37' Name='LeftHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='178,37' Name='BackpackRect' ScrollExtent='205,154' Size='205,154'/>
<Grid CellCount='12,9' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='178,37' Name='Backpack' ScrollExtent='204,153' Size='205,154' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,143' Name='LeftBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='9,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,90' Name='RightBackHolster' ScrollExtent='153,765' Size='154,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='23,37' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='125,37' Name='LeftHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='22,199' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='362,31' Size='362,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='0,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0020/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='405,246' Size='405,246' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Name='SoldierHeavyArmor' ScrollExtent='355,395' Size='355,395' Visible='false'>
<Button LocalText='[@UseItem]' Location='25,339' Name='btn_use' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@UseItem</Button>
<Button LocalText='[@DropItem]' Location='103,339' Name='btn_drop' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DropItem</Button>
<Button LocalText='[@DestroyItem]' Location='180,339' Name='btn_destroy' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DestroyItem</Button>
<Button LocalText='[@ClearInventory]' Location='257,339' Name='btn_clear' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@ClearInventory</Button>
<Button LocalText='[@Cancel]' Location='274,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-081/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='73,8' Name='HelpButton' PackLocation='right,top' PackLocationProp='-282/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='95,7' Name='TitleText' PackSize='absolute,fixed' PackSizeProp='0180/0001,0002/0003' ScrollExtent='175,20' Size='175,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='41,0' Name='Title' PackSize='absolute,fixed' PackSizeProp='0072/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='283,32' Size='283,32'/>
<Image AbsorbsInput='false' BackgroundColor='#FFFFFF' BackgroundOpacity='0.200' Location='83,34' Name='BlockLeftHipHolster' ScrollExtent='188,86' Size='188,86'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='83,34' Name='RightHipHolsterRect' ScrollExtent='188,86' Size='188,86'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='40,124' Name='BackpackRect' ScrollExtent='275,205' Size='275,205'/>
<Grid CellCount='16,12' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='40,124' Name='Backpack' ScrollExtent='272,204' Size='275,205' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid AbsorbsInput='false' CellCount='11,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' GetsInput='false' Location='83,34' Name='RightHipHolster' ScrollExtent='187,765' Size='188,86' Style='/DefaultGrid.style' UserScrollable='false'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='21,334' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='315,31' Size='315,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='2,14' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0013/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='355,382' Size='355,382' Stretch='false'/>
</Page>
<Page AbsorbsInput='false' BackgroundColor='#FFFFFF' Name='SoldierStealthArmor' ScrollExtent='357,207' Size='357,207' Visible='false'>
<Button LocalText='[@Cancel]' Location='260,9' Name='CloseButton' PackLocation='right,top' PackLocationProp='-097/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='73,9' Name='HelpButton' PackLocation='right,top' PackLocationProp='-284/0001,0009/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@InventoryTitle]' Location='91,6' Name='TitleText' ScrollExtent='162,20' Size='162,20' TextAlignment='Center' TextAlignmentVertical='Center'>@InventoryTitle</Text>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='44,0' Name='Title' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='262,32' Size='262,32'/>
<Button LocalText='[@UseItem]' Location='22,149' Name='btn_use' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@UseItem</Button>
<Button LocalText='[@DropItem]' Location='99,149' Name='btn_drop' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DropItem</Button>
<Button LocalText='[@DestroyItem]' Location='176,149' Name='btn_destroy' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@DestroyItem</Button>
<Button LocalText='[@ClearInventory]' Location='254,149' Name='btn_clear' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@ClearInventory</Button>
<Page Location='80,48' Name='KnifeHolster' ScrollExtent='40,40' Size='40,40'>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='5' Location='2,22' Name='KnifeText' ScrollExtent='35,20' Size='35,20' TextAlignmentVertical='Center'>5</Text>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Name='Rect' Opacity='0.750' ScrollExtent='40,40' Size='40,40'/>
<Grid CellCount='1,1' CellSize='40,40' DataSource='/DataSources.Inventory' Name='KnifeHolster' ScrollExtent='40,40' Size='40,40' Style='/DefaultGrid.style' UserScrollable='false'/>
<Image AbsorbsInput='false' BackgroundColor='#FFFFFF' BackgroundOpacity='0.200' Location='1,1' Name='Background' ScrollExtent='38,38' Size='38,38'/>
</Page>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' GetsInput='false' LocalText='1' Location='27,70' Name='RightHipText' ScrollExtent='48,20' Size='48,20' TextAlignmentVertical='Center'>1</Text>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='25,36' Name='RightHipHolsterRect' ScrollExtent='52,52' Size='52,52'/>
<Rectangle AbsorbsInput='false' Color='#81C9D4' GetsInput='false' Location='191,35' Name='BackpackRect' ScrollExtent='103,103' Size='103,103'/>
<Grid CellCount='6,6' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='191,35' Name='Backpack' ScrollExtent='102,102' Size='103,103' Style='/DefaultGrid.style' UserScrollable='false'/>
<Grid CellCount='3,45' CellSize='17,17' DataSource='/DataSources.Inventory' DragAccepts='Item' Location='25,36' Name='RightHipHolster' ScrollExtent='51,765' Size='52,52' Style='/DefaultGrid.style' UserScrollable='false'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='19,144' Name='ButtonBorder' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='314,31' Size='314,31'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Dragable='true' Location='-2,12' Name='Background' PackSize='1,Absolute' PackSizeProp='0002/0003,0014/0001' RStyleDefault='/WindowPanes.BigBackground.style' ScrollExtent='357,193' Size='357,193' Stretch='false'/>
</Page>
</Page>
