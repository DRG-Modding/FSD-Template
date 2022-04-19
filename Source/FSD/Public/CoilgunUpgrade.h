#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "ECoilgunUpgrades.h"
#include "CoilgunUpgrade.generated.h"

class AItem;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UCoilgunUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoilgunUpgrades upgradeType;
    
public:
    UCoilgunUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, ECoilgunUpgrades NewUpgradeType);
    
};

