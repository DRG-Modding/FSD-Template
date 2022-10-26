#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnHitByHitScanDelegate.generated.h"

class UHitscanBaseComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHitByHitScan, UHitscanBaseComponent*, HitscanComponent, const FVector&, Position, const FVector&, Origin);

