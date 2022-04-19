#pragma once
#include "CoreMinimal.h"
#include "RandFloatIntervalItem.h"
#include "RandFloatInterval.generated.h"

USTRUCT(BlueprintType)
struct FRandFloatInterval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandFloatIntervalItem> Intervals;
    
    FSD_API FRandFloatInterval();
};

