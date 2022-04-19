#pragma once
#include "CoreMinimal.h"
#include "GrenadesDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrenadesDelegate, int32, CurrentCount);

