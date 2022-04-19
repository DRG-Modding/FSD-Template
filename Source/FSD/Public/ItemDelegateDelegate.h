#pragma once
#include "CoreMinimal.h"
#include "ItemDelegateDelegate.generated.h"

class AItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemDelegate, AItem*, Item);

