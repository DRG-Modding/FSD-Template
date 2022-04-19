#pragma once
#include "CoreMinimal.h"
#include "EDeepMovementState.h"
#include "PathStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPathStateChangedDelegate, EDeepMovementState, State);

