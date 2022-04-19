#pragma once
#include "CoreMinimal.h"
#include "ProgressSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProgressSignature, float, Progress);

