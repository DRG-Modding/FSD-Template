#pragma once
#include "CoreMinimal.h"
#include "SDFBaseComponent.h"
#include "SDFOnionProperties.h"
#include "SDFOnionComponent.generated.h"

UCLASS()
class USDFOnionComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFOnionProperties Properties;
    
    USDFOnionComponent();
};

