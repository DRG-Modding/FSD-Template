#pragma once
#include "CoreMinimal.h"
#include "EFNDomainWarpType.generated.h"

UENUM(BlueprintType)
enum class EFNDomainWarpType : uint8 {
    OPENSIMPLEX2,
    OPENSIMPLEX2_REDUCED,
    BASICGRID,
};

