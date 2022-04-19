#pragma once
#include "CoreMinimal.h"
#include "DownCameraTargetChangedDelegate.generated.h"

class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDownCameraTargetChanged, APlayerCharacter*, Target);

