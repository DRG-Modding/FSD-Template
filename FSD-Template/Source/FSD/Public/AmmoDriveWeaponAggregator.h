#pragma once
#include "CoreMinimal.h"
#include "ClipBasedItemAggregator.h"
#include "AmmoDriveWeaponAggregator.generated.h"

class AAmmoDrivenWeapon;

UCLASS()
class UAmmoDriveWeaponAggregator : public UClipBasedItemAggregator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AAmmoDrivenWeapon* Weapon;
    
public:
    UAmmoDriveWeaponAggregator();
};

