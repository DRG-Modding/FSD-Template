#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RoomLinePoint.generated.h"

USTRUCT(BlueprintType)
struct FRoomLinePoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    float HRange;
    
    UPROPERTY(EditAnywhere)
    float VRange;
    
    UPROPERTY(EditAnywhere)
    float CielingNoiseRange;
    
    UPROPERTY(EditAnywhere)
    float WallNoiseRange;
    
    UPROPERTY(EditAnywhere)
    float FloorNoiseRange;
    
    UPROPERTY(EditAnywhere)
    float Cielingheight;
    
    UPROPERTY(EditAnywhere)
    float HeightScale;
    
    UPROPERTY(EditAnywhere)
    float FloorDepth;
    
    UPROPERTY(EditAnywhere)
    float FloorAngle;
    
    FSD_API FRoomLinePoint();
};

