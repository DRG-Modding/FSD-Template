#pragma once
#include "CoreMinimal.h"
#include "ChallengeInfo.h"
#include "SeasonEvent.h"
#include "SeasonMissionResult.generated.h"

USTRUCT(BlueprintType)
struct FSeasonMissionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 XPFromMission;
    
    UPROPERTY(BlueprintReadOnly)
    int32 XPFromChallenges;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TokenGain;
    
    UPROPERTY(BlueprintReadOnly)
    bool LevelIncreased;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FChallengeInfo> UpdatedChallenges;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FSeasonEvent> CompletedEvents;
    
    FSD_API FSeasonMissionResult();
};

