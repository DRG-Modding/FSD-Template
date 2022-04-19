#pragma once
#include "CoreMinimal.h"
#include "ERessuplyPodState.generated.h"

UENUM(BlueprintType)
enum class ERessuplyPodState : uint8 {
    ReadyToDrop,
    Dropping,
    Landed,
    Idle,
};

