#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "SetImpulseDamageBonus.generated.h"

class UDamageImpulse;

UCLASS(Blueprintable, EditInlineNew)
class USetImpulseDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageImpulse* DamageImpulse;
    
public:
    USetImpulseDamageBonus();
};

