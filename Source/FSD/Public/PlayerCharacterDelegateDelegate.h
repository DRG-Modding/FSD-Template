#pragma once
#include "CoreMinimal.h"
#include "PlayerCharacterDelegateDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterDelegate, APlayerCharacter*, PlayerCharacter);

