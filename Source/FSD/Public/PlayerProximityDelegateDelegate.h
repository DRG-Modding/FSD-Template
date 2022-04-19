#pragma once
#include "CoreMinimal.h"
#include "PlayerProximityDelegateDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FPlayerProximityDelegate, APlayerCharacter*, Player, bool, enteredTrigger);

