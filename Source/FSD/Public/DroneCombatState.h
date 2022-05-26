#pragma once
#include "CoreMinimal.h"
#include "DroneStateComponentBase.h"
#include "DroneCombatState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDroneCombatState : public UDroneStateComponentBase {
    GENERATED_BODY()
public:
    UDroneCombatState();
};

