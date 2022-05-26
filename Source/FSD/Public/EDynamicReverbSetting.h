#pragma once
#include "CoreMinimal.h"
#include "EDynamicReverbSetting.generated.h"

UENUM(BlueprintType)
enum class EDynamicReverbSetting : uint8 {
    None,
    Small,
    Medium,
    Large,
};

