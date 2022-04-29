#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "CryoSprayProjectileUpgrade.generated.h"

class AFSDPlayerState;
class AProjectile;
class AItem;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UCryoSprayProjectileUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxFireCost;
    
    UPROPERTY(EditAnywhere)
    float BaseArch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> ProjectileClass;
    
public:
    UCryoSprayProjectileUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, TSubclassOf<AProjectile> NewProjectileClass);
    
};

