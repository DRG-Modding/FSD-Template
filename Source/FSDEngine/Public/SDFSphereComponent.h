#pragma once
#include "CoreMinimal.h"
#include "SDFBaseWithTransformComponent.h"
#include "SDFSphereProperties.h"
#include "SDFSphereComponent.generated.h"

UCLASS()
class FSDENGINE_API USDFSphereComponent : public USDFBaseWithTransformComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFSphereProperties Properties;
    
    USDFSphereComponent();
};

