#pragma once
#include "CoreMinimal.h"
#include "SupplyStatusChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSupplyStatusChangedDelegate, float, ammoStatus01, float, healthStatus01);

