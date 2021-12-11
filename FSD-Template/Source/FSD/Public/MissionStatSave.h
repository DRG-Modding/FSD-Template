#pragma once
#include "CoreMinimal.h"
#include "MissionStatCounter.h"
#include "MissionStatSave.generated.h"

USTRUCT(BlueprintType)
struct FMissionStatSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FMissionStatCounter> Counters;
    
    UPROPERTY()
    bool bCharacterLevelUpFixed;
    
    UPROPERTY()
    bool bBoughtVanityItemsFixed;
    
    UPROPERTY()
    bool bBoughtEquipmentUpgradesFixed;
    
    UPROPERTY()
    bool bCampaignsCompletedFixed;
    
    UPROPERTY()
    bool WeaponUpgradesFixed;
    
public:
    FSD_API FMissionStatSave();
};

