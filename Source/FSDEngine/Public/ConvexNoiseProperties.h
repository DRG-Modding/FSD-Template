#pragma once
#include "CoreMinimal.h"
#include "ConvexNoiseProperties.generated.h"

USTRUCT(BlueprintType)
struct FConvexNoiseProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Amplitude;
    
    UPROPERTY(EditAnywhere)
    float GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    FSDENGINE_API FConvexNoiseProperties();
};

