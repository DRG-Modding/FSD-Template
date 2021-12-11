#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageBonusBase.h"
#include "ETargetStateDamageBonusType.h"
#include "StatusAndStateDamageBonus.generated.h"

class UStatusEffect;
class UDamageClass;

UCLASS(EditInlineNew)
class UStatusAndStateDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<ETargetStateDamageBonusType> TargetStates;
    
    UPROPERTY(EditAnywhere)
    float Bonus;
    
    UPROPERTY(EditAnywhere)
    UDamageClass* DamageClass;
    
public:
    UStatusAndStateDamageBonus();
};

