#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemUpgrade.h"
#include "WeaponChargeProgressDamageBonus.generated.h"

class UDamageClass;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UWeaponChargeProgressDamageBonus : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ChargeRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval DamageBonusRange;
    
public:
    UWeaponChargeProgressDamageBonus();
};

