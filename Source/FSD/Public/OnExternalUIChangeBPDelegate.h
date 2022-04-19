#pragma once
#include "CoreMinimal.h"
#include "OnExternalUIChangeBPDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExternalUIChangeBP, bool, bIsClosed);

