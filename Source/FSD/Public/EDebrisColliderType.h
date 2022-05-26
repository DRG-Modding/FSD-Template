#pragma once
#include "CoreMinimal.h"
#include "EDebrisColliderType.generated.h"

UENUM(BlueprintType)
enum class EDebrisColliderType : uint8 {
    Object,
    AirParticles,
    ObjectB,
    ObjectC,
};

