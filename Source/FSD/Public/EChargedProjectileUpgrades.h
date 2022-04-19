#pragma once
#include "CoreMinimal.h"
#include "EChargedProjectileUpgrades.generated.h"

UENUM(BlueprintType)
enum class EChargedProjectileUpgrades : uint8 {
    ExplodesOnDamage,
    AoEDamageInFlight,
    PersistentExplosion,
};

