#pragma once
#include "CoreMinimal.h"
#include "BoscoReviveCounterChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoscoReviveCounterChanged, int32, RevivesLeft);

