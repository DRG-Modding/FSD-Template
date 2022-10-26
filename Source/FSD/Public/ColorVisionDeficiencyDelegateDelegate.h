#pragma once
#include "CoreMinimal.h"
#include "ColorVisionDeficiencySettings.h"
#include "ColorVisionDeficiencyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FColorVisionDeficiencyDelegate, const FColorVisionDeficiencySettings&, InSettings);

