#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "indSteamSessionsResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FindSteamSessionsResult, bool, success, const TArray<FBlueprintSessionResult>&, Results);

