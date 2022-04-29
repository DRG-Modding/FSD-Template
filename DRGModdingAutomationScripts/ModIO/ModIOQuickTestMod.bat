@echo off
setlocal EnableDelayedExpansion

rem Set active directory to main automation dir 
pushd %~dp0
cd ..

call UtilityBats/MakeDefaultConfigFiles.bat NoPause
call UtilityBats/LoadVars.bat
call UtilityBats/VerifyVars.bat noPause

call CookUEProject.bat noPause

call PackageMod.bat noPause

REM mkdir "%SteamInstall%\FSD\Mods\%ModName%"

REM echo removing old mod pak
REM del "%SteamInstall%\FSD\Mods\%ModName%\*" /q

REM echo copying over new mod pak
REM move "%cd%\Temp\%ModName%.pak" "%SteamInstall%\FSD\Mods\%ModName%\"

echo uploading to mod.io
"%cd%\ModIO\ModIOUpload.bat" noPause UseTempPak
pause
