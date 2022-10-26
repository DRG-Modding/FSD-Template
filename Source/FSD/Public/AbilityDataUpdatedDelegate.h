#pragma once
#include "CoreMinimal.h"
#include "AbilityDataUpdatedDelegate.generated.h"

class UBoscoAbillityComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityDataUpdated, UBoscoAbillityComponent*, ability);

