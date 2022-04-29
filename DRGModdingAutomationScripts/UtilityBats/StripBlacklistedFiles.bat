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

::There's probably a better way to pass an argument to disable pausing, but Oh well
if not "%1"=="noPause" (
	pause
)