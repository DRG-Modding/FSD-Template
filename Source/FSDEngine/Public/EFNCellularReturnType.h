#pragma once
#include "CoreMinimal.h"
#include "EFNCellularReturnType.generated.h"

UENUM(BlueprintType)
enum class EFNCellularReturnType : uint8 {
    CELLVALUE,
    DISTANCE,
    DISTANCE2,
    DISTANCE2ADD,
    DISTANCE2SUB,
    DISTANCE2MUL,
    DISTANCE2DIV,
};

