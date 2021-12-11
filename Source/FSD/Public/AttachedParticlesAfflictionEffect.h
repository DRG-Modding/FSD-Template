#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "EAfflictionSocket.h"
#include "AttachedParticlesAfflictionEffect.generated.h"

class UFXSystemAsset;

UCLASS()
class UAttachedParticlesAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UFXSystemAsset* ParticleEffect;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<UFXSystemAsset*> ParticleEffects;
    
    UPROPERTY(EditAnywhere)
    EAfflictionSocket Socket;
    
    UPROPERTY(EditAnywhere)
    bool ScaleToActor;
    
    UPROPERTY(EditAnywhere)
    bool UseVisibilityHack;
    
public:
    UAttachedParticlesAfflictionEffect();
};

