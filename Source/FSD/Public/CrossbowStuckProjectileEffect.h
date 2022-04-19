#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CrossbowStuckProjectileEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCrossbowStuckProjectileEffect : public UActorComponent {
    GENERATED_BODY()
public:
    UCrossbowStuckProjectileEffect();
};

