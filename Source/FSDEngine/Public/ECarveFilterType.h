#pragma once
#include "CoreMinimal.h"
#include "ECarveFilterType.generated.h"

UENUM(BlueprintType)
enum class ECarveFilterType : uint8 {
    ReplaceAll,
    ReplaceEmpty,
    ReplaceSolid,
};

