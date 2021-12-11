#pragma once
#include "CoreMinimal.h"
#include "SDFOnionProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFOnionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Thickness;
    
    FSDENGINE_API FSDFOnionProperties();
};

