#pragma once
#include "CoreMinimal.h"
#include "CollectedPickaxePartDelegateDelegate.generated.h"

class UPickaxePart;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCollectedPickaxePartDelegate, UPickaxePart*, PickaxePart);

