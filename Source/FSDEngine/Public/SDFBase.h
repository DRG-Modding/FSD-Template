#pragma once
#include "CoreMinimal.h"
#include "BuilderBase.h"
#include "SDFBaseProperties.h"
#include "UObject/NoExportTypes.h"
#include "SDFBase.generated.h"

UCLASS(Abstract)
class USDFBase : public UBuilderBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFBaseProperties BaseProperties;
    
    UPROPERTY()
    FTransform RelativeTransform;
    
    USDFBase();
};

