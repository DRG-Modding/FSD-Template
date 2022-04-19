#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EHitScanBaseUpgradeType.h"
#include "UpgradeValues.h"
#include "HitscanBaseUpgrade.generated.h"

class AFSDPlayerState;
class AItem;

UCLASS(EditInlineNew, MinimalAPI)
class UHitscanBaseUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitScanBaseUpgradeType upgradeType;
    
public:
    UHitscanBaseUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EHitScanBaseUpgradeType NewUpgradeType);
    
};

