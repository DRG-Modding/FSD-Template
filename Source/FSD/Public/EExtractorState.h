#pragma once
#include "CoreMinimal.h"
#include "EExtractorState.generated.h"

UENUM(BlueprintType)
enum class EExtractorState : uint8 {
    Attached,
    OnGround,
    Equipping,
    Idle,
    Mining,
};

