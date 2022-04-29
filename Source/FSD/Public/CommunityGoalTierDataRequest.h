#pragma once
#include "CoreMinimal.h"
#include "CommunityGoalTierDataRequest.generated.h"

USTRUCT(BlueprintType)
struct FCommunityGoalTierDataRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GoalID;
    
    FSD_API FCommunityGoalTierDataRequest();
};

