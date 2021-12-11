#pragma once
#include "CoreMinimal.h"
#include "IRandRange.generated.h"

USTRUCT(BlueprintType)
struct FIRandRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Max;
    
    FSD_API FIRandRange();
};

