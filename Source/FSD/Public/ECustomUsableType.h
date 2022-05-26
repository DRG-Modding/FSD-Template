#pragma once
#include "CoreMinimal.h"
#include "ECustomUsableType.generated.h"

UENUM(BlueprintType)
enum class ECustomUsableType : uint8 {
    ClearOnFrameEnd,
    ClearOnUseReleased,
    ClearManually,
};

