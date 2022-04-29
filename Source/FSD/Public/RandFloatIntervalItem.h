#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "RandFloatIntervalItem.generated.h"

USTRUCT(BlueprintType)
struct FRandFloatIntervalItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange range;
    
    FSD_API FRandFloatIntervalItem();
};

