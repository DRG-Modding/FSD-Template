#pragma once
#include "CoreMinimal.h"
#include "CommunityGoalStateData.generated.h"

USTRUCT(BlueprintType)
struct FCommunityGoalStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool isGoal;
    
    UPROPERTY(BlueprintReadOnly)
    bool isRecruitment;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeLeftSeconds;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentGoalPeriodID;
    
    FSD_API FCommunityGoalStateData();
};

