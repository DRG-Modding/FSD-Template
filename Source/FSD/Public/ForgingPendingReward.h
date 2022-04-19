#pragma once
#include "CoreMinimal.h"
#include "ForgingPendingReward.generated.h"

USTRUCT(BlueprintType)
struct FForgingPendingReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    FSD_API FForgingPendingReward();
};

