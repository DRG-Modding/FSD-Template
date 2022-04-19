#pragma once
#include "CoreMinimal.h"
#include "FloatDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFloatDelegate, float, FloatValue);

