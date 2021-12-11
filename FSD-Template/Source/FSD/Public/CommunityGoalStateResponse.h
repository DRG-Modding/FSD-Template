#pragma once
#include "CoreMinimal.h"
#include "CommunityGoalStateResponse.generated.h"

USTRUCT()
struct FCommunityGoalStateResponse {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool isGoal;
    
    UPROPERTY()
    bool isRecruitment;
    
    UPROPERTY()
    bool FreeBeers;
    
    UPROPERTY()
    float TimeLeftSeconds;
    
    UPROPERTY()
    int32 LastUpdateGoalsID;
    
    UPROPERTY()
    int32 CurrentGoalPeriodID;
    
    FSD_API FCommunityGoalStateResponse();
};

