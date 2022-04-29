#pragma once
#include "CoreMinimal.h"
#include "SDFBaseWithTransform.h"
#include "SDFCylinderProperties.h"
#include "SDFCylinder.generated.h"

UCLASS(Blueprintable)
class FSDENGINE_API USDFCylinder : public USDFBaseWithTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFCylinderProperties Properties;
    
    USDFCylinder();
};

