#pragma once
#include "CoreMinimal.h"
#include "SDFSphereProperties.h"
#include "SDFBaseWithTransform.h"
#include "SDFSphere.generated.h"

UCLASS()
class FSDENGINE_API USDFSphere : public USDFBaseWithTransform {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFSphereProperties Properties;
    
    USDFSphere();
};

