#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "RandFloatIntervalItem.generated.h"

USTRUCT(BlueprintType)
struct FRandFloatIntervalItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRandRange range;
    
    FSD_API FRandFloatIntervalItem();
};

