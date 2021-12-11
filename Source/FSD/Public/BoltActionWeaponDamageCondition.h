#pragma once
#include "CoreMinimal.h"
#include "DamageCondition.h"
#include "EBoltActionWeaponConditions.h"
#include "BoltActionWeaponDamageCondition.generated.h"

UCLASS(EditInlineNew)
class UBoltActionWeaponDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EBoltActionWeaponConditions WeaponCondition;
    
public:
    UBoltActionWeaponDamageCondition();
};

