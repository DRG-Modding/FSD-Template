#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EPlasmaCarbineUpgrades.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "PlasmaCarbineUpgrade.generated.h"

class AFSDPlayerState;
class AItem;

UCLASS(EditInlineNew, MinimalAPI)
class UPlasmaCarbineUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EPlasmaCarbineUpgrades upgradeType;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EPlasmaCarbineUpgrades NewUpgradeType);
    
    UPlasmaCarbineUpgrade();
};

