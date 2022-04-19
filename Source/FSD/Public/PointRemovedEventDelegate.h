#pragma once
#include "CoreMinimal.h"
#include "PointRemovedEventDelegate.generated.h"

class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPointRemovedEvent, USceneComponent*, Point);

