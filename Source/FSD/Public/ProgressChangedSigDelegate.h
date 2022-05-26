#pragma once
#include "CoreMinimal.h"
#include "ProgressChangedSigDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProgressChangedSig, float, CurrentProgress);

