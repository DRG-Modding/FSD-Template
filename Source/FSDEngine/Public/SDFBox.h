#pragma once
#include "CoreMinimal.h"
#include "SDFBaseWithTransform.h"
#include "SDFBoxProperties.h"
#include "SDFBox.generated.h"

UCLASS()
class FSDENGINE_API USDFBox : public USDFBaseWithTransform {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSDFBoxProperties Properties;
    
    USDFBox();
};

