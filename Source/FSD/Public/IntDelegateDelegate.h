#pragma once
#include "CoreMinimal.h"
#include "IntDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIntDelegate, int32, IntValue);

