#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "EFlaregunProjectileUpgrades.h"
#include "FlaregunProjectileUpgrade.generated.h"

class AActor;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UFlaregunProjectileUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EFlaregunProjectileUpgrades upgradeType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> projectileClass;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, EFlaregunProjectileUpgrades NewUpgradeType);
    
    UFlaregunProjectileUpgrade();
};

