#pragma once
#include "CoreMinimal.h"
#include "EFSDGoogleAnalyticsProperties.generated.h"

UENUM(BlueprintType)
enum class EFSDGoogleAnalyticsProperties : uint8 {
    DRG,
    Discord,
    CommunityGoals,
    DRG_Discord,
    All,
    Other,
};

