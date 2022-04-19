#pragma once
#include "CoreMinimal.h"
#include "ActiveCampaingMission.generated.h"

USTRUCT(BlueprintType)
struct FActiveCampaingMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool HasMission;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 GlobalSeed;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 MissionSeed;
    
    FSD_API FActiveCampaingMission();
};

