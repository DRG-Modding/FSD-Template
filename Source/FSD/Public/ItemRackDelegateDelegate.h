#pragma once
#include "CoreMinimal.h"
#include "ItemRackDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemRackDelegate, bool, HasItem);

