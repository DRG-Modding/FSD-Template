#pragma once
#include "CoreMinimal.h"
#include "EProjectileUpgrade.h"
#include "StandardItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "ProjectileUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class UItemUpgradeCondition;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProjectileUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProjectileUpgrade upgradeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemUpgradeCondition* Condition;
    
public:
    UProjectileUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, EProjectileUpgrade NewUpgradeType);
    
};

