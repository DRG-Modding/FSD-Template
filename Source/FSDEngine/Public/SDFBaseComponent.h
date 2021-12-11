#pragma once
#include "CoreMinimal.h"
#include "CSGBuilderBaseSceneComponent.h"
#include "SDFBaseProperties.h"
#include "SDFBaseComponent.generated.h"

UCLASS()
class USDFBaseComponent : public UCSGBuilderBaseSceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFBaseProperties BaseProperties;
    
    USDFBaseComponent();
};

