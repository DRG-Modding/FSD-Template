#pragma once
#include "CoreMinimal.h"
#include "HealthSegmentChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHealthSegmentChange, int32, currSegment, int32, prevSegment);

