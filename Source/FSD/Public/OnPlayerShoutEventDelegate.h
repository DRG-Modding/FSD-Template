#pragma once
#include "CoreMinimal.h"
#include "OnPlayerShoutEventDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerShoutEvent, APlayerCharacter*, ShoutingPlayer);

