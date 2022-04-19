#pragma once
#include "CoreMinimal.h"
#include "BlueprintFriend.h"
#include "BlueprintRegisterInvitiNotificationDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintRegisterInvitiNotificationDelegate, const FBlueprintFriend&, Results);

