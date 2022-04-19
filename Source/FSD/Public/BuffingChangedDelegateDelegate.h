#pragma once
#include "CoreMinimal.h"
#include "BuffingChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuffingChangedDelegate, bool, isBuffing);

