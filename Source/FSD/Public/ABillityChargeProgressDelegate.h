#pragma once
#include "CoreMinimal.h"
#include "ABillityChargeProgressDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FABillityChargeProgress, float, aProgress, int32, aNextIndex);

