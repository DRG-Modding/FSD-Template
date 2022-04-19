#pragma once
#include "CoreMinimal.h"
#include "AttackUsedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttackUsedDelegate, const FName&, AttackName);

