#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
#include "RoomLinePoint.h"
#include "FloodFillLine.generated.h"

class UFloodFillSettings;

UCLASS(Blueprintable, EditInlineNew)
class UFloodFillLine : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* WallNoiseOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* CeilingNoiseOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloodFillSettings* FloorNoiseOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDetailNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRoomLinePoint> Points;
    
public:
    UFloodFillLine();
};

