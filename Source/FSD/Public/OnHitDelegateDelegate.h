#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnHitDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHitDelegate, const FVector&, Location, const FVector&, Normal, bool, bHitEnemy);

