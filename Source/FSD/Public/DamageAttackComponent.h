#pragma once
#include "CoreMinimal.h"
#include "AttackBaseComponent.h"
#include "DamageAttackComponent.generated.h"

class UDamageComponent;

UCLASS(Abstract)
class UDamageAttackComponent : public UAttackBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UDamageComponent* Damage;
    
public:
    UDamageAttackComponent();
};

