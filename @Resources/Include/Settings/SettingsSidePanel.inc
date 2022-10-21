
[SidePanelBackground]
Meter=Shape
Shape=Rectangle (#WindowWidth#+#SidePanelGap#),0,#SidePanelWidth#,#SidePanelHeight#,12,12 | StrokeWidth 0 | Fill Color #BackGroundColor#
DynamicVariables=1
Group=SPBG
MouseScrollUpAction=[!UpdateMeasureGroup SidePanelMax][!SetVariable SidePanelScroll "(((#SidePanelScroll#-#SidePanelScrollInc#)<#SidePanelScrollMin#)?#SidePanelScrollMin#:(#SidePanelScroll#-#SidePanelScrollInc#))"][!Redraw][!Update]
MouseScrollDownAction=[!UpdateMeasureGroup SidePanelMax][!SetVariable SidePanelScroll "(((#SidePanelScroll#+#SidePanelScrollInc#)>[SPScrollMax])?[SPScrollMax]:(#SidePanelScroll#+#SidePanelScrollInc#))"][!Redraw][!Update]
MouseActionCursor=0
Hidden=#SidePanelHidden#

[SidePanelHeightItemWindowDrag]
Meter=Shape
Shape=Rectangle (#WindowWidth#+#SidePanelGap#),(#SidePanelHeight#-4),(#SidePanelWidth#-4),8 | StrokeWidth 0 | Fill Color #DragBarColor#,#DragBarTransparency#
DynamicVariables=1
LeftMouseDownAction=[!CommandMeasure SidePanelHeightWindowDrag "Start"]
Group=SPBG
MouseActionCursorName=aero_ns.cur
Hidden=#SidePanelHidden#

[SidePanelWidthItemWindowDrag]
Meter=Shape
Shape=Rectangle (#WindowWidth#+#SidePanelGap#+#SidePanelWidth#-4),0,8,(#SidePanelHeight#-4) | StrokeWidth 0 | Fill Color #DragBarColor#,#DragBarTransparency#
DynamicVariables=1
LeftMouseDownAction=[!CommandMeasure SidePanelWidthWindowDrag "Start"]
Group=SPBG
MouseActionCursorName=aero_ew.cur
Hidden=#SidePanelHidden#

[SidePanelDiagonalItemWindowDrag]
Meter=Shape
Shape=Rectangle (#WindowWidth#+#SidePanelGap#+#SidePanelWidth#-4),(#SidePanelHeight#-4),8,8 | StrokeWidth 0 | Fill Color #DragBarCornerColor#,#DragBarTransparency#
DynamicVariables=1
LeftMouseDownAction=[!CommandMeasure SidePanelWidthWindowDrag "Start"][!CommandMeasure SidePanelHeightWindowDrag "Start"]
Group=SPBG
MouseActionCursorName=aero_nwse.cur
Hidden=#SidePanelHidden#

[SidePanelItemContainer]
Meter=Shape
Shape=Rectangle (#WindowWidth#+#SidePanelGap#+#SidePanelItemSpacing#-#ItemOutline#),(#SidePanelTopBarHeight#+#SidePanelItemSpacing#-#ItemOutline#),(#SidePanelWidth#-(#SidePanelItemSpacing#*2)+(#ItemOutline#*2)),(#SidePanelHeight#-#SidePanelTopBarHeight#-(#SidePanelItemSpacing#*2)+(#ItemOutline#*2)) | StrokeWidth 0
DynamicVariables=1
Group=SPBG
Hidden=#SidePanelHidden#

[SidePanelTopBar]
Meter=Shape
Shape=Rectangle (#WindowWidth#+#SidePanelGap#),0,#SidePanelWidth#,#SidePanelTopBarHeight#,12,12 | StrokeWidth 0 | Fill Color 0,240,255
Shape2=Rectangle (#WindowWidth#+#SidePanelGap#),14,#SidePanelWidth#,10,0,0 | StrokeWidth 0 | Fill Color 0,240,255
DynamicVariables=1
Hidden=#SidePanelHidden#

[SidePanelHideButton]
Meter=Shape
Shape=Rectangle (#WindowWidth#+#SidePanelGap#+4),2,20,20,5 | StrokeWidth 0 | Fill Color 229,26,249
Shape2=Rectangle (#WindowWidth#+#SidePanelGap#+7.5),5,4.5,9,3 | StrokeWidth 0 | Fill Color 255,255,255 | Rotate 45
Shape3=Rectangle (#WindowWidth#+#SidePanelGap#+7.5),10,4.5,9,3 | StrokeWidth 0 | Fill Color 255,255,255 | Rotate -45
Shape4=Rectangle (#WindowWidth#+#SidePanelGap#+15.5),5,4.5,9,3 | StrokeWidth 0 | Fill Color 255,255,255 | Rotate 45
Shape5=Rectangle (#WindowWidth#+#SidePanelGap#+15.5),10,4.5,9,3 | StrokeWidth 0 | Fill Color 255,255,255 | Rotate -45
LeftMouseUpAction=[!SetVariable SidePanelHidden 1]
DynamicVariables=1
Hidden=#SidePanelHidden#

;---------------------------
;Side Panel Bases
;---------------------------

[SidePanelThemeName]
Meter=Shape
Shape=Rectangle (#WindowWidth#+#SidePanelGap#+#SidePanelItemSpacing#),(#SidePanelTopBarHeight#+#SidePanelItemSpacing#),(#SidePanelWidth#-(#SidePanelItemSpacing#*2)),#SidePanelItemHeight#,12,12 | StrokeWidth #ItemOutline# | Stroke Color #SidePanelCurrentThemeOutlineColor# | Fill Color #SidePanelCurrentThemeColor#
Container=SidePanelItemContainer
Y=-#SidePanelScroll#
LeftMouseUpAction=[!CommandMeasure "SidePanelNameInput" "ExecuteBatch 1"]
DynamicVariables=1
Group=SidePanelContent
UpdateDivider=1
Hidden=#SidePanelHidden#

[SidePanelThemeTextColor]
Meter=Shape
Shape=Rectangle (#WindowWidth#+#SidePanelGap#+#SidePanelItemSpacing#),(#SidePanelTopBarHeight#+#SidePanelItemSpacing#),(#SidePanelWidth#-(#SidePanelItemSpacing#*2)),#SidePanelItemHeight#,12,12 | StrokeWidth #ItemOutline# | Stroke Color #SidePanelCurrentThemeOutlineColor# | Fill Color #SidePanelCurrentThemeColor#
Container=SidePanelItemContainer
Y=(#SidePanelItemHeight#+#SidePanelItemSpacing#)r
LeftMouseUpAction=[!CommandMeasure TextColorPicker "Run"]
DynamicVariables=1
Group=SidePanelContent
UpdateDivider=1
Hidden=#SidePanelHidden#

[SidePanelThemeColor]
Meter=Shape
Shape=Rectangle (#WindowWidth#+#SidePanelGap#+#SidePanelItemSpacing#),(#SidePanelTopBarHeight#+#SidePanelItemSpacing#),(#SidePanelWidth#-(#SidePanelItemSpacing#*2)),#SidePanelItemHeight#,12,12 | StrokeWidth #ItemOutline# | Stroke Color #SidePanelCurrentThemeOutlineColor# | Fill Color #SidePanelCurrentThemeColor#
Container=SidePanelItemContainer
Y=(#SidePanelItemHeight#+#SidePanelItemSpacing#)r
LeftMouseUpAction=[!CommandMeasure ColorPicker "Run"]
DynamicVariables=1
Group=SidePanelContent
UpdateDivider=1
Hidden=#SidePanelHidden#

[SidePanelThemeOutlineColor]
Meter=Shape
Shape=Rectangle (#WindowWidth#+#SidePanelGap#+#SidePanelItemSpacing#),(#SidePanelTopBarHeight#+#SidePanelItemSpacing#),(#SidePanelWidth#-(#SidePanelItemSpacing#*2)),#SidePanelItemHeight#,12,12 | StrokeWidth #ItemOutline# | Stroke Color #SidePanelCurrentThemeOutlineColor# | Fill Color #SidePanelCurrentThemeColor#
Container=SidePanelItemContainer
Y=(#SidePanelItemHeight#+#SidePanelItemSpacing#)r
LeftMouseUpAction=[!CommandMeasure OutlineColorPicker "Run"]
DynamicVariables=1
Group=SidePanelContent
UpdateDivider=1
Hidden=#SidePanelHidden#

[SidePanelThemePictureSelection]
Meter=Shape
Shape=Rectangle (#WindowWidth#+#SidePanelGap#+#SidePanelItemSpacing#),(#SidePanelTopBarHeight#+#SidePanelItemSpacing#),(#SidePanelWidth#-(#SidePanelItemSpacing#*2)),#SidePanelItemHeight#,12,12 | StrokeWidth #ItemOutline# | Stroke Color #SidePanelCurrentThemeOutlineColor# | Fill Color #SidePanelCurrentThemeColor#
Container=SidePanelItemContainer
Y=(#SidePanelItemHeight#+#SidePanelItemSpacing#)r
SidePanelPreviewHidden
LeftMouseUpAction=[!CommandMeasure MeasureChoose "ChooseFile 1"]
DynamicVariables=1
Group=SidePanelContent
Hidden=#SidePanelHidden#

[SidePanelThemeFilePath]
Meter=Shape
Shape=Rectangle (#WindowWidth#+#SidePanelGap#+#SidePanelItemSpacing#),(#SidePanelTopBarHeight#+#SidePanelItemSpacing#),(#SidePanelWidth#-(#SidePanelItemSpacing#*2)),#SidePanelItemHeight#,12,12 | StrokeWidth #ItemOutline# | Stroke Color #SidePanelCurrentThemeOutlineColor# | Fill Color #SidePanelCurrentThemeColor#
Container=SidePanelItemContainer
Y=(#SidePanelItemHeight#+#SidePanelItemSpacing#)r
LeftMouseUpAction=[!CommandMeasure MeasureChoose "ChooseFile 2"]
DynamicVariables=1
Group=SidePanelContent
UpdateDivider=1
Hidden=#SidePanelHidden#

;---------------------------
;Side Panel Text
;---------------------------

[SidePanelThemeNameText]
Meter=String
W=(#SidePanelWidth#-(#SidePanelItemSpacing#*2))
H=#SidePanelItemHeight#
X=(#WindowWidth#+#SidePanelGap#+(#SidePanelWidth#/2))
Y=(-#SidePanelScroll#+#SidePanelTopBarHeight#+#SidePanelItemSpacing#+(#SidePanelItemHeight#/2))
Text=Name: #SidePanelCurrentThemeName#
FontSize=#SidePanelFontSize#
FontColor=#SidePanelCurrentThemeTextColor#
FontWeight=700
FontFace=#SettingsFontStyle#
AntiAlias=1
Container=SidePanelItemContainer
StringAlign=CenterCenter
ClipString=2
DynamicVariables=1
Group=SidePanelContent
Hidden=#SidePanelHidden#

[SidePanelThemeTextColorText]
Meter=String
W=(#SidePanelWidth#-(#SidePanelItemSpacing#*2))
H=#SidePanelItemHeight#
X=(#WindowWidth#+#SidePanelGap#+(#SidePanelWidth#/2))
Y=(#SidePanelItemHeight#+#SidePanelItemSpacing#)r
Text=Text Color: #SidePanelCurrentThemeTextColor#
FontSize=#SidePanelFontSize#
FontColor=#SidePanelCurrentThemeTextColor#
FontWeight=700
FontFace=#SettingsFontStyle#
AntiAlias=1
Container=SidePanelItemContainer
StringAlign=CenterCenter
ClipString=2
DynamicVariables=1
Group=SidePanelContent
Hidden=#SidePanelHidden#

[SidePanelThemeColorText]
Meter=String
W=(#SidePanelWidth#-(#SidePanelItemSpacing#*2))
H=#SidePanelItemHeight#
X=(#WindowWidth#+#SidePanelGap#+(#SidePanelWidth#/2))
Y=(#SidePanelItemHeight#+#SidePanelItemSpacing#)r
Text=Theme Color: #SidePanelCurrentThemeColor#
FontSize=#SidePanelFontSize#
FontColor=#SidePanelCurrentThemeTextColor#
FontWeight=700
FontFace=#SettingsFontStyle#
AntiAlias=1
Container=SidePanelItemContainer
StringAlign=CenterCenter
ClipString=2
DynamicVariables=1
Group=SidePanelContent
Hidden=#SidePanelHidden#

[SidePanelThemeOutlineColorText]
Meter=String
W=(#SidePanelWidth#-(#SidePanelItemSpacing#*2))
H=#SidePanelItemHeight#
X=(#WindowWidth#+#SidePanelGap#+(#SidePanelWidth#/2))
Y=(#SidePanelItemHeight#+#SidePanelItemSpacing#)r
Text=Outline Color: #SidePanelCurrentThemeOutlineColor#
FontSize=#SidePanelFontSize#
FontColor=#SidePanelCurrentThemeTextColor#
FontWeight=700
FontFace=#SettingsFontStyle#
AntiAlias=1
Container=SidePanelItemContainer
StringAlign=CenterCenter
ClipString=2
DynamicVariables=1
Group=SidePanelContent
Hidden=#SidePanelHidden#

[SidePanelThemePictureSelectionText]
Meter=String
W=(#SidePanelWidth#-(#SidePanelItemSpacing#*2))
H=#SidePanelItemHeight#
X=(#WindowWidth#+#SidePanelGap#+(#SidePanelWidth#/2))
Y=(#SidePanelItemHeight#+#SidePanelItemSpacing#)r
Text=Select Your Preview Image
FontSize=(#SidePanelFontSize#/1.2)
FontColor=#SidePanelCurrentThemeTextColor#
FontWeight=700
FontFace=#SettingsFontStyle#
AntiAlias=1
Container=SidePanelItemContainer
StringAlign=CenterCenter
ClipString=2
DynamicVariables=1
Group=SidePanelContent
Hidden=#SidePanelHidden#

[SidePanelThemeFilePathText]
Meter=String
W=(#SidePanelWidth#-(#SidePanelItemSpacing#*2))
H=#SidePanelItemHeight#
X=(#WindowWidth#+#SidePanelGap#+(#SidePanelWidth#/2))
Y=(#SidePanelItemHeight#+#SidePanelItemSpacing#)r
Text=Select Batch File / .EXE to Execute: #SidePanelCurrentThemeFileName#
FontSize=(#SidePanelFontSize#/1.5)
FontColor=#SidePanelCurrentThemeTextColor#
FontWeight=700
FontFace=#SettingsFontStyle#
AntiAlias=1
Container=SidePanelItemContainer
StringAlign=CenterCenter
ClipString=2
DynamicVariables=1
Group=SidePanelContent
Hidden=#SidePanelHidden#

;---------------------------
;Side Panel Images
;---------------------------

[PreviewPictureShow]
Meter=Image
ImageName=#SidePanelCurrentThemePreviewPath#
W=(#SidePanelWidth#-(#SidePanelItemSpacing#*2))
H=#SidePanelItemHeight#
Y=(-#SidePanelScroll#+(#SidePanelItemHeight#*4)+(#SidePanelItemSpacing#*5)+#SidePanelTopBarHeight#)
X=(#WindowWidth#+#SidePanelGap#+#SidePanelItemSpacing#)
Container=SidePanelItemContainer
DynamicVariables=1
Group=SidePanelContent
Hidden=#SidePanelHidden#

[PreviewPictureRounding]
Meter=Shape
Shape=Rectangle (#WindowWidth#+#SidePanelGap#+#SidePanelItemSpacing#-#ItemOutline#),(#SidePanelTopBarHeight#+#SidePanelItemSpacing#-#ItemOutline#),(#SidePanelWidth#-(#SidePanelItemSpacing#*2)+(#ItemOutline#*2)),(#SidePanelItemHeight#+(#ItemOutline#*2)),12,12 | StrokeWidth #ItemOutline# | Fill Color 255,255,255
Shape2=Rectangle (#WindowWidth#+#SidePanelItemSpacing#),(#SidePanelTopBarHeight#+(#SidePanelItemSpacing#/2)),#SidePanelWidth#,(#SidePanelItemHeight#+#SidePanelItemSpacing#),12,12 | StrokeWidth 0 | Fill Color #BackGroundColor#
Shape3=Combine Shape2 | Exclude Shape
Container=SidePanelItemContainer
Y=(-(#ItemHeight#/3)-#ItemOutline#)r
LeftMouseUpAction=[!CommandMeasure MeasureChoose "ChooseFile 1"]
DynamicVariables=1
Group=SidePanelContent
Hidden=#SidePanelHidden#