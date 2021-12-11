#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "EPlasmaCarbineConditions.h"
#include "PlasmaCarbineDamageCondition.generated.h"

UCLASS(EditInlineNew)
class UPlasmaCarbineDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EPlasmaCarbineConditions WeaponCondition;
    
    UPROPERTY(EditAnywhere)
    int32 Condition;
    
public:
    UPlasmaCarbineDamageCondition();
};

