#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "CameraParticleAfflictionEffect.generated.h"

class UParticleSystem;

UCLASS()
class UCameraParticleAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UParticleSystem* ParticleEffect;
    
public:
    UCameraParticleAfflictionEffect();
};

