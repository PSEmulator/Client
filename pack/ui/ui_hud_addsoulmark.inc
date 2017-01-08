<Page BackgroundColor='#FFFFFF' Location='292,200' minsize='404,344' movable='true' Name='AddSoulMark' PackLocation='center,center' PackLocationProp='-220/0001,-184/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' resizable='false' ScrollExtent='427,368' Size='427,368' Visible='false'>
<Dropdownbox BackgroundColor='#FFFFFF' BackgroundOpacity='0.675' BackgroundTint='#000000' DataSource='TypeData' Location='16,41' Name='type' PackLocation='left,top' PackLocationProp='0016/0001,0041/0001' PackSize='absolute,fixed' PackSizeProp='0046/0001,0002/0003' RowTemplate='TypeTemplate' ScrollExtent='381,32' Size='381,32' Style='/Dropdowns.HudPane.style'/>
<Textbox BackgroundColor='#385E61' BackgroundOpacity='1.000' Location='16,74' MaxLength='2048' MaxLines='Unlimited' Name='text' PackLocation='left,top' PackLocationProp='0016/0001,0074/0001' PackSize='absolute,absolute' PackSizeProp='0046/0001,0138/0001' ScrollExtent='381,230' Size='381,230' Style='/Textboxes.Bordered' WrapWidth='Automatic'>12345678901234567890123456789012345678901234567890123456789012345678901234567890</Textbox>
<Scrollbar Control='text' Location='398,73' Name='Scroll' PackLocation='right,top' PackLocationProp='-029/0001,0073/0001' PackSize='fixed,absolute' PackSizeProp='0002/0003,0137/0001' ScrollExtent='9,231' Size='9,231' Style='/ScrollBars.vertical.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont3' LocalText='[@asm_title]' Location='101,7' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0007/0001' PackSize='absolute,fixed' PackSizeProp='0208/0001,0002/0003' ScrollExtent='219,20' Size='219,20' TextAlignment='Center' TextAlignmentVertical='Center'>@asm_title</Text>
<Button LocalText='[@Cancel]' Location='357,8' Name='CloseButton' PackLocation='cfc,cfc' PackLocationProp='0152/0001,-168/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='20,311' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0020/0001,-057/0001' PackSize='absolute,fixed' PackSizeProp='0036/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='391,31' Size='391,31'/>
<Button LocalText='[@OK]' Location='26,316' Name='OkButton' PackLocation='Center,bottom' PackLocationProp='-187/0001,-052/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@OK</Button>
<Button IsCancelButton='true' LocalText='[@Cancel]' Location='331,316' Name='CancelButton' PackLocation='center,bottom' PackLocationProp='0118/0001,-052/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Enabled='false' Location='25,0' Name='Title' PackLocation='left,top' PackLocationProp='0025/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0049/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='378,32' Size='378,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='427,351' Size='427,351' Stretch='false'/>
<DataSource Name='TypeData'>
<Data localname='[@sm_pn]' Name='@sm_pn' value='1'/>
<Data localname='[@sm_pp]' Name='@sm_pp' value='2'/>
<Data localname='[@sm_pv]' Name='@sm_pv' value='3'/>
</DataSource>
<Template Name='TypeTemplate' Size='390,16'>\<text font = \'/Fonts.HudFont2\' location = \'5,-1\' size = \'380,18\'\>
$Name$
\</text\></Template>
</Page>
