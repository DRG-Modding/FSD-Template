#pragma once
#include "CoreMinimal.h"
#include "TetherRangeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTetherRangeChanged, float, range);

