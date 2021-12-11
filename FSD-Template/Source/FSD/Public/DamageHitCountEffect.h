#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponHitCountEffect.h"
#include "DamageHitCountEffect.generated.h"

class UDamageClass;
class UParticleSystem;
class USoundCue;
class UStatusEffect;

UCLASS(EditInlineNew, MinimalAPI)
class UDamageHitCountEffect : public UWeaponHitCountEffect {
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
    
    UPROPERTY(EditAnywhere)
    bool DeadBugWalkingTargetMarking;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> DeadBugWalkingSTE;
    
public:
    UDamageHitCountEffect();
};

