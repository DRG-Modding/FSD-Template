#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "BonusDamageUpgrade.generated.h"

class UDamageBonusBase;

UCLASS(EditInlineNew, MinimalAPI)
class UBonusDamageUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageBonusBase* DamageBonus;
    
public:
    UBonusDamageUpgrade();
};

