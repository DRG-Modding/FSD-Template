#pragma once
#include "CoreMinimal.h"
#include "SDFSmoothingProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFSmoothingProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SmoothingDist;
    
    UPROPERTY(EditAnywhere)
    bool SmoothingEnabled;
    
    FSDENGINE_API FSDFSmoothingProperties();
};

