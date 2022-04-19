#pragma once
#include "CoreMinimal.h"
#include "EBinaryComb.generated.h"

UENUM()
enum class EBinaryComb : uint8 {
    Empty,
    Unchanged,
    Replace,
    Burn,
};

