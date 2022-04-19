#pragma once
#include "CoreMinimal.h"
#include "CharacterChangedDelegateDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterChangedDelegate, ACharacter*, Character);

