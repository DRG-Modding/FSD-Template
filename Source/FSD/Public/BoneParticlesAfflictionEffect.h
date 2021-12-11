#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "BoneParticlesAfflictionEffect.generated.h"

class UParticleSystem;
class USoundCue;

UCLASS(Abstract)
class UBoneParticlesAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<UParticleSystem*> Particles;
    
    UPROPERTY(EditAnywhere)
    USoundCue* Sound;
    
public:
    UBoneParticlesAfflictionEffect();
};

