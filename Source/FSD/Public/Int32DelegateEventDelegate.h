#pragma once
#include "CoreMinimal.h"
#include "Int32DelegateEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInt32DelegateEvent, int32, Value);

