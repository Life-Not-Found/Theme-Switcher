[Theme0]
Meter=Shape
Shape=Rectangle #ItemSpacing#,(#TopBarHeight#+#ItemSpacing#),(#WindowWidth#-(#ItemSpacing#*2)),#ItemHeight#,12,12 | StrokeWidth #ItemOutline# | Stroke Color #Theme0OutlineColor#| Fill Color #Theme0Color#
Container=ItemContainer
Y=(#ItemHeight#+#ItemSpacing#)r
LeftMouseUpAction=[!SetVariable SidePanelCurrentTheme "0"][!SetVariable SidePanelCurrentThemeName "#Theme0Name#"][!SetVariable SidePanelCurrentThemeTextColor "#Theme0TextColor#"][!SetVariable SidePanelCurrentThemeColor "#Theme0Color#"][!SetVariable SidePanelCurrentThemePreviewPath "#Theme0PreviewPath#"][!SetVariable SidePanelCurrentThemeFilePath "#Theme0FilePath#"][!SetVariable SidePanelCurrentThemeFileName "#Theme0FileName#"][!SetVariable SidePanelCurrentThemeOutlineColor "#Theme0OutlineColor#"][!SetVariable SidePanelHidden 0]
DynamicVariables=1
Group=Content