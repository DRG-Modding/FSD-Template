#pragma once
#include "CoreMinimal.h"
#include "AmmoCountChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAmmoCountChangedEvent, int32, AmmoCount, int32, Change);

