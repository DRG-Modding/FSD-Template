#pragma once
#include "CoreMinimal.h"
#include "ChargeChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChargeChangedSignature, float, charge);

