#pragma once
#include "CoreMinimal.h"
#include "SDFBaseComponent.h"
#include "SDFSmoothingProperties.h"
#include "SDFUnionOpComponent.generated.h"

UCLASS()
class USDFUnionOpComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FSDFSmoothingProperties Properties;
    
public:
    USDFUnionOpComponent();
};

