#pragma once
#include "CoreMinimal.h"
#include "CountdownDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCountdown, int32, SecondsLeft);

