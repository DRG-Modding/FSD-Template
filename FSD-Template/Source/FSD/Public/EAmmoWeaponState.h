#pragma once
#include "CoreMinimal.h"
#include "EAmmoWeaponState.generated.h"

UENUM(BlueprintType)
enum class EAmmoWeaponState : uint8 {
    Equipping,
    Ready,
    Cycling,
    Reloading,
    BurstCycling,
};

