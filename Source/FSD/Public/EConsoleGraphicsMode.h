#pragma once
#include "CoreMinimal.h"
#include "EConsoleGraphicsMode.generated.h"

UENUM(BlueprintType)
enum class EConsoleGraphicsMode : uint8 {
    Fidelity,
    Performance,
    Performance120,
};

