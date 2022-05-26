#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "KnockbackDamageBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UKnockbackDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockBackHorizontalForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockBackVerticalForce;
    
public:
    UKnockbackDamageBonus();
};

