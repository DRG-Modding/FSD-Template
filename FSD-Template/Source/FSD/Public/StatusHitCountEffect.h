#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponHitCountEffect.h"
#include "StatusHitCountEffect.generated.h"

class UStatusEffect;

UCLASS(EditInlineNew, MinimalAPI)
class UStatusHitCountEffect : public UWeaponHitCountEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(EditAnywhere)
    float ChancePerHit;
    
public:
    UStatusHitCountEffect();
};

