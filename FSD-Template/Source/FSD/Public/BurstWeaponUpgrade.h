#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EBurstWeaponUpgrades.h"
#include "UpgradeValues.h"
#include "BurstWeaponUpgrade.generated.h"

class AFSDPlayerState;
class AItem;

UCLASS(EditInlineNew, MinimalAPI)
class UBurstWeaponUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBurstWeaponUpgrades upgradeType;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBurstWeaponUpgrades NewUpgradeType);
    
    UBurstWeaponUpgrade();
};

