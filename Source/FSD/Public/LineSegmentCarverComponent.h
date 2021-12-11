#pragma once
#include "CoreMinimal.h"
#include "GenerationComponent.h"
#include "LineSegmentCarverPoint.h"
#include "LineSegmentCarverComponent.generated.h"

class UFloodFillSettings;

UCLASS()
class FSD_API ULineSegmentCarverComponent : public UGenerationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FLineSegmentCarverPoint> LinePoints;
    
    UPROPERTY(EditAnywhere)
    bool Visible;
    
    UPROPERTY(EditAnywhere)
    int32 Layer;
    
    UPROPERTY(EditAnywhere)
    float Cielingheight;
    
    UPROPERTY(EditAnywhere)
    float FloorDepth;
    
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* CeilingNoiseOverride;
    
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* WallNoiseOverride;
    
    UPROPERTY(EditAnywhere)
    UFloodFillSettings* FloorNoiseOverride;
    
    UPROPERTY(EditAnywhere)
    bool UseDetailNoise;
    
    ULineSegmentCarverComponent();
};

