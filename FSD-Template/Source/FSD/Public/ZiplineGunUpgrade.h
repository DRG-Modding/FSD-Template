#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "EZiplineGunUpgrades.h"
#include "ZiplineGunUpgrade.generated.h"

class AActor;
class AZipLineProjectile;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UZiplineGunUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EZiplineGunUpgrades upgradeType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AZipLineProjectile> projectileClass;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EZiplineGunUpgrades NewUpgradeType);
    
    UZiplineGunUpgrade();
};

