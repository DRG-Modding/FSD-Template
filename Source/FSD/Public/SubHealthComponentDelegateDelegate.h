#pragma once
#include "CoreMinimal.h"
#include "SubHealthComponentDelegateDelegate.generated.h"

class USubHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSubHealthComponentDelegate, USubHealthComponent*, subHealth);

