#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "PlayerArmorDamageBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPlayerArmorDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
public:
    UPlayerArmorDamageBonus();

};

