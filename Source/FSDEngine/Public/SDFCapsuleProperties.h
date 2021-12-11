#pragma once
#include "CoreMinimal.h"
#include "SDFCapsuleProperties.generated.h"

USTRUCT(BlueprintType)
struct FSDFCapsuleProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float HalfLength;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    FSDENGINE_API FSDFCapsuleProperties();
};

