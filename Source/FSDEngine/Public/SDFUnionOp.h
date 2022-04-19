#pragma once
#include "CoreMinimal.h"
#include "SDFBase.h"
#include "SDFSmoothingProperties.h"
#include "SDFUnionOp.generated.h"

UCLASS()
class FSDENGINE_API USDFUnionOp : public USDFBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSDFSmoothingProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<USDFBase*> Arguments;
    
    USDFUnionOp();
};

