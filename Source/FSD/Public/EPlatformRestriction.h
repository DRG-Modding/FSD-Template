#pragma once
#include "CoreMinimal.h"
#include "EPlatformRestriction.generated.h"

UENUM(BlueprintType)
enum class EPlatformRestriction : uint8 {
    Editor,
    Steam,
    Oddish,
    UniversalWindowsPlatform,
    XBoxOne,
    PS4,
};

