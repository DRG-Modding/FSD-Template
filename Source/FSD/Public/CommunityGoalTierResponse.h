#pragma once
#include "CoreMinimal.h"
#include "CommunityGoalTierResponse.generated.h"

USTRUCT()
struct FCommunityGoalTierResponse {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Found;
    
    UPROPERTY()
    FString GoalID;
    
    UPROPERTY()
    float FirstTierGoal;
    
    UPROPERTY()
    float SecondTierGoal;
    
    UPROPERTY()
    float ThirdTierGoal;
    
    FSD_API FCommunityGoalTierResponse();
};

