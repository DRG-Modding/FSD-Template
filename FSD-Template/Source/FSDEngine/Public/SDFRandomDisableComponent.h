#pragma once
#include "CoreMinimal.h"
#include "SDFBaseComponent.h"
#include "SDFRandomDisableProperties.h"
#include "SDFRandomDisableComponent.generated.h"

UCLASS(BlueprintType)
class USDFRandomDisableComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDFRandomDisableProperties Properties;
    
    USDFRandomDisableComponent();
};

