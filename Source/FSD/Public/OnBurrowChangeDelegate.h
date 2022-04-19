#pragma once
#include "CoreMinimal.h"
#include "OnBurrowChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBurrowChange, bool, burrowed);

