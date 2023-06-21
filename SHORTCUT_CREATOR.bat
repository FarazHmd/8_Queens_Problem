@echo off

@echo off
set SCRIPT="%TEMP%\%RANDOM%-%RANDOM%-%RANDOM%-%RANDOM%.vbs"
echo Set oWS = WScript.CreateObject("WScript.Shell") >> %SCRIPT%
echo sLinkFile = "%USERPROFILE%\Desktop\8_Queens_Problem_Project.lnk" >> %SCRIPT%
echo Set oLink = oWS.CreateShortcut(sLinkFile) >> %SCRIPT%
echo oLink.TargetPath = "%HOMEDRIVE%\program files (x86)\8_Queens_Problem_Project\Debug\8_Queens_Problem_Project.exe" >> %SCRIPT%
echo oLink.IconLocation = "%HOMEDRIVE%\program files (x86)\8_Queens_Problem_Project\RESURCES\Q.ico" >> %SCRIPT%
echo oLink.Arguments = "-h ServerNameOrIP -a ifix" >> %SCRIPT%
echo oLink.Save >> %SCRIPT%
cscript /nologo %SCRIPT%
del %SCRIPT%



IF EXIST "%HOMEDRIVE%\"program files (x86)"\8_Queens_Problem_Project\Debug\8_Queens_Problem_Project.exe (
    echo 'INSTALLING SUCCESS !'
)

pause
taskkill /im cmd.exe /f 