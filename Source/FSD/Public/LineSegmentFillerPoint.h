#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RandRange.h"
#include "LineSegmentFillerPoint.generated.h"

USTRUCT(BlueprintType)
struct FLineSegmentFillerPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Position;
    
    UPROPERTY(EditAnywhere)
    FRandRange RandomRange;
    
    UPROPERTY(EditAnywhere)
    FRandRange RandomNoiseRange;
    
    UPROPERTY(EditAnywhere)
    FRandRange FillAmount;
    
    FSD_API FLineSegmentFillerPoint();
};

