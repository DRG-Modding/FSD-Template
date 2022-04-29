#pragma once
#include "CoreMinimal.h"
#include "WeightedLinePoint.h"
#include "Pillar.generated.h"

class UFloodFillSettings;

USTRUCT(BlueprintType)
struct FPillar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* NoiseOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedLinePoint> Points;
    
    UPROPERTY(EditAnywhere)
    float NoiseScale;
    
    UPROPERTY(EditAnywhere)
    float EndcapScale;
    
    FSD_API FPillar();
};

