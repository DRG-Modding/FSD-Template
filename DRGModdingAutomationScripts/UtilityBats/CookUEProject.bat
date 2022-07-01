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

rem I found a better way to disable pausing :P
set noPause=false
for %%g in (%*) do (
    if "%%g"=="--noPause" (
        set noPause==true
    )
)
if %noPause%==false (
	pause
)
