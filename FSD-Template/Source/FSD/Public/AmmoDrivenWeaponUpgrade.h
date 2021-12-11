#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EAmmoDrivenWeapnUpgradeType.h"
#include "UpgradeValues.h"
#include "AmmoDrivenWeaponUpgrade.generated.h"

class AFSDPlayerState;
class AItem;

UCLASS(EditInlineNew, MinimalAPI)
class UAmmoDrivenWeaponUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EAmmoDrivenWeapnUpgradeType upgradeType;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EAmmoDrivenWeapnUpgradeType NewUpgradeType);
    
    UAmmoDrivenWeaponUpgrade();
};

