#pragma once
#include "CoreMinimal.h"
#include "OnMilestoneClaimedDelegate.generated.h"

class UMilestoneAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMilestoneClaimed, UMilestoneAsset*, Milestone, int32, ClaimedTier);

