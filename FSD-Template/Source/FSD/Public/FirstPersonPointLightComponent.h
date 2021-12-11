#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "FirstPersonPointLightComponent.generated.h"

UCLASS(EditInlineNew)
class UFirstPersonPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UFirstPersonPointLightComponent();
};

