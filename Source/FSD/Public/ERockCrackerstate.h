#pragma once
#include "CoreMinimal.h"
#include "ERockCrackerstate.generated.h"

UENUM(BlueprintType)
enum class ERockCrackerstate : uint8 {
    Init,
    EFalling,
    EConnect,
    EDrilling,
    EBroke,
    EDone,
};

