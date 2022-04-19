#pragma once
#include "CoreMinimal.h"
#include "OnMilestoneReachedDelegate.generated.h"

class UMilestoneAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMilestoneReached, UMilestoneAsset*, Milestone, int32, ReachedTier);

