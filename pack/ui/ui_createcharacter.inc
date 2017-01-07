<Page Name='CreateCharacter' OnHide='Parent.NavBar.Visible = false' OnShow='Parent.NavBar.Visible = false' PackLocation='Center,Center' PackLocationProp='-512/0001,-384/0001' ScrollExtent='1024,768' Size='1024,768' Visible='false' visualeditlock='true'>
<Button LocalText='[@Cancel]' LocalTooltip='[@HelpTooltip]' Location='17,7' Name='HelpButton' PackLocation='right,top' PackLocationProp='-1007/0001,0007/0001' ScrollExtent='16,16' Size='16,16' Style='/Buttons.WindowHelp.style' Tooltip='@HelpTooltip'>@Cancel</Button>
<Button IsDefaultButton='true' LocalTooltip='[@CreateCharacterSaveButtonTooltip]' Location='965,733' Name='Save' ScrollExtent='41,15' Size='41,15' Style='/Buttons.ShellForward.style' Tooltip='@CreateCharacterSaveButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button IsCancelButton='true' LocalTooltip='[@CreateCharacterAbortButtonTooltip]' Location='898,733' Name='Abort' ScrollExtent='43,15' Size='43,15' Style='/Buttons.ShellBack.style' Tooltip='@CreateCharacterAbortButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@CreateCharacterOptionsButtonTooltip]' Location='808,733' Name='Options' ScrollExtent='65,18' Size='65,18' Style='/Buttons.ShellOptions.style' Tooltip='@CreateCharacterOptionsButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@CreateCharacterQuitButtonTooltip]' Location='968,11' Name='Quit' ScrollExtent='23,23' Size='23,23' Style='/Buttons.ShellClose.style' Tooltip='@CreateCharacterQuitButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalText='New Button' LocalTooltip='[@CreateCharacterRotateLeftButtonTooltip]' Location='203,656' Name='RotateLeft' ScrollExtent='25,19' Size='25,19' Style='/Buttons.CharacterCreateRotateLeft.style' Tooltip='@CreateCharacterRotateLeftButtonTooltip' TooltipStyle='/Tooltips.Default'>New Button</Button>
<Button LocalText='New Button' LocalTooltip='[@CreateCharacterRotateRightButtonTooltip]' Location='356,658' Name='RotateRight' ScrollExtent='25,19' Size='25,19' Style='/Buttons.CharacterCreateRotateRight.style' Tooltip='@CreateCharacterRotateRightButtonTooltip' TooltipStyle='/Tooltips.Default'>New Button</Button>
<Button LocalText='New Button' LocalTooltip='[@CreateCharacterZoomInButtonTooltip]' Location='267,658' Name='ZoomIn' ScrollExtent='27,24' Size='27,24' Style='/Buttons.CharacterCreateZoomIn.style' Tooltip='@CreateCharacterZoomInButtonTooltip' TooltipStyle='/Tooltips.Default'>New Button</Button>
<Button LocalText='New Button' LocalTooltip='[@CreateCharacterZoomOutButtonTooltip]' Location='294,663' Name='ZoomOut' ScrollExtent='24,14' Size='24,14' Style='/Buttons.CharacterCreateZoomOut.style' Tooltip='@CreateCharacterZoomOutButtonTooltip' TooltipStyle='/Tooltips.Default'>New Button</Button>
<GameObjectView Location='74,91' Name='3DCharacterView' ScrollExtent='415,599' Size='415,599'/>
<Image Location='89,105' Name='VSBackground' ScrollExtent='389,407' Size='389,407' Style='/Plates.ShellVSBackground' Visible='false'/>
<Image Location='104,109' Name='TRBackground' ScrollExtent='359,476' Size='359,476' Style='/Plates.ShellTRBackground'/>
<Image Location='77,115' Name='NCBackground' ScrollExtent='393,342' Size='393,342' Style='/Plates.ShellNCBackground' Visible='false'/>
<Page AbsorbsInput='false' Name='Personal' PackSize='1,1' PackSizeProp='0002/0003,0002/0003' ScrollExtent='1024,768' Size='1024,768'>
<Textbox LocalTooltip='[@CreateCharacterNameTooltip]' Location='561,112' Name='Name' ScrollExtent='390,21' Size='390,21' Style='/Textboxes.Clear' Tooltip='@CreateCharacterNameTooltip' TooltipStyle='/Tooltips.Default'>sample</Textbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CreateCharacterFemaleButtonTooltip]' Location='551,163' Name='Female' ScrollExtent='197,64' Size='197,64' Style='/Buttons.CharacterCreateFemale.style' Tooltip='@CreateCharacterFemaleButtonTooltip' TooltipStyle='/Tooltips.Default'></Checkbox>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@CreateCharacterMaleButtonTooltip]' Location='772,162' Name='Male' ScrollExtent='197,64' Size='197,64' Style='/Buttons.CharacterCreateMale.style' Tooltip='@CreateCharacterMaleButtonTooltip' TooltipStyle='/Tooltips.Default'></Checkbox>
<Page Location='542,217' Name='FemaleData' ScrollExtent='450,437' Size='450,437'>
<Button LocalTooltip='[@CreateCharacterPreviousHeadButtonTooltip]' Location='193,209' Name='PrevHead' ScrollExtent='20,10' Size='20,10' Style='/Buttons.CharacterCreateHeadPrev.style' Tooltip='@CreateCharacterPreviousHeadButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@CreateCharacterNextHeadButtonTooltip]' Location='221,209' Name='NextHead' ScrollExtent='20,10' Size='20,10' Style='/Buttons.CharacterCreateHeadNext.style' Tooltip='@CreateCharacterNextHeadButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Image Location='174,93' Name='HeadSelection' ScrollExtent='82,130' Size='82,130' Style='HeadSelectionStyle' TooltipStyle='/Tooltips.Default'/>
<Image Location='13,93' Name='FaceImage01' ScrollExtent='82,130' Size='82,130' Style='Faces.Male03d'/>
<Image Location='93,93' Name='FaceImage02' ScrollExtent='82,130' Size='82,130' Style='Faces.Male03d'/>
<Image Location='174,93' Name='FaceImage03' ScrollExtent='82,130' Size='82,130' Style='Faces.Male03d'/>
<Image Location='253,93' Name='FaceImage04' ScrollExtent='82,130' Size='82,130' Style='Faces.Male03d'/>
<Image Location='332,93' Name='FaceImage05' ScrollExtent='82,130' Size='82,130' Style='Faces.Male03d'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@CreateCharacterMaleVoice0ButtonTooltip]' Location='14,252' Name='Voice0' ScrollExtent='175,42' Size='175,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterMaleVoice0ButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice0</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CreateCharacterMaleVoice1ButtonTooltip]' Location='14,313' Name='Voice1' ScrollExtent='175,42' Size='175,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterMaleVoice1ButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice1</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CreateCharacterMaleVoice2ButtonTooltip]' Location='14,373' Name='Voice2' ScrollExtent='175,42' Size='175,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterMaleVoice2ButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice2</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CreateCharacterMaleVoice3ButtonTooltip]' Location='235,253' Name='Voice3' ScrollExtent='175,42' Size='175,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterMaleVoice3ButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice3</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CreateCharacterMaleVoice4ButtonTooltip]' Location='235,313' Name='Voice4' ScrollExtent='175,42' Size='175,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterMaleVoice4ButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice4</Checkbox>
<Grid CellCount='25,1' CellSize='64,96' DataSource='/DataSources.MaleHeads' Location='21,106' Name='HeadGrid' ScrollExtent='1600,96' Size='377,100' Style='/Grids.ClearGrid.style' Visible='false'/>
<Scrollbar Control='HeadGrid' Location='62,49' Name='HeadScrollbar' ScrollExtent='326,11' Size='326,11' Style='/ScrollBars.horizontal.style' Visible='false'/>
</Page>
<Page Location='542,217' Name='MaleData' ScrollExtent='450,437' Size='450,437'>
<Button LocalTooltip='[@CreateCharacterPreviousHeadButtonTooltip]' Location='193,209' Name='PrevHead' ScrollExtent='20,10' Size='20,10' Style='/Buttons.CharacterCreateHeadPrev.style' Tooltip='@CreateCharacterPreviousHeadButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Button LocalTooltip='[@CreateCharacterNextHeadButtonTooltip]' Location='221,209' Name='NextHead' ScrollExtent='20,10' Size='20,10' Style='/Buttons.CharacterCreateHeadNext.style' Tooltip='@CreateCharacterNextHeadButtonTooltip' TooltipStyle='/Tooltips.Default'></Button>
<Image Location='174,93' Name='HeadSelection' ScrollExtent='82,130' Size='82,130' Style='HeadSelectionStyle' TooltipStyle='/Tooltips.Default'/>
<Image Location='13,93' Name='FaceImage01' ScrollExtent='82,130' Size='82,130' Style='Faces.Male03d'/>
<Image Location='93,93' Name='FaceImage02' ScrollExtent='82,130' Size='82,130' Style='Faces.Male03d'/>
<Image Location='174,93' Name='FaceImage03' ScrollExtent='82,130' Size='82,130' Style='Faces.Male03d'/>
<Image Location='253,93' Name='FaceImage04' ScrollExtent='82,130' Size='82,130' Style='Faces.Male03d'/>
<Image Location='332,93' Name='FaceImage05' ScrollExtent='82,130' Size='82,130' Style='Faces.Male03d'/>
<Checkbox Activated='true' BackgroundOpacity='1.000' Checked='true' LocalTooltip='[@CreateCharacterMaleVoice0ButtonTooltip]' Location='14,252' Name='Voice0' ScrollExtent='175,42' Size='175,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterMaleVoice0ButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice0</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CreateCharacterMaleVoice1ButtonTooltip]' Location='14,313' Name='Voice1' ScrollExtent='175,42' Size='175,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterMaleVoice1ButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice1</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CreateCharacterMaleVoice2ButtonTooltip]' Location='14,373' Name='Voice2' ScrollExtent='175,42' Size='175,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterMaleVoice2ButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice2</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CreateCharacterMaleVoice3ButtonTooltip]' Location='235,253' Name='Voice3' ScrollExtent='175,42' Size='175,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterMaleVoice3ButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice3</Checkbox>
<Checkbox BackgroundOpacity='1.000' LocalTooltip='[@CreateCharacterMaleVoice4ButtonTooltip]' Location='235,313' Name='Voice4' ScrollExtent='175,42' Size='175,42' Style='/Buttons.CharacaterCreateVoice.style' Tooltip='@CreateCharacterMaleVoice4ButtonTooltip' TooltipStyle='/Tooltips.Default'>@MaleVoice4</Checkbox>
<Grid CellCount='25,1' CellSize='64,96' DataSource='/DataSources.MaleHeads' Location='21,106' Name='HeadGrid' ScrollExtent='1600,96' Size='377,100' Style='/Grids.ClearGrid.style' Visible='false'/>
<Scrollbar Control='HeadGrid' Location='62,49' Name='HeadScrollbar' ScrollExtent='326,11' Size='326,11' Style='/ScrollBars.horizontal.style' Visible='false'/>
</Page>
<GameObjectView Location='74,91' Name='3DCharacterView' ScrollExtent='415,599' Size='415,599'/>
<Image Name='LoginShellBackground' ScrollExtent='1024,768' Size='1024,768' Stretch='false' Style='/Plates.ShellCharacterCreateBackground'/>
<ImageStyle Name='HeadSelectionStyle'>
<ImageFrame SourceRect='0,0,66,98'>
<ImageFragment Source='ui_shell_charcreate_headpick_rollover_00' SourceRect='0,0,64,64'/>
<ImageFragment Offset='0,64' Source='ui_shell_charcreate_headpick_rollover_01' SourceRect='0,0,64,64'/>
<ImageFragment Offset='64,0' Source='ui_shell_charcreate_headpick_rollover_02' SourceRect='0,0,32,32'/>
<ImageFragment Offset='64,32' Source='ui_shell_charcreate_headpick_rollover_03' SourceRect='0,0,32,32'/>
<ImageFragment Offset='64,64' Source='ui_shell_charcreate_headpick_rollover_04' SourceRect='0,0,32,32'/>
<ImageFragment Offset='64,96' Source='ui_shell_charcreate_headpick_rollover_05' SourceRect='0,0,32,32'/>
</ImageFrame>
</ImageStyle>
</Page>
<Namespace Name='OldFaces'>
<ImageStyle Name='Female02a'>
<ImageFrame SourceRect='0,0,64,94'>
<ImageFragment Source='ui_shell_female_faces_00' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,0' Source='ui_shell_female_faces_01' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,128' Source='ui_shell_female_faces_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,128' Source='ui_shell_female_faces_03' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female02b'>
<ImageFrame SourceRect='64,0,128,94'>
<ImageFragment Source='ui_shell_female_faces_00' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,0' Source='ui_shell_female_faces_01' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,128' Source='ui_shell_female_faces_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,128' Source='ui_shell_female_faces_03' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female02c'>
<ImageFrame SourceRect='128,0,192,94'>
<ImageFragment Source='ui_shell_female_faces_00' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,0' Source='ui_shell_female_faces_01' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,128' Source='ui_shell_female_faces_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,128' Source='ui_shell_female_faces_03' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female01a'>
<ImageFrame SourceRect='0,94,64,188'>
<ImageFragment Source='ui_shell_female_faces_00' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,0' Source='ui_shell_female_faces_01' SourceRect='0,0,128,128'/>
<ImageFragment Offset='0,128' Source='ui_shell_female_faces_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='128,128' Source='ui_shell_female_faces_03' SourceRect='0,0,128,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07a'>
<ImageFrame SourceRect='0,0,66,94'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07b'>
<ImageFrame SourceRect='66,0,132,94'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07c'>
<ImageFrame SourceRect='132,0,198,94'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07d'>
<ImageFrame SourceRect='198,0,264,94'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07e'>
<ImageFrame SourceRect='264,0,330,94'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06a'>
<ImageFrame SourceRect='330,0,396,94'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06b'>
<ImageFrame SourceRect='396,0,462,94'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06c'>
<ImageFrame SourceRect='0,94,66,188'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06d'>
<ImageFrame SourceRect='66,94,132,188'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06e'>
<ImageFrame SourceRect='132,94,198,188'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05a'>
<ImageFrame SourceRect='198,94,264,188'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05b'>
<ImageFrame SourceRect='264,94,330,188'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05c'>
<ImageFrame SourceRect='330,94,396,188'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05d'>
<ImageFrame SourceRect='396,94,462,188'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05e'>
<ImageFrame SourceRect='0,188,66,282'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04a'>
<ImageFrame SourceRect='66,188,132,282'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04b'>
<ImageFrame SourceRect='132,188,198,282'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04c'>
<ImageFrame SourceRect='198,188,264,282'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04d'>
<ImageFrame SourceRect='264,188,330,282'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04e'>
<ImageFrame SourceRect='330,188,396,282'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male01a'>
<ImageFrame SourceRect='396,188,462,282'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male01b'>
<ImageFrame SourceRect='0,282,66,376'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male01c'>
<ImageFrame SourceRect='66,282,132,376'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male01d'>
<ImageFrame SourceRect='132,282,198,376'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male01e'>
<ImageFrame SourceRect='198,282,264,376'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03a'>
<ImageFrame SourceRect='264,282,330,376'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03b'>
<ImageFrame SourceRect='330,282,396,376'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03c'>
<ImageFrame SourceRect='396,282,462,376'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03d'>
<ImageFrame SourceRect='0,376,66,470'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03e'>
<ImageFrame SourceRect='66,376,132,470'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02a'>
<ImageFrame SourceRect='132,376,198,470'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02b'>
<ImageFrame Name='Unnamed Object' SourceRect='198,376,264,470'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02c'>
<ImageFrame SourceRect='264,376,330,470'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02d'>
<ImageFrame SourceRect='330,376,396,470'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02e'>
<ImageFrame SourceRect='396,376,462,470'>
<ImageFragment Source='ui_shell_male_faces_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_shell_male_faces_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_shell_male_faces_02' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,256' Source='ui_shell_male_faces_03' SourceRect='0,0,256,256'/>
</ImageFrame>
</ImageStyle>
</Namespace>
<Namespace Name='Faces'>
<ImageStyle Name='Male01a'>
<ImageFrame SourceRect='0,0,82,130'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male01b'>
<ImageFrame SourceRect='82,0,164,130'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male01c'>
<ImageFrame SourceRect='164,0,246,130'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male01d'>
<ImageFrame SourceRect='246,0,328,130'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male01e'>
<ImageFrame SourceRect='328,0,410,130'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02a'>
<ImageFrame SourceRect='0,130,82,260'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02b'>
<ImageFrame SourceRect='82,130,164,260'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02c'>
<ImageFrame SourceRect='164,130,246,260'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02d'>
<ImageFrame SourceRect='246,130,328,260'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male02e'>
<ImageFrame SourceRect='328,130,410,260'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03a'>
<ImageFrame SourceRect='0,260,82,390'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03b'>
<ImageFrame SourceRect='82,260,164,390'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03c'>
<ImageFrame SourceRect='164,260,246,390'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03d'>
<ImageFrame SourceRect='246,260,328,390'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male03e'>
<ImageFrame SourceRect='328,260,410,390'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04a'>
<ImageFrame SourceRect='0,390,82,520'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04b'>
<ImageFrame SourceRect='82,390,164,520'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04c'>
<ImageFrame SourceRect='164,390,246,520'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04d'>
<ImageFrame SourceRect='246,390,328,520'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male04e'>
<ImageFrame SourceRect='328,390,410,520'>
<ImageFragment Source='ui_male_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05a'>
<ImageFrame SourceRect='0,0,82,130'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05b'>
<ImageFrame SourceRect='82,0,164,130'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05c'>
<ImageFrame SourceRect='164,0,246,130'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05d'>
<ImageFrame SourceRect='246,0,328,130'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male05e'>
<ImageFrame SourceRect='328,0,410,130'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06a'>
<ImageFrame SourceRect='0,130,82,260'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06b'>
<ImageFrame SourceRect='82,130,164,260'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06c'>
<ImageFrame SourceRect='164,130,246,260'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06d'>
<ImageFrame SourceRect='246,130,328,260'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male06e'>
<ImageFrame SourceRect='328,130,410,260'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07a'>
<ImageFrame SourceRect='0,260,82,390'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07b'>
<ImageFrame SourceRect='82,260,164,390'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07c'>
<ImageFrame SourceRect='164,260,246,390'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07d'>
<ImageFrame SourceRect='246,260,328,390'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male07e'>
<ImageFrame SourceRect='328,260,410,390'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male08a'>
<ImageFrame SourceRect='0,390,82,520'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male08b'>
<ImageFrame SourceRect='82,390,164,520'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male08c'>
<ImageFrame SourceRect='164,390,246,520'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male08d'>
<ImageFrame SourceRect='246,390,328,520'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male08e'>
<ImageFrame SourceRect='328,390,410,520'>
<ImageFragment Source='ui_male_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male09a'>
<ImageFrame SourceRect='0,0,82,130'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male09b'>
<ImageFrame SourceRect='82,0,164,130'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male09c'>
<ImageFrame SourceRect='164,0,246,130'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male09d'>
<ImageFrame SourceRect='246,0,328,130'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male09e'>
<ImageFrame SourceRect='328,0,410,130'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male10a'>
<ImageFrame SourceRect='0,130,82,260'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male10b'>
<ImageFrame SourceRect='82,130,164,260'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male10c'>
<ImageFrame SourceRect='164,130,246,260'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male10d'>
<ImageFrame SourceRect='246,130,328,260'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male10e'>
<ImageFrame SourceRect='328,130,410,260'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male11a'>
<ImageFrame SourceRect='0,260,82,390'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male11b'>
<ImageFrame SourceRect='82,260,164,390'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male11c'>
<ImageFrame SourceRect='164,260,246,390'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male11d'>
<ImageFrame SourceRect='246,260,328,390'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Male11e'>
<ImageFrame SourceRect='328,260,410,390'>
<ImageFragment Source='ui_male_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_male_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_male_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_male_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_male_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_male_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_male_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_male_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_male_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_male_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female01a'>
<ImageFrame SourceRect='0,0,82,130'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female01b'>
<ImageFrame SourceRect='82,0,164,128'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female01c'>
<ImageFrame SourceRect='164,0,246,130'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female01d'>
<ImageFrame SourceRect='246,0,328,130'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female01e'>
<ImageFrame SourceRect='328,0,410,130'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female02a'>
<ImageFrame SourceRect='0,130,82,260'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female02b'>
<ImageFrame SourceRect='82,128,164,256'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female02c'>
<ImageFrame SourceRect='164,130,246,260'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female02d'>
<ImageFrame SourceRect='246,130,328,260'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female02e'>
<ImageFrame SourceRect='328,130,410,260'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female03a'>
<ImageFrame SourceRect='0,260,82,390'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female03b'>
<ImageFrame SourceRect='82,256,164,384'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female03c'>
<ImageFrame SourceRect='164,260,246,390'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female03d'>
<ImageFrame SourceRect='246,260,328,390'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female03e'>
<ImageFrame SourceRect='328,260,410,390'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female04a'>
<ImageFrame SourceRect='0,390,82,520'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female04b'>
<ImageFrame SourceRect='82,384,164,512'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female04c'>
<ImageFrame SourceRect='164,390,246,520'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female04d'>
<ImageFrame SourceRect='246,390,328,520'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female04e'>
<ImageFrame SourceRect='328,390,410,520'>
<ImageFragment Source='ui_female_faces_1_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_1_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_1_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_1_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_1_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_1_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_1_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_1_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_1_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_1_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female05a'>
<ImageFrame SourceRect='0,0,82,130'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female05b'>
<ImageFrame SourceRect='82,0,164,128'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female05c'>
<ImageFrame SourceRect='164,0,246,130'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female05d'>
<ImageFrame SourceRect='246,0,328,130'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female05e'>
<ImageFrame SourceRect='328,0,410,130'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female06a'>
<ImageFrame SourceRect='0,130,82,260'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female06b'>
<ImageFrame SourceRect='82,128,164,256'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female06c'>
<ImageFrame SourceRect='164,130,246,260'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female06d'>
<ImageFrame SourceRect='246,130,328,260'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female06e'>
<ImageFrame SourceRect='328,130,410,260'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female07a'>
<ImageFrame SourceRect='0,260,82,390'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female07b'>
<ImageFrame SourceRect='82,256,164,384'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female07c'>
<ImageFrame SourceRect='164,260,246,390'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female07d'>
<ImageFrame SourceRect='246,260,328,390'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female07e'>
<ImageFrame SourceRect='328,260,410,390'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female08a'>
<ImageFrame SourceRect='0,390,82,520'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female08b'>
<ImageFrame SourceRect='82,384,164,512'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female08c'>
<ImageFrame SourceRect='164,390,246,520'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female08d'>
<ImageFrame SourceRect='246,390,328,520'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female08e'>
<ImageFrame SourceRect='328,390,410,520'>
<ImageFragment Source='ui_female_faces_2_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_2_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_2_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_2_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_2_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_2_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_2_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_2_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_2_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_2_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female09a'>
<ImageFrame SourceRect='0,0,82,130'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female09b'>
<ImageFrame SourceRect='82,0,164,128'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female09c'>
<ImageFrame SourceRect='164,0,246,130'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female09d'>
<ImageFrame SourceRect='246,0,328,130'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female09e'>
<ImageFrame SourceRect='328,0,410,130'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female10a'>
<ImageFrame SourceRect='0,130,82,260'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female10b'>
<ImageFrame SourceRect='82,128,164,256'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female10c'>
<ImageFrame SourceRect='164,130,246,260'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female10d'>
<ImageFrame SourceRect='246,130,328,260'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
<ImageStyle Name='Female10e'>
<ImageFrame SourceRect='328,130,410,260'>
<ImageFragment Source='ui_female_faces_3_00' SourceRect='0,0,256,256'/>
<ImageFragment Offset='0,256' Source='ui_female_faces_3_01' SourceRect='0,0,256,256'/>
<ImageFragment Offset='256,0' Source='ui_female_faces_3_02' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,0' Source='ui_female_faces_3_03' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,128' Source='ui_female_faces_3_04' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,128' Source='ui_female_faces_3_05' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,256' Source='ui_female_faces_3_06' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,256' Source='ui_female_faces_3_07' SourceRect='0,0,32,128'/>
<ImageFragment Offset='256,384' Source='ui_female_faces_3_08' SourceRect='0,0,128,128'/>
<ImageFragment Offset='384,384' Source='ui_female_faces_3_09' SourceRect='0,0,32,128'/>
</ImageFrame>
</ImageStyle>
</Namespace>
</Page>
