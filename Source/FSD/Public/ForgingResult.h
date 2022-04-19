#pragma once
#include "CoreMinimal.h"
#include "ForgingResult.generated.h"

USTRUCT(BlueprintType)
struct FForgingResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool LevelledUp;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 RewardLevel;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 RewardSeed;
    
    FSD_API FForgingResult();
};

