#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EGatlingGunUpgrade.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "GatlingGunUpgrade.generated.h"

class AFSDPlayerState;
class AItem;

UCLASS(EditInlineNew, MinimalAPI)
class UGatlingGunUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EGatlingGunUpgrade upgradeType;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EGatlingGunUpgrade NewUpgradeType);
    
    UGatlingGunUpgrade();
};

