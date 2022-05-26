#pragma once
#include "CoreMinimal.h"
#include "EDebrisMeshCollisionProfile.generated.h"

UENUM(BlueprintType)
enum class EDebrisMeshCollisionProfile : uint8 {
    NoCollision,
    HitOnly,
    HitAndCollide,
};

