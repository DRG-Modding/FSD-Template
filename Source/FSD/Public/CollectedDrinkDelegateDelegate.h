#pragma once
#include "CoreMinimal.h"
#include "CollectedDrinkDelegateDelegate.generated.h"

class UDrinkableDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCollectedDrinkDelegate, UDrinkableDataAsset*, Drinkable);

