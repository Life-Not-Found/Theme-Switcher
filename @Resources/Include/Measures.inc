[mScrollMax]
Measure=Calc
Formula=((#WindowHeightMax#)-(#WindowHeight#-(#ItemSpacing#*2)))
DynamicVariables=1
UpdateDivider=-1
Group=Max

[Refresh]
 Measure=Plugin
 Plugin=HotKey
 HotKey=CTRL S
 KeyUpAction=[!Refresh][!Refresh]
