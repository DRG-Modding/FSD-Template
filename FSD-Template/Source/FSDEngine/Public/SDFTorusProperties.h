#pragma once
#include "CoreMinimal.h"
#include "SDFTorusProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFTorusProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float TubeRadius;
    
    UPROPERTY(EditAnywhere)
    FName SizeOverrideName;
    
    FSDENGINE_API FSDFTorusProperties();
};

