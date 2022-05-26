#pragma once
#include "CoreMinimal.h"
#include "RandRange.generated.h"

USTRUCT(BlueprintType)
struct FRandRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    FSD_API FRandRange();
};

