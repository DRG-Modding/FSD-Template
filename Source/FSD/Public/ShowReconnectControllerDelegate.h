#pragma once
#include "CoreMinimal.h"
#include "ShowReconnectControllerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowReconnectController, bool, Show);

