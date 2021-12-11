#pragma once
#include "CoreMinimal.h"
#include "WeightedLinePoint.h"
#include "Pillar.generated.h"

class UFloodFillSettings;

USTRUCT(BlueprintType)
struct FPillar {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UFloodFillSettings* NoiseOverride;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FWeightedLinePoint> Points;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float NoiseScale;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float EndcapScale;
    
    FSD_API FPillar();
};

