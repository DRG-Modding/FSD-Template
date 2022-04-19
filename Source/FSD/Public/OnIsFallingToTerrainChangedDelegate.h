#pragma once
#include "CoreMinimal.h"
#include "OnIsFallingToTerrainChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsFallingToTerrainChanged, bool, IsFalling);

