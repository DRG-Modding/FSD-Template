#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "BoneParticlesAfflictionEffect.generated.h"

class USoundCue;
class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class UBoneParticlesAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Sound;
    
public:
    UBoneParticlesAfflictionEffect();
};

