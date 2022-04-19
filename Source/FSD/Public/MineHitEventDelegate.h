#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MineHitEventDelegate.generated.h"

class UTerrainMaterial;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMineHitEvent, UTerrainMaterial*, TerrainMaterial, const FVector&, Location);

