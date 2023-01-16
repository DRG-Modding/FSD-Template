#pragma once
#include "CoreMinimal.h"
#include "ETargetStateDamageBonusType.h"
#include "DamageCondition.h"
#include "TargetStateDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTargetStateDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetStateDamageBonusType TargetState;
    
public:
    UTargetStateDamageCondition();
};

