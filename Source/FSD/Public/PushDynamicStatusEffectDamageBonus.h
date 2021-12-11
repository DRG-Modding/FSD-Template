#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageBonusBase.h"
#include "PushDynamicStatusEffectDamageBonus.generated.h"

class UStatusEffect;

UCLASS(DefaultToInstanced, EditInlineNew)
class UPushDynamicStatusEffectDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> BaseSTE;
    
    UPROPERTY(Transient)
    UStatusEffect* StatusEffect;
    
    UPROPERTY(EditAnywhere)
    float Chance;
    
public:
    UPushDynamicStatusEffectDamageBonus();
};

