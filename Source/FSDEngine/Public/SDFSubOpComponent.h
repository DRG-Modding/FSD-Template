#pragma once
#include "CoreMinimal.h"
#include "SDFBaseComponent.h"
#include "SDFSmoothingProperties.h"
#include "SDFSubOpComponent.generated.h"

UCLASS()
class USDFSubOpComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FSDFSmoothingProperties Properties;
    
public:
    USDFSubOpComponent();
};

