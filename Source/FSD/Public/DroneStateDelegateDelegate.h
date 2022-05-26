#pragma once
#include "CoreMinimal.h"
#include "EDroneState.h"
#include "DroneStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDroneStateDelegate, EDroneState, State);

