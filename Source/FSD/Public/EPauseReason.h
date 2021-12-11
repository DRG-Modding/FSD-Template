#pragma once
#include "CoreMinimal.h"
#include "EPauseReason.generated.h"

UENUM()
enum class EPauseReason : uint8 {
    Invalid,
    MenuActive,
    ReconnectController,
};

