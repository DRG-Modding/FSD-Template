#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "CameraParticleAfflictionEffect.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class UCameraParticleAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleEffect;
    
public:
    UCameraParticleAfflictionEffect();
};

