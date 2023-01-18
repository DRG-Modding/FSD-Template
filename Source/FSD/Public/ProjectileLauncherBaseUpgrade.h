#pragma once
#include "CoreMinimal.h"
#include "EProjectileLauncherBaseUpgradeType.h"
#include "StandardItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "ProjectileLauncherBaseUpgrade.generated.h"

class AFSDPlayerState;
class AItem;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProjectileLauncherBaseUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProjectileLauncherBaseUpgradeType upgradeType;
    
public:
    UProjectileLauncherBaseUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EProjectileLauncherBaseUpgradeType NewUpgradeType);
    
};

