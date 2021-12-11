#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "CryoSprayProjectileUpgrade.generated.h"

class AProjectile;
class AFSDPlayerState;
class AItem;

UCLASS(EditInlineNew, MinimalAPI)
class UCryoSprayProjectileUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxFireCost;
    
    UPROPERTY(EditAnywhere)
    float BaseArch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AProjectile> projectileClass;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, TSubclassOf<AProjectile> NewProjectileClass);
    
    UCryoSprayProjectileUpgrade();
};

