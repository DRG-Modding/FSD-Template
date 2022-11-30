#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EZiplineGunUpgrades.h"
#include "UpgradeValues.h"
#include "ZiplineGunUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class AZipLineProjectile;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UZiplineGunUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZiplineGunUpgrades upgradeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AZipLineProjectile> ProjectileClass;
    
public:
    UZiplineGunUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EZiplineGunUpgrades NewUpgradeType);
    
};

