#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EGooGunUpgrades.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "GooGunUpgrade.generated.h"

class AItem;
class AFSDPlayerState;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UGooGunUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGooGunUpgrades upgradeType;
    
public:
    UGooGunUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EGooGunUpgrades NewUpgradeType);
    
};

