#pragma once
#include "CoreMinimal.h"
#include "ETurn180Mode.generated.h"

UENUM()
enum class ETurn180Mode : uint8 {
    PressRun,
    PressFlare,
    Off,
};

