#pragma once
#include "CoreMinimal.h"
#include "ENisseState.generated.h"

UENUM(BlueprintType)
enum class ENisseState : uint8 {
    Idle,
    Walking,
    Running,
    Frozen,
};

