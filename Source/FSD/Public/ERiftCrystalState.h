#pragma once
#include "CoreMinimal.h"
#include "ERiftCrystalState.generated.h"

UENUM(BlueprintType)
enum ERiftCrystalState {
    Default,
    InitialEmbeded,
    Embedded,
    Lifting,
    Rifting,
    Calling,
    DeathDisplay,
    Dead,
};

