#pragma once
#include "CoreMinimal.h"
#include "AbillityChargeUsedSigDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbillityChargeUsedSig, int32, aCurrentCharges);

