#pragma once
#include "CoreMinimal.h"
#include "SDFBaseWithTransformComponent.h"
#include "SDFTorusProperties.h"
#include "SDFTorusComponent.generated.h"

UCLASS()
class FSDENGINE_API USDFTorusComponent : public USDFBaseWithTransformComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFTorusProperties Properties;
    
    USDFTorusComponent();
};

