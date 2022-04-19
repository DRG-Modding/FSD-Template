#pragma once
#include "CoreMinimal.h"
#include "PlayersInsideChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayersInsideChanged, int32, playerCount);

