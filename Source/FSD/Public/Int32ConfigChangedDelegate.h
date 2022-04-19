#pragma once
#include "CoreMinimal.h"
#include "Int32ConfigChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInt32ConfigChanged, int32, NewValue);

