#pragma once
#include "CoreMinimal.h"
#include "EPingType.generated.h"

UENUM(BlueprintType)
enum class EPingType : uint8 {
    EaseOut,
    Bounce,
};

