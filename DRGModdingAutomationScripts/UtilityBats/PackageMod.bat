@echo off
setlocal EnableDelayedExpansion

rem Set active directory to main automation dir 
pushd %~dp0
cd ..

call UtilityBats/CopyWhitelistedFiles.bat --noPause
call UtilityBats/StripBlacklistedFiles.bat --noPause

::Make input text file
echo making input text file
copy nul Temp\Input.txt
echo "%cd%\Temp\PackageInput\" "../../../FSD/">Temp\Input.txt

::Package the files
echo running UnrealPak
"%UnrealEngineLocation%\Engine\Binaries\Win64\UnrealPak.exe" "%cd%\Temp\%ModName%.pak" -Create="%cd%\Temp\Input.txt"

echo Successfully packaged

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
