#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DeepPathfinderSceneComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeepPathfinderSceneComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UDeepPathfinderSceneComponent();
};

