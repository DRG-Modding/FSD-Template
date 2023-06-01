#pragma once
#include "CoreMinimal.h"
#include "EVacuumState.h"
#include "ChangeVacuumStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeVacuumStateDelegate, EVacuumState, State);

