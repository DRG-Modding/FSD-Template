@echo off
setlocal EnableDelayedExpansion

rem Set active directory to main automation dir 
pushd %~dp0
cd ..

call UtilityBats/LoadVars.bat

set err=0

if not exist "%SteamInstall%\FSD.exe" set err=1
if not exist "%UnrealEngineLocation%\Engine\Binaries\Win64\UE4Editor.exe" set err=1
if not exist "%ProjectFolder%\%ProjectFile%" set err=1

if %err%==1 GOTO errHandling


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
exit /b

:errHandling
if not exist "%SteamInstall%\FSD.exe" echo SteamInstall of "%SteamInstall%" is invalid, please check GlobalConfig.ini and LocalConfig.ini. Note that SteamInstall should be the folder containing FSD.exe
if not exist "%UnrealEngineLocation%\Engine\Binaries\Win64\UE4Editor.exe" echo UnrealEngineLocation of "%UnrealEngineLocation%" invalid, please check GlobalConfig.ini and LocalConfig.ini. Note that UnrealEngineLocation should be the folder CONTAINING Engine\
if not exist "%ProjectFolder%\%ProjectFile%" echo ProjectFile "%ProjectFolder%\%ProjectFile%" does not exist. Please check GlobalConfig.ini and LocalConfig.ini
pause
exit
