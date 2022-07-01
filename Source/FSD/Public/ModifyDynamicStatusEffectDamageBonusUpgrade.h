#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EModifyStatusEffectDamageUpgrade.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "ModifyDynamicStatusEffectDamageBonusUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
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

