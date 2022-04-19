#pragma once
#include "CoreMinimal.h"
#include "MilestoneCounter.h"
#include "MilestoneSave.generated.h"

USTRUCT(BlueprintType)
struct FMilestoneSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMilestoneCounter> ClaimedKPIRewards;
    
public:
    FSD_API FMilestoneSave();
};

