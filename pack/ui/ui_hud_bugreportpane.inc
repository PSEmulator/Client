<Page BackgroundColor='#FFFFFF' Location='292,200' minsize='404,344' movable='true' Name='BugReportPane' PackLocation='cfc,cfc' PackLocationProp='0000/0001,0047/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' resizable='false' ScrollExtent='440,463' Size='440,463' Visible='false'>
<Text AbsorbsInput='false' Enabled='false' Font='/Fonts.HudFont3' LocalText='[@BugReportTitle]' Location='101,7' Name='TitleText' PackLocation='left,top' PackLocationProp='0101/0001,0007/0001' PackSize='absolute,fixed' PackSizeProp='0208/0001,0002/0003' ScrollExtent='232,20' Size='232,20' TextAlignment='Center' TextAlignmentVertical='Center'>@BugReportTitle</Text>
<Button LocalText='[@Cancel]' Location='55,8' Name='HelpButton' PackLocation='left,top' PackLocationProp='0055/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style'>@Cancel</Button>
<Button LocalText='[@Cancel]' Location='370,8' Name='CloseButton' PackLocation='right,top' PackLocationProp='-070/0001,0008/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowClose.style'>@Cancel</Button>
<Dropdownbox BackgroundColor='#FFFFFF' BackgroundOpacity='0.675' BackgroundTint='#000000' DataSource='BugTypeData' Location='16,33' Name='BugTypeDropdown' PackLocation='left,top' PackLocationProp='0016/0001,0033/0001' PackSize='absolute,fixed' PackSizeProp='0032/0001,0002/0003' RowTemplate='BugReportTemplate' ScrollExtent='408,32' SelectedItemIndex='5' Size='408,32' Style='/Dropdowns.HudPane.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@BugRepeatableTitle]' Location='16,74' MaxLines='1' Name='RepeatableTitle' PackLocation='left,top' PackLocationProp='0016/0001,0074/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='158,21' Size='158,21' TextAlignment='Right' TextAlignmentVertical='Center'>@BugRepeatableTitle</Text>
<Dropdownbox BackgroundColor='#FFFFFF' BackgroundOpacity='0.675' BackgroundTint='#000000' DataSource='BugRepeatableData' Location='175,68' Name='RepeatableDropdown' PackLocation='left,top' PackLocationProp='0175/0001,0068/0001' PackSize='absolute,fixed' PackSizeProp='0191/0001,0002/0003' RowTemplate='BugReportTemplate' ScrollExtent='249,32' SelectedItemIndex='1' Size='249,32' Style='/Dropdowns.HudPane.style'/>
<Rectangle Color='#385E61' GetsInput='false' Location='16,104' Name='LocationBorder' PackSize='absolute,fixed' PackSizeProp='0032/0001,0002/0003' ScrollExtent='408,141' Size='408,141'/>
<Checkbox BackgroundOpacity='1.000' Location='22,111' Name='CurrentLocationCheck' PackLocation='left,top' PackLocationProp='0022/0001,0111/0001' PackSize='absolute,fixed' PackSizeProp='0044/0001,0002/0003' ScrollExtent='396,25' Size='396,25' Style='/Buttons.BugReportRadio.style'>@BugCurrentLocation</Checkbox>
<Rectangle Color='#385E61' GetsInput='false' Location='52,138' Name='LocationDivider' PackLocation='left,top' PackLocationProp='0052/0001,0138/0001' PackSize='absolute,fixed' PackSizeProp='0080/0001,0002/0003' ScrollExtent='360,1' Size='360,1'/>
<Checkbox BackgroundOpacity='1.000' Location='22,144' Name='OtherLocationCheck' PackLocation='left,top' PackLocationProp='0022/0001,0144/0001' PackSize='absolute,fixed' PackSizeProp='0044/0001,0002/0003' ScrollExtent='396,25' Size='396,25' Style='/Buttons.BugReportRadio.style'>@BugOtherLocation</Checkbox>
<Dropdownbox BackgroundColor='#FFFFFF' BackgroundOpacity='0.675' BackgroundTint='#000000' DataSource='BugLocationData' Location='52,172' Name='OtherLocationDropdown' PackLocation='left,top' PackLocationProp='0052/0001,0172/0001' PackSize='absolute,fixed' PackSizeProp='0080/0001,0002/0003' RowTemplate='BugReportTemplate' ScrollExtent='360,32' SelectedItemIndex='4' Size='360,32' Style='/Dropdowns.HudPane.style'/>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@BugOtherLocationX]' Location='60,210' MaxLines='1' Name='LocationXTitle' PackLocation='left,top' PackLocationProp='0060/0001,0210/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='58,42' Size='58,21' TextAlignment='Right' TextAlignmentVertical='Center' TruncateElipsis='false'>@BugOtherLocationX</Text>
<Textbox BackgroundColor='#385E61' BackgroundOpacity='1.000' Location='122,206' MaxLength='4' Name='OtherLocationX' NumericInteger='true' PackLocation='left,top' PackLocationProp='0122/0001,0206/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='50,28' Size='50,28' Style='/Textboxes.Bordered'>8888</Textbox>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@BugOtherLocationY]' Location='180,210' MaxLines='1' Name='LocationYTitle' PackLocation='left,top' PackLocationProp='0180/0001,0210/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='58,42' Size='58,21' TextAlignment='Right' TextAlignmentVertical='Center' TruncateElipsis='false'>@BugOtherLocationY</Text>
<Textbox BackgroundColor='#385E61' BackgroundOpacity='1.000' Location='242,206' MaxLength='4' Name='OtherLocationY' NumericInteger='true' PackLocation='left,top' PackLocationProp='0242/0001,0206/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='50,28' Size='50,28' Style='/Textboxes.Bordered'>8888</Textbox>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' LocalText='[@BugOtherLocationZ]' Location='300,210' MaxLines='1' Name='LocationZTitle' PackLocation='left,top' PackLocationProp='0300/0001,0210/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='58,42' Size='58,21' TextAlignment='Right' TextAlignmentVertical='Center' TruncateElipsis='false'>@BugOtherLocationZ</Text>
<Textbox BackgroundColor='#385E61' BackgroundOpacity='1.000' Location='363,206' MaxLength='4' Name='OtherLocationZ' NumericInteger='true' PackLocation='left,top' PackLocationProp='0363/0001,0206/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='50,28' Size='50,28' Style='/Textboxes.Bordered'>8888</Textbox>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' ime='true' LocalText='[@BugBriefTitle]' Location='16,252' MaxLines='1' Name='BriefTitle' PackLocation='left,top' PackLocationProp='0016/0001,0252/0001' PackSize='abs,fixed' PackSizeProp='xxxx/xxxx,0002/0003' ScrollExtent='408,21' Size='408,21' TextAlignmentVertical='Center'>@BugBriefTitle</Text>
<Textbox BackgroundColor='#385E61' BackgroundOpacity='1.000' IME='true' Location='16,276' MaxLength='64' Name='BriefDescription' PackLocation='left,top' PackLocationProp='0016/0001,0276/0001' PackSize='absolute,fixed' PackSizeProp='0032/0001,0002/0003' ScrollExtent='568,28' Size='408,28' Style='/Textboxes.Bordered'>1234567890123456789012345678901234567890123456789012345678901234567890</Textbox>
<Text AbsorbsInput='false' Font='/Fonts.HudFont2' ime='true' LocalText='[@BugDetailedTitle]' Location='16,307' MaxLines='1' Name='DetailedTitle' PackLocation='left,top' PackLocationProp='0016/0001,0307/0001' PackSize='abs,fixed' PackSizeProp='xxxx/xxxx,0002/0003' ScrollExtent='408,21' Size='408,21' TextAlignmentVertical='Center'>@BugDetailedTitle</Text>
<Textbox BackgroundColor='#385E61' BackgroundOpacity='1.000' IME='true' Location='16,330' MaxLength='2048' MaxLines='Unlimited' Name='DetailedDescription' PackLocation='left,bottom' PackLocationProp='0016/0001,-133/0001' PackSize='absolute,fixed' PackSizeProp='0032/0001,0002/0003' ScrollExtent='408,70' Size='408,70' Style='/Textboxes.Bordered' WrapWidth='Automatic'>12345678901234567890123456789012345678901234567890123456789012345678901234567890</Textbox>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='20,406' Name='ButtonBorder' PackLocation='left,bottom' PackLocationProp='0020/0001,-057/0001' PackSize='absolute,fixed' PackSizeProp='0036/0001,0002/0003' RStyleDefault='/WindowPanes.ButtonBorder.style' ScrollExtent='404,31' Size='404,31'/>
<Button LocalText='[@OK]' Location='25,411' Name='OkButton' PackLocation='Center,bottom' PackLocationProp='-195/0001,-052/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@OK</Button>
<Button LocalText='[@Reset]' Location='185,411' Name='ResetButton' PackLocation='Center,bottom' PackLocationProp='-035/0001,-052/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@Reset</Button>
<Button IsCancelButton='true' LocalText='[@Cancel]' Location='344,411' Name='CancelButton' PackLocation='center,bottom' PackLocationProp='0124/0001,-052/0001' PackSize='fixed,fixed' PackSizeProp='0002/0003,0002/0003' ScrollExtent='75,20' Size='75,20' Style='/Buttons.TextButton.style'>@Cancel</Button>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='25,0' Name='Title' PackLocation='left,top' PackLocationProp='0025/0001,0000/0001' PackSize='absolute,fixed' PackSizeProp='0049/0001,0002/0003' RStyleActivated='/WindowPanes.TitleBarFocus.style' RStyleDefault='/WindowPanes.TitleBarNoFocus.style' ScrollExtent='391,32' Size='391,32'/>
<Image AbsorbsInput='false' BackgroundOpacity='1.000' Location='0,16' Name='Background' PackSize='1,absolute' PackSizeProp='0002/0003,0017/0001' RStyleDefault='/WindowPanes.SmallBackground.style' ScrollExtent='440,446' Size='440,446' Stretch='false'/>
<Template Name='BugReportTemplate' Size='390,16'>\<text font = \'/Fonts.HudFont2\' location = \'5,-1\' size = \'380,18\'\>
$Name$
\</text\></Template>
<DataSource Name='BugTypeData'>
<Data localname='[@Bug_Cat_None]' Name='@Bug_Cat_None'/>
<Data localname='[@Bug_Cat_Crash]' Name='@Bug_Cat_Crash' typename='crash'/>
<Data localname='[@Bug_Cat_Gameplay]' Name='@Bug_Cat_Gameplay' typename='gameplay'/>
<Data localname='[@Bug_Cat_Art]' Name='@Bug_Cat_Art' typename='art'/>
<Data localname='[@Bug_Cat_Sound]' Name='@Bug_Cat_Sound' typename='sound'/>
<Data localname='[@Bug_Cat_Hardware]' Name='@Bug_Cat_Hardware' typename='hardware'/>
<Data localname='[@Bug_Cat_Other]' Name='@Bug_Cat_Other' typename='other'/>
</DataSource>
<DataSource Name='BugLocationData'>
<Data localname='[@Bug_Loc_None]' Name='@Bug_Loc_None'/>
<Data localname='[@z10]' locationname='zone' Name='@z10' zonename='z10'/>
<Data localname='[@z6]' locationname='zone' Name='@z6' zonename='z6'/>
<Data localname='[@z3]' locationname='zone' Name='@z3' zonename='z3'/>
<Data localname='[@z7]' locationname='zone' Name='@z7' zonename='z7'/>
<Data localname='[@z5]' locationname='zone' Name='@z5' zonename='z5'/>
<Data localname='[@z2]' locationname='zone' Name='@z2' zonename='z2'/>
<Data localname='[@z4]' locationname='zone' Name='@z4' zonename='z4'/>
<Data localname='[@z8]' locationname='zone' Name='@z8' zonename='z8'/>
<Data localname='[@z9]' locationname='zone' Name='@z9' zonename='z9'/>
<Data localname='[@z1]' locationname='zone' Name='@z1' zonename='z1'/>
<Data localname='[@main_base]' locationname='sanctuary' Name='@main_base'/>
<Data localname='[@vt_vehicle]' locationname='vehicles' Name='@vt_vehicle'/>
<Data localname='[@vr_training]' locationname='shooting_gallery' Name='@vr_training'/>
<Data localname='[@c3]' locationname='zone' Name='@c3' zonename='c3'/>
<Data localname='[@c5]' locationname='zone' Name='@c5' zonename='c5'/>
<Data localname='[@c4]' locationname='zone' Name='@c4' zonename='c4'/>
<Data localname='[@c6]' locationname='zone' Name='@c6' zonename='c6'/>
<Data localname='[@c2]' locationname='zone' Name='@c2' zonename='c2'/>
<Data localname='[@c1]' locationname='zone' Name='@c1' zonename='c1'/>
</DataSource>
<DataSource Name='BugRepeatableData'>
<Data localname='[@Bug_Repeatable_None]' Name='@Bug_Repeatable_None'/>
<Data localname='[@Bug_Repeatable_Yes]' Name='@Bug_Repeatable_Yes' repeatname='yes'/>
<Data localname='[@Bug_Repeatable_No]' Name='@Bug_Repeatable_No' repeatname='no'/>
</DataSource>
</Page>
