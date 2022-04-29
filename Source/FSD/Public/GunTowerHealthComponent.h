#pragma once
#include "CoreMinimal.h"
#include "EnemyHealthComponent.h"
#include "GunTowerHealthComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGunTowerHealthComponent : public UEnemyHealthComponent {
    GENERATED_BODY()
public:
    UGunTowerHealthComponent();
};

