#pragma once
#include "CoreMinimal.h"
#include "FloodFillSettings.h"
#include "DetailNoise.generated.h"

UCLASS()
class UDetailNoise : public UFloodFillSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float NoiseRange;
    
    UDetailNoise();
};

