#pragma once
#include "CoreMinimal.h"
#include "SpeedChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpeedChangedSignature, float, newSpeedModifier);

