#pragma once
#include "CoreMinimal.h"
#include "EPickaxeUpgradeType.h"
#include "StandardItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "PickaxeUpgrade.generated.h"

class AFSDPlayerState;
class AItem;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UPickaxeUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPickaxeUpgradeType upgradeType;
    
public:
    UPickaxeUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EPickaxeUpgradeType NewUpgradeType);
    
};

