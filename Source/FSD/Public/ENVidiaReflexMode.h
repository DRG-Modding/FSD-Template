#pragma once
#include "CoreMinimal.h"
#include "ENVidiaReflexMode.generated.h"

UENUM(BlueprintType)
enum class ENVidiaReflexMode : uint8 {
    Disabled,
    Enabled,
    EnabledWithBoost,
};

