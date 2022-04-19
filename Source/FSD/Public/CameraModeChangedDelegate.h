#pragma once
#include "CoreMinimal.h"
#include "ECharacterCameraMode.h"
#include "CameraModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCameraModeChanged, ECharacterCameraMode, NewCameraMode, ECharacterCameraMode, OldCameraMode);

