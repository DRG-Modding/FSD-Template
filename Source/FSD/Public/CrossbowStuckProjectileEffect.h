#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CrossbowStuckProjectileEffect.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCrossbowStuckProjectileEffect : public UActorComponent {
    GENERATED_BODY()
public:
    UCrossbowStuckProjectileEffect();
};

