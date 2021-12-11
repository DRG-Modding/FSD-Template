#pragma once
#include "CoreMinimal.h"
#include "ECarveFilterType.generated.h"

UENUM()
enum class ECarveFilterType : uint8 {
    ReplaceAll,
    ReplaceEmpty,
    ReplaceSolid,
};

