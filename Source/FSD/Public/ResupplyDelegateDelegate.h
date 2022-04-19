#pragma once
#include "CoreMinimal.h"
#include "ResupplyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResupplyDelegate, float, percentage);

