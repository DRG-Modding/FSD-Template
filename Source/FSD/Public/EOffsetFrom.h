#pragma once
#include "CoreMinimal.h"
#include "EOffsetFrom.generated.h"

UENUM(BlueprintType)
enum class EOffsetFrom : uint8 {
    None,
    Floor,
    Ceiling,
};

