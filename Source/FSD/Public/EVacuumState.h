#pragma once
#include "CoreMinimal.h"
#include "EVacuumState.generated.h"

UENUM(BlueprintType)
enum class EVacuumState : uint8 {
    EPuddle,
    EVacuuming,
    EFalling,
    EDead,
};

