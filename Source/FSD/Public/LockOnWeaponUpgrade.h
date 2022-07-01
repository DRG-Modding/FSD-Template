#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ELockOnWeaponUpgrades.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "LockOnWeaponUpgrade.generated.h"

class AItem;
class AFSDPlayerState;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULockOnWeaponUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELockOnWeaponUpgrades upgradeType;
    
public:
    ULockOnWeaponUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ELockOnWeaponUpgrades NewUpgradeType);
    
};

