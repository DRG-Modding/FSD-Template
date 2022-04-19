#pragma once
#include "CoreMinimal.h"
#include "RewardClaimedDelegate.generated.h"

class UReward;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRewardClaimed, UReward*, Reward);

