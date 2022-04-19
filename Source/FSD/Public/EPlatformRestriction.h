#pragma once
#include "CoreMinimal.h"
#include "EPlatformRestriction.generated.h"

UENUM()
enum class EPlatformRestriction {
    Editor,
    Steam,
    Oddish,
    UniversalWindowsPlatform,
    XBoxOne,
    PS4,
};

