#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "ECrossbowUpgrades.h"
#include "UpgradeValues.h"
#include "CrossbowUpgrade.generated.h"

class AFSDPlayerState;
class AItem;
class ACrossbowProjectileBase;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
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

