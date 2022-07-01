#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EMicroMissileLauncherUpgrades.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "MicroMissileLauncherUpgrade.generated.h"

class AItem;
class AFSDPlayerState;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UMicroMissileLauncherUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMicroMissileLauncherUpgrades upgradeType;
    
public:
    UMicroMissileLauncherUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EMicroMissileLauncherUpgrades NewUpgradeType);
    
};

