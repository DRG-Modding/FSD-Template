#pragma once
#include "CoreMinimal.h"
#include "DroneUseProgressDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroneUseProgress, float, Progress);

