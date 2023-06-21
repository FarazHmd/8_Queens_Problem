@echo off
mkdir 	%HOMEDRIVE%\"program files (x86)"\"8_Queens_Problem_Project"

cd ..
xcopy 8_Queens_Problem_Project  %HOMEDRIVE%\"program files (x86)"\"8_Queens_Problem_Project"  /E /H /C /I /Y
cd .\"8_Queens_Problem_Project"

start .\SHORTCUT_CREATOR.bat


 
