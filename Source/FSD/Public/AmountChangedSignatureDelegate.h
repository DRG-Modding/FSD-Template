#pragma once
#include "CoreMinimal.h"
#include "AmountChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAmountChangedSignature, int32, Amount);

