#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EAmmoDrivenWeapnUpgradeType.h"
#include "UpgradeValues.h"
#include "AmmoDrivenWeaponUpgrade.generated.h"

class AItem;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UAmmoDrivenWeaponUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAmmoDrivenWeapnUpgradeType upgradeType;
    
public:
    UAmmoDrivenWeaponUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EAmmoDrivenWeapnUpgradeType NewUpgradeType);
    
};

