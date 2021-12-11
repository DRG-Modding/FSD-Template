#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LineSegmentCarverPoint.generated.h"

USTRUCT(BlueprintType)
struct FLineSegmentCarverPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Position;
    
    UPROPERTY(EditAnywhere)
    float HRange;
    
    UPROPERTY(EditAnywhere)
    float VRange;
    
    UPROPERTY(EditAnywhere)
    float FloorAngle;
    
    UPROPERTY(EditAnywhere)
    float CielingNoiseRange;
    
    UPROPERTY(EditAnywhere)
    float WallNoiseRange;
    
    UPROPERTY(EditAnywhere)
    float FloorNoiseRange;
    
    FSD_API FLineSegmentCarverPoint();
};

