#pragma once
#include "CoreMinimal.h"
#include "BulletPathSegment.h"
#include "AllPenHitscan_DelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAllPenHitscan_Delegate, const TArray<FBulletPathSegment>&, Path);

