#pragma once
#include "CoreMinimal.h"
#include "SDFSingleChildBase.h"
#include "SDFRandomDisableProperties.h"
#include "SDFRandomDisable.generated.h"

UCLASS(BlueprintType)
class USDFRandomDisable : public USDFSingleChildBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDFRandomDisableProperties Properties;
    
    USDFRandomDisable();
};

