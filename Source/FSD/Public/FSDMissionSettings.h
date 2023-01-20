#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "MissionHazardSetting.h"
#include "FSDMissionSettings.generated.h"

class UDifficultySetting;
class UGeneratedMission;
class UObject;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UFSDMissionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DefaultRoomGenerator;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMissionHazardSetting> MissionComplexitySettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMissionHazardSetting> MissionDurationSettings;
    
public:
    UFSDMissionSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetTotalHazardBonus(UObject* WorldContextObject, UGeneratedMission* mission, UDifficultySetting* DifficultySetting);
    
};

