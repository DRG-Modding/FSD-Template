#pragma once
#include "CoreMinimal.h"
#include "VisibilityChangedDelegateDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVisibilityChangedDelegate, UUserWidget*, Widget, bool, IsVisible);

