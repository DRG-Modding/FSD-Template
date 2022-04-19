#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EGrenadeUpgradeType.h"
#include "UpgradeValues.h"
#include "GrenadeUpgrade.generated.h"

class AGrenade;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UGrenadeUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrenadeUpgradeType upgradeType;
    
public:
    UGrenadeUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AGrenade> flareClass, EGrenadeUpgradeType NewUpgradeType);
    
};

