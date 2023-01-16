@echo off
setlocal EnableDelayedExpansion

rem Set active directory to main automation dir 
pushd %~dp0
cd ..

for /F "tokens=*" %%g in (Configs/PakBlackList.ini) do (
    if exist "%ProjectFolder%\Saved\Cooked\WindowsNoEditor\%ProjectName%\Content\%%g\" (
        echo removing folder %%g
        rmdir "Temp\PackageInput\Content\%%g" /s /q
    ) else if exist "%ProjectFolder%\Saved\Cooked\WindowsNoEditor\%ProjectName%\Content\%%g" (
        echo removing file %%g
        del "Temp\PackageInput\Content\%%g" /q
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