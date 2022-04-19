#pragma once
#include "CoreMinimal.h"
#include "DroneFinishedUsingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroneFinishedUsing, int32, TimesUsed);

