#pragma once
#include "CoreMinimal.h"
#include "SDFSingleChildBase.h"
#include "SDFRandomizeTransformProperties.h"
#include "SDFRandomizeTransform.generated.h"

UCLASS(Blueprintable)
class USDFRandomizeTransform : public USDFSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFRandomizeTransformProperties Properties;
    
    USDFRandomizeTransform();
};

