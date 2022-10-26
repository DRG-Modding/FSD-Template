#pragma once
#include "CoreMinimal.h"
#include "PlagueCleanerResourceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlagueCleanerResourceChanged, float, currentResourceVolume);

