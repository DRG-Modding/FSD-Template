#pragma once
#include "CoreMinimal.h"
#include "CollectedEverythingEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCollectedEverythingEvent, FText, InMessage);

