#pragma once
#include "CoreMinimal.h"
#include "ScaledEffect.generated.h"

class UFXSystemAsset;

USTRUCT(BlueprintType)
struct FScaledEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFXSystemAsset* ParticleSystem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Scale;
    
public:
    FSD_API FScaledEffect();
};

