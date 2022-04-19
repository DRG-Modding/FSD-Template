#pragma once
#include "CoreMinimal.h"
#include "PlayerCharacterSignatureDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerCharacterSignature, APlayerCharacter*, PlayerCharacter);

