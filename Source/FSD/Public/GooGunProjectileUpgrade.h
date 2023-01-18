#pragma once
#include "CoreMinimal.h"
#include "EGooGunProjectileUpgrades.h"
#include "StandardItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "GooGunProjectileUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UGooGunProjectileUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGooGunProjectileUpgrades upgradeType;
    
public:
    UGooGunProjectileUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, EGooGunProjectileUpgrades NewUpgradeType);
    
};

