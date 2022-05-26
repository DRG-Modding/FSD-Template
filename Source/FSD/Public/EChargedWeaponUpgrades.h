#pragma once
#include "CoreMinimal.h"
#include "EChargedWeaponUpgrades.generated.h"

UENUM(BlueprintType)
enum class EChargedWeaponUpgrades : uint8 {
    ShotCostAtFullCharge,
    ChargeSpeed,
    CoolingRate,
    HeatPerSecondCharging,
    HeatPerSecondCharged,
    HeatPerChargedShot,
    HeatPerNormalShot,
};

