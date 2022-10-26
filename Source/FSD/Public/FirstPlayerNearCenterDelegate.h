#pragma once
#include "CoreMinimal.h"
#include "FirstPlayerNearCenterDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFirstPlayerNearCenter, AActor*, SporeTower);

