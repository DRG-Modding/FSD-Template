#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "AmmoUsedDamageBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAmmoUsedDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageBonusPerRoundFired;
    
public:
    UAmmoUsedDamageBonus();
};

