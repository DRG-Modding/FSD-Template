#pragma once
#include "CoreMinimal.h"
#include "SDFBaseWithTransformComponent.h"
#include "SDFPlaneComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API USDFPlaneComponent : public USDFBaseWithTransformComponent {
    GENERATED_BODY()
public:
    USDFPlaneComponent();
};

