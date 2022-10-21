[Variables]
Var=#@#Include\Variables.inc
;---------------------------
;Main Variables
;---------------------------
BGWidth=700
BGTransparent=1
;---------------------------
;Item Variables
;---------------------------
ItemWidth=600
ItemHeight=128
ItemSpacing=10
BaseXStart=99
ItemTransparency=255
Rounding=12
Outline=1.5
Offset=20
PictureWidth=192
PictureHeight=108
FontSize=40
FontStyle=Permanent Marker
;---------------------------
;Scroll Variables
;---------------------------
Scroll=0
ScrollMin=0
ScrollInc=15
;---------------------------
;Lua Tween Variables
;---------------------------
TweenSpeed=260
;---------------------------
;Theme Factory Scripts
;---------------------------
[ThemeBasesTweensScriptFactory]
Measure=Script
ScriptFile=#@#Include\Factory\Factory.lua
IncFile=#@#Include\Factory\LuaTween.inc
Number=#TotalThemes#
SectionName=LuaTween%%
Option0=Measure
Value0=Script
Option1=ScriptFile
Value1=#*@*#Addons\LuaTween\Main.lua
Option2=TweenGroup
Value2=Tweenable
Option3=DynamicVariables
Value3=1
Option4=UpdateDivider
Value4=1
Option5=Tween0
Value5=Single | ThemeBase%% | X | #*BaseXStart*# | (#*Outline*#) | #*TweenSpeed*#
Option6=Tween1
Value6=Single | ThemePreview%% | X | (#*BaseXStart*#+(#*Offset*#/2)) | (#*Outline*#+(#*Offset*#/2)) | #*TweenSpeed*#
Option7=Tween2
Value7=Single | ThemeText%% | X | (#*BaseXStart*#+#*ItemWidth*#-#*PictureWidth*#-(#*Offset*#/2)) | (#*ItemWidth*#-#*PictureWidth*#-(#*Offset*#/2)) | #*TweenSpeed*#
UpdateDivider=-1

[ThemeBasesScriptFactory]
Measure=Script
ScriptFile=#@#Include\Factory\Factory.lua
IncFile=#@#Include\Factory\ThemeBases.inc
Number=#TotalThemes#
SectionName=ThemeBase%%
Option0=Meter
Value0=Shape
Option1=Shape
Value1=Rectangle 0,0,#*ItemWidth*#,#*ItemHeight*#,#*Rounding*# | StrokeWidth #*Outline*# | Stroke Color #Theme%%OutlineColor# | Fill Color #Theme%%Color#
Option2=Shape2
Value2=Rectangle (#*Offset*#/2),(#*Offset*#/2),#*PictureWidth*#,(#*ItemHeight*#-#*Offset*#),#*Rounding*# | StrokeWidth #*Outline*# | Stroke Color #Theme%%OutlineColor# | Fill Color 0,0,0,0
Option3=Shape3
Value3=Rectangle (#*PictureWidth*#-5),(#*Offset*#-25),30,30 | Fill Color 0,0,0 | Stroke Color 0,0,0,0 | Rotate 45
Option4=Shape4
Value4=Rectangle (-5),(#*ItemHeight*#-#*Offset*#-5),30,30 | Fill Color 0,0,0 | Stroke Color 0,0,0,0 | Rotate 45
Option5=Shape5
Value5=Combine Shape2 | Exclude Shape3 | Exclude Shape4
Option6=Shape6
Value6=Combine Shape | Exclude Shape5
Option7=Shape7
Value7=Rectangle (#*PictureWidth*#+#*Offset*#),(#*Offset*#/2),(#*ItemWidth*#-#*PictureWidth*#-#*Offset*#-(#*Offset*#/2)),(#*ItemHeight*#-#*Offset*#),#*Rounding*# | StrokeWidth #*Outline*# | Stroke Color #Theme%%OutlineColor# | Fill Color 0,0,0,0
Option8=Shape8
Value8=Rectangle (#*PictureWidth*#+(#*Offset*#/2)-5),(#*Offset*#-25),30,30 | Fill Color 0,0,0 | Stroke Color 0,0,0,0 | Rotate 45
Option9=Shape9
Value9=Rectangle (#*ItemWidth*#-#*Offset*#-5),(#*ItemHeight*#-#*Offset*#-5),30,30 | Fill Color 0,0,0 | Stroke Color 0,0,0,0 | Rotate 45
Option10=Shape10
Value10=Combine Shape7 | Exclude Shape8 | Exclude Shape9
Option11=DynamicVariables
Value11=1
Option12=Container
Value12=ThemeContainer
Option13=Y
Value13=(#*ItemHeight*#+#*ItemSpacing*#)r
Option14=MouseOverAction
Value14=[!CommandMeasure LuaTween%% "Start(0)"][!CommandMeasure LuaTween%% "Start(1)"][!CommandMeasure LuaTween%% "Start(2)"]
Option15=MouseLeaveAction
Value15=[!CommandMeasure LuaTween%% "Reverse(0)"][!CommandMeasure LuaTween%% "Reverse(1)"][!CommandMeasure LuaTween%% "Reverse(2)"]
Option16=LeftMouseUpAction
Value16=["#Theme%%FilePath#"]
Option17=Group
Value17=Content | Tweenable
Option18=X
Value18=#*BaseXStart*#
UpdateDivider=-1

[ThemeBasesPreviewScriptFactory]
Measure=Script
ScriptFile=#@#Include\Factory\Factory.lua
IncFile=#@#Include\Factory\ThemePreviews.inc
Number=#TotalThemes#
SectionName=ThemePreview%%
Option0=Meter
Value0=Image
Option1=ImageName
Value1=#Theme%%PreviewPath#
Option2=X
Value2=(#*BaseXStart*#+(#*Offset*#/2))
Option3=Y
Value3=(#*ItemHeight*#+#*ItemSpacing*#)r
Option4=W
Value4=#*PictureWidth*#
Option5=H
Value5=#*PictureHeight*#
Option6=MouseOverAction
Value6=[!CommandMeasure LuaTween%% "Start(0)"][!CommandMeasure LuaTween%% "Start(1)"][!CommandMeasure LuaTween%% "Start(2)"]
Option7=MouseLeaveAction
Value7=[!CommandMeasure LuaTween%% "Reverse(0)"][!CommandMeasure LuaTween%% "Reverse(1)"][!CommandMeasure LuaTween%% "Reverse(2)"]
Option8=LeftMouseUpAction
Value8=["#Theme%%FilePath#"]
Option9=Group
Value9=Content | Tweenable
Option10=Container
Value10=ThemeContainer
Option11=DynamicVariables
Value11=1
UpdateDivider=-1

[ThemeBasesTextScriptFactory]
Measure=Script
ScriptFile=#@#Include\Factory\Factory.lua
IncFile=#@#Include\Factory\ThemeText.inc
Number=#TotalThemes#
SectionName=ThemeText%%
Option0=Meter
Value0=String
Option1=W
Value1=(#*ItemWidth*#-#*PictureWidth*#-#*Offset*#-(#*Offset*#/2))
Option2=H
Value2=(#*ItemHeight*#-#*Offset*#)
Option3=X
Value3=(#*BaseXStart*#+#*ItemWidth*#-#*PictureWidth*#-(#*Offset*#/2))
Option4=Y
Value4=(#*ItemHeight*#+#*ItemSpacing*#)r
Option5=Text
Value5=#Theme%%Name#
Option6=FontSize
Value6=#*FontSize*#
Option7=FontColor
Value7=#Theme%%TextColor#
Option8=FontFace
Value8=#*FontStyle*#
Option9=FontWeight
Value9=700
Option10=AntiAlias
Value10=1
Option11=StringAlign
Value11=CenterCenter
Option12=ClipString
Value12=2
Option13=Group
Value13=Content | Tweenable
Option14=Container
Value14=ThemeContainer
Option15=DynamicVariables
Value15=1
Option16=MouseActionCursor
Value16=0
UpdateDivider=-1
