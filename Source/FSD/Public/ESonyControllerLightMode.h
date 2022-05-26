#pragma once
#include "CoreMinimal.h"
#include "ESonyControllerLightMode.generated.h"

UENUM(BlueprintType)
enum class ESonyControllerLightMode : uint8 {
    Disabled,
    Simple,
    Default,
};

