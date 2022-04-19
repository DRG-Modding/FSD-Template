#pragma once
#include "CoreMinimal.h"
#include "SDFCylinderProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFCylinderProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FSDENGINE_API FSDFCylinderProperties();
};

