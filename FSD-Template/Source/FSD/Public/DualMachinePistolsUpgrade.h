#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EDualMachinePistolsUpgrades.h"
#include "UpgradeValues.h"
#include "DualMachinePistolsUpgrade.generated.h"

class AFSDPlayerState;
class AItem;

UCLASS(EditInlineNew, MinimalAPI)
class UDualMachinePistolsUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EDualMachinePistolsUpgrades upgradeType;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EDualMachinePistolsUpgrades NewUpgradeType);
    
    UDualMachinePistolsUpgrade();
};

