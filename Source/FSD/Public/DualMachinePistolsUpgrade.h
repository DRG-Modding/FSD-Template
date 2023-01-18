#pragma once
#include "CoreMinimal.h"
#include "EDualMachinePistolsUpgrades.h"
#include "StandardItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "DualMachinePistolsUpgrade.generated.h"

class AFSDPlayerState;
class AItem;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDualMachinePistolsUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDualMachinePistolsUpgrades upgradeType;
    
public:
    UDualMachinePistolsUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EDualMachinePistolsUpgrades NewUpgradeType);
    
};

