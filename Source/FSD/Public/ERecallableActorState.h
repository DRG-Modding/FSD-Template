#pragma once
#include "CoreMinimal.h"
#include "ERecallableActorState.generated.h"

UENUM(BlueprintType)
enum class ERecallableActorState : uint8 {
    Idle,
    RelocateRequested,
    Relocating,
    ReturnRequested,
    Returning,
    Home,
};

