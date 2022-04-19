#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UObject/NoExportTypes.h"
#include "MissionHazardSetting.h"
#include "FSDMissionSettings.generated.h"

class UObject;
class UGeneratedMission;
class UDifficultySetting;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTotalHazardBonus(UObject* WorldContextObject, UGeneratedMission* mission, UDifficultySetting* DifficultySetting);
    
};

