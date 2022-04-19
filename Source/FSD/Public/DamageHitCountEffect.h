#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponHitCountEffect.h"
#include "DamageHitCountEffect.generated.h"

class USoundCue;
class UParticleSystem;
class UDamageClass;
class UStatusEffect;

UCLASS(EditInlineNew, MinimalAPI)
class UDamageHitCountEffect : public UWeaponHitCountEffect {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DeadBugWalkingTargetMarking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> DeadBugWalkingSTE;
    
public:
    UDamageHitCountEffect();
};

