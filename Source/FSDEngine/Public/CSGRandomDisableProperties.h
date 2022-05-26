#pragma once
#include "CoreMinimal.h"
#include "CSGRandomDisableProperties.generated.h"

USTRUCT(BlueprintType)
struct FCSGRandomDisableProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableProbability;
    
    FSDENGINE_API FCSGRandomDisableProperties();
};

