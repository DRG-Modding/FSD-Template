#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EGooGunProjectileUpgrades.h"
#include "UpgradeValues.h"
#include "GooGunProjectileUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UGooGunProjectileUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EGooGunProjectileUpgrades upgradeType;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, EGooGunProjectileUpgrades NewUpgradeType);
    
    UGooGunProjectileUpgrade();
};

