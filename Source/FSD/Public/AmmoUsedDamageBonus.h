#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "AmmoUsedDamageBonus.generated.h"

UCLASS(EditInlineNew)
class UAmmoUsedDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DamageBonusPerRoundFired;
    
public:
    UAmmoUsedDamageBonus();
};

