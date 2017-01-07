<Page Name='NavBar' PackLocation='Center,Center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='800,30' Size='800,30' Visible='false'>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' Location='80,4' Name='PlayCheck' OnSet='ui_showpage SelectServer
Parent.ProfileCheck.checked = false
Parent.KeymapCheck.checked = false
Parent.VideoCheck.checked = false
Parent.NewsCheck.checked = false' OnUnset='checked = true' ScrollExtent='75,21' Size='75,21' Style='/Buttons.Servers_Text.style'></Checkbox>
<Checkbox BackgroundOpacity='1.000' Enabled='false' Location='161,4' Name='ProfileCheck' OnSet='ui_showpage CreateCharacter
Parent.PlayCheck.checked = false
Parent.KeymapCheck.checked = false
Parent.VideoCheck.checked = false
Parent.NewsCheck.checked = false' OnUnset='checked = true' ScrollExtent='75,21' Size='75,21' Style='/Buttons.Profile_Text.style'></Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='242,4' Name='KeymapCheck' OnSet='ui_showpage KeyMap
Parent.PlayCheck.checked = false
Parent.ProfileCheck.checked = false
Parent.VideoCheck.checked = false
Parent.NewsCheck.checked = false' OnUnset='checked = true' ScrollExtent='75,21' Size='75,21' Style='/Buttons.Keymap_Text.style'></Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='323,4' Name='VideoCheck' OnSet='ui_showpage VideoOptions
Parent.PlayCheck.checked = false
Parent.ProfileCheck.checked = false
Parent.KeymapCheck.checked = false
Parent.NewsCheck.checked = false' OnUnset='checked = true' ScrollExtent='75,21' Size='75,21' Style='/Buttons.Video_Text.style'></Checkbox>
<Checkbox BackgroundOpacity='1.000' Location='404,4' Name='NewsCheck' OnSet='ui_showpage News
Parent.PlayCheck.checked = false
Parent.ProfileCheck.checked = false
Parent.KeymapCheck.checked = false
Parent.VideoCheck.checked = false' OnUnset='checked = true' ScrollExtent='75,21' Size='75,21' Style='/Buttons.News_Text.style'></Checkbox>
<Button Location='647,4' Name='Quit' OnPress='ui_showdialog CheckQuit' ScrollExtent='75,21' Size='75,21' Style='/Buttons.Quit_Text.style'></Button>
</Page>
