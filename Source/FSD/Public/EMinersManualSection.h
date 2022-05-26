#pragma once
#include "CoreMinimal.h"
#include "EMinersManualSection.generated.h"

UENUM(BlueprintType)
enum class EMinersManualSection : uint8 {
    FrontPage,
    Hints,
    Combat,
    Creatures,
    Biomes,
    Missions,
    Resources,
};

