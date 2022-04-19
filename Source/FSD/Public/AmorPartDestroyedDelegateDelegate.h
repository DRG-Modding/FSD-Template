#pragma once
#include "CoreMinimal.h"
#include "AmorPartDestroyedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAmorPartDestroyedDelegate, FName, Name);

