#pragma once
#include "CoreMinimal.h"
#include "PlayerSpawnedSignatureDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerSpawnedSignature, APlayerCharacter*, PlayerCharacter);

