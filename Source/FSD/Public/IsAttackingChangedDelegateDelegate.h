#pragma once
#include "CoreMinimal.h"
#include "IsAttackingChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIsAttackingChangedDelegate, bool, IsAttacking);

