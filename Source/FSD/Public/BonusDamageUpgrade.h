#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "BonusDamageUpgrade.generated.h"

class UDamageBonusBase;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UBonusDamageUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageBonusBase* DamageBonus;
    
public:
    UBonusDamageUpgrade();
};

