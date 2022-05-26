#pragma once
#include "CoreMinimal.h"
#include "DroneStateComponentBase.h"
#include "DroneMiningState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDroneMiningState : public UDroneStateComponentBase {
    GENERATED_BODY()
public:
    UDroneMiningState();
};

