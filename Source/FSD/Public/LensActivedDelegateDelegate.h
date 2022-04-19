#pragma once
#include "CoreMinimal.h"
#include "LensActivedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLensActivedDelegate, bool, isWideLens);

