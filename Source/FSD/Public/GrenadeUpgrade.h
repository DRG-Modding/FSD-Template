#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EGrenadeUpgradeType.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "GrenadeUpgrade.generated.h"

class AFSDPlayerState;
class AGrenade;

UCLASS(EditInlineNew, MinimalAPI)
class UGrenadeUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EGrenadeUpgradeType upgradeType;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AGrenade> flareClass, EGrenadeUpgradeType NewUpgradeType);
    
    UGrenadeUpgrade();
};

