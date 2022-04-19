#pragma once
#include "CoreMinimal.h"
#include "StateDelegateDelegate.generated.h"

class UActorStateComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateDelegate, UActorStateComponent*, State);

