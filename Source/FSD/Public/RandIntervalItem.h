#pragma once
#include "CoreMinimal.h"
#include "IRandRange.h"
#include "RandIntervalItem.generated.h"

USTRUCT(BlueprintType)
struct FRandIntervalItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange range;
    
    FSD_API FRandIntervalItem();
};

