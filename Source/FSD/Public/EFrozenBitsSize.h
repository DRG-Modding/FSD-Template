#pragma once
#include "CoreMinimal.h"
#include "EFrozenBitsSize.generated.h"

UENUM()
enum class EFrozenBitsSize : uint8 {
    Tiny,
    Small,
    Medium,
    Large,
    Huge,
};

