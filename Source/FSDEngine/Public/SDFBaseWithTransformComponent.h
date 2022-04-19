#pragma once
#include "CoreMinimal.h"
#include "SDFBaseComponent.h"
#include "SDFBaseWithTransformComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class USDFBaseWithTransformComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    USDFBaseWithTransformComponent();
};

