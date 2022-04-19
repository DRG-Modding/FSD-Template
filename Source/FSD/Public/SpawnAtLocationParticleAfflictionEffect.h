#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "ScaledEffect.h"
#include "SpawnAtLocationParticleAfflictionEffect.generated.h"

UCLASS()
class USpawnAtLocationParticleAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScaledEffect ScaledParticleEffect;
    
public:
    USpawnAtLocationParticleAfflictionEffect();
};

