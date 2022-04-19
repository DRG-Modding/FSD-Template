#pragma once
#include "CoreMinimal.h"
#include "ChatFontSizeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChatFontSizeChanged, int32, NewValue);

