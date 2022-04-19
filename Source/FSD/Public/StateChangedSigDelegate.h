#pragma once
#include "CoreMinimal.h"
#include "EDroneAIState.h"
#include "StateChangedSigDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateChangedSig, EDroneAIState, aCurrentState);

