@echo off

rem Set active directory to main automation dir 
pushd %~dp0
cd ..

if not exist Configs/ (
	mkdir Configs
)

if not exist Configs/LocalConfig.ini (
	echo making default Local config
	(
		echo ProjectFile=..\FSD\FSD.uproject
		echo UnrealEngineLocation=C:\Program Files ^(x86^)\UE_4.27\
		echo SteamInstall=C:\Program Files ^(x86^)\Steam\steamapps\common\Deep Rock Galactic\
	) > Configs/LocalConfig.ini
)

if not exist Configs/GlobalConfig.ini (
	echo making default global config
	(
		echo ModName=myMod
	) > Configs/GlobalConfig.ini
)

if not exist Configs/PakWhiteList.ini (
	echo making default PakWhiteList
	(
		echo ..\Content
		echo ..\AssetRegistry.bin
	) > Configs/PakWhiteList.ini
)

if not exist Configs/PakBlackList.ini (
	echo making default PakBlackList
	copy nul PakBlackList.ini 
	move PakBlackList.ini Configs/PakBlackList.ini 
	
)

set ModIOExit=0

if not exist Configs/GlobalModioConfig.ini (
	echo GlobalModIOConfig not found^, new config generated^, you MUST specify variables for this to work properly ^(see readme^.md^)
	(
		echo ModID=
		echo MajorVersion=1
		echo MinorVersion=0
		echo AutoIncrementVersion=true
		echo AddVersionToModName=true
		echo AskForChangelog=true
		echo Changelog=
		echo GameID=2475
	) > Configs/GlobalModioConfig.ini
	set ModioExit=1
)

if not exist Configs/LocalModioConfig.ini (
	echo LocalModioConfig not found^, new config generated^, you MUST specify variables for this to work properly ^(see readme^.md^)
	(
		echo Token=
		echo Verbose=false
		echo ZipLocation=.
		echo LastZip=
		echo LastPak=
	) > Configs/LocalModioConfig.ini
	set ModioExit=1
)

if %ModioExit%==1 (
	pause
	exit 2
)