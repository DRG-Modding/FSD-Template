#pragma once
#include "CoreMinimal.h"
#include "ELaserPointerMarkerType.generated.h"

UENUM(BlueprintType)
enum class ELaserPointerMarkerType : uint8 {
    Primary,
    Secondary,
    Count,
};

