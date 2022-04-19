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
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* WallNoiseOverride;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* CeilingNoiseOverride;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* FloorNoiseOverride;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDetailNoise;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomLinePoint> Points;
    
public:
    UFloodFillLine();
};

