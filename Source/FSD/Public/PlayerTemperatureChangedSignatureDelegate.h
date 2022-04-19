#pragma once
#include "CoreMinimal.h"
#include "PlayerTemperatureChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerTemperatureChangedSignature, float, Temperature, float, Change);

