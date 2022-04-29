#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "RangedFlatDamageBonus.generated.h"

class UCurveFloat;
class UDamageClass;

UCLASS(Blueprintable, EditInlineNew)
class URangedFlatDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
public:
    URangedFlatDamageBonus();
};

