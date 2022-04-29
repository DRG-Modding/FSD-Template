#pragma once
#include "CoreMinimal.h"
#include "SpecialAttackComponent.h"
#include "SpecialDamageAttackComponent.generated.h"

class UDamageComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpecialDamageAttackComponent : public USpecialAttackComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
public:
    USpecialDamageAttackComponent();
};

