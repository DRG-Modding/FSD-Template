#pragma once
#include "CoreMinimal.h"
#include "DroneStateComponentBase.h"
#include "DroneDefendSatate.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDroneDefendSatate : public UDroneStateComponentBase {
    GENERATED_BODY()
public:
    UDroneDefendSatate();
};

