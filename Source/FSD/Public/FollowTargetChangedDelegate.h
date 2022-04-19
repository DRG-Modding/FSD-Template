#pragma once
#include "CoreMinimal.h"
#include "FollowTargetChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFollowTargetChanged, AActor*, FollowTarget);

