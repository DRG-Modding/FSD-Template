#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
#include "EItemCategory.h"
#include "AnimatedItemParticleAfflictionEffect.generated.h"

class UParticleSystem;

UCLASS()
class UAnimatedItemParticleAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EItemCategory ItemCategory;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ParticleEffect;
    
    UPROPERTY(EditAnywhere)
    FName Socket;
    
public:
    UAnimatedItemParticleAfflictionEffect();
};

