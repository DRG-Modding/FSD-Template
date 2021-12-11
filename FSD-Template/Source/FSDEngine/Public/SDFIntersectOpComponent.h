#pragma once
#include "CoreMinimal.h"
#include "SDFBaseComponent.h"
#include "SDFSmoothingProperties.h"
#include "SDFIntersectOpComponent.generated.h"

UCLASS()
class USDFIntersectOpComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFSmoothingProperties Properties;
    
    USDFIntersectOpComponent();
};

