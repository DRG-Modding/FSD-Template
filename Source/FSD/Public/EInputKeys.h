#pragma once
#include "CoreMinimal.h"
#include "EInputKeys.generated.h"

UENUM(BlueprintType)
enum class EInputKeys : uint8 {
    Use,
    Fire,
    Mine,
    EInputKeys_MAX = 0xFF,
};

