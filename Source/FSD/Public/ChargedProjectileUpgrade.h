#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "EChargedProjectileUpgrades.h"
#include "ChargedProjectileUpgrade.generated.h"

class AActor;
class AItem;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UChargedProjectileUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChargedProjectileUpgrades upgradeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ProjectileClass;
    
public:
    UChargedProjectileUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, TSubclassOf<AActor> upgradedActor, AFSDPlayerState* Player, EChargedProjectileUpgrades NewUpgradeType);
    
};

