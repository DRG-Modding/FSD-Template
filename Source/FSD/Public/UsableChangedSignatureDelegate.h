#pragma once
#include "CoreMinimal.h"
#include "UsableChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUsableChangedSignature, bool, CanUse);

