#pragma once
#include "CoreMinimal.h"
#include "BootUpDelegateDelegate.generated.h"

class AEventStarterButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBootUpDelegate, AEventStarterButton*, pushedButton);

