#pragma once
#include "CoreMinimal.h"
#include "ERockCrackerstate.h"
#include "RockCrackerStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRockCrackerStateDelegate, ERockCrackerstate, CurrentState, ERockCrackerstate, previousState);

