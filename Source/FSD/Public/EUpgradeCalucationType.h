#pragma once
#include "CoreMinimal.h"
#include "EUpgradeCalucationType.generated.h"

UENUM(BlueprintType)
enum class EUpgradeCalucationType : uint8 {
    Additive,
    Multiplicative,
};

