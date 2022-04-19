#pragma once
#include "CoreMinimal.h"
#include "ActionHoldEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActionHoldEvent, FText, Description, float, Progress);

