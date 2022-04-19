#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HitDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHitDelegate, const FHitResult&, Hit, bool, alwaysPenetrate);

