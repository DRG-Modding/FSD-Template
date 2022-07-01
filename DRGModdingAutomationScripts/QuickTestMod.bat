@echo off
setlocal EnableDelayedExpansion

::Set active directory to the dir the bat is in
pushd %~dp0

call UtilityBats/MakeDefaultConfigFiles.bat --noPause
call UtilityBats/LoadVars.bat
call UtilityBats/VerifyVars.bat --noPause

call UtilityBats/CookUEProject.bat --noPause

call UtilityBats/PackageMod.bat --noPause

mkdir "%SteamInstall%\FSD\Mods\%ModName%"

echo removing old mod pak
del "%SteamInstall%\FSD\Mods\%ModName%\*" /q

echo copying over new mod pak
move "%cd%\Temp\%ModName%.pak" "%SteamInstall%\FSD\Mods\%ModName%\"

start steam://rungameid/548430
