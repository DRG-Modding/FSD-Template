#pragma once
#include "CoreMinimal.h"
#include "ClipBasedItemAggregator.h"
#include "AmmoDriveWeaponAggregator.generated.h"

class AAmmoDrivenWeapon;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAmmoDriveWeaponAggregator : public UClipBasedItemAggregator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AAmmoDrivenWeapon* Weapon;
    
public:
    UAmmoDriveWeaponAggregator();
};

