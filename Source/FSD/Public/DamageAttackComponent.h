#pragma once
#include "CoreMinimal.h"
#include "AttackBaseComponent.h"
#include "DamageAttackComponent.generated.h"

class UDamageComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDamageAttackComponent : public UAttackBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
public:
    UDamageAttackComponent();
};

