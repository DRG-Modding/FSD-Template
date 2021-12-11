#pragma once
#include "CoreMinimal.h"
#include "SDFBase.h"
#include "SDFSmoothingProperties.h"
#include "SDFIntersectOp.generated.h"

UCLASS()
class USDFIntersectOp : public USDFBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSDFSmoothingProperties Properties;
    
    UPROPERTY()
    TArray<USDFBase*> Arguments;
    
    USDFIntersectOp();
};

