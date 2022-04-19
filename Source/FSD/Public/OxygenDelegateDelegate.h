#pragma once
#include "CoreMinimal.h"
#include "OxygenDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOxygenDelegate, int32, oxygenLevel);

