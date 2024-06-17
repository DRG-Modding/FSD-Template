#pragma once
#include "CoreMinimal.h"
#include "StationaryEnemyAnimInstance.h"
#include "ShootingPlantAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UShootingPlantAnimInstance : public UStationaryEnemyAnimInstance {
    GENERATED_BODY()
public:
    UShootingPlantAnimInstance();

};

