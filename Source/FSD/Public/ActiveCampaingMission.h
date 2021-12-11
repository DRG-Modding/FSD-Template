#pragma once
#include "CoreMinimal.h"
#include "ActiveCampaingMission.generated.h"

USTRUCT(BlueprintType)
struct FActiveCampaingMission {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool HasMission;
    
    UPROPERTY(Transient)
    int32 GlobalSeed;
    
    UPROPERTY(Transient)
    int32 MissionSeed;
    
    FSD_API FActiveCampaingMission();
};

