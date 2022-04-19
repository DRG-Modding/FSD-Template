#pragma once
#include "CoreMinimal.h"
#include "MovedIntoSomethingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMovedIntoSomething, bool, Up);

