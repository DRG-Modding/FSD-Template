#pragma once
#include "CoreMinimal.h"
#include "ECharacterState.h"
#include "OnCharacterStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterStateChangedSignature, ECharacterState, NewState);

