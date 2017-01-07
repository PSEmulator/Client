<Page Location='202,50' Name='SendEmail' PackLocation='.5,.5' popup='True' ScrollExtent='390,505' Size='390,505' Visible='false' visualeditlock='true'>
<Button Location='95,40' Name='Send' OnPress='sv_sendmail Parent.To.Text Parent.Subject.Text Parent.Body.Text' ScrollExtent='200,32' Size='200,32' Style='/Buttons.Default.style' visualeditlock='true'>Send</Button>
<Button Location='360,10' Name='Exit' OnPress='ui_popstate' ScrollExtent='16,16' Size='16,16' Style='/Buttons.Exit.style' visualeditlock='true'></Button>
<Text Font='/Fonts.DefaultFont' Location='10,86' Name='ToLabel' ScrollExtent='18,20' Size='70,20' visualeditlock='true'>To:</Text>
<Textbox Location='80,80' Name='To' ScrollExtent='148,28' Size='300,32' Style='/ConsoleTextbox.Style' visualeditlock='true'>Recipient Goes Here</Textbox>
<Text Font='/Fonts.DefaultFont' Location='10,126' Name='SubjectLabel' ScrollExtent='54,20' Size='70,20' visualeditlock='true'>Subject:</Text>
<Textbox Location='80,120' Name='Subject' ScrollExtent='134,28' Size='300,32' Style='/ConsoleTextbox.Style' visualeditlock='true'>Subject Goes Here</Textbox>
<Scrollbar Control='Body' Location='348,160' ScrollExtent='16,230' Size='30,310' Style='/VScrollbar.style' visualeditlock='true'/>
<Textbox Location='10,160' MaxLines='Unlimited' Name='Body' ScrollExtent='188,28' Size='338,310' Style='/ConsoleTextbox.Style' visualeditlock='true'>Message Body Goes Here</Textbox>
</Page>
