@echo off
setlocal EnableDelayedExpansion

rem Set active directory to main automation dir 
pushd %~dp0
cd ..

echo cooking UE project

"%UnrealEngineLocation%\Engine\Binaries\Win64\UE4Editor-Cmd.exe" "%ProjectFolder%%ProjectFile%" -run=cook -targetplatform=WindowsNoEditor

if %errorlevel% gtr 0 (
	echo Error reported! Stopping bats
	echo 
	pause
	exit
)

echo cooking complete

::There's probably a better way to pass an argument to disable pausing, but Oh well
if not "%1"=="noPause" (
	pause
)
