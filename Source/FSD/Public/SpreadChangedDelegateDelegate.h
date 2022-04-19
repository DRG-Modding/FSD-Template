#pragma once
#include "CoreMinimal.h"
#include "SpreadChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSpreadChangedDelegate, float, HorizontalSpread, float, VerticalSpread, bool, isAtRest);

