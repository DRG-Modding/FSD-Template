#pragma once
#include "CoreMinimal.h"
#include "EFNDomainWarpType.generated.h"

UENUM()
enum class EFNDomainWarpType : uint8 {
    OPENSIMPLEX2,
    OPENSIMPLEX2_REDUCED,
    BASICGRID,
};

