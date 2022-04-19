#pragma once
#include "CoreMinimal.h"
#include "HeadlightOnChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHeadlightOnChangedEvent, bool, IsOn);

