#pragma once
#include "CoreMinimal.h"
#include "FindSessionsCallbackProxy.h"
#include "BlueprintFindFriendSessionsResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintFindFriendSessionsResultDelegate, const TArray<FBlueprintSessionResult>&, Results);

