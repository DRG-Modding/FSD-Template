#pragma once
#include "CoreMinimal.h"
#include "OnFreeBeersChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFreeBeersChangedDelegate, bool, IsBeersFree);

