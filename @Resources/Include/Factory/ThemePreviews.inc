[ThemePreview0]
Meter=Image
ImageName=#Theme0PreviewPath#
X=(#BaseXStart#+(#Offset#/2))
Y=(#ItemHeight#+#ItemSpacing#)r
W=#PictureWidth#
H=#PictureHeight#
MouseOverAction=[!CommandMeasure LuaTween0 "Start(0)"][!CommandMeasure LuaTween0 "Start(1)"][!CommandMeasure LuaTween0 "Start(2)"]
MouseLeaveAction=[!CommandMeasure LuaTween0 "Reverse(0)"][!CommandMeasure LuaTween0 "Reverse(1)"][!CommandMeasure LuaTween0 "Reverse(2)"]
LeftMouseUpAction=["#Theme0FilePath#"]
Group=Content | Tweenable
Container=ThemeContainer
DynamicVariables=1