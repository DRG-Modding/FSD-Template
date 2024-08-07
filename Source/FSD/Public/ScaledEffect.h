#pragma once
#include "CoreMinimal.h"
#include "ScaledEffect.generated.h"

class UFXSystemAsset;

USTRUCT(BlueprintType)
struct FScaledEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetBiomeRockMaterial;
    
public:
    FSD_API FScaledEffect();
};

