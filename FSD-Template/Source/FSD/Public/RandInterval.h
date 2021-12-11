#pragma once
#include "CoreMinimal.h"
#include "RandIntervalItem.h"
#include "RandInterval.generated.h"

USTRUCT(BlueprintType)
struct FRandInterval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FRandIntervalItem> Intervals;
    
    FSD_API FRandInterval();
};

