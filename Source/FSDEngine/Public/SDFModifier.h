#pragma once
#include "CoreMinimal.h"
#include "SDFModifierProperties.h"
#include "SDFSingleChildBase.h"
#include "SDFModifier.generated.h"

UCLASS()
class USDFModifier : public USDFSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFModifierProperties Properties;
    
    USDFModifier();
};

