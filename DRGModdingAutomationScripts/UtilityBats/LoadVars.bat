@echo off

rem Set active directory to main automation dir 
pushd %~dp0
cd ..

REM Find variables in GlobalConfig.ini
for /f "tokens=1,2 delims==" %%g in (Configs/GlobalConfig.ini) do (
	REM Variables modname and ProjectFile need to be treated differently, all other variables in Config.ini are paths
	if %%g==ModName (
		set ModName=%%h
	) else if %%g==ProjectFile (
		REM Resolve to path w/ drive letter
		set ProjectFolder=%%~dph
		REM Resolve to file name w/ extension
		set ProjectFile=%%~nxh
        REM Resolve to file name only
        set ProjectName=%%~nh
	) else (
		REM Resolve qualified path name
		set %%g=%%~fh
	)
)

REM Since this runs after Global config, any options in the local config override the global one
for /f "tokens=1,2 delims==" %%g in (Configs/LocalConfig.ini) do (
	REM Variables modname and ProjectFile need to be treated differently, all other variables in Config.ini are paths
    if %%g==ModName (
		set ModName=%%h
	) else if %%g==ProjectFile (
		REM Resolve to path w/ drive letter
		set ProjectFolder=%%~dph
		REM Resolve to file name w/ extension
		set ProjectFile=%%~nxh
        REM Resolve to file name only
        set ProjectName=%%~nh
	) else (
		REM Resolve qualified path name
		set %%g=%%~fh
	)
)

REM Find variables in ModIOConfigs
for /f "delims=" %%g in (Configs/GlobalModIOConfig.ini) do (set "%%g")
for /f "delims=" %%g in (Configs/LocalModIOConfig.ini) do (set "%%g")