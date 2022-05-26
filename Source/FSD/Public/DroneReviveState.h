#pragma once
#include "CoreMinimal.h"
#include "DroneStateComponentBase.h"
#include "DroneReviveState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDroneReviveState : public UDroneStateComponentBase {
    GENERATED_BODY()
public:
    UDroneReviveState();
};

