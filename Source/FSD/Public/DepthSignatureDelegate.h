#pragma once
#include "CoreMinimal.h"
#include "DepthSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDepthSignature, int32, Depth);

