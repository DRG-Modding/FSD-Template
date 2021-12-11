#pragma once
#include "CoreMinimal.h"
#include "EMicroMissileLauncherFireMode.generated.h"

UENUM(BlueprintType)
enum class EMicroMissileLauncherFireMode : uint8 {
    Normal,
    Charge,
    Buck,
};

