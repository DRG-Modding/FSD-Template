#pragma once
#include "CoreMinimal.h"
#include "SDFBase.h"
#include "SDFSmoothingProperties.h"
#include "SDFSubOp.generated.h"

UCLASS()
class FSDENGINE_API USDFSubOp : public USDFBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSDFSmoothingProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USDFBase* A;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USDFBase* B;
    
    USDFSubOp();
};

