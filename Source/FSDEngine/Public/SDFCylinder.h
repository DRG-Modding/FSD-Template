#pragma once
#include "CoreMinimal.h"
#include "SDFBaseWithTransform.h"
#include "SDFCylinderProperties.h"
#include "SDFCylinder.generated.h"

UCLASS()
class FSDENGINE_API USDFCylinder : public USDFBaseWithTransform {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFCylinderProperties Properties;
    
    USDFCylinder();
};

