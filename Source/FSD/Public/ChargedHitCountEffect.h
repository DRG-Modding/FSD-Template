#pragma once
#include "CoreMinimal.h"
#include "WeaponHitCountEffect.h"
#include "ChargedHitCountEffect.generated.h"

class UDamageClass;
class USoundCue;
class UParticleSystem;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UChargedHitCountEffect : public UWeaponHitCountEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePerHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DamageParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DamageSound;
    
public:
    UChargedHitCountEffect();
};

