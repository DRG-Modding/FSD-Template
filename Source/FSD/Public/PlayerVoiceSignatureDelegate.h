#pragma once
#include "CoreMinimal.h"
#include "PlayerVoiceSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerVoiceSignature, bool, IsTalking);

