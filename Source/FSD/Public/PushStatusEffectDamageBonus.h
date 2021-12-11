#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageBonusBase.h"
#include "PushStatusEffectDamageBonus.generated.h"

class UStatusEffect;

UCLASS(EditInlineNew)
class UPushStatusEffectDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Chance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IgnoreArmorHit;
    
public:
    UPushStatusEffectDamageBonus();
};

