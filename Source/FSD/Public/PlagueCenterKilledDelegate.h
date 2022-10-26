#pragma once
#include "CoreMinimal.h"
#include "PlagueCenterKilledDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlagueCenterKilled, AActor*, SporeTower);

