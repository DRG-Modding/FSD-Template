#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EMicroMissileLauncherUpgrades.h"
#include "UpgradeValues.h"
#include "MicroMissileLauncherUpgrade.generated.h"

class AFSDPlayerState;
class AItem;

UCLASS(EditInlineNew, MinimalAPI)
class UMicroMissileLauncherUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EMicroMissileLauncherUpgrades upgradeType;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EMicroMissileLauncherUpgrades NewUpgradeType);
    
    UMicroMissileLauncherUpgrade();
};

