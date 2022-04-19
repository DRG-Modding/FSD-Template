#pragma once
#include "CoreMinimal.h"
#include "MissionStatCounter.h"
#include "MissionStatSave.generated.h"

USTRUCT(BlueprintType)
struct FMissionStatSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionStatCounter> Counters;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bCharacterLevelUpFixed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bBoughtVanityItemsFixed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bBoughtEquipmentUpgradesFixed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bCampaignsCompletedFixed;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool WeaponUpgradesFixed;
    
public:
    FSD_API FMissionStatSave();
};

