#pragma once
#include "CoreMinimal.h"
#include "GoalStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGoalStateDelegate, bool, stateReceived);

