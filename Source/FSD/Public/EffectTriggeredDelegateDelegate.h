#pragma once
#include "CoreMinimal.h"
#include "EffectTriggeredDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEffectTriggeredDelegate, AActor*, TargetActor, bool, entered);

