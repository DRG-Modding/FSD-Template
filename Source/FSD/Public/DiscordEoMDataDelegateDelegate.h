#pragma once
#include "CoreMinimal.h"
#include "DiscordEoMDataDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordEoMDataDelegate, bool, HasEoM);

