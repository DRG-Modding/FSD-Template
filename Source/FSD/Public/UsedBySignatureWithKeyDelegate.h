#pragma once
#include "CoreMinimal.h"
#include "EInputKeys.h"
#include "UsedBySignatureWithKeyDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUsedBySignatureWithKey, APlayerCharacter*, User, EInputKeys, Key);

