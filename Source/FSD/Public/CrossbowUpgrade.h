#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "ECrossbowUpgrades.h"
#include "UpgradeValues.h"
#include "CrossbowUpgrade.generated.h"

class AItem;
class AFSDPlayerState;
class ACrossbowProjectileBase;

UCLASS(EditInlineNew, MinimalAPI)
class UCrossbowUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrossbowUpgrades upgradeType;
    
public:
    UCrossbowUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, TSubclassOf<ACrossbowProjectileBase> Projectile, AFSDPlayerState* Player, ECrossbowUpgrades NewUpgradeType);
    
};

