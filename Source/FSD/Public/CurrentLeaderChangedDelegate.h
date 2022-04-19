#pragma once
#include "CoreMinimal.h"
#include "CurrentLeaderChangedDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurrentLeaderChanged, const APlayerState*, PlayerState);

