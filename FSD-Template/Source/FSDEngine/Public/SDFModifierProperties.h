#pragma once
#include "CoreMinimal.h"
#include "SDFModifierProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFModifierProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Offset;
    
    UPROPERTY(EditAnywhere)
    float CellNoise;
    
    UPROPERTY(EditAnywhere)
    int32 Seed;
    
    FSDENGINE_API FSDFModifierProperties();
};

