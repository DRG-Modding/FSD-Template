# DRG modding automation scripts
This repo contains various bat files to help you automate your projects, including packaging, zipping, cooking, and all those fun things

## Installation/usage
In order to use this I recommend downloading the repo and placing it on folder above your .uproject. Once installed run VerifyVars.bat, and fix any errors in Config.ini

The most useful bats are:
- QuickTestMod.bat
  - Automatically runs all steps required to test mod locally, by cooking the project, copying it into the local mods folder, and automatically launching DRG through Steam
- PrepModForRelease.bat
  - Automatically runs all steps required to upload to mod.io, including cooking the project and zipping up the pak
- ModIOQuickTestMod.bat
  - Same as QuickTestMod, but instead of putting the mod into your local mods folder, uploads it to mod.io allowing for quicker testing of multiplayer mods

### Note: Config.ini and ModioConfig.ini both have a "Local" and "Global" version. The intention of this is so that it's easy to include the files in your own repo without accidentally doxing yourself or releasing your API keys. Any settings added to the "Local" config file will automatically overwrite the "Global" setting. 

Consider Local as stuff that will change from computer to computer (E.G. paths to Unreal Engine), and Global as stuff that won't (E.G. ModName)


### Config.ini
Contains various variables the batch files access. Assuming you installed everything in the default location you should only have to change ModName

| Variable | Description | Default value |
| --- | --- | --- |
| ProjectFile | Represents the location of the .uproject you want to work with. Can be a relative path. | ..\FSD\FSD.uproject |
| UnrealEngineLocation | Represents the location that UE4.25 is installed in. Expects the folder which CONTAINS Engine\\ | C:\Program Files (x86)\UE_4.25
| ModName | Used by the bats when making your pak name, and in one or two other places. | myMod |
| SteamInstall | The folder the game is installed in. Expects the folder containing FSD.exe | C:\Program Files (x86)\Steam\steamapps\common\Deep Rock Galactic |

### CookUEProject.bat
Runs UE4Editor-Cmd.exe in order to cook the mod files. You can find the cooked files in ProjectFolder\Saved\Cooked\WindowsNoEditor

### CopyWhitelistedFiles.bat
Copies all files/folders in PakWhiteList.ini and automatically copies them into Temp\PackageInput\Content from `ProjectFolder`\Saved\Cooked\WindowsNoEditor\\`ProjectName`\Content

### MakeDefaultConfigFiles.bat
If config.ini, PakWhiteList.ini, or PakWhiteList.ini are missing this bat will create the default version

### PackageMod.bat
Calls `CopyWhitelistedFiles.bat`, `StripBlacklistedFiles.bat` then packages into `"ModName".pak`

### PrepModForRelease
Calls CookUEProject.bat, PackageMod.bat, then automatically zips the pak up, with a suffix. (I recommend your mod version) This allows for fast uploading to mod.io

Zip gets named `"ModName""Suffix".zip`

### QuickTestMod.bat
Calls `CookUEProject.bat`, `PackageMod.bat`, then automatically moves the mod pak into DRG's local testing folder. Useful for prototyping small changes

### StripBlacklistedFiles.bat
Deletes all files/folders in PakBlackList.ini from Temp\PackageInput\Content

### VerifyVars.bat
Checks whether the variables in Config.ini are valid. If not, exits to prevent any odd issues and informs the user which variables need fixing. Is called by every other bat before they do much of anything

### ModIOConfig.ini
| Variable | Description | Default value |
| --- | --- | --- |
| Token | Your mod.io OAuth2 token w/ write perms (generate here https://mod.io/oauth/widget) | none* |
| ModID | The ID of the mod to upload to (I recommend creating a hidden mod for testing) | none* |
| MajorVersion, MinorVersion | The version for the new file to have on mod.io (will show as Major.Minor) | 1, 0 |
| AutoIncrementVersion | When true, the minor version will be increased by one after every execution | true |
| AddVersionToModName | When true, the pak and zip that are uploaded will have the version appended (e.g. myMod1.2.zip) | true |
| AskForChangelog | When true, the execution will stop before uploading and ask for a changelog to be manually added | true |
| ChangeLog | The changelog that will be shown on mod.io (this option is ignored if AskForChangeLog is true) | none |
| Verbose | When true, tar.exe and curl.exe will be run with the -v flag | false |
| GameID | The ID mod.io assigns to the game (DRG is 2475) | 2475 |
| ZipLocation | The directory to place the zip in before uploading (deleted next time the script is run) | . |
| LastZip/LastPak | DO NOT EDIT Used to store the location of the zip and pak from the previous execution allowing it to be deleted next time the script is run | none |

none* = Must be set for script to work properly


### ModIOUpload.bat
Uploads the already cooked and packaged mod in FSD\Mods defined in `Config.ini` to mod.io

### ModIOQuickTestMod.bat
Cooks, packages and uploads the mod to mod.io (essentially `QuickTestMod.bat` + `ModIOUpload.bat` but does not store files in the game directory)

# Credits
Samamstar for original bats  
Dr-Turtle for the mod.io integration system
