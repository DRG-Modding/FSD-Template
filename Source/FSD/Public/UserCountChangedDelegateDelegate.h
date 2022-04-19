#pragma once
#include "CoreMinimal.h"
#include "UserCountChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUserCountChangedDelegate, int32, userCount);

