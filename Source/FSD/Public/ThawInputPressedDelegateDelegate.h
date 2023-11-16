#pragma once
#include "CoreMinimal.h"
#include "EThawInputDirection.h"
#include "ThawInputPressedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FThawInputPressedDelegate, EThawInputDirection, Direction);

