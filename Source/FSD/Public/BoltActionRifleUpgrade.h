#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EBoltActionRifleUpgrades.h"
#include "UpgradeValues.h"
#include "BoltActionRifleUpgrade.generated.h"

class AItem;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UBoltActionRifleUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoltActionRifleUpgrades upgradeType;
    
public:
    UBoltActionRifleUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBoltActionRifleUpgrades NewUpgradeType);
    
};

