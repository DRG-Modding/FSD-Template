#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OnCrossbowDamageDealtDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCrossbowDamageDealt, const FHitResult&, HitResult);

