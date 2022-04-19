#pragma once
#include "CoreMinimal.h"
#include "ChallengeInfo.h"
#include "SeasonEvent.h"
#include "SeasonMissionResult.generated.h"

USTRUCT(BlueprintType)
struct FSeasonMissionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 XPFromMission;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 XPFromChallenges;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 TokenGain;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool LevelIncreased;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FChallengeInfo> UpdatedChallenges;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FSeasonEvent> CompletedEvents;
    
    FSD_API FSeasonMissionResult();
};

