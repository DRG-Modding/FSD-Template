#pragma once
#include "CoreMinimal.h"
#include "DroneControllerBase.h"
#include "StateDrivenDroneController.generated.h"

UCLASS(Blueprintable)
class AStateDrivenDroneController : public ADroneControllerBase {
    GENERATED_BODY()
public:
    AStateDrivenDroneController();
};

