#pragma once
#include "CoreMinimal.h"
#include "ToggleMapToolSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FToggleMapToolSignature, bool, Visible);

