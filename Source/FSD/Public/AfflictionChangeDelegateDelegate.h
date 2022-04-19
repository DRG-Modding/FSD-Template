#pragma once
#include "CoreMinimal.h"
#include "AfflictionChangeDelegateDelegate.generated.h"

class UPawnAffliction;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAfflictionChangeDelegate, UPawnAffliction*, Affliction);

