#pragma once
#include "CoreMinimal.h"
#include "FSDEventActivateChangedDelegate.generated.h"

class UFSDEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDEventActivateChanged, const UFSDEvent*, InFsdEvent, bool, InIsActive);

