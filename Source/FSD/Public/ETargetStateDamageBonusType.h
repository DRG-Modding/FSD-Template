#pragma once
#include "CoreMinimal.h"
#include "ETargetStateDamageBonusType.generated.h"

UENUM()
enum class ETargetStateDamageBonusType : uint8 {
    Frozen,
    OnFire,
    Fleeing,
    Staggered,
};

