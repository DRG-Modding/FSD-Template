#pragma once
#include "CoreMinimal.h"
#include "TetherPowerChanged_DelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTetherPowerChanged_Delegate, bool, hasPower);

