#pragma once
#include "CoreMinimal.h"
#include "GameEventCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameEventCompletedDelegate, FText, GameEventName);

