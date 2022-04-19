#pragma once
#include "CoreMinimal.h"
#include "FlaresDelegateDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFlaresDelegate, int32, CurrentCount, UInventoryComponent*, Inventory);

