#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECryoSprayUpgrades.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "CryoSprayUpgrade.generated.h"

class AItem;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UCryoSprayUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECryoSprayUpgrades upgradeType;
    
public:
    UCryoSprayUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ECryoSprayUpgrades NewUpgradeType);
    
};

