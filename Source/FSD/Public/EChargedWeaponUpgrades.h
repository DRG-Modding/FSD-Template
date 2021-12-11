#pragma once
#include "CoreMinimal.h"
#include "EChargedWeaponUpgrades.generated.h"

UENUM()
enum class EChargedWeaponUpgrades : uint8 {
    ShotCostAtFullCharge,
    ChargeSpeed,
    CoolingRate,
    HeatPerSecondCharging,
    HeatPerSecondCharged,
    HeatPerChargedShot,
    HeatPerNormalShot,
};

