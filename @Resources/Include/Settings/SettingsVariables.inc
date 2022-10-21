[Variables]
;---------------------------
;Developer Variables
;---------------------------
DragBarTransparency=1
DragBarColor=0,255,0
DragBarCornerColor=255,0,0
;---------------------------
;Settings Variables
;---------------------------
SettingsFontStyle=Russo One
;---------------------------
;Main Panel Variables
;---------------------------
WindowWidth=420
WindowHeight=583
TopBarHeight=24
BackGroundColor=42,43,43
TopBarColor=0,240,255
;---------------------------
;Main Panel Item Variables
;---------------------------
ItemHeight=100
ItemSpacing=10
ItemOutline=1.5
MainFontSize=42
MainFontSizeMin=11
MainFontSizeMax=79
DeleteButtonShow=1
NonThemeItems=2
;---------------------------
;Main Panel Scroll Variables
;---------------------------
Scroll=0
ScrollInc=25
ScrollMin=0
Var=#@#Include\Settings\SettingsVariables.inc
;---------------------------
;Main Panel Drag Variables
;---------------------------
WindowWidthMin=20
WindowHeightMin=20
WindowWidthMax=1920
WindowHeightMax=(#ItemHeight#+#ItemSpacing#)*(#TotalThemes#+#NonThemeItems#)-#ItemSpacing#+#TopBarHeight#+(#ItemSpacing#*2)
;---------------------------
;Side Panel Variables
;---------------------------
SidePanelWidth=240
SidePanelHeight=384
SidePanelTopBarHeight=24
SidePanelGap=10
SidePanelHidden=1
;---------------------------
;Side Panel Item Variables
;---------------------------
SidePanelItemNum=6
SidePanelItemHeight=100
SidePanelItemSpacing=10
SidePanelFontSize=21.81818
SidePanelFontSizeMin=11
SidePanelFontSizeMax=79
;---------------------------
;Side Panel Scroll Variables
;---------------------------
SidePanelScroll=0
SidePanelScrollInc=25
SidePanelScrollMin=0
;---------------------------
;Side Panel Drag Variables
;---------------------------
SidePanelWidthMin=20
SidePanelHeightMin=20
SidePanelWindowWidthMax=1920
SidePanelWindowHeightMax=((#SidePanelItemHeight#+#SidePanelItemSpacing#)*#SidePanelItemNum#-#SidePanelItemSpacing#)+#SidePanelTopBarHeight#+(#SidePanelItemSpacing#*2)
;---------------------------
;Side Panel Open Variables
;---------------------------
SidePanelCurrentTheme=
SidePanelCurrentThemeName=
SidePanelCurrentThemeTextColor=
SidePanelCurrentThemeColor=229,26,249
SidePanelCurrentThemeOutlineColor=
SidePanelCurrentThemePreviewPath=
SidePanelCurrentThemeFileName=
