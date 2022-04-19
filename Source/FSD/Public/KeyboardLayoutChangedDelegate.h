#pragma once
#include "CoreMinimal.h"
#include "EKeyboardLayout.h"
#include "KeyboardLayoutChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKeyboardLayoutChanged, EKeyboardLayout, NewValue);

