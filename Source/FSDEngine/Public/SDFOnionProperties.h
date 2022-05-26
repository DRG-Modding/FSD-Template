#pragma once
#include "CoreMinimal.h"
#include "SDFOnionProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFOnionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Thickness;
    
    FSDENGINE_API FSDFOnionProperties();
};

