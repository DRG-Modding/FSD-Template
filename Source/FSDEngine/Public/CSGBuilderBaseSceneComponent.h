#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CSGBuilderBaseSceneComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCSGBuilderBaseSceneComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UCSGBuilderBaseSceneComponent();
};

