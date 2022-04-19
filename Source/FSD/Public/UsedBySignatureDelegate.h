#pragma once
#include "CoreMinimal.h"
#include "EInputKeys.h"
#include "UsedBySignatureDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUsedBySignature, APlayerCharacter*, User, EInputKeys, Key);

