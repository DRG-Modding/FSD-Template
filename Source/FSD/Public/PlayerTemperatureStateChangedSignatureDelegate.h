#pragma once
#include "CoreMinimal.h"
#include "EPlayerTemperatureState.h"
#include "PlayerTemperatureStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerTemperatureStateChangedSignature, EPlayerTemperatureState, State);

