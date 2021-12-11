#pragma once
#include "CoreMinimal.h"
#include "SDFSphereProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFSphereProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    FName RadiusOverrideName;
    
    FSDENGINE_API FSDFSphereProperties();
};

