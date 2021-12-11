#pragma once
#include "CoreMinimal.h"
#include "GenerationComponent.h"
#include "LineSegmentFillerPoint.h"
#include "RandRange.h"
#include "LineSegmentFillerComponent.generated.h"

class UFloodFillSettings;

UCLASS()
class FSD_API ULineSegmentFillerComponent : public UGenerationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FLineSegmentFillerPoint> LinePoints;
    
    UPROPERTY(EditAnywhere)
    bool Visible;
    
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* NoiseOverride;
    
    UPROPERTY(EditAnywhere)
    FRandRange RangeScale;
    
    UPROPERTY(EditAnywhere)
    FRandRange NoiseRangeScale;
    
    ULineSegmentFillerComponent();
};

