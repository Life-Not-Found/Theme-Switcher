[mScrollMax]
Measure=Calc
Formula=((#WindowHeightMax#)-#WindowHeight#)
DynamicVariables=1
UpdateDivider=-1
Group=Max

[SPScrollMax]
Measure=Calc
Formula=((#SidePanelWindowHeightMax#)-#SidePanelHeight#)
DynamicVariables=1
UpdateDivider=-1
Group=SPMax

[WWindowDrag]
Measure=Plugin
Plugin=Mouse
LeftMouseDragAction=[!SetVariable WindowWidth "(clamp($MouseX$,#WindowWidthMin#,#WindowWidthMax#))"][!SetVariable MainFontSize "(clamp((#WindowWidth#/10),#MainFontSizeMin#,#MainFontSizeMax#))"][!WriteKeyValue Variables WindowWidth "(clamp($MouseX$,#WindowWidthMin#,#WindowWidthMax#))" "#Var#"][!WriteKeyValue Variables MainFontSize "(clamp((#WindowWidth#/10),#MainFontSizeMin#,#MainFontSizeMax#))" "#Var#"][!UpdateMeterGroup BG][!UpdateMeterGroup Content][!Redraw][!Update]
LeftMouseUpAction=[!CommandMeasure WWindowDrag "Stop"]
RequireDragging=1
DynamicVariables=1

[HWindowDrag]
Measure=Plugin
Plugin=Mouse
LeftMouseDragAction=[!SetVariable WindowHeight "(clamp($MouseY$,#WindowHeightMin#,#WindowHeightMax#))"][!WriteKeyValue Variables WindowHeight "(clamp($MouseY$,#WindowHeightMin#,#WindowHeightMax#))" "#Var#"][!UpdateMeterGroup BG][!UpdateMeasureGroup Max][!SetVariable Scroll "(#Scroll#>[mScrollMax]?[mScrollMax]:#Scroll#)"][!WriteKeyValue Variables Scroll "(#Scroll#>[mScrollMax]?[mScrollMax]:#Scroll#)" "#Var#"][!UpdateMeterGroup Content][!Redraw][!Update]
LeftMouseUpAction=[!CommandMeasure HWindowDrag "Stop"]
RequireDragging=1
DynamicVariables=1

[SidePanelWidthWindowDrag]
Measure=Plugin
Plugin=Mouse
LeftMouseDragAction=[!SetVariable SidePanelWidth "(clamp(($MouseX$-#WindowWidth#-#SidePanelGap#),#SidePanelWidthMin#,#SidePanelWindowWidthMax#))"][!SetVariable SidePanelFontSize "(clamp((#SidePanelWidth#/11),#SidePanelFontSizeMin#,#SidePanelFontSizeMax#))"][!WriteKeyValue Variables SidePanelWidth "(clamp(($MouseX$-#WindowWidth#-#SidePanelGap#),#SidePanelWidthMin#,#SidePanelWindowWidthMax#))" "#Var#"][!WriteKeyValue Variables SidePanelFontSize "(clamp((#SidePanelWidth#/11),#SidePanelFontSizeMin#,#SidePanelFontSizeMax#))" "#Var#"][!UpdateMeterGroup SPBG][!UpdateMeterGroup SidePanelContent][!Redraw][!Update]
LeftMouseUpAction=[!CommandMeasure SidePanelWidthWindowDrag "Stop"]
RequireDragging=1
DynamicVariables=1

[SidePanelHeightWindowDrag]
Measure=Plugin
Plugin=Mouse
LeftMouseDragAction=[!SetVariable SidePanelHeight "(clamp($MouseY$,#SidePanelHeightMin#,#SidePanelWindowHeightMax#))"][!WriteKeyValue Variables SidePanelHeight "(clamp($MouseY$,#SidePanelHeightMin#,#SidePanelWindowHeightMax#))" "#Var#"][!UpdateMeterGroup SPBG][!UpdateMeasureGroup SPMax][!SetVariable SidePanelScroll "(#SidePanelScroll#>[SPScrollMax]?[SPScrollMax]:#SidePanelScroll#)"][!WriteKeyValue Variables SidePanelScroll "(#SidePanelScroll#>[SPScrollMax]?[SPScrollMax]:#SidePanelScroll#)" "#Var#"][!UpdateMeterGroup SidePanelContent][!Redraw][!Update]
LeftMouseUpAction=[!CommandMeasure SidePanelHeightWindowDrag "Stop"]
RequireDragging=1
DynamicVariables=1

[MeasureChoose]
Measure=Plugin
Plugin=FileChoose
UseNewStyle=0
GetTarget=1
AllowNonstorageFolder=1
CopyLink=1
LinkCache=#@#Addons\FileChoose\LinkCache\
GetIcon=0
IconCache= ;#@#Addons\FileChoose\IconCache\
IconSize=0
ReturnValue=Path
FileInitialDirectory=#@#Images\Previews\
ImageInitialDirectory=#@#Images\Previews\
Command1=[!WriteKeyValue Variables Theme#SidePanelCurrentTheme#PreviewPath "$Path$" "#@#Include\ThemeVariables.inc"][!SetVariable SidePanelCurrentThemePreviewPath "$Path$"][!UpdateMeter PreviewPictureShow][!Refresh "#SkinFileName#"][!Refresh "#SkinFileName#"][!Redraw]
Command2=[!WriteKeyValue Variables Theme#SidePanelCurrentTheme#FilePath "$Path$" "#@#Include\ThemeVariables.inc"][!WriteKeyValue Variables Theme#SidePanelCurrentTheme#FileName "$NameAndExt$" "#@#Include\ThemeVariables.inc"][!SetVariable SidePanelCurrentThemeFileName "$NameAndExt$"][!Refresh "#SkinFileName#"][!Refresh "#SkinFileName#"][!Redraw]
DynamicVariables=1

[TextColorPicker]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainRGB\RainRGB4RunCommand.exe""
Parameter=""VarName=Theme#SidePanelCurrentTheme#TextColor" "FileName=#@#Include\ThemeVariables.inc" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!UpdateMeasure TextColorPickerNoRefresh][!Refresh "#SkinFileName#"][!Refresh "#SkinFileName#"]
DynamicVariables=1

[TextColorPickerNoRefresh]
Measure=String
String=[TextColorPicker]
UpdateDivider=-1
DynamicVariables=1
IfMatch=^$
IfMatchMode=1
IfNotMatchAction=[!SetVariable SidePanelCurrentThemeTextColor "[TextColorPicker]"][!SetVariable Theme#SidePanelCurrentTheme#TextColor "[TextColorPicker]"][!UpdateMeter *][!Redraw]

[ColorPicker]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainRGB\RainRGB4RunCommand.exe""
Parameter=""VarName=Theme#SidePanelCurrentTheme#Color" "FileName=#@#Include\ThemeVariables.inc" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!UpdateMeasure ColorPickerNoRefresh][!Refresh "#SkinFileName#"][!Refresh "#SkinFileName#"]
DynamicVariables=1

[ColorPickerNoRefresh]
Measure=String
String=[ColorPicker]
UpdateDivider=-1
DynamicVariables=1
IfMatch=^$
IfMatchMode=1
IfNotMatchAction=[!SetVariable SidePanelCurrentThemeColor "[ColorPicker]"][!SetVariable Theme#SidePanelCurrentTheme#Color "[ColorPicker]"][!UpdateMeter *][!Redraw]

[OutlineColorPicker]
Measure=Plugin
Plugin=RunCommand
Program=""#@#Addons\RainRGB\RainRGB4RunCommand.exe""
Parameter=""VarName=Theme#SidePanelCurrentTheme#OutlineColor" "FileName=#@#Include\ThemeVariables.inc" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!UpdateMeasure OutlineColorPickerNoRefresh][!Refresh "#SkinFileName#"][!Refresh "#SkinFileName#"]
DynamicVariables=1

[OutlineColorPickerNoRefresh]
Measure=String
String=[OutlineColorPicker]
UpdateDivider=-1
DynamicVariables=1
IfMatch=^$
IfMatchMode=1
IfNotMatchAction=[!SetVariable SidePanelCurrentThemeOutlineColor "[OutlineColorPicker]"][!SetVariable Theme#SidePanelCurrentTheme#OutlineColor "[OutlineColorPicker]"][!UpdateMeter *][!Redraw]

[SidePanelNameInput]
Measure=Plugin
Plugin=InputText
SolidColor=#SidePanelCurrentThemeColor#
FontColor=#SidePanelCurrentThemeTextColor#
StringStyle=Bold
StringAlign=Center
FontSize=#SidePanelFontSize#
X=(#WindowWidth#+#SidePanelGap#+(#SidePanelItemSpacing#*1.5))
Y=(-#SidePanelScroll#+#SidePanelTopBarHeight#+(#SidePanelItemSpacing#*1.5))
H=(#SidePanelItemHeight#-#SidePanelItemSpacing#)
W=(#SidePanelWidth#-(#SidePanelItemSpacing#*3))
DefaultValue="#SidePanelCurrentThemeName#"
Command1=[!WriteKeyValue Variables Theme#SidePanelCurrentTheme#Name "$UserInput$" "#@#Include\ThemeVariables.inc"][!SetVariable SidePanelCurrentThemeName "[SidePanelNameInput]"][!SetVariable Theme#SidePanelCurrentTheme#Name "[SidePanelNameInput]"][!UpdateMeter *][!Refresh "#SkinFileName#"][!Refresh "#SkinFileName#"][!Redraw]
Group=SidePanelContent
Container=SidePanelItemContainer
UpdateDivider=-1
DynamicVariables=1

[Refresh]
 Measure=Plugin
 Plugin=HotKey
 HotKey=CTRL S
 KeyUpAction=[!Refresh][!Refresh]