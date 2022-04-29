#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NoisyPathfinderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNoisyPathfinderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UNoisyPathfinderComponent();
};

