#pragma once
#include "CoreMinimal.h"
#include "EDLSSSettingOverride.generated.h"

UENUM()
enum class EDLSSSettingOverride : uint8 {
    Enabled,
    Disabled,
    UseProjectSettings,
};

