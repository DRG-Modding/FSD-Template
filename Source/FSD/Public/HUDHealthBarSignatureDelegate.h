#pragma once
#include "CoreMinimal.h"
#include "HUDHealthBarSignatureDelegate.generated.h"

class UHUDHealthBar;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHUDHealthBarSignature, UHUDHealthBar*, HealthBar);

