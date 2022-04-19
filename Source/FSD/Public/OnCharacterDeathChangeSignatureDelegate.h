#pragma once
#include "CoreMinimal.h"
#include "OnCharacterDeathChangeSignatureDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterDeathChangeSignature, APlayerCharacter*, Character);

