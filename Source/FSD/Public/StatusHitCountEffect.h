#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponHitCountEffect.h"
#include "StatusHitCountEffect.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UStatusHitCountEffect : public UWeaponHitCountEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChancePerHit;
    
public:
    UStatusHitCountEffect();
};

