#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
#include "RoomLinePoint.h"
#include "FloodFillLine.generated.h"

class UFloodFillSettings;

UCLASS(EditInlineNew)
class UFloodFillLine : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    UFloodFillSettings* WallNoiseOverride;
    
    UPROPERTY(VisibleAnywhere)
    UFloodFillSettings* CeilingNoiseOverride;
    
    UPROPERTY(VisibleAnywhere)
    UFloodFillSettings* FloorNoiseOverride;
    
    UPROPERTY(VisibleAnywhere)
    bool UseDetailNoise;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FRoomLinePoint> Points;
    
public:
    UFloodFillLine();
};

