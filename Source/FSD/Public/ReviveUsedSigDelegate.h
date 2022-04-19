#pragma once
#include "CoreMinimal.h"
#include "ReviveUsedSigDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReviveUsedSig, const int32, ReviveCount);

