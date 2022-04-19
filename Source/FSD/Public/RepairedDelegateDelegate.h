#pragma once
#include "CoreMinimal.h"
#include "RepairedDelegateDelegate.generated.h"

class URepairableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRepairedDelegate, URepairableComponent*, Component);

