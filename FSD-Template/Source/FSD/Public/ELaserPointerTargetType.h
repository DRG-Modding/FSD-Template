#pragma once
#include "CoreMinimal.h"
#include "ELaserPointerTargetType.generated.h"

UENUM(BlueprintType)
enum class ELaserPointerTargetType : uint8 {
    Chunkable,
    Dirt,
    Player,
    Enemy,
    EmbeddedGem,
    Other,
};

