#pragma once
#include "CoreMinimal.h"
#include "RoomLinePoint.h"
#include "UObject/NoExportTypes.h"
#include "RoomLine.generated.h"

class UFloodFillSettings;

USTRUCT(BlueprintType)
struct FRoomLine {
    GENERATED_BODY()
public:
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
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> RightVectors;
    
    FSD_API FRoomLine();
};

