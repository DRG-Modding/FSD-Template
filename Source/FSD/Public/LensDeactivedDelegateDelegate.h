#pragma once
#include "CoreMinimal.h"
#include "LensDeactivedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLensDeactivedDelegate, bool, isWideLens);

