#pragma once
#include "CoreMinimal.h"
#include "EUpgradeTiers.generated.h"

UENUM(BlueprintType)
enum class EUpgradeTiers : uint8 {
    Tier_1,
    Tier_2,
    Tier_3,
    Tier_4,
    Tier_5,
    Tier_MAX UMETA(Hidden),
};

