#pragma once
#include "CoreMinimal.h"
#include "ItemDispenserDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemDispenserDelegate, AActor*, spawnedItem);

