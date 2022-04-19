#pragma once
#include "CoreMinimal.h"
#include "MultiHitScanHits.h"
#include "MultiHitDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiHitDelegate, const FMultiHitScanHits&, Hits);

