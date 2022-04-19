#pragma once
#include "CoreMinimal.h"
#include "CravityChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCravityChangedSignature, float, CurrentGravity, float, Change);

