#pragma once
#include "CoreMinimal.h"
#include "EPlatformComponentCriteria.generated.h"

UENUM()
enum class EPlatformComponentCriteria : uint8 {
    All,
    ServerOnly,
    ClientOnly,
    OwningClientOnly,
};

