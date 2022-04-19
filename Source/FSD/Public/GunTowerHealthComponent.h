#pragma once
#include "CoreMinimal.h"
#include "EnemyHealthComponent.h"
#include "GunTowerHealthComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UGunTowerHealthComponent : public UEnemyHealthComponent {
    GENERATED_BODY()
public:
    UGunTowerHealthComponent();
};

