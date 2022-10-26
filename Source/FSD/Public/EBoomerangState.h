#pragma once
#include "CoreMinimal.h"
#include "EBoomerangState.generated.h"

UENUM(BlueprintType)
enum class EBoomerangState : uint8 {
    None,
    Curving,
    GoingBack,
    Targeting,
};

