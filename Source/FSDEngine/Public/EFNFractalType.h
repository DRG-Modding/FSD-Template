#pragma once
#include "CoreMinimal.h"
#include "EFNFractalType.generated.h"

UENUM(BlueprintType)
enum class EFNFractalType : uint8 {
    NONE,
    FBM,
    RIDGED,
    PINGPONG,
    DOMAIN_WARP_PROGRESSIVE,
    DOMAIN_WARP_INDEPENDENT,
};

