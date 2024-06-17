#pragma once
#include "CoreMinimal.h"
#include "EDeathType.generated.h"

UENUM(BlueprintType)
enum class EDeathType : uint8 {
    Alive,
    Normal,
    Weakpoint,
    Burned,
    Frozen,
    Exploded,
    SpawnEnemies,
    Gibbed,
    Corrosive,
    Cook,
    ChemicalExplosion,
    PlasmaExplosion,
};

