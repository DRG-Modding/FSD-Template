#pragma once
#include "CoreMinimal.h"
#include "SDFCylinderProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFCylinderProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float HalfLength;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    FSDENGINE_API FSDFCylinderProperties();
};

