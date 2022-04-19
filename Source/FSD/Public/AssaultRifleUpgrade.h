#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EAssaultRifleUpgrade.h"
#include "UpgradeValues.h"
#include "AssaultRifleUpgrade.generated.h"

class AFSDPlayerState;
class AItem;

UCLASS(EditInlineNew, MinimalAPI)
class UAssaultRifleUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAssaultRifleUpgrade upgradeType;
    
public:
    UAssaultRifleUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EAssaultRifleUpgrade NewUpgradeType);
    
};

