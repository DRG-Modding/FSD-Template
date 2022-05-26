#pragma once
#include "CoreMinimal.h"
#include "DroneStateComponentBase.h"
#include "DroneUseAbillityState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDroneUseAbillityState : public UDroneStateComponentBase {
    GENERATED_BODY()
public:
    UDroneUseAbillityState();
};

