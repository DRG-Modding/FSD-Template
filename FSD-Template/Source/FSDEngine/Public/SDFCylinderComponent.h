#pragma once
#include "CoreMinimal.h"
#include "SDFCylinderProperties.h"
#include "SDFBaseWithTransformComponent.h"
#include "SDFCylinderComponent.generated.h"

UCLASS()
class FSDENGINE_API USDFCylinderComponent : public USDFBaseWithTransformComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFCylinderProperties Properties;
    
    USDFCylinderComponent();
};

