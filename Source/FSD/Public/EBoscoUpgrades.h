#pragma once
#include "CoreMinimal.h"
#include "EBoscoUpgrades.generated.h"

UENUM(BlueprintType)
enum class EBoscoUpgrades : uint8 {
    MiningSpeedUpgrade,
    ExtraRevive,
    ActiveLightRadius,
    Missile,
    CryoGrenade,
    SACooldownReduction,
    ExtraAbillityCharge,
};

