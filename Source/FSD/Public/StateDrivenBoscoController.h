#pragma once
#include "CoreMinimal.h"
#include "DroneControllerBase.h"
#include "StateDrivenBoscoController.generated.h"

UCLASS(Blueprintable)
class AStateDrivenBoscoController : public ADroneControllerBase {
    GENERATED_BODY()
public:
    AStateDrivenBoscoController();
};

