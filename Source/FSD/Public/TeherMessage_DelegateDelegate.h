#pragma once
#include "CoreMinimal.h"
#include "TeherMessage_DelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTeherMessage_Delegate, const FName&, Message);

