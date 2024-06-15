#pragma once
#include "CoreMinimal.h"
#include "GlobalMissionSeed.h"
#include "ActiveCampaingMission.generated.h"

USTRUCT(BlueprintType)
struct FActiveCampaingMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGlobalMissionSeed GlobalSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MissionSeed;
    
    FSD_API FActiveCampaingMission();
};

