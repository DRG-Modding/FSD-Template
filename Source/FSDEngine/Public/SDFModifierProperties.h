#pragma once
#include "CoreMinimal.h"
#include "FastNoiseProperties.h"
#include "SDFModifierProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFModifierProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFastNoiseProperties Noise;
    
    UPROPERTY(EditAnywhere)
    float NoiseAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    FSDENGINE_API FSDFModifierProperties();
};

