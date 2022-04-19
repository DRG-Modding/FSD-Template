#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LaserPointerSecondaryDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLaserPointerSecondary, AActor*, aTarget, const FVector&, aTargetLocation);

