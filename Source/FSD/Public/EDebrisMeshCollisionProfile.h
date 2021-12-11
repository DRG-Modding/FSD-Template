#pragma once
#include "CoreMinimal.h"
#include "EDebrisMeshCollisionProfile.generated.h"

UENUM()
enum class EDebrisMeshCollisionProfile : uint8 {
    NoCollision,
    HitOnly,
    HitAndCollide,
};

