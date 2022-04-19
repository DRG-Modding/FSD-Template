#pragma once
#include "CoreMinimal.h"
#include "EItemPreviewStatus.generated.h"

UENUM(BlueprintType)
enum class EItemPreviewStatus : uint8 {
    Normal,
    Upgraded,
    Previewed,
    PreviewReduced,
    UpgradedAndPreviewReduced,
};

