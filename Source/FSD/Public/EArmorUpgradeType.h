#pragma once
#include "CoreMinimal.h"
#include "EArmorUpgradeType.generated.h"

UENUM(BlueprintType)
enum class EArmorUpgradeType : uint8 {
    RegenDelay,
    RegenRate,
    ReviveInvulnerability,
};

