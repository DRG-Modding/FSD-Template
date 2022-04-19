#pragma once
#include "CoreMinimal.h"
#include "PlayerLoggedInDelegate.generated.h"

class AFSDPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerLoggedIn, AFSDPlayerController*, Controller);

