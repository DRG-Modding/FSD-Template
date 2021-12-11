#pragma once
#include "CoreMinimal.h"
#include "SDFBase.h"
#include "SDFSmoothingProperties.h"
#include "SDFSubOp.generated.h"

UCLASS()
class USDFSubOp : public USDFBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSDFSmoothingProperties Properties;
    
    UPROPERTY()
    USDFBase* A;
    
    UPROPERTY()
    USDFBase* B;
    
    USDFSubOp();
};

