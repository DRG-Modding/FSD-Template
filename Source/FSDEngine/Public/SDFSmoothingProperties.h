#pragma once
#include "CoreMinimal.h"
#include "SDFSmoothingProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFSmoothingProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothingDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SmoothingEnabled;
    
    FSDENGINE_API FSDFSmoothingProperties();
};

