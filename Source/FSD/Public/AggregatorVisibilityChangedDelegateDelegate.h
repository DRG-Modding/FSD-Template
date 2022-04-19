#pragma once
#include "CoreMinimal.h"
#include "AggregatorVisibilityChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAggregatorVisibilityChangedDelegate, bool, IsVisible);

