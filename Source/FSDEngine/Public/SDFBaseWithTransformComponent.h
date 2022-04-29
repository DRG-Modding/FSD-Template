#pragma once
#include "CoreMinimal.h"
#include "SDFBaseComponent.h"
#include "SDFBaseWithTransformComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USDFBaseWithTransformComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    USDFBaseWithTransformComponent();
};

