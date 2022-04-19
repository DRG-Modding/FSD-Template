#pragma once
#include "CoreMinimal.h"
#include "NameDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNameDelegate, FName, nameValue);

