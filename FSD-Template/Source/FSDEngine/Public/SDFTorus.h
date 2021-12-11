#pragma once
#include "CoreMinimal.h"
#include "SDFBaseWithTransform.h"
#include "SDFTorusProperties.h"
#include "SDFTorus.generated.h"

UCLASS()
class FSDENGINE_API USDFTorus : public USDFBaseWithTransform {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFTorusProperties Properties;
    
    USDFTorus();
};

