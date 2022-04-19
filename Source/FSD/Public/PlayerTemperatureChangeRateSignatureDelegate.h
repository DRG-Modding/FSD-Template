#pragma once
#include "CoreMinimal.h"
#include "PlayerTemperatureChangeRateSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerTemperatureChangeRateSignature, int32, ChangeRate);

