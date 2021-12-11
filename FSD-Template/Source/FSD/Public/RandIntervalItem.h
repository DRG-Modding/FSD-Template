#pragma once
#include "CoreMinimal.h"
#include "IRandRange.h"
#include "RandIntervalItem.generated.h"

USTRUCT(BlueprintType)
struct FRandIntervalItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIRandRange range;
    
    FSD_API FRandIntervalItem();
};

