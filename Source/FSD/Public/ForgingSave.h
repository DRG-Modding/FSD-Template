#pragma once
#include "CoreMinimal.h"
#include "ForgingPendingReward.h"
#include "ForgingSave.generated.h"

USTRUCT(BlueprintType)
struct FForgingSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FForgingPendingReward> PendingMasteryRewards;
    
public:
    FSD_API FForgingSave();
};

