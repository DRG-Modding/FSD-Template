#pragma once
#include "CoreMinimal.h"
#include "ClipBasedItemAggregator.h"
#include "AmmoDriveWeaponAggregator.generated.h"

class AAmmoDrivenWeapon;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAmmoDriveWeaponAggregator : public UClipBasedItemAggregator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAmmoDrivenWeapon* Weapon;
    
public:
    UAmmoDriveWeaponAggregator();
};

