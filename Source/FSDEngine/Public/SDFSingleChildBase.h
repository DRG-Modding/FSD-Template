#pragma once
#include "CoreMinimal.h"
#include "SDFBase.h"
#include "SDFSingleChildBase.generated.h"

UCLASS()
class FSDENGINE_API USDFSingleChildBase : public USDFBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USDFBase* Child;
    
    USDFSingleChildBase();
};

