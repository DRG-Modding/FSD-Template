#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELaserPointerTargetType.h"
#include "MarkerPlacedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FMarkerPlacedDelegate, FVector, Location, const FText&, Name, FLinearColor, Color, AActor*, Target, ELaserPointerTargetType, TypeOfTarget);

