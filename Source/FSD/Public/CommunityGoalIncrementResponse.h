#pragma once
#include "CoreMinimal.h"
#include "CommunityGoalIncrementResponse.generated.h"

USTRUCT(BlueprintType)
struct FCommunityGoalIncrementResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    FSD_API FCommunityGoalIncrementResponse();
};

