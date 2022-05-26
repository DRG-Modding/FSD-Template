#pragma once
#include "CoreMinimal.h"
#include "ProgressUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProgressUpdated, float, Progress);

