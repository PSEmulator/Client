<Page Location='20,80' Name='CharacterOverlay' popup='True' ScrollExtent='200,300' Size='200,300' Visible='false'>
<Text Font='/Fonts.DefaultFont' Location='0,280' Name='Name' ScrollExtent='111,20' Size='200,20' TextAlignment='Center'>Character Name</Text>
<Button Name='Preview' OnPress='Parent.PreviewPage.Visible = true
















Parent.ImplantsPage.Visible = false
















Parent.AbilitiesPage.Visible = false
















Parent.OutfitPage.Visible = false' ScrollExtent='190,24' Size='50,24' Style='/Buttons.Medium.style'>Prev.</Button>
<Button Location='50,0' Name='Implants' OnPress='Parent.PreviewPage.Visible = false
















Parent.ImplantsPage.Visible = true
















Parent.AbilitiesPage.Visible = false
















Parent.OutfitPage.Visible = false' ScrollExtent='190,24' Size='50,24' Style='/Buttons.Medium.style'>Imp.</Button>
<Button Location='100,0' Name='Abilities' OnPress='Parent.PreviewPage.Visible = false
















Parent.ImplantsPage.Visible = false
















Parent.AbilitiesPage.Visible = true
















Parent.OutfitPage.Visible = false' ScrollExtent='190,24' Size='50,24' Style='/Buttons.Medium.style'>Abl.</Button>
<Button Location='150,0' Name='Outfit' OnPress='Parent.PreviewPage.Visible = false
















Parent.ImplantsPage.Visible = false
















Parent.AbilitiesPage.Visible = false
















Parent.OutfitPage.Visible = true' ScrollExtent='190,24' Size='50,24' Style='/Buttons.Medium.style'>Out.</Button>
<Page Location='0,24' Name='PreviewPage' ScrollExtent='200,220' Size='200,256'>
<Text Font='/Fonts.DefaultFont' ScrollExtent='131,20' Size='150,20'>Preview Goes Here</Text>
</Page>
<Page Location='0,24' Name='ImplantsPage' ScrollExtent='200,220' Size='200,256' Visible='false'>
<Text Font='/Fonts.DefaultFont' ScrollExtent='117,20' Size='150,20'>Implants Go Here</Text>
</Page>
<Page Location='0,24' Name='AbilitiesPage' ScrollExtent='200,220' Size='200,256' Visible='false'>
<Text Font='/Fonts.DefaultFont' ScrollExtent='130,20' Size='150,20'>Abilities Goes Here</Text>
</Page>
<Page Location='0,24' Name='OutfitPage' ScrollExtent='200,220' Size='200,256' Visible='false'>
<Text Font='/Fonts.DefaultFont' ScrollExtent='112,20' Size='150,20'>Outfit Goes Here</Text>
</Page>
</Page>
