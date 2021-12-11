#pragma once
#include "CoreMinimal.h"
#include "ConvexNoiseProperties.generated.h"

USTRUCT(BlueprintType)
struct FConvexNoiseProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Amplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Seed;
    
    FSDENGINE_API FConvexNoiseProperties();
};

