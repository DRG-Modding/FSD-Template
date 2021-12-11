#pragma once
#include "CoreMinimal.h"
#include "SDFBase.h"
#include "SDFSmoothingProperties.h"
#include "SDFUnionOp.generated.h"

UCLASS()
class USDFUnionOp : public USDFBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSDFSmoothingProperties Properties;
    
    UPROPERTY()
    TArray<USDFBase*> Arguments;
    
    USDFUnionOp();
};

