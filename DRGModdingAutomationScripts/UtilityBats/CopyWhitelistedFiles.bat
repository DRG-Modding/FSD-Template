@echo off
setlocal EnableDelayedExpansion

rem Set active directory to main automation dir 
pushd %~dp0
cd ..

echo resettings PackageInput folder
rmdir Temp\PackageInput /s /q
mkdir Temp\PackageInput\Content

for /F "tokens=*" %%g in (Configs/PakWhiteList.ini) do (
    if exist "%ProjectFolder%\Saved\Cooked\WindowsNoEditor\%ProjectName%\Content\%%g\" (
        echo copying folder %%g
        robocopy "%ProjectFolder%\Saved\Cooked\WindowsNoEditor\%ProjectName%\Content\%%g" "Temp\PackageInput\Content\%%g" /MIR /ns /nc /nfl /ndl /np /njh /njs
    ) else if exist "%ProjectFolder%\Saved\Cooked\WindowsNoEditor\%ProjectName%\Content\%%g" (
        echo copying file %%g
        copy "%ProjectFolder%\Saved\Cooked\WindowsNoEditor\%ProjectName%\Content\%%g" "Temp\PackageInput\Content\%%g" /y
    ) else (
        echo could not find %%g inside %ProjectName%\Content
    )
)

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