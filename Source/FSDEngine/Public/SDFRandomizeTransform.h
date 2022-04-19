#pragma once
#include "CoreMinimal.h"
#include "SDFRandomizeTransformProperties.h"
#include "SDFSingleChildBase.h"
#include "SDFRandomizeTransform.generated.h"

UCLASS(BlueprintType)
class USDFRandomizeTransform : public USDFSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFRandomizeTransformProperties Properties;
    
    USDFRandomizeTransform();
};

