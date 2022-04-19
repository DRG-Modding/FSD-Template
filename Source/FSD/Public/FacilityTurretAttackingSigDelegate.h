#pragma once
#include "CoreMinimal.h"
#include "FacilityTurretAttackingSigDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFacilityTurretAttackingSig, bool, attacking);

