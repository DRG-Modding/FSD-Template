#pragma once
#include "CoreMinimal.h"
#include "EPlatformComponentCriteria.generated.h"

UENUM(BlueprintType)
enum class EPlatformComponentCriteria : uint8 {
    All,
    ServerOnly,
    ClientOnly,
    OwningClientOnly,
};

