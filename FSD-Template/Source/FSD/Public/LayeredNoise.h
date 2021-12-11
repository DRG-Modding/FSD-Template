#pragma once
#include "CoreMinimal.h"
#include "LayeredNoise.generated.h"

class UFloodFillSettings;

USTRUCT(BlueprintType)
struct FLayeredNoise {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* Noise;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    FSD_API FLayeredNoise();
};

