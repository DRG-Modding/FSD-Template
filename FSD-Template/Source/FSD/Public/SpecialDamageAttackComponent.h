#pragma once
#include "CoreMinimal.h"
#include "SpecialAttackComponent.h"
#include "SpecialDamageAttackComponent.generated.h"

class UDamageComponent;

UCLASS()
class USpecialDamageAttackComponent : public USpecialAttackComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UDamageComponent* Damage;
    
public:
    USpecialDamageAttackComponent();
};

