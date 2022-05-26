#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "FlatDamageBonus.generated.h"

class UDamageClass;

UCLASS(Blueprintable, EditInlineNew)
class UFlatDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
public:
    UFlatDamageBonus();
};

