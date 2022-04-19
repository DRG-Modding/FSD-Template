#pragma once
#include "CoreMinimal.h"
#include "PathFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPathFinished, bool, success);

