#pragma once
#include "CoreMinimal.h"
#include "SDFRandomDisableProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFRandomDisableProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableProbability;
    
    FSDENGINE_API FSDFRandomDisableProperties();
};

