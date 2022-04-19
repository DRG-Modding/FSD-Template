#pragma once
#include "CoreMinimal.h"
#include "LaserPointerTarget.h"
#include "LaserPointerEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLaserPointerEvent, const FLaserPointerTarget&, HitInfo);

