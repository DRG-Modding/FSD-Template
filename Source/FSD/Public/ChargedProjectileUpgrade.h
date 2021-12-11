#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EChargedProjectileUpgrades.h"
#include "UpgradeValues.h"
#include "ChargedProjectileUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class AItem;

UCLASS(EditInlineNew, MinimalAPI)
class UChargedProjectileUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EChargedProjectileUpgrades upgradeType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> projectileClass;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, TSubclassOf<AActor> upgradedActor, AFSDPlayerState* Player, EChargedProjectileUpgrades NewUpgradeType);
    
    UChargedProjectileUpgrade();
};

