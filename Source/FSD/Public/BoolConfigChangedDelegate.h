#pragma once
#include "CoreMinimal.h"
#include "BoolConfigChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoolConfigChanged, bool, NewValue);

