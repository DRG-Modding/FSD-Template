#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SelectedCharacterChangedDelegateDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSelectedCharacterChangedDelegate, TSubclassOf<APlayerCharacter>, NewCharacter);

