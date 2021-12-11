#pragma once
#include "CoreMinimal.h"
#include "RandRange.generated.h"

USTRUCT(BlueprintType)
struct FRandRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Max;
    
    FSD_API FRandRange();
};

