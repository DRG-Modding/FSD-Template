#pragma once
#include "CoreMinimal.h"
#include "BeginUsingDelegateDelegate.generated.h"

class UUsableComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBeginUsingDelegate, UUsableComponentBase*, Component);

