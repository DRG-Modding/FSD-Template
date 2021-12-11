#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "FSDPlayerCameraManager.generated.h"

UCLASS(MinimalAPI, NonTransient)
class AFSDPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    AFSDPlayerCameraManager();
};

