#pragma once
#include "CoreMinimal.h"
#include "EGrenadeUpgradeType.h"
#include "StandardItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "GrenadeUpgrade.generated.h"

class AFSDPlayerState;
class AGrenade;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
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

