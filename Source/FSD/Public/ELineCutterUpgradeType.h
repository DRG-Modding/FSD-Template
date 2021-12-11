#pragma once
#include "CoreMinimal.h"
#include "ELineCutterUpgradeType.generated.h"

UENUM(BlueprintType)
enum class ELineCutterUpgradeType : uint8 {
    ReverseDirection,
    ExplodeLastProjectile,
};

