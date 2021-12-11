#pragma once
#include "CoreMinimal.h"
#include "SDFBaseComponent.h"
#include "SDFModifierProperties.h"
#include "SDFModifierComponent.generated.h"

UCLASS()
class USDFModifierComponent : public USDFBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFModifierProperties Properties;
    
    USDFModifierComponent();
};

