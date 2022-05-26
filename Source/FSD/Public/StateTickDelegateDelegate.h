#pragma once
#include "CoreMinimal.h"
#include "StateTickDelegateDelegate.generated.h"

class UActorStateComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateTickDelegate, UActorStateComponent*, State, float, DeltaTime);

