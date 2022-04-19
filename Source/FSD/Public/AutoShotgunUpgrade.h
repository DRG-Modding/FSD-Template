#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EAutoShotgunUpgrades.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "AutoShotgunUpgrade.generated.h"

class AItem;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UAutoShotgunUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAutoShotgunUpgrades upgradeType;
    
public:
    UAutoShotgunUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EAutoShotgunUpgrades NewUpgradeType);
    
};

