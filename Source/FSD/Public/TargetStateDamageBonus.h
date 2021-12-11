#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "ETargetStateDamageBonusType.h"
#include "TargetStateDamageBonus.generated.h"

class UDamageClass;

UCLASS(EditInlineNew)
class UTargetStateDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ETargetStateDamageBonusType TargetState;
    
    UPROPERTY(EditAnywhere)
    float Bonus;
    
    UPROPERTY(EditAnywhere)
    UDamageClass* DamageClass;
    
public:
    UTargetStateDamageBonus();
};

