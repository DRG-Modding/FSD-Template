#pragma once
#include "CoreMinimal.h"
#include "EAsyncLoadPriority.generated.h"

UENUM(BlueprintType)
enum class EAsyncLoadPriority : uint8 {
    Normal,
    High = 0x64,
    Low = 0xFF,
};

