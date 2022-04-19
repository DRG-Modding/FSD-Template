#pragma once
#include "CoreMinimal.h"
#include "CommunityGoalTierResponse.generated.h"

USTRUCT()
struct FCommunityGoalTierResponse {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    bool Found;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FString GoalID;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    float FirstTierGoal;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    float SecondTierGoal;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    float ThirdTierGoal;
    
    FSD_API FCommunityGoalTierResponse();
};

