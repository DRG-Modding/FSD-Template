#pragma once
#include "CoreMinimal.h"
#include "PlayerDelegateDelegate.generated.h"

class AFSDPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerDelegate, AFSDPlayerState*, PlayerState);

