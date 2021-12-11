#pragma once
#include "CoreMinimal.h"
#include "EUGCApprovalStatus.generated.h"

UENUM(BlueprintType)
enum class EUGCApprovalStatus : uint8 {
    Fully,
    Progression,
    Sandbox,
    All = 0xFF,
};

