#pragma once
#include "CoreMinimal.h"
#include "SDFBase.h"
#include "SDFOnionProperties.h"
#include "SDFOnion.generated.h"

UCLASS()
class FSDENGINE_API USDFOnion : public USDFBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDFOnionProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USDFBase* Argument;
    
    USDFOnion();
};

