#pragma once
#include "CoreMinimal.h"
#include "RandRange.generated.h"

USTRUCT(BlueprintType)
struct FRandRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Min;
    
    UPROPERTY(EditAnywhere)
    float Max;
    
    FSD_API FRandRange();
};

