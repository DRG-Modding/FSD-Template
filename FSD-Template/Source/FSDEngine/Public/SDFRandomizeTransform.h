#pragma once
#include "CoreMinimal.h"
#include "SDFSingleChildBase.h"
#include "SDFRandomizeTransformProperties.h"
#include "SDFRandomizeTransform.generated.h"

UCLASS(BlueprintType)
class USDFRandomizeTransform : public USDFSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDFRandomizeTransformProperties Properties;
    
    USDFRandomizeTransform();
};

