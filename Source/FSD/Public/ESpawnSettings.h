#pragma once
#include "CoreMinimal.h"
#include "ESpawnSettings.generated.h"

UENUM(BlueprintType)
enum class ESpawnSettings : uint8 {
    Normal,
    NoSpawning,
    SpawnAll,
};

