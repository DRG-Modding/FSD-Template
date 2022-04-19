#pragma once
#include "CoreMinimal.h"
#include "OxygenActiveDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOxygenActiveDelegate, bool, IsActive);

