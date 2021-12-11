#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EBeltDrivenWeaponUpgrade.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "BeltDrivenWeaponUpgrade.generated.h"

class AFSDPlayerState;
class AItem;

UCLASS(EditInlineNew, MinimalAPI)
class UBeltDrivenWeaponUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EBeltDrivenWeaponUpgrade upgradeType;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBeltDrivenWeaponUpgrade NewUpgradeType);
    
    UBeltDrivenWeaponUpgrade();
};

