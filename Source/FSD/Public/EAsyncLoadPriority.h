#pragma once
#include "CoreMinimal.h"
#include "EAsyncLoadPriority.generated.h"

UENUM(BlueprintType)
enum class EAsyncLoadPriority : uint8 {
    Normal,
    High = 100,
    Low = 255,
};

