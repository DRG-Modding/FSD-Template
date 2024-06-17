#pragma once
#include "CoreMinimal.h"
#include "EStreamlineSettingOverride.generated.h"

UENUM(BlueprintType)
enum class EStreamlineSettingOverride : uint8 {
    Enabled,
    Disabled,
    UseProjectSettings,
};

