#pragma once
#include "CoreMinimal.h"
#include "DeathSigDelegate.generated.h"

class UHealthComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDeathSig, UHealthComponentBase*, HealthComponent);

