#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "ProjectileSwitch.h"
#include "WeaponSwitchProjectileUpgrade.generated.h"

class AFSDPlayerState;
class AActor;
class UWeaponHitCounterComponent;

UCLASS(EditInlineNew, MinimalAPI)
class UWeaponSwitchProjectileUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FProjectileSwitch Projectile;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> ComponentClass);
    
    UWeaponSwitchProjectileUpgrade();
};

