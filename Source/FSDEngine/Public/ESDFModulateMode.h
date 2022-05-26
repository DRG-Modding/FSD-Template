#pragma once
#include "CoreMinimal.h"
#include "ESDFModulateMode.generated.h"

UENUM(BlueprintType)
enum class ESDFModulateMode : uint8 {
    MM_Disabled,
    MM_Single,
    MM_Loop,
    MM_MAX UMETA(Hidden),
};

