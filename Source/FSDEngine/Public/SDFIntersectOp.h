#pragma once
#include "CoreMinimal.h"
#include "SDFBase.h"
#include "SDFSmoothingProperties.h"
#include "SDFIntersectOp.generated.h"

UCLASS()
class FSDENGINE_API USDFIntersectOp : public USDFBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSDFSmoothingProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<USDFBase*> Arguments;
    
    USDFIntersectOp();
};

