#pragma once
#include "CoreMinimal.h"
#include "CommunityGoalStateResponse.generated.h"

USTRUCT()
struct FCommunityGoalStateResponse {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    bool isGoal;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    bool isRecruitment;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    bool FreeBeers;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    float TimeLeftSeconds;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int32 LastUpdateGoalsID;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    int32 CurrentGoalPeriodID;
    
    FSD_API FCommunityGoalStateResponse();
};

