#pragma once
#include "CoreMinimal.h"
#include "WeaponHitCountEffect.h"
#include "ChargedHitCountEffect.generated.h"

class UDamageClass;
class UParticleSystem;
class USoundCue;

UCLASS(EditInlineNew, MinimalAPI)
class UChargedHitCountEffect : public UWeaponHitCountEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DamagePerHit;
    
    UPROPERTY(EditAnywhere)
    UDamageClass* DamageClass;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* DamageParticle;
    
    UPROPERTY(EditAnywhere)
    USoundCue* DamageSound;
    
public:
    UChargedHitCountEffect();
};

