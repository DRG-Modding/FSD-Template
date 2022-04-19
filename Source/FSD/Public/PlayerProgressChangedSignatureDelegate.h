#pragma once
#include "CoreMinimal.h"
#include "PlayerProgress.h"
#include "PlayerProgressChangedSignatureDelegate.generated.h"

class AFSDPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerProgressChangedSignature, AFSDPlayerState*, PlayerState, FPlayerProgress, Progress);

