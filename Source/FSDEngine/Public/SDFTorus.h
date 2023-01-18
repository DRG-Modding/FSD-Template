#pragma once
#include "CoreMinimal.h"
#include "SDFBaseWithTransform.h"
#include "SDFTorusProperties.h"
#include "SDFTorus.generated.h"

UCLASS(Blueprintable)
class FSDENGINE_API USDFTorus : public USDFBaseWithTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFTorusProperties Properties;
    
    USDFTorus();
};

