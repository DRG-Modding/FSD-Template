#pragma once
#include "CoreMinimal.h"
#include "CrosshairCreatedDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCrosshairCreated, UUserWidget*, Crosshair);

