#pragma once
#include "CoreMinimal.h"
#include "SDFModulateLayer.generated.h"

USTRUCT(BlueprintType)
struct FSDFModulateLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ModulateDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SDFOffset;
    
    FSDENGINE_API FSDFModulateLayer();
};

