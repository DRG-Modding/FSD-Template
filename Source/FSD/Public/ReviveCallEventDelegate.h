#pragma once
#include "CoreMinimal.h"
#include "ReviveCallEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReviveCallEvent, AActor*, ReviveTarget);

