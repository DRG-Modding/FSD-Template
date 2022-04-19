#pragma once
#include "CoreMinimal.h"
#include "ThrowCarriableDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FThrowCarriableDelegate, float, Progress, float, timeToCancel, bool, isDone);

