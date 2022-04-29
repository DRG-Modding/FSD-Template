#pragma once
#include "CoreMinimal.h"
#include "CommunityGoalTierResponse.generated.h"

USTRUCT(BlueprintType)
struct FCommunityGoalTierResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Found;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GoalID;
    
    UPROPERTY(EditAnywhere)
    float FirstTierGoal;
    
    UPROPERTY(EditAnywhere)
    float SecondTierGoal;
    
    UPROPERTY(EditAnywhere)
    float ThirdTierGoal;
    
    FSD_API FCommunityGoalTierResponse();
};

