#pragma once
#include "CoreMinimal.h"
#include "CountDownStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCountDownStarted, const FText&, countdownText);

