#pragma once
#include "CoreMinimal.h"
#include "RandRange.h"
#include "StatusEffectItem.h"
#include "DotStatusEffectItem.generated.h"

class UDamageImpulse;

UCLASS(EditInlineNew)
class UDotStatusEffectItem : public UStatusEffectItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange damageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideDamageImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageImpulse* DamageImpulseOverride;
    
public:
    UDotStatusEffectItem();
};

