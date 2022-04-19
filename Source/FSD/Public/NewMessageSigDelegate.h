#pragma once
#include "CoreMinimal.h"
#include "FSDChatMessage.h"
#include "NewMessageSigDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewMessageSig, const FFSDChatMessage&, Message);

