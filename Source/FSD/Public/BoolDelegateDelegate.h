#pragma once
#include "CoreMinimal.h"
#include "BoolDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoolDelegate, bool, boolValue);

