#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "FoundSessionResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFoundSessionResult, FBlueprintSessionResult, Result);

