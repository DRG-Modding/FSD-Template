#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageBonusBase.h"
#include "StatusDamageBonus.generated.h"

class UStatusEffect;
class UDamageClass;

UCLASS(EditInlineNew)
class UStatusDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    
    UPROPERTY(EditAnywhere)
    float Bonus;
    
    UPROPERTY(EditAnywhere)
    UDamageClass* DamageClass;
    
public:
    UStatusDamageBonus();
};

