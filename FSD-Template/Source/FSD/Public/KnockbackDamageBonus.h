#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "KnockbackDamageBonus.generated.h"

UCLASS(EditInlineNew)
class UKnockbackDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KnockBackHorizontalForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KnockBackVerticalForce;
    
public:
    UKnockbackDamageBonus();
};

