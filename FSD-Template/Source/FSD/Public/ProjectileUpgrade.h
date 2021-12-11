#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EProjectileUpgrade.h"
#include "UpgradeValues.h"
#include "ProjectileUpgrade.generated.h"

class AActor;
class UItemUpgradeCondition;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UProjectileUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EProjectileUpgrade upgradeType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> projectileClass;
    
    UPROPERTY(EditAnywhere, Instanced)
    UItemUpgradeCondition* Condition;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, EProjectileUpgrade NewUpgradeType);
    
    UProjectileUpgrade();
};

