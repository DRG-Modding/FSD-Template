#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EModifyStatusEffectDamageUpgrade.h"
#include "UpgradeValues.h"
#include "ModifyDynamicStatusEffectDamageBonusUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UModifyDynamicStatusEffectDamageBonusUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModifyStatusEffectDamageUpgrade upgradeType;
    
public:
    UModifyDynamicStatusEffectDamageBonusUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, EModifyStatusEffectDamageUpgrade NewUpgradeType);
    
};

