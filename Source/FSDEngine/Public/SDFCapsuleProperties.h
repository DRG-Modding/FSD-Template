#pragma once
#include "CoreMinimal.h"
#include "SDFCapsuleProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFCapsuleProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FSDENGINE_API FSDFCapsuleProperties();
};

