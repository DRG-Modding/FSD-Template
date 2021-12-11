#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
#include "RandLinePoint.h"
#include "RandRange.h"
#include "FloodFillPillar.generated.h"

class UFloodFillSettings;

UCLASS(EditInlineNew)
class UFloodFillPillar : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    UFloodFillSettings* NoiseOverride;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FRandLinePoint> Points;
    
    UPROPERTY(VisibleAnywhere)
    FRandRange RangeScale;
    
    UPROPERTY(VisibleAnywhere)
    FRandRange NoiseRangeScale;
    
    UPROPERTY(VisibleAnywhere)
    FRandRange EndcapScale;
    
public:
    UFloodFillPillar();
};

