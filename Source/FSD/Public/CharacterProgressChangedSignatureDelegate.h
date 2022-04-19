#pragma once
#include "CoreMinimal.h"
#include "CharacterProgressChangedSignatureDelegate.generated.h"

class AFSDPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterProgressChangedSignature, AFSDPlayerState*, PlayerState);

