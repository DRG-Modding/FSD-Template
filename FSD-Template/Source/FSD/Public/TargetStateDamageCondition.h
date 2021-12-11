#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "ETargetStateDamageBonusType.h"
#include "TargetStateDamageCondition.generated.h"

UCLASS(EditInlineNew)
class UTargetStateDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ETargetStateDamageBonusType TargetState;
    
public:
    UTargetStateDamageCondition();
};

