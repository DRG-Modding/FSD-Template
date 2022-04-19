#pragma once
#include "CoreMinimal.h"
#include "ResponseSuccessChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResponseSuccessChanged, bool, resp);

