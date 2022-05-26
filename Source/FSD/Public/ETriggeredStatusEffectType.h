#pragma once
#include "CoreMinimal.h"
#include "ETriggeredStatusEffectType.generated.h"

UENUM(BlueprintType)
enum class ETriggeredStatusEffectType : uint8 {
    ShieldDestroyed,
    GrapplingHookReleased,
    NONE,
};

