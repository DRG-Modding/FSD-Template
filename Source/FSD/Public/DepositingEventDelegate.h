#pragma once
#include "CoreMinimal.h"
#include "DepositingEventDelegate.generated.h"

class UResourceBank;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDepositingEvent, UResourceBank*, ResourceBank);

