<Page Location='744,211' Name='EquipAvatar' PackLocation='Right,Bottom' PackLocationProp='-280/0001,-557/0001' PackSize='Fixed,Fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='273,548' Size='273,548' UserMovable='true' Visible='false'>
<Text AbsorbsInput='false' BackgroundColor='#00F2C9' Font='/Fonts.HudFont3' LocalText='EQUIP AVATAR' Location='54,5' Name='TitleText' PackLocation='center,top' PackLocationProp='-082/0001,0005/0001' PackSize='absolute,fixed' PackSizeProp='0112/0001,0002/0003' ScrollExtent='161,25' Size='161,25' TextAlignment='Center' TextAlignmentVertical='Center'>EQUIP AVATAR</Text>
<Button LocalText='[@Cancel]' LocalTooltip='[@CloseTooltip]' Location='226,10' Name='CancelButton' PackLocation='right,top' PackLocationProp='-047/0001,0010/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style' Tooltip='@CloseTooltip'>@Cancel</Button>
<Text Font='/Fonts.ChatFont' LocalText='Armor' Location='18,37' Name='ArmorStatic' ScrollExtent='54,25' Size='54,25' TextAlignment='Right' TextAlignmentVertical='Center'>Armor</Text>
<Dropdownbox DataSource='ArmorTypes' Location='75,35' Name='ArmorSelect' PackLocation='left,top' PackLocationProp='0075/0001,0035/0001' RowTemplate='Row Template' ScrollExtent='180,32' SelectedItemIndex='1' Size='180,32' Style='/Dropdowns.HudPane.style'/>
<Text Font='/Fonts.ChatFont' LocalText='Right Hip' Location='18,79' Name='RightHipStatic' ScrollExtent='54,25' Size='54,25' TextAlignment='Right' TextAlignmentVertical='Center'>Right Hip</Text>
<Text Font='/Fonts.ChatFont' LocalText='Weapon' Location='18,79' Name='HeavyWeaponStatic' ScrollExtent='54,25' Size='54,25' TextAlignment='Right' TextAlignmentVertical='Center' Visible='false'>Weapon</Text>
<Dropdownbox DataSource='HipWeapons' Location='75,75' Name='RightHipSelect' PackLocation='left,top' PackLocationProp='0075/0001,0075/0001' RowTemplate='Row Template' ScrollExtent='180,32' SelectedItemIndex='1' Size='180,32' Style='/Dropdowns.HudPane.style'/>
<Dropdownbox DataSource='HeavyWeapons1' Location='75,75' Name='HeavyWeaponSelect' PackLocation='left,top' PackLocationProp='0075/0001,0075/0001' RowTemplate='Row Template' ScrollExtent='180,32' SelectedItemIndex='1' Size='180,32' Style='/Dropdowns.HudPane.style' Visible='false'/>
<Text Font='/Fonts.ChatFont' LocalText='Left Hip' Location='18,113' Name='LeftHipStatic' ScrollExtent='54,25' Size='54,25' TextAlignment='Right' TextAlignmentVertical='Center'>Left Hip</Text>
<Dropdownbox DataSource='HipWeapons' Location='75,109' Name='LeftHipSelect' PackLocation='left,top' PackLocationProp='0075/0001,0109/0001' RowTemplate='Row Template' ScrollExtent='180,32' Size='180,32' Style='/Dropdowns.HudPane.style'/>
<Text Font='/Fonts.ChatFont' LocalText='Right Back' Location='18,147' Name='RightBackStatic' ScrollExtent='54,25' Size='54,25' TextAlignment='Right' TextAlignmentVertical='Center'>Right Back</Text>
<Dropdownbox DataSource='BackWeapons' Location='75,143' Name='RightBackSelect' PackLocation='left,top' PackLocationProp='0075/0001,0143/0001' RowTemplate='Row Template' ScrollExtent='180,32' Size='180,32' Style='/Dropdowns.HudPane.style'/>
<Text Font='/Fonts.ChatFont' LocalText='Left Back' Location='18,181' Name='LeftBackStatic' ScrollExtent='54,25' Size='54,25' TextAlignment='Right' TextAlignmentVertical='Center'>Left Back</Text>
<Dropdownbox DataSource='BackWeapons' Location='75,177' Name='LeftBackSelect' PackLocation='left,top' PackLocationProp='0075/0001,0177/0001' RowTemplate='Row Template' ScrollExtent='180,32' Size='180,32' Style='/Dropdowns.HudPane.style'/>
<Text Font='/Fonts.ChatFont' LocalText='Knife' Location='18,215' Name='KnifeStatic' ScrollExtent='54,25' Size='54,25' TextAlignment='Right' TextAlignmentVertical='Center'>Knife</Text>
<Dropdownbox DataSource='Knives' Location='75,211' Name='KnifeSelect' PackLocation='left,top' PackLocationProp='0075/0001,0211/0001' RowTemplate='Row Template' ScrollExtent='180,32' Size='180,32' Style='/Dropdowns.HudPane.style'/>
<Button IsCancelButton='true' IsDefaultButton='true' LocalText='Empty Holsters' Location='75,251' Name='EmptyHolstersButton' OnPress='ui_hidedialog' PackLocation='center,top' PackLocationProp='-061/0001,0251/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='125,20' Size='125,20' Style='/Buttons.TextButton.style'>Empty Holsters</Button>
<Text Font='/Fonts.ChatFont' LocalText='Implants' Location='18,285' Name='ImplantsStatic' ScrollExtent='54,25' Size='54,25' TextAlignment='Right' TextAlignmentVertical='Center'>Implants</Text>
<Dropdownbox DataSource='Implants' Location='75,281' Name='ImplantSelect1' PackLocation='left,top' PackLocationProp='0075/0001,0281/0001' RowTemplate='Row Template' ScrollExtent='180,32' Size='180,32' Style='/Dropdowns.HudPane.style'/>
<Dropdownbox DataSource='Implants' Location='75,315' Name='ImplantSelect2' PackLocation='left,top' PackLocationProp='0075/0001,0315/0001' RowTemplate='Row Template' ScrollExtent='180,32' Size='180,32' Style='/Dropdowns.HudPane.style'/>
<Dropdownbox DataSource='Implants' Location='75,349' Name='ImplantSelect3' PackLocation='left,top' PackLocationProp='0075/0001,0349/0001' RowTemplate='Row Template' ScrollExtent='180,32' Size='180,32' Style='/Dropdowns.HudPane.style'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='2,1' Name='Title' PackSize='absolute,fixed' PackSizeProp='0000/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='273,32' Size='273,32'/>
<Image BackgroundOpacity='1.000' Location='0,13' Name='background' Opacity='0.800' PackLocation='left,top' PackLocationProp='0000/0001,0013/0001' PackSize='absolute,absolute' PackSizeProp='0000/0001,0160/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='273,388' Size='273,388' Stretch='false' Style=' '/>
<Template Name='Row Template' Size='160,20'>\<text font = \'/Fonts.ChatFont\' location = \'5,2\' maxlines = \'1\' size = \'140,20\' truncateelipsis = \'true\'\>
$Name$
\</text\></Template>
<DataSource Name='ArmorTypes'/>
<DataSource Name='HipWeapons'>
<Data Name='ThisIsAReallyLongStringThatIAmUsingToTest'/>
<Data Name='Cheddar'/>
</DataSource>
<DataSource Name='BackWeapons'/>
<DataSource Name='Knives'/>
<DataSource Name='HeavyWeapons1'/>
<DataSource Name='HeavyWeapons2'/>
<DataSource Name='HeavyWeapons3'/>
<DataSource Name='Implants'/>
</Page>
