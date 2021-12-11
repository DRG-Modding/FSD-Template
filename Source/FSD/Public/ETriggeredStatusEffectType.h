#pragma once
#include "CoreMinimal.h"
#include "ETriggeredStatusEffectType.generated.h"

UENUM()
enum class ETriggeredStatusEffectType : uint8 {
    ShieldDestroyed,
    GrapplingHookReleased,
    NONE,
};

