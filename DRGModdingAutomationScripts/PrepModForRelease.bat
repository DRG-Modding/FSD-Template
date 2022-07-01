@echo off
setlocal EnableDelayedExpansion

::Set active directory to the dir the bat is in
pushd %~dp0

call UtilityBats/MakeDefaultConfigFiles.bat --noPause
call UtilityBats/LoadVars.bat
call UtilityBats/VerifyVars.bat --noPause

call UtilityBats/CookUEProject.bat --noPause

call UtilityBats/PackageMod.bat --noPause

cd Temp

tar -a -cf "%ModName%.zip" "%ModName%.pak"

set /p ReleaseName=Please enter a suffix for this release:

ren "%ModName%.zip" "%ModName%%ReleaseName%.zip"

pause
