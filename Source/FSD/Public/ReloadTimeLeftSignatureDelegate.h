#pragma once
#include "CoreMinimal.h"
#include "ReloadTimeLeftSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReloadTimeLeftSignature, float, Amount);

