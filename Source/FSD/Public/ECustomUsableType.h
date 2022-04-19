#pragma once
#include "CoreMinimal.h"
#include "ECustomUsableType.generated.h"

UENUM()
enum class ECustomUsableType : uint8 {
    ClearOnFrameEnd,
    ClearOnUseReleased,
    ClearManually,
};

