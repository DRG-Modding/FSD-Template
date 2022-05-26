#pragma once
#include "CoreMinimal.h"
#include "FloatConfigChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFloatConfigChanged, float, NewValue);

