#pragma once
#include "CoreMinimal.h"
#include "SDFModulateLayer.generated.h"

USTRUCT(BlueprintType)
struct FSDFModulateLayer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ModulateDistance;
    
    UPROPERTY(EditAnywhere)
    float SDFOffset;
    
    FSDENGINE_API FSDFModulateLayer();
};

