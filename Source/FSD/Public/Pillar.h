#pragma once
#include "CoreMinimal.h"
#include "WeightedLinePoint.h"
#include "Pillar.generated.h"

class UFloodFillSettings;

USTRUCT(BlueprintType)
struct FPillar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* NoiseOverride;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedLinePoint> Points;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseScale;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float EndcapScale;
    
    FSD_API FPillar();
};

