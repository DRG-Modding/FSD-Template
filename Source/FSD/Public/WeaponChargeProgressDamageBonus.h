#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "UObject/NoExportTypes.h"
#include "WeaponChargeProgressDamageBonus.generated.h"

class UDamageClass;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UWeaponChargeProgressDamageBonus : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ChargeRange;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval DamageBonusRange;
    
public:
    UWeaponChargeProgressDamageBonus();
};

