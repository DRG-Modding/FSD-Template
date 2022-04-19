#pragma once
#include "CoreMinimal.h"
#include "BoosterModuleActiveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoosterModuleActive, bool, IsActive);

