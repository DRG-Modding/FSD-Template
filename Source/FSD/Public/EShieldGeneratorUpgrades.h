#pragma once
#include "CoreMinimal.h"
#include "EShieldGeneratorUpgrades.generated.h"

UENUM(BlueprintType)
enum class EShieldGeneratorUpgrades : uint8 {
    Radius,
    Duration,
    DeployTime,
    RechargeTime,
    RechargeCount,
    PushStatusEffect,
};

